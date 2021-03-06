typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _ETW_LAST_ENABLE_INFO
{
  /* 0x0000 */ union _LARGE_INTEGER EnableFlags;
  /* 0x0008 */ unsigned short LoggerId;
  /* 0x000a */ unsigned char Level;
  struct /* bitfield */
  {
    /* 0x000b */ unsigned char Enabled : 1; /* bit position: 0 */
    /* 0x000b */ unsigned char InternalFlag : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x000c */ long __PADDING__[1];
} ETW_LAST_ENABLE_INFO, *PETW_LAST_ENABLE_INFO; /* size: 0x0010 */

typedef struct _TRACE_ENABLE_INFO
{
  /* 0x0000 */ unsigned long IsEnabled;
  /* 0x0004 */ unsigned char Level;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short LoggerId;
  /* 0x0008 */ unsigned long EnableProperty;
  /* 0x000c */ unsigned long Reserved2;
  /* 0x0010 */ unsigned __int64 MatchAnyKeyword;
  /* 0x0018 */ unsigned __int64 MatchAllKeyword;
} TRACE_ENABLE_INFO, *PTRACE_ENABLE_INFO; /* size: 0x0020 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _ETW_GUID_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY GuidList;
  /* 0x0008 */ volatile long RefCount;
  /* 0x000c */ struct _GUID Guid;
  /* 0x001c */ struct _LIST_ENTRY RegListHead;
  /* 0x0024 */ void* SecurityDescriptor;
  union
  {
    /* 0x0028 */ struct _ETW_LAST_ENABLE_INFO LastEnable;
    /* 0x0028 */ unsigned __int64 MatchId;
  }; /* size: 0x0010 */
  /* 0x0038 */ struct _TRACE_ENABLE_INFO ProviderEnableInfo;
  /* 0x0058 */ struct _TRACE_ENABLE_INFO EnableInfo[8];
  /* 0x0158 */ struct _ETW_FILTER_HEADER* FilterData;
  /* 0x015c */ struct _ETW_SILODRIVERSTATE* SiloState;
  /* 0x0160 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0164 */ struct _ETHREAD* LockOwner;
} ETW_GUID_ENTRY, *PETW_GUID_ENTRY; /* size: 0x0168 */

typedef struct _ETW_HASH_BUCKET
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead[3];
  /* 0x0018 */ struct _EX_PUSH_LOCK BucketLock;
} ETW_HASH_BUCKET, *PETW_HASH_BUCKET; /* size: 0x001c */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _ETW_PRIV_HANDLE_DEMUX_TABLE
{
  /* 0x0000 */ struct _RTL_RB_TREE Tree;
  /* 0x0008 */ struct _EX_PUSH_LOCK Lock;
  /* 0x000c */ unsigned short SequenceNumber;
  /* 0x000e */ char __PADDING__[2];
} ETW_PRIV_HANDLE_DEMUX_TABLE, *PETW_PRIV_HANDLE_DEMUX_TABLE; /* size: 0x0010 */

typedef struct _ETW_COUNTERS
{
  /* 0x0000 */ long GuidCount;
  /* 0x0004 */ long PoolUsage[2];
  /* 0x000c */ long SessionCount;
} ETW_COUNTERS, *PETW_COUNTERS; /* size: 0x0010 */

typedef struct _ETW_SILODRIVERSTATE
{
  /* 0x0000 */ struct _ESERVERSILO_GLOBALS* SiloGlobals;
  /* 0x0008 */ struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;
  /* 0x0170 */ struct _EX_RUNDOWN_REF_CACHE_AWARE* EtwpLoggerRundown[64];
  /* 0x0270 */ struct _WMI_LOGGER_CONTEXT* WmipLoggerContext[64];
  /* 0x0370 */ struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];
  /* 0x0a70 */ unsigned short EtwpSecurityLoggers[8];
  /* 0x0a80 */ unsigned char EtwpSecurityProviderEnableMask;
  /* 0x0a84 */ long EtwpShutdownInProgress;
  /* 0x0a88 */ unsigned long EtwpSecurityProviderPID;
  /* 0x0a8c */ struct _ETW_PRIV_HANDLE_DEMUX_TABLE PrivHandleDemuxTable;
  /* 0x0a9c */ struct _ETW_COUNTERS EtwpCounters;
  /* 0x0ab0 */ union _LARGE_INTEGER LogfileBytesWritten;
  /* 0x0ab8 */ struct _ETW_SILO_TRACING_BLOCK* ProcessorBlocks;
  /* 0x0abc */ long __PADDING__[1];
} ETW_SILODRIVERSTATE, *PETW_SILODRIVERSTATE; /* size: 0x0ac0 */

