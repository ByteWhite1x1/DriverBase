/*
* A simple C++ driver base with KD data block by WhiteByte
*/

#include <ntifs.h>
#include <intrin.h>
#include <Structs.h>
#include <Nt.h>
#include <Routines.h>
#include <Define.h>

void UnloadDriver(IN PDRIVER_OBJECT DriverObject);

EXTERN_C
NTSTATUS DriverEntry(IN PDRIVER_OBJECT pDriverObject, IN PUNICODE_STRING registryPath)
{

	InitializeDebuggerBlock();	
		
	DbgPrintEx(0, 0, "Kernel base address: 0x%I64X PsLoadedModuleList: 0x%I64X MmUnloadedDrivers: 0x%I64X \n",
		KdDebuggerDataBlock->KernBase, KdDebuggerDataBlock->PsLoadedModuleList, KdDebuggerDataBlock->MmUnloadedDrivers);	

	/*
	* 
	* ULONG_PTR pTmp = *reinterpret_cast<ULONG_PTR*>((BYTE*)pAllocHeader + KDDEBUGGER_DATA_OFFSET);

			NTSTATUS status = STATUS_SUCCESS;

			MM_COPY_ADDRESS cpAddr = { 0 };
			cpAddr.VirtualAddress = (void*)pTmp;

			__try {

				SIZE_T bytesCopied;
				status = MmCopyMemory(pAlloc, cpAddr, sizeof(KDDEBUGGER_DATA64), MM_COPY_MEMORY_VIRTUAL, &bytesCopied);				

				DbgPrintEx(0, 0, "MmCopyMemory() status: 0x%08X bytesCopied: %zd \n", status, bytesCopied);

			}
			__except (EXCEPTION_EXECUTE_HANDLER) {

				DbgPrintEx(0, 0, "MmCopyMemory() 0x%08X \n", status);
				// return STATUS_ACCESS_DENIED;

			}
	* 
	*/

	pDriverObject->DriverUnload = UnloadDriver;

	return STATUS_SUCCESS;

}

void UnloadDriver(PDRIVER_OBJECT pDriverObject)
{
	DbgPrintEx(0, 0, "[+] The unloading routine was called \n");
}