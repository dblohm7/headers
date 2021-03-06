typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NONOPAQUE_OPLOCK
{
  /* 0x0000 */ struct _IRP* IrpExclusiveOplock;
  /* 0x0004 */ struct _FILE_OBJECT* FileObject;
  /* 0x0008 */ struct _EPROCESS* ExclusiveOplockOwner;
  /* 0x000c */ struct _ETHREAD* ExclusiveOplockOwnerThread;
  /* 0x0010 */ unsigned char WaiterPriority;
  /* 0x0014 */ struct _LIST_ENTRY IrpOplocksR;
  /* 0x001c */ struct _LIST_ENTRY IrpOplocksRH;
  /* 0x0024 */ struct _LIST_ENTRY RHBreakQueue;
  /* 0x002c */ struct _LIST_ENTRY WaitingIrps;
  /* 0x0034 */ struct _LIST_ENTRY DelayAckFileObjectQueue;
  /* 0x003c */ struct _LIST_ENTRY AtomicQueue;
  /* 0x0044 */ struct _GUID* DeleterParentKey;
  /* 0x0048 */ unsigned long OplockState;
  /* 0x004c */ struct _FAST_MUTEX* FastMutex;
} NONOPAQUE_OPLOCK, *PNONOPAQUE_OPLOCK; /* size: 0x0050 */

