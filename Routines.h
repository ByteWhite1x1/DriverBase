#pragma once

#include <ntdef.h>
#include <ntifs.h>
#include <ntddk.h>

#include <Structs.h>
#include <Nt.h>

void InitializeDebuggerBlock()
{

	KdDebuggerDataBlock = { 0 };

#define KD_DEBUGGER_DATA_OFFSET 0x2080
#define DUMP_BLOCK_SIZE 0x40000

	CONTEXT ctx = { 0 };
	ctx.ContextFlags = CONTEXT_FULL;

	RtlCaptureContext(&ctx);

	PDUMP_HEADER pDumpHeader = (PDUMP_HEADER)ExAllocatePool(NonPagedPool, DUMP_BLOCK_SIZE);

	if (pDumpHeader != NULL)
	{

		KeCapturePersistentThreadState(&ctx, NULL, 0, 0, 0, 0, 0, pDumpHeader);

		KdDebuggerDataBlock = (PKDDEBUGGER_DATA64)ExAllocatePool(NonPagedPool, 4096);

		if (KdDebuggerDataBlock != NULL)
		{
			RtlCopyMemory(KdDebuggerDataBlock, (PUCHAR)pDumpHeader + KD_DEBUGGER_DATA_OFFSET, sizeof(KDDEBUGGER_DATA64));
		}

		ExFreePool(pDumpHeader);

	}

}