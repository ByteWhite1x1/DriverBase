#pragma once

typedef struct _DBGKD_DEBUG_DATA_HEADER64
{
	LIST_ENTRY64 List;
	ULONG        OwnerTag;
	ULONG        Size;
} DBGKD_DEBUG_DATA_HEADER64, * PDBGKD_DEBUG_DATA_HEADER64;

typedef struct _KDDEBUGGER_DATA64
{
	DBGKD_DEBUG_DATA_HEADER64 Header;
	ULONG64   KernBase;
	ULONG64   BreakpointWithStatus;
	ULONG64   SavedContext;
	USHORT    ThCallbackStack;
	USHORT    NextCallback;
	USHORT    FramePointer;
	USHORT    PaeEnabled;
	ULONG64   KiCallUserMode;
	ULONG64   KeUserCallbackDispatcher;
	ULONG64   PsLoadedModuleList;
	ULONG64   PsActiveProcessHead;
	ULONG64   PspCidTable;
	ULONG64   ExpSystemResourcesList;
	ULONG64   ExpPagedPoolDescriptor;
	ULONG64   ExpNumberOfPagedPools;
	ULONG64   KeTimeIncrement;
	ULONG64   KeBugCheckCallbackListHead;
	ULONG64   KiBugcheckData;
	ULONG64   IopErrorLogListHead;
	ULONG64   ObpRootDirectoryObject;
	ULONG64   ObpTypeObjectType;
	ULONG64   MmSystemCacheStart;
	ULONG64   MmSystemCacheEnd;
	ULONG64   MmSystemCacheWs;
	ULONG64   MmPfnDatabase;
	ULONG64   MmSystemPtesStart;
	ULONG64   MmSystemPtesEnd;
	ULONG64   MmSubsectionBase;
	ULONG64   MmNumberOfPagingFiles;
	ULONG64   MmLowestPhysicalPage;
	ULONG64   MmHighestPhysicalPage;
	ULONG64   MmNumberOfPhysicalPages;
	ULONG64   MmMaximumNonPagedPoolInBytes;
	ULONG64   MmNonPagedSystemStart;
	ULONG64   MmNonPagedPoolStart;
	ULONG64   MmNonPagedPoolEnd;
	ULONG64   MmPagedPoolStart;
	ULONG64   MmPagedPoolEnd;
	ULONG64   MmPagedPoolInformation;
	ULONG64   MmPageSize;
	ULONG64   MmSizeOfPagedPoolInBytes;
	ULONG64   MmTotalCommitLimit;
	ULONG64   MmTotalCommittedPages;
	ULONG64   MmSharedCommit;
	ULONG64   MmDriverCommit;
	ULONG64   MmProcessCommit;
	ULONG64   MmPagedPoolCommit;
	ULONG64   MmExtendedCommit;
	ULONG64   MmZeroedPageListHead;
	ULONG64   MmFreePageListHead;
	ULONG64   MmStandbyPageListHead;
	ULONG64   MmModifiedPageListHead;
	ULONG64   MmModifiedNoWritePageListHead;
	ULONG64   MmAvailablePages;
	ULONG64   MmResidentAvailablePages;
	ULONG64   PoolTrackTable;
	ULONG64   NonPagedPoolDescriptor;
	ULONG64   MmHighestUserAddress;
	ULONG64   MmSystemRangeStart;
	ULONG64   MmUserProbeAddress;
	ULONG64   KdPrintCircularBuffer;
	ULONG64   KdPrintCircularBufferEnd;
	ULONG64   KdPrintWritePointer;
	ULONG64   KdPrintRolloverCount;
	ULONG64   MmLoadedUserImageList;
	ULONG64   NtBuildLab;
	ULONG64   KiNormalSystemCall;
	ULONG64   KiProcessorBlock;
	ULONG64   MmUnloadedDrivers;
	ULONG64   MmLastUnloadedDriver;
	ULONG64   MmTriageActionTaken;
	ULONG64   MmSpecialPoolTag;
	ULONG64   KernelVerifier;
	ULONG64   MmVerifierData;
	ULONG64   MmAllocatedNonPagedPool;
	ULONG64   MmPeakCommitment;
	ULONG64   MmTotalCommitLimitMaximum;
	ULONG64   CmNtCSDVersion;
	ULONG64   MmPhysicalMemoryBlock;
	ULONG64   MmSessionBase;
	ULONG64   MmSessionSize;
	ULONG64   MmSystemParentTablePage;
	ULONG64   MmVirtualTranslationBase;
	USHORT    OffsetKThreadNextProcessor;
	USHORT    OffsetKThreadTeb;
	USHORT    OffsetKThreadKernelStack;
	USHORT    OffsetKThreadInitialStack;
	USHORT    OffsetKThreadApcProcess;
	USHORT    OffsetKThreadState;
	USHORT    OffsetKThreadBStore;
	USHORT    OffsetKThreadBStoreLimit;
	USHORT    SizeEProcess;
	USHORT    OffsetEprocessPeb;
	USHORT    OffsetEprocessParentCID;
	USHORT    OffsetEprocessDirectoryTableBase;
	USHORT    SizePrcb;
	USHORT    OffsetPrcbDpcRoutine;
	USHORT    OffsetPrcbCurrentThread;
	USHORT    OffsetPrcbMhz;
	USHORT    OffsetPrcbCpuType;
	USHORT    OffsetPrcbVendorString;
	USHORT    OffsetPrcbProcStateContext;
	USHORT    OffsetPrcbNumber;
	USHORT    SizeEThread;
	ULONG64   KdPrintCircularBufferPtr;
	ULONG64   KdPrintBufferSize;
	ULONG64   KeLoaderBlock;
	USHORT    SizePcr;
	USHORT    OffsetPcrSelfPcr;
	USHORT    OffsetPcrCurrentPrcb;
	USHORT    OffsetPcrContainedPrcb;
	USHORT    OffsetPcrInitialBStore;
	USHORT    OffsetPcrBStoreLimit;
	USHORT    OffsetPcrInitialStack;
	USHORT    OffsetPcrStackLimit;
	USHORT    OffsetPrcbPcrPage;
	USHORT    OffsetPrcbProcStateSpecialReg;
	USHORT    GdtR0Code;
	USHORT    GdtR0Data;
	USHORT    GdtR0Pcr;
	USHORT    GdtR3Code;
	USHORT    GdtR3Data;
	USHORT    GdtR3Teb;
	USHORT    GdtLdt;
	USHORT    GdtTss;
	USHORT    Gdt64R3CmCode;
	USHORT    Gdt64R3CmTeb;
	ULONG64   IopNumTriageDumpDataBlocks;
	ULONG64   IopTriageDumpDataBlocks;
} KDDEBUGGER_DATA64, * PKDDEBUGGER_DATA64;

typedef struct _DUMP_HEADER
{
	ULONG Signature;
	ULONG ValidDump;
	ULONG MajorVersion;
	ULONG MinorVersion;
	ULONG_PTR DirectoryTableBase;
	ULONG_PTR PfnDataBase;
	PLIST_ENTRY PsLoadedModuleList;
	PLIST_ENTRY PsActiveProcessHead;
	ULONG MachineImageType;
	ULONG NumberProcessors;
	ULONG BugCheckCode;
	ULONG_PTR BugCheckParameter1;
	ULONG_PTR BugCheckParameter2;
	ULONG_PTR BugCheckParameter3;
	ULONG_PTR BugCheckParameter4;
	CHAR VersionUser[32];
	KDDEBUGGER_DATA64* KdDebuggerDataBlock;
} DUMP_HEADER, * PDUMP_HEADER;

PKDDEBUGGER_DATA64 KdDebuggerDataBlock;
extern PKDDEBUGGER_DATA64 KdDebuggerDataBlock;