#pragma once

#ifndef HEADER_H
#define HEADER_H

#include <ntdef.h>
#include <ntifs.h>
#include <ntddk.h>

#endif

extern "C"
ULONG
NTAPI
KeCapturePersistentThreadState(
	IN PCONTEXT Context,
	IN PKTHREAD Thread,
	IN ULONG BugCheckCode,
	IN ULONG BugCheckParameter1,
	IN ULONG BugCheckParameter2,
	IN ULONG BugCheckParameter3,
	IN ULONG BugCheckParameter4,
	OUT PVOID VirtualAddress
);