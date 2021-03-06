enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
struct HalpMpInfo;
struct LIST_ENTRY32;
struct LIST_ENTRY64;
enum PCI_EXPRESS_DEVICE_TYPE;
enum POWER_ACTION;
struct _ACCESS_STATE;
struct _ADAPTER_OBJECT;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
struct _CONTROLLER_OBJECT;
struct _DESCRIPTION_HEADER;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_OBJECT;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
struct _DEVOBJ_EXTENSION;
struct _DISPATCHER_HEADER;
struct _DMA_ADAPTER;
struct _DMA_OPERATIONS;
struct _DRIVER_EXTENSION;
struct _DRIVER_OBJECT;
struct _EPROCESS;
struct _ERESOURCE;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
enum _EVENT_TYPE;
struct _FACS;
struct _FADT;
struct _FAST_IO_DISPATCH;
struct _FAST_MUTEX;
struct _FILE_BASIC_INFORMATION;
struct _FILE_GET_QUOTA_INFORMATION;
enum _FILE_INFORMATION_CLASS;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _FILE_OBJECT;
struct _FILE_STANDARD_INFORMATION;
enum _FSINFOCLASS;
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _GEN_ADDR;
struct _GUID;
struct _HARDWARE_PTE_X86;
struct _HARDWARE_PTE_X86PAE;
struct _INITIAL_PRIVILEGE_SET;
struct _INTERFACE;
enum _INTERFACE_TYPE;
struct _IOAPIC;
struct _IOSAPIC;
enum _IO_ALLOCATION_ACTION;
struct _IO_COMPLETION_CONTEXT;
struct _IO_NMISOURCE;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _IO_SECURITY_CONTEXT;
struct _IO_STACK_LOCATION;
struct _IO_STATUS_BLOCK;
struct _IO_TIMER;
struct _IRP;
enum _IRQ_DEVICE_POLICY;
enum _IRQ_PRIORITY;
struct _ISA_VECTOR;
struct _KAPC;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KPROCESS;
struct _KSEMAPHORE;
enum _KSPIN_LOCK_QUEUE_NUMBER;
struct _KTHREAD;
union _LARGE_INTEGER;
struct _LIST_ENTRY;
struct _LOCAL_NMISOURCE;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _MAPIC;
struct _MDL;
enum _MEMORY_CACHING_TYPE_ORIG;
struct _NPAGED_LOOKASIDE_LIST;
struct _OBJECT_ATTRIBUTES;
struct _OBJECT_TYPE;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PCIE_DEVICE_ID;
struct _PLATFORM_INTERRUPT;
enum _POOL_TYPE;
struct _POWER_SEQUENCE;
union _POWER_STATE;
enum _POWER_STATE_TYPE;
struct _PRIVILEGE_SET;
struct _PROCLOCALAPIC;
struct _PROCLOCALSAPIC;
enum _REG_NOTIFY_CLASS;
struct _RSDP;
struct _RSDT_32;
struct _RTL_BITMAP;
struct _SCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST;
struct _SCSI_REQUEST_BLOCK;
struct _SECTION_OBJECT_POINTERS;
enum _SECURITY_IMPERSONATION_LEVEL;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _SINGLE_LIST_ENTRY;
union _SLIST_HEADER;
struct _STRING;
enum _SYSTEM_POWER_STATE;
struct _SYSTEM_POWER_STATE_CONTEXT;
union _ULARGE_INTEGER;
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WHEA_ERROR_PACKET;
struct _WHEA_ERROR_RECORD;
struct _WHEA_ERROR_RECORD_HEADER;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
struct _WHEA_ERROR_STATUS;
enum _WHEA_ERROR_STATUS_FORMAT;
enum _WHEA_ERROR_TYPE;
struct _WHEA_GENERIC_PROCESSOR_ERROR;
struct _WHEA_MEMORY_ERROR;
struct _WHEA_NMI_ERROR;
struct _WHEA_PCIEXPRESS_ERROR;
struct _WHEA_PCIX_BUS_ERROR;
struct _WHEA_PCIX_BUS_VALIDATION_BITS;
struct _WHEA_PCIX_DEVICE_ERROR;
struct _WHEA_PCIX_DEV_VALIDATION_BITS;
struct _WHEA_PERSISTENCE_INFO;

enum BUS_QUERY_ID_TYPE
{
  BusQueryDeviceID = 0,
  BusQueryHardwareIDs = 1,
  BusQueryCompatibleIDs = 2,
  BusQueryInstanceID = 3,
  BusQueryDeviceSerialNumber = 4,
};

enum DEVICE_TEXT_TYPE
{
  DeviceTextDescription = 0,
  DeviceTextLocationInformation = 1,
};

struct HalpMpInfo
{
  /* 0x0000 */ unsigned long ApicVersion;
  /* 0x0004 */ unsigned long ProcessorCount;
  /* 0x0008 */ unsigned long NtProcessors;
  /* 0x000c */ unsigned long BusCount;
  /* 0x0010 */ unsigned long IOApicCount;
  /* 0x0014 */ unsigned long IntiCount;
  /* 0x0018 */ unsigned long LintiCount;
  /* 0x001c */ unsigned long IMCRPresent;
  /* 0x0020 */ unsigned long LocalApicBase;
  /* 0x0024 */ unsigned long* IoApicBase[64];
  /* 0x0124 */ unsigned long IoApicPhys[64];
  /* 0x0224 */ unsigned long IoApicIntiBase[64];
}; /* size: 0x0324 */

struct LIST_ENTRY32
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
}; /* size: 0x0008 */

struct LIST_ENTRY64
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
}; /* size: 0x0010 */

enum PCI_EXPRESS_DEVICE_TYPE
{
  PciExpressEndpoint = 0,
  PciExpressLegacyEndpoint = 1,
  PciExpressRootPort = 4,
  PciExpressUpstreamSwitchPort = 5,
  PciExpressDownstreamSwitchPort = 6,
  PciExpressToPciXBridge = 7,
  PciXToExpressBridge = 8,
  PciExpressRootComplexIntegratedEndpoint = 9,
  PciExpressRootComplexEventCollector = 10,
};

enum POWER_ACTION
{
  PowerActionNone = 0,
  PowerActionReserved = 1,
  PowerActionSleep = 2,
  PowerActionHibernate = 3,
  PowerActionShutdown = 4,
  PowerActionShutdownReset = 5,
  PowerActionShutdownOff = 6,
  PowerActionWarmEject = 7,
};

typedef struct _ACCESS_STATE
{
  /* 0x0000 */ struct _LUID OperationID;
  /* 0x0008 */ unsigned char SecurityEvaluated;
  /* 0x0009 */ unsigned char GenerateAudit;
  /* 0x000a */ unsigned char GenerateOnClose;
  /* 0x000b */ unsigned char PrivilegesAllocated;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long RemainingDesiredAccess;
  /* 0x0014 */ unsigned long PreviouslyGrantedAccess;
  /* 0x0018 */ unsigned long OriginalDesiredAccess;
  /* 0x001c */ struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
  /* 0x002c */ void* SecurityDescriptor;
  /* 0x0030 */ void* AuxData;
  union // _TAG_UNNAMED_1
  {
    union
    {
      /* 0x0034 */ struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
      /* 0x0034 */ struct _PRIVILEGE_SET PrivilegeSet;
    }; /* size: 0x002c */
  } /* size: 0x002c */ Privileges;
  /* 0x0060 */ unsigned char AuditPrivileges;
  /* 0x0064 */ struct _UNICODE_STRING ObjectName;
  /* 0x006c */ struct _UNICODE_STRING ObjectTypeName;
} ACCESS_STATE, *PACCESS_STATE; /* size: 0x0074 */

typedef struct _ADAPTER_OBJECT
{
  /* 0x0000 */ struct _DMA_ADAPTER DmaHeader;
  /* 0x0008 */ struct _ADAPTER_OBJECT* MasterAdapter;
  /* 0x000c */ unsigned long MapRegistersPerChannel;
  /* 0x0010 */ void* AdapterBaseVa;
  /* 0x0014 */ void* MapRegisterBase;
  /* 0x0018 */ unsigned long NumberOfMapRegisters;
  /* 0x001c */ unsigned long CommittedMapRegisters;
  /* 0x0020 */ struct _WAIT_CONTEXT_BLOCK* CurrentWcb;
  /* 0x0024 */ struct _KDEVICE_QUEUE ChannelWaitQueue;
  /* 0x0038 */ struct _KDEVICE_QUEUE* RegisterWaitQueue;
  /* 0x003c */ struct _LIST_ENTRY AdapterQueue;
  /* 0x0044 */ unsigned long SpinLock;
  /* 0x0048 */ struct _RTL_BITMAP* MapRegisters;
  /* 0x004c */ unsigned char* PagePort;
  /* 0x0050 */ unsigned char ChannelNumber;
  /* 0x0051 */ unsigned char AdapterNumber;
  /* 0x0052 */ unsigned short DmaPortAddress;
  /* 0x0054 */ unsigned char AdapterMode;
  /* 0x0055 */ unsigned char NeedsMapRegisters;
  /* 0x0056 */ unsigned char MasterDevice;
  /* 0x0057 */ unsigned char Width16Bits;
  /* 0x0058 */ unsigned char ScatterGather;
  /* 0x0059 */ unsigned char IgnoreCount;
  /* 0x005a */ unsigned char Dma32BitAddresses;
  /* 0x005b */ unsigned char Dma64BitAddresses;
  /* 0x005c */ unsigned char LegacyAdapter;
  /* 0x0060 */ struct _LIST_ENTRY AdapterList;
} ADAPTER_OBJECT, *PADAPTER_OBJECT; /* size: 0x0068 */

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0004 */ unsigned long BusNumber;
  /* 0x0008 */ struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;
} CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR; /* size: 0x0020 */

typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char ShareDisposition;
  /* 0x0002 */ unsigned short Flags;
  union // _TAG_UNNAMED_2
  {
    union
    {
      struct // _TAG_UNNAMED_3
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Generic;
      struct // _TAG_UNNAMED_3
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Port;
      struct // _TAG_UNNAMED_4
      {
        /* 0x0004 */ unsigned long Level;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long Affinity;
      } /* size: 0x000c */ Interrupt;
      struct // _TAG_UNNAMED_5
      {
        union
        {
          struct // _TAG_UNNAMED_6
          {
            /* 0x0004 */ unsigned short Reserved;
            /* 0x0006 */ unsigned short MessageCount;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned long Affinity;
          } /* size: 0x000c */ Raw;
          struct // _TAG_UNNAMED_4
          {
            /* 0x0004 */ unsigned long Level;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned long Affinity;
          } /* size: 0x000c */ Translated;
        }; /* size: 0x000c */
      } /* size: 0x000c */ MessageInterrupt;
      struct // _TAG_UNNAMED_3
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Memory;
      struct // _TAG_UNNAMED_7
      {
        /* 0x0004 */ unsigned long Channel;
        /* 0x0008 */ unsigned long Port;
        /* 0x000c */ unsigned long Reserved1;
      } /* size: 0x000c */ Dma;
      struct // _TAG_UNNAMED_8
      {
        /* 0x0004 */ unsigned long Data[3];
      } /* size: 0x000c */ DevicePrivate;
      struct // _TAG_UNNAMED_9
      {
        /* 0x0004 */ unsigned long Start;
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Reserved;
      } /* size: 0x000c */ BusNumber;
      struct // _TAG_UNNAMED_10
      {
        /* 0x0004 */ unsigned long DataSize;
        /* 0x0008 */ unsigned long Reserved1;
        /* 0x000c */ unsigned long Reserved2;
      } /* size: 0x000c */ DeviceSpecificData;
      struct // _TAG_UNNAMED_11
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length40;
      } /* size: 0x000c */ Memory40;
      struct // _TAG_UNNAMED_12
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length48;
      } /* size: 0x000c */ Memory48;
      struct // _TAG_UNNAMED_13
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length64;
      } /* size: 0x000c */ Memory64;
    }; /* size: 0x000c */
  } /* size: 0x000c */ u;
} CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR; /* size: 0x0010 */

typedef struct _CM_PARTIAL_RESOURCE_LIST
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
} CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST; /* size: 0x0018 */

typedef struct _CM_RESOURCE_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];
} CM_RESOURCE_LIST, *PCM_RESOURCE_LIST; /* size: 0x0024 */

struct _COMPRESSED_DATA_INFO;

typedef struct _CONTROLLER_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ void* ControllerExtension;
  /* 0x0008 */ struct _KDEVICE_QUEUE DeviceWaitQueue;
  /* 0x001c */ unsigned long Spare1;
  /* 0x0020 */ union _LARGE_INTEGER Spare2;
} CONTROLLER_OBJECT, *PCONTROLLER_OBJECT; /* size: 0x0028 */

typedef struct _DESCRIPTION_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned char Revision;
  /* 0x0009 */ unsigned char Checksum;
  /* 0x000a */ char OEMID[6];
  /* 0x0010 */ char OEMTableID[8];
  /* 0x0018 */ unsigned long OEMRevision;
  /* 0x001c */ char CreatorID[4];
  /* 0x0020 */ unsigned long CreatorRev;
} DESCRIPTION_HEADER, *PDESCRIPTION_HEADER; /* size: 0x0024 */

typedef struct _DEVICE_CAPABILITIES
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long DeviceD1 : 1; /* bit position: 0 */
    /* 0x0004 */ unsigned long DeviceD2 : 1; /* bit position: 1 */
    /* 0x0004 */ unsigned long LockSupported : 1; /* bit position: 2 */
    /* 0x0004 */ unsigned long EjectSupported : 1; /* bit position: 3 */
    /* 0x0004 */ unsigned long Removable : 1; /* bit position: 4 */
    /* 0x0004 */ unsigned long DockDevice : 1; /* bit position: 5 */
    /* 0x0004 */ unsigned long UniqueID : 1; /* bit position: 6 */
    /* 0x0004 */ unsigned long SilentInstall : 1; /* bit position: 7 */
    /* 0x0004 */ unsigned long RawDeviceOK : 1; /* bit position: 8 */
    /* 0x0004 */ unsigned long SurpriseRemovalOK : 1; /* bit position: 9 */
    /* 0x0004 */ unsigned long WakeFromD0 : 1; /* bit position: 10 */
    /* 0x0004 */ unsigned long WakeFromD1 : 1; /* bit position: 11 */
    /* 0x0004 */ unsigned long WakeFromD2 : 1; /* bit position: 12 */
    /* 0x0004 */ unsigned long WakeFromD3 : 1; /* bit position: 13 */
    /* 0x0004 */ unsigned long HardwareDisabled : 1; /* bit position: 14 */
    /* 0x0004 */ unsigned long NonDynamic : 1; /* bit position: 15 */
    /* 0x0004 */ unsigned long WarmEjectSupported : 1; /* bit position: 16 */
    /* 0x0004 */ unsigned long NoDisplayInUI : 1; /* bit position: 17 */
    /* 0x0004 */ unsigned long Reserved : 14; /* bit position: 18 */
  }; /* bitfield */
  /* 0x0008 */ unsigned long Address;
  /* 0x000c */ unsigned long UINumber;
  /* 0x0010 */ enum _DEVICE_POWER_STATE DeviceState[7];
  /* 0x002c */ enum _SYSTEM_POWER_STATE SystemWake;
  /* 0x0030 */ enum _DEVICE_POWER_STATE DeviceWake;
  /* 0x0034 */ unsigned long D1Latency;
  /* 0x0038 */ unsigned long D2Latency;
  /* 0x003c */ unsigned long D3Latency;
} DEVICE_CAPABILITIES, *PDEVICE_CAPABILITIES; /* size: 0x0040 */

typedef struct _DEVICE_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ long ReferenceCount;
  /* 0x0008 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x000c */ struct _DEVICE_OBJECT* NextDevice;
  /* 0x0010 */ struct _DEVICE_OBJECT* AttachedDevice;
  /* 0x0014 */ struct _IRP* CurrentIrp;
  /* 0x0018 */ struct _IO_TIMER* Timer;
  /* 0x001c */ unsigned long Flags;
  /* 0x0020 */ unsigned long Characteristics;
  /* 0x0024 */ struct _VPB* Vpb;
  /* 0x0028 */ void* DeviceExtension;
  /* 0x002c */ unsigned long DeviceType;
  /* 0x0030 */ char StackSize;
  union // _TAG_UNNAMED_14
  {
    union
    {
      /* 0x0034 */ struct _LIST_ENTRY ListEntry;
      /* 0x0034 */ struct _WAIT_CONTEXT_BLOCK Wcb;
    }; /* size: 0x0028 */
  } /* size: 0x0028 */ Queue;
  /* 0x005c */ unsigned long AlignmentRequirement;
  /* 0x0060 */ struct _KDEVICE_QUEUE DeviceQueue;
  /* 0x0074 */ struct _KDPC Dpc;
  /* 0x0094 */ unsigned long ActiveThreadCount;
  /* 0x0098 */ void* SecurityDescriptor;
  /* 0x009c */ struct _KEVENT DeviceLock;
  /* 0x00ac */ unsigned short SectorSize;
  /* 0x00ae */ unsigned short Spare1;
  /* 0x00b0 */ struct _DEVOBJ_EXTENSION* DeviceObjectExtension;
  /* 0x00b4 */ void* Reserved;
} DEVICE_OBJECT, *PDEVICE_OBJECT; /* size: 0x00b8 */

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef enum _DEVICE_RELATION_TYPE
{
  BusRelations = 0,
  EjectionRelations = 1,
  PowerRelations = 2,
  RemovalRelations = 3,
  TargetDeviceRelation = 4,
  SingleBusRelations = 5,
} DEVICE_RELATION_TYPE, *PDEVICE_RELATION_TYPE;

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
  DeviceUsageTypeUndefined = 0,
  DeviceUsageTypePaging = 1,
  DeviceUsageTypeHibernation = 2,
  DeviceUsageTypeDumpFile = 3,
} DEVICE_USAGE_NOTIFICATION_TYPE, *PDEVICE_USAGE_NOTIFICATION_TYPE;

typedef struct _DEVOBJ_EXTENSION
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _DEVICE_OBJECT* DeviceObject;
} DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _DMA_ADAPTER
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _DMA_OPERATIONS* DmaOperations;
} DMA_ADAPTER, *PDMA_ADAPTER; /* size: 0x0008 */

typedef struct _DMA_OPERATIONS
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ void* PutDmaAdapter /* function */;
  /* 0x0008 */ void* AllocateCommonBuffer /* function */;
  /* 0x000c */ void* FreeCommonBuffer /* function */;
  /* 0x0010 */ void* AllocateAdapterChannel /* function */;
  /* 0x0014 */ void* FlushAdapterBuffers /* function */;
  /* 0x0018 */ void* FreeAdapterChannel /* function */;
  /* 0x001c */ void* FreeMapRegisters /* function */;
  /* 0x0020 */ void* MapTransfer /* function */;
  /* 0x0024 */ void* GetDmaAlignment /* function */;
  /* 0x0028 */ void* ReadDmaCounter /* function */;
  /* 0x002c */ void* GetScatterGatherList /* function */;
  /* 0x0030 */ void* PutScatterGatherList /* function */;
  /* 0x0034 */ void* CalculateScatterGatherList /* function */;
  /* 0x0038 */ void* BuildScatterGatherList /* function */;
  /* 0x003c */ void* BuildMdlFromScatterGatherList /* function */;
} DMA_OPERATIONS, *PDMA_OPERATIONS; /* size: 0x0040 */

typedef struct _DRIVER_EXTENSION
{
  /* 0x0000 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0004 */ void* AddDevice /* function */;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ struct _UNICODE_STRING ServiceKeyName;
} DRIVER_EXTENSION, *PDRIVER_EXTENSION; /* size: 0x0014 */

typedef struct _DRIVER_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ void* DriverStart;
  /* 0x0010 */ unsigned long DriverSize;
  /* 0x0014 */ void* DriverSection;
  /* 0x0018 */ struct _DRIVER_EXTENSION* DriverExtension;
  /* 0x001c */ struct _UNICODE_STRING DriverName;
  /* 0x0024 */ struct _UNICODE_STRING* HardwareDatabase;
  /* 0x0028 */ struct _FAST_IO_DISPATCH* FastIoDispatch;
  /* 0x002c */ void* DriverInit /* function */;
  /* 0x0030 */ void* DriverStartIo /* function */;
  /* 0x0034 */ void* DriverUnload /* function */;
  /* 0x0038 */ void* MajorFunction[28] /* function */;
} DRIVER_OBJECT, *PDRIVER_OBJECT; /* size: 0x00a8 */

struct _EPROCESS;

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0008 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x000c */ short ActiveCount;
  /* 0x000e */ unsigned short Flag;
  /* 0x0010 */ struct _KSEMAPHORE* SharedWaiters;
  /* 0x0014 */ struct _KEVENT* ExclusiveWaiters;
  /* 0x0018 */ struct _OWNER_ENTRY OwnerEntry;
  /* 0x0020 */ unsigned long ActiveEntries;
  /* 0x0024 */ unsigned long ContentionCount;
  /* 0x0028 */ unsigned long NumberOfSharedWaiters;
  /* 0x002c */ unsigned long NumberOfExclusiveWaiters;
  union
  {
    /* 0x0030 */ void* Address;
    /* 0x0030 */ unsigned long CreatorBackTraceIndex;
  }; /* size: 0x0004 */
  /* 0x0034 */ unsigned long SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0038 */

struct _ETHREAD;

typedef struct _EVENT_DATA_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 Ptr;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long Reserved;
} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR; /* size: 0x0010 */

typedef struct _EVENT_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Id;
  /* 0x0002 */ unsigned char Version;
  /* 0x0003 */ unsigned char Channel;
  /* 0x0004 */ unsigned char Level;
  /* 0x0005 */ unsigned char Opcode;
  /* 0x0006 */ unsigned short Task;
  /* 0x0008 */ unsigned __int64 Keyword;
} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR; /* size: 0x0010 */

typedef enum _EVENT_TYPE
{
  NotificationEvent = 0,
  SynchronizationEvent = 1,
} EVENT_TYPE, *PEVENT_TYPE;

typedef struct _FACS
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long HardwareSignature;
  /* 0x000c */ unsigned long pFirmwareWakingVector;
  /* 0x0010 */ unsigned long GlobalLock;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ union _LARGE_INTEGER x_FirmwareWakingVector;
  /* 0x0020 */ unsigned char version;
  /* 0x0021 */ unsigned char Reserved[31];
} FACS, *PFACS; /* size: 0x0040 */

typedef struct _FADT
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long facs;
  /* 0x0028 */ unsigned long dsdt;
  /* 0x002c */ unsigned char int_model;
  /* 0x002d */ unsigned char pm_profile;
  /* 0x002e */ unsigned short sci_int_vector;
  /* 0x0030 */ unsigned long smi_cmd_io_port;
  /* 0x0034 */ unsigned char acpi_on_value;
  /* 0x0035 */ unsigned char acpi_off_value;
  /* 0x0036 */ unsigned char s4bios_req;
  /* 0x0037 */ unsigned char pstate_control;
  /* 0x0038 */ unsigned long pm1a_evt_blk_io_port;
  /* 0x003c */ unsigned long pm1b_evt_blk_io_port;
  /* 0x0040 */ unsigned long pm1a_ctrl_blk_io_port;
  /* 0x0044 */ unsigned long pm1b_ctrl_blk_io_port;
  /* 0x0048 */ unsigned long pm2_ctrl_blk_io_port;
  /* 0x004c */ unsigned long pm_tmr_blk_io_port;
  /* 0x0050 */ unsigned long gp0_blk_io_port;
  /* 0x0054 */ unsigned long gp1_blk_io_port;
  /* 0x0058 */ unsigned char pm1_evt_len;
  /* 0x0059 */ unsigned char pm1_ctrl_len;
  /* 0x005a */ unsigned char pm2_ctrl_len;
  /* 0x005b */ unsigned char pm_tmr_len;
  /* 0x005c */ unsigned char gp0_blk_len;
  /* 0x005d */ unsigned char gp1_blk_len;
  /* 0x005e */ unsigned char gp1_base;
  /* 0x005f */ unsigned char cstate_control;
  /* 0x0060 */ unsigned short lvl2_latency;
  /* 0x0062 */ unsigned short lvl3_latency;
  /* 0x0064 */ unsigned short flush_size;
  /* 0x0066 */ unsigned short flush_stride;
  /* 0x0068 */ unsigned char duty_offset;
  /* 0x0069 */ unsigned char duty_width;
  /* 0x006a */ unsigned char day_alarm_index;
  /* 0x006b */ unsigned char month_alarm_index;
  /* 0x006c */ unsigned char century_alarm_index;
  /* 0x006d */ unsigned short boot_arch;
  /* 0x006f */ unsigned char reserved3[1];
  /* 0x0070 */ unsigned long flags;
  /* 0x0074 */ struct _GEN_ADDR reset_reg;
  /* 0x0080 */ unsigned char reset_val;
  /* 0x0081 */ unsigned char reserved4[3];
  /* 0x0084 */ union _LARGE_INTEGER x_firmware_ctrl;
  /* 0x008c */ union _LARGE_INTEGER x_dsdt;
  /* 0x0094 */ struct _GEN_ADDR x_pm1a_evt_blk;
  /* 0x00a0 */ struct _GEN_ADDR x_pm1b_evt_blk;
  /* 0x00ac */ struct _GEN_ADDR x_pm1a_ctrl_blk;
  /* 0x00b8 */ struct _GEN_ADDR x_pm1b_ctrl_blk;
  /* 0x00c4 */ struct _GEN_ADDR x_pm2_ctrl_blk;
  /* 0x00d0 */ struct _GEN_ADDR x_pm_tmr_blk;
  /* 0x00dc */ struct _GEN_ADDR x_gp0_blk;
  /* 0x00e8 */ struct _GEN_ADDR x_gp1_blk;
} FADT, *PFADT; /* size: 0x00f4 */

typedef struct _FAST_IO_DISPATCH
{
  /* 0x0000 */ unsigned long SizeOfFastIoDispatch;
  /* 0x0004 */ void* FastIoCheckIfPossible /* function */;
  /* 0x0008 */ void* FastIoRead /* function */;
  /* 0x000c */ void* FastIoWrite /* function */;
  /* 0x0010 */ void* FastIoQueryBasicInfo /* function */;
  /* 0x0014 */ void* FastIoQueryStandardInfo /* function */;
  /* 0x0018 */ void* FastIoLock /* function */;
  /* 0x001c */ void* FastIoUnlockSingle /* function */;
  /* 0x0020 */ void* FastIoUnlockAll /* function */;
  /* 0x0024 */ void* FastIoUnlockAllByKey /* function */;
  /* 0x0028 */ void* FastIoDeviceControl /* function */;
  /* 0x002c */ void* AcquireFileForNtCreateSection /* function */;
  /* 0x0030 */ void* ReleaseFileForNtCreateSection /* function */;
  /* 0x0034 */ void* FastIoDetachDevice /* function */;
  /* 0x0038 */ void* FastIoQueryNetworkOpenInfo /* function */;
  /* 0x003c */ void* AcquireForModWrite /* function */;
  /* 0x0040 */ void* MdlRead /* function */;
  /* 0x0044 */ void* MdlReadComplete /* function */;
  /* 0x0048 */ void* PrepareMdlWrite /* function */;
  /* 0x004c */ void* MdlWriteComplete /* function */;
  /* 0x0050 */ void* FastIoReadCompressed /* function */;
  /* 0x0054 */ void* FastIoWriteCompressed /* function */;
  /* 0x0058 */ void* MdlReadCompleteCompressed /* function */;
  /* 0x005c */ void* MdlWriteCompleteCompressed /* function */;
  /* 0x0060 */ void* FastIoQueryOpen /* function */;
  /* 0x0064 */ void* ReleaseForModWrite /* function */;
  /* 0x0068 */ void* AcquireForCcFlush /* function */;
  /* 0x006c */ void* ReleaseForCcFlush /* function */;
} FAST_IO_DISPATCH, *PFAST_IO_DISPATCH; /* size: 0x0070 */

typedef struct _FAST_MUTEX
{
  /* 0x0000 */ volatile long Count;
  /* 0x0004 */ struct _KTHREAD* Owner;
  /* 0x0008 */ unsigned long Contention;
  /* 0x000c */ struct _KEVENT Gate;
  /* 0x001c */ unsigned long OldIrql;
} FAST_MUTEX, *PFAST_MUTEX; /* size: 0x0020 */

typedef struct _FILE_BASIC_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER CreationTime;
  /* 0x0008 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0010 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0018 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0020 */ unsigned long FileAttributes;
  /* 0x0024 */ long __PADDING__[1];
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION; /* size: 0x0028 */

struct _FILE_GET_QUOTA_INFORMATION;

typedef enum _FILE_INFORMATION_CLASS
{
  FileDirectoryInformation = 1,
  FileFullDirectoryInformation = 2,
  FileBothDirectoryInformation = 3,
  FileBasicInformation = 4,
  FileStandardInformation = 5,
  FileInternalInformation = 6,
  FileEaInformation = 7,
  FileAccessInformation = 8,
  FileNameInformation = 9,
  FileRenameInformation = 10,
  FileLinkInformation = 11,
  FileNamesInformation = 12,
  FileDispositionInformation = 13,
  FilePositionInformation = 14,
  FileFullEaInformation = 15,
  FileModeInformation = 16,
  FileAlignmentInformation = 17,
  FileAllInformation = 18,
  FileAllocationInformation = 19,
  FileEndOfFileInformation = 20,
  FileAlternateNameInformation = 21,
  FileStreamInformation = 22,
  FilePipeInformation = 23,
  FilePipeLocalInformation = 24,
  FilePipeRemoteInformation = 25,
  FileMailslotQueryInformation = 26,
  FileMailslotSetInformation = 27,
  FileCompressionInformation = 28,
  FileObjectIdInformation = 29,
  FileCompletionInformation = 30,
  FileMoveClusterInformation = 31,
  FileQuotaInformation = 32,
  FileReparsePointInformation = 33,
  FileNetworkOpenInformation = 34,
  FileAttributeTagInformation = 35,
  FileTrackingInformation = 36,
  FileIdBothDirectoryInformation = 37,
  FileIdFullDirectoryInformation = 38,
  FileValidDataLengthInformation = 39,
  FileShortNameInformation = 40,
  FileIoCompletionNotificationInformation = 41,
  FileIoStatusBlockRangeInformation = 42,
  FileIoPriorityHintInformation = 43,
  FileSfioReserveInformation = 44,
  FileSfioVolumeInformation = 45,
  FileHardLinkInformation = 46,
  FileProcessIdsUsingFileInformation = 47,
  FileNormalizedNameInformation = 48,
  FileNetworkPhysicalNameInformation = 49,
  FileMaximumInformation = 50,
} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;

typedef struct _FILE_NETWORK_OPEN_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER CreationTime;
  /* 0x0008 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0010 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0018 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0020 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0028 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0030 */ unsigned long FileAttributes;
  /* 0x0034 */ long __PADDING__[1];
} FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION; /* size: 0x0038 */

typedef struct _FILE_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0008 */ struct _VPB* Vpb;
  /* 0x000c */ void* FsContext;
  /* 0x0010 */ void* FsContext2;
  /* 0x0014 */ struct _SECTION_OBJECT_POINTERS* SectionObjectPointer;
  /* 0x0018 */ void* PrivateCacheMap;
  /* 0x001c */ long FinalStatus;
  /* 0x0020 */ struct _FILE_OBJECT* RelatedFileObject;
  /* 0x0024 */ unsigned char LockOperation;
  /* 0x0025 */ unsigned char DeletePending;
  /* 0x0026 */ unsigned char ReadAccess;
  /* 0x0027 */ unsigned char WriteAccess;
  /* 0x0028 */ unsigned char DeleteAccess;
  /* 0x0029 */ unsigned char SharedRead;
  /* 0x002a */ unsigned char SharedWrite;
  /* 0x002b */ unsigned char SharedDelete;
  /* 0x002c */ unsigned long Flags;
  /* 0x0030 */ struct _UNICODE_STRING FileName;
  /* 0x0038 */ union _LARGE_INTEGER CurrentByteOffset;
  /* 0x0040 */ unsigned long Waiters;
  /* 0x0044 */ unsigned long Busy;
  /* 0x0048 */ void* LastLock;
  /* 0x004c */ struct _KEVENT Lock;
  /* 0x005c */ struct _KEVENT Event;
  /* 0x006c */ struct _IO_COMPLETION_CONTEXT* CompletionContext;
  /* 0x0070 */ unsigned long IrpListLock;
  /* 0x0074 */ struct _LIST_ENTRY IrpList;
  /* 0x007c */ void* FileObjectExtension;
} FILE_OBJECT, *PFILE_OBJECT; /* size: 0x0080 */

typedef struct _FILE_STANDARD_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0008 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0010 */ unsigned long NumberOfLinks;
  /* 0x0014 */ unsigned char DeletePending;
  /* 0x0015 */ unsigned char Directory;
  /* 0x0016 */ char __PADDING__[2];
} FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION; /* size: 0x0018 */

typedef enum _FSINFOCLASS
{
  FileFsVolumeInformation = 1,
  FileFsLabelInformation = 2,
  FileFsSizeInformation = 3,
  FileFsDeviceInformation = 4,
  FileFsAttributeInformation = 5,
  FileFsControlInformation = 6,
  FileFsFullSizeInformation = 7,
  FileFsObjectIdInformation = 8,
  FileFsDriverPathInformation = 9,
  FileFsVolumeFlagsInformation = 10,
  FileFsMaximumInformation = 11,
} FSINFOCLASS, *PFSINFOCLASS;

typedef struct _GENERAL_LOOKASIDE
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short Depth;
  /* 0x000a */ unsigned short MaximumDepth;
  /* 0x000c */ unsigned long TotalAllocates;
  union
  {
    /* 0x0010 */ unsigned long AllocateMisses;
    /* 0x0010 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long TotalFrees;
  union
  {
    /* 0x0018 */ unsigned long FreeMisses;
    /* 0x0018 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x001c */ enum _POOL_TYPE Type;
  /* 0x0020 */ unsigned long Tag;
  /* 0x0024 */ unsigned long Size;
  union
  {
    /* 0x0028 */ void* AllocateEx /* function */;
    /* 0x0028 */ void* Allocate /* function */;
  }; /* size: 0x0004 */
  union
  {
    /* 0x002c */ void* FreeEx /* function */;
    /* 0x002c */ void* Free /* function */;
  }; /* size: 0x0004 */
  /* 0x0030 */ struct _LIST_ENTRY ListEntry;
  /* 0x0038 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x003c */ unsigned long LastAllocateMisses;
    /* 0x003c */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0040 */ unsigned long Future[2];
} GENERAL_LOOKASIDE, *PGENERAL_LOOKASIDE; /* size: 0x0048 */

typedef struct _GENERAL_LOOKASIDE_POOL
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short Depth;
  /* 0x000a */ unsigned short MaximumDepth;
  /* 0x000c */ unsigned long TotalAllocates;
  union
  {
    /* 0x0010 */ unsigned long AllocateMisses;
    /* 0x0010 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long TotalFrees;
  union
  {
    /* 0x0018 */ unsigned long FreeMisses;
    /* 0x0018 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x001c */ enum _POOL_TYPE Type;
  /* 0x0020 */ unsigned long Tag;
  /* 0x0024 */ unsigned long Size;
  union
  {
    /* 0x0028 */ void* AllocateEx /* function */;
    /* 0x0028 */ void* Allocate /* function */;
  }; /* size: 0x0004 */
  union
  {
    /* 0x002c */ void* FreeEx /* function */;
    /* 0x002c */ void* Free /* function */;
  }; /* size: 0x0004 */
  /* 0x0030 */ struct _LIST_ENTRY ListEntry;
  /* 0x0038 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x003c */ unsigned long LastAllocateMisses;
    /* 0x003c */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0040 */ unsigned long Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL; /* size: 0x0048 */

typedef struct _GEN_ADDR
{
  /* 0x0000 */ unsigned char AddressSpaceID;
  /* 0x0001 */ unsigned char BitWidth;
  /* 0x0002 */ unsigned char BitOffset;
  /* 0x0003 */ unsigned char AccessSize;
  /* 0x0004 */ union _LARGE_INTEGER Address;
} GEN_ADDR, *PGEN_ADDR; /* size: 0x000c */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _HARDWARE_PTE_X86
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long reserved : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long PageFrameNumber : 20; /* bit position: 12 */
  }; /* bitfield */
} HARDWARE_PTE_X86, *PHARDWARE_PTE_X86; /* size: 0x0004 */

typedef struct _HARDWARE_PTE_X86PAE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 reserved0 : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 PageFrameNumber : 26; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 reserved1 : 26; /* bit position: 38 */
    }; /* bitfield */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} HARDWARE_PTE_X86PAE, *PHARDWARE_PTE_X86PAE; /* size: 0x0008 */

typedef struct _INITIAL_PRIVILEGE_SET
{
  /* 0x0000 */ unsigned long PrivilegeCount;
  /* 0x0004 */ unsigned long Control;
  /* 0x0008 */ struct _LUID_AND_ATTRIBUTES Privilege[3];
} INITIAL_PRIVILEGE_SET, *PINITIAL_PRIVILEGE_SET; /* size: 0x002c */

typedef struct _INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0004 */ void* Context;
  /* 0x0008 */ void* InterfaceReference /* function */;
  /* 0x000c */ void* InterfaceDereference /* function */;
} INTERFACE, *PINTERFACE; /* size: 0x0010 */

typedef enum _INTERFACE_TYPE
{
  InterfaceTypeUndefined = -1,
  Internal = 0,
  Isa = 1,
  Eisa = 2,
  MicroChannel = 3,
  TurboChannel = 4,
  PCIBus = 5,
  VMEBus = 6,
  NuBus = 7,
  PCMCIABus = 8,
  CBus = 9,
  MPIBus = 10,
  MPSABus = 11,
  ProcessorInternal = 12,
  InternalPowerBus = 13,
  PNPISABus = 14,
  PNPBus = 15,
  MaximumInterfaceType = 16,
} INTERFACE_TYPE, *PINTERFACE_TYPE;

typedef struct _IOAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char IOAPICID;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long IOAPICAddress;
  /* 0x0008 */ unsigned long SystemVectorBase;
} IOAPIC, *PIOAPIC; /* size: 0x000c */

typedef struct _IOSAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned long SystemVectorBase;
  /* 0x0008 */ unsigned long IOSAPICAddress;
} IOSAPIC, *PIOSAPIC; /* size: 0x000c */

typedef enum _IO_ALLOCATION_ACTION
{
  KeepObject = 1,
  DeallocateObject = 2,
  DeallocateObjectKeepRegisters = 3,
} IO_ALLOCATION_ACTION, *PIO_ALLOCATION_ACTION;

typedef struct _IO_COMPLETION_CONTEXT
{
  /* 0x0000 */ void* Port;
  /* 0x0004 */ void* Key;
} IO_COMPLETION_CONTEXT, *PIO_COMPLETION_CONTEXT; /* size: 0x0008 */

typedef struct _IO_NMISOURCE
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned long GlobalSystemInterruptVector;
} IO_NMISOURCE, *PIO_NMISOURCE; /* size: 0x0008 */

typedef struct _IO_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Option;
  /* 0x0001 */ unsigned char Type;
  /* 0x0002 */ unsigned char ShareDisposition;
  /* 0x0003 */ unsigned char Spare1;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short Spare2;
  union // _TAG_UNNAMED_15
  {
    union
    {
      struct // _TAG_UNNAMED_16
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Port;
      struct // _TAG_UNNAMED_16
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory;
      struct // _TAG_UNNAMED_17
      {
        /* 0x0008 */ unsigned long MinimumVector;
        /* 0x000c */ unsigned long MaximumVector;
        /* 0x0010 */ enum _IRQ_DEVICE_POLICY AffinityPolicy;
        /* 0x0014 */ enum _IRQ_PRIORITY PriorityPolicy;
        /* 0x0018 */ unsigned long TargetedProcessors;
      } /* size: 0x0014 */ Interrupt;
      struct // _TAG_UNNAMED_18
      {
        /* 0x0008 */ unsigned long MinimumChannel;
        /* 0x000c */ unsigned long MaximumChannel;
      } /* size: 0x0008 */ Dma;
      struct // _TAG_UNNAMED_16
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Generic;
      struct // _TAG_UNNAMED_8
      {
        /* 0x0008 */ unsigned long Data[3];
      } /* size: 0x000c */ DevicePrivate;
      struct // _TAG_UNNAMED_19
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long MinBusNumber;
        /* 0x0010 */ unsigned long MaxBusNumber;
        /* 0x0014 */ unsigned long Reserved;
      } /* size: 0x0010 */ BusNumber;
      struct // _TAG_UNNAMED_20
      {
        /* 0x0008 */ unsigned long Priority;
        /* 0x000c */ unsigned long Reserved1;
        /* 0x0010 */ unsigned long Reserved2;
      } /* size: 0x000c */ ConfigData;
      struct // _TAG_UNNAMED_21
      {
        /* 0x0008 */ unsigned long Length40;
        /* 0x000c */ unsigned long Alignment40;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory40;
      struct // _TAG_UNNAMED_22
      {
        /* 0x0008 */ unsigned long Length48;
        /* 0x000c */ unsigned long Alignment48;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory48;
      struct // _TAG_UNNAMED_23
      {
        /* 0x0008 */ unsigned long Length64;
        /* 0x000c */ unsigned long Alignment64;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory64;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ u;
} IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR; /* size: 0x0020 */

typedef struct _IO_RESOURCE_LIST
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST; /* size: 0x0028 */

typedef struct _IO_RESOURCE_REQUIREMENTS_LIST
{
  /* 0x0000 */ unsigned long ListSize;
  /* 0x0004 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0008 */ unsigned long BusNumber;
  /* 0x000c */ unsigned long SlotNumber;
  /* 0x0010 */ unsigned long Reserved[3];
  /* 0x001c */ unsigned long AlternativeLists;
  /* 0x0020 */ struct _IO_RESOURCE_LIST List[1];
} IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST; /* size: 0x0048 */

typedef struct _IO_SECURITY_CONTEXT
{
  /* 0x0000 */ struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;
  /* 0x0004 */ struct _ACCESS_STATE* AccessState;
  /* 0x0008 */ unsigned long DesiredAccess;
  /* 0x000c */ unsigned long FullCreateOptions;
} IO_SECURITY_CONTEXT, *PIO_SECURITY_CONTEXT; /* size: 0x0010 */

typedef struct _IO_STACK_LOCATION
{
  /* 0x0000 */ unsigned char MajorFunction;
  /* 0x0001 */ unsigned char MinorFunction;
  /* 0x0002 */ unsigned char Flags;
  /* 0x0003 */ unsigned char Control;
  union // _TAG_UNNAMED_24
  {
    union
    {
      struct // _TAG_UNNAMED_25
      {
        /* 0x0004 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0008 */ unsigned long Options;
        /* 0x000c */ unsigned short FileAttributes;
        /* 0x000e */ unsigned short ShareAccess;
        /* 0x0010 */ unsigned long EaLength;
      } /* size: 0x0010 */ Create;
      struct // _TAG_UNNAMED_26
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ unsigned long Key;
        /* 0x000c */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0010 */ Read;
      struct // _TAG_UNNAMED_26
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ unsigned long Key;
        /* 0x000c */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0010 */ Write;
      struct // _TAG_UNNAMED_27
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ struct _UNICODE_STRING* FileName;
        /* 0x000c */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x0010 */ unsigned long FileIndex;
      } /* size: 0x0010 */ QueryDirectory;
      struct // _TAG_UNNAMED_28
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ unsigned long CompletionFilter;
      } /* size: 0x0008 */ NotifyDirectory;
      struct // _TAG_UNNAMED_29
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
      } /* size: 0x0008 */ QueryFile;
      struct // _TAG_UNNAMED_30
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x000c */ struct _FILE_OBJECT* FileObject;
        union
        {
          struct
          {
            /* 0x0010 */ unsigned char ReplaceIfExists;
            /* 0x0011 */ unsigned char AdvanceOnly;
          }; /* size: 0x0002 */
          /* 0x0010 */ unsigned long ClusterCount;
          /* 0x0010 */ void* DeleteHandle;
        }; /* size: 0x0004 */
      } /* size: 0x0010 */ SetFile;
      struct // _TAG_UNNAMED_31
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ void* EaList;
        /* 0x000c */ unsigned long EaListLength;
        /* 0x0010 */ unsigned long EaIndex;
      } /* size: 0x0010 */ QueryEa;
      struct // _TAG_UNNAMED_32
      {
        /* 0x0004 */ unsigned long Length;
      } /* size: 0x0004 */ SetEa;
      struct // _TAG_UNNAMED_33
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FSINFOCLASS FsInformationClass;
      } /* size: 0x0008 */ QueryVolume;
      struct // _TAG_UNNAMED_33
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FSINFOCLASS FsInformationClass;
      } /* size: 0x0008 */ SetVolume;
      struct // _TAG_UNNAMED_34
      {
        /* 0x0004 */ unsigned long OutputBufferLength;
        /* 0x0008 */ unsigned long InputBufferLength;
        /* 0x000c */ unsigned long FsControlCode;
        /* 0x0010 */ void* Type3InputBuffer;
      } /* size: 0x0010 */ FileSystemControl;
      struct // _TAG_UNNAMED_35
      {
        /* 0x0004 */ union _LARGE_INTEGER* Length;
        /* 0x0008 */ unsigned long Key;
        /* 0x000c */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0010 */ LockControl;
      struct // _TAG_UNNAMED_36
      {
        /* 0x0004 */ unsigned long OutputBufferLength;
        /* 0x0008 */ unsigned long InputBufferLength;
        /* 0x000c */ unsigned long IoControlCode;
        /* 0x0010 */ void* Type3InputBuffer;
      } /* size: 0x0010 */ DeviceIoControl;
      struct // _TAG_UNNAMED_37
      {
        /* 0x0004 */ unsigned long SecurityInformation;
        /* 0x0008 */ unsigned long Length;
      } /* size: 0x0008 */ QuerySecurity;
      struct // _TAG_UNNAMED_38
      {
        /* 0x0004 */ unsigned long SecurityInformation;
        /* 0x0008 */ void* SecurityDescriptor;
      } /* size: 0x0008 */ SetSecurity;
      struct // _TAG_UNNAMED_39
      {
        /* 0x0004 */ struct _VPB* Vpb;
        /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0008 */ MountVolume;
      struct // _TAG_UNNAMED_39
      {
        /* 0x0004 */ struct _VPB* Vpb;
        /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0008 */ VerifyVolume;
      struct // _TAG_UNNAMED_40
      {
        /* 0x0004 */ struct _SCSI_REQUEST_BLOCK* Srb;
      } /* size: 0x0004 */ Scsi;
      struct // _TAG_UNNAMED_41
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ void* StartSid;
        /* 0x000c */ struct _FILE_GET_QUOTA_INFORMATION* SidList;
        /* 0x0010 */ unsigned long SidListLength;
      } /* size: 0x0010 */ QueryQuota;
      struct // _TAG_UNNAMED_32
      {
        /* 0x0004 */ unsigned long Length;
      } /* size: 0x0004 */ SetQuota;
      struct // _TAG_UNNAMED_42
      {
        /* 0x0004 */ enum _DEVICE_RELATION_TYPE Type;
      } /* size: 0x0004 */ QueryDeviceRelations;
      struct // _TAG_UNNAMED_43
      {
        /* 0x0004 */ const struct _GUID* InterfaceType;
        /* 0x0008 */ unsigned short Size;
        /* 0x000a */ unsigned short Version;
        /* 0x000c */ struct _INTERFACE* Interface;
        /* 0x0010 */ void* InterfaceSpecificData;
      } /* size: 0x0010 */ QueryInterface;
      struct // _TAG_UNNAMED_44
      {
        /* 0x0004 */ struct _DEVICE_CAPABILITIES* Capabilities;
      } /* size: 0x0004 */ DeviceCapabilities;
      struct // _TAG_UNNAMED_45
      {
        /* 0x0004 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* IoResourceRequirementList;
      } /* size: 0x0004 */ FilterResourceRequirements;
      struct // _TAG_UNNAMED_46
      {
        /* 0x0004 */ unsigned long WhichSpace;
        /* 0x0008 */ void* Buffer;
        /* 0x000c */ unsigned long Offset;
        /* 0x0010 */ unsigned long Length;
      } /* size: 0x0010 */ ReadWriteConfig;
      struct // _TAG_UNNAMED_47
      {
        /* 0x0004 */ unsigned char Lock;
      } /* size: 0x0001 */ SetLock;
      struct // _TAG_UNNAMED_48
      {
        /* 0x0004 */ enum BUS_QUERY_ID_TYPE IdType;
      } /* size: 0x0004 */ QueryId;
      struct // _TAG_UNNAMED_49
      {
        /* 0x0004 */ enum DEVICE_TEXT_TYPE DeviceTextType;
        /* 0x0008 */ unsigned long LocaleId;
      } /* size: 0x0008 */ QueryDeviceText;
      struct // _TAG_UNNAMED_50
      {
        /* 0x0004 */ unsigned char InPath;
        /* 0x0005 */ unsigned char Reserved[3];
        /* 0x0008 */ enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;
      } /* size: 0x0008 */ UsageNotification;
      struct // _TAG_UNNAMED_51
      {
        /* 0x0004 */ enum _SYSTEM_POWER_STATE PowerState;
      } /* size: 0x0004 */ WaitWake;
      struct // _TAG_UNNAMED_52
      {
        /* 0x0004 */ struct _POWER_SEQUENCE* PowerSequence;
      } /* size: 0x0004 */ PowerSequence;
      struct // _TAG_UNNAMED_53
      {
        union
        {
          /* 0x0004 */ unsigned long SystemContext;
          /* 0x0004 */ struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
        }; /* size: 0x0004 */
        /* 0x0008 */ enum _POWER_STATE_TYPE Type;
        /* 0x000c */ union _POWER_STATE State;
        /* 0x0010 */ enum POWER_ACTION ShutdownType;
      } /* size: 0x0010 */ Power;
      struct // _TAG_UNNAMED_54
      {
        /* 0x0004 */ struct _CM_RESOURCE_LIST* AllocatedResources;
        /* 0x0008 */ struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
      } /* size: 0x0008 */ StartDevice;
      struct // _TAG_UNNAMED_55
      {
        /* 0x0004 */ unsigned long ProviderId;
        /* 0x0008 */ void* DataPath;
        /* 0x000c */ unsigned long BufferSize;
        /* 0x0010 */ void* Buffer;
      } /* size: 0x0010 */ WMI;
      struct // _TAG_UNNAMED_56
      {
        /* 0x0004 */ void* Argument1;
        /* 0x0008 */ void* Argument2;
        /* 0x000c */ void* Argument3;
        /* 0x0010 */ void* Argument4;
      } /* size: 0x0010 */ Others;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ Parameters;
  /* 0x0014 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0018 */ struct _FILE_OBJECT* FileObject;
  /* 0x001c */ void* CompletionRoutine /* function */;
  /* 0x0020 */ void* Context;
} IO_STACK_LOCATION, *PIO_STACK_LOCATION; /* size: 0x0024 */

typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0008 */

struct _IO_TIMER;

typedef struct _IRP
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _MDL* MdlAddress;
  /* 0x0008 */ unsigned long Flags;
  union // _TAG_UNNAMED_57
  {
    union
    {
      /* 0x000c */ struct _IRP* MasterIrp;
      /* 0x000c */ long IrpCount;
      /* 0x000c */ void* SystemBuffer;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ AssociatedIrp;
  /* 0x0010 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0018 */ struct _IO_STATUS_BLOCK IoStatus;
  /* 0x0020 */ char RequestorMode;
  /* 0x0021 */ unsigned char PendingReturned;
  /* 0x0022 */ char StackCount;
  /* 0x0023 */ char CurrentLocation;
  /* 0x0024 */ unsigned char Cancel;
  /* 0x0025 */ unsigned char CancelIrql;
  /* 0x0026 */ char ApcEnvironment;
  /* 0x0027 */ unsigned char AllocationFlags;
  /* 0x0028 */ struct _IO_STATUS_BLOCK* UserIosb;
  /* 0x002c */ struct _KEVENT* UserEvent;
  union // _TAG_UNNAMED_58
  {
    union
    {
      struct // _TAG_UNNAMED_59
      {
        union
        {
          /* 0x0030 */ void* UserApcRoutine /* function */;
          /* 0x0030 */ void* IssuingProcess;
        }; /* size: 0x0004 */
        /* 0x0034 */ void* UserApcContext;
      } /* size: 0x0008 */ AsynchronousParameters;
      /* 0x0030 */ union _LARGE_INTEGER AllocationSize;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Overlay;
  /* 0x0038 */ void* CancelRoutine /* function */;
  /* 0x003c */ void* UserBuffer;
  union // _TAG_UNNAMED_60
  {
    union
    {
      struct // _TAG_UNNAMED_61
      {
        union
        {
          /* 0x0040 */ struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
          /* 0x0040 */ void* DriverContext[4];
        }; /* size: 0x0010 */
        /* 0x0050 */ struct _ETHREAD* Thread;
        /* 0x0054 */ char* AuxiliaryBuffer;
        /* 0x0058 */ struct _LIST_ENTRY ListEntry;
        union
        {
          /* 0x0060 */ struct _IO_STACK_LOCATION* CurrentStackLocation;
          /* 0x0060 */ unsigned long PacketType;
        }; /* size: 0x0004 */
        /* 0x0064 */ struct _FILE_OBJECT* OriginalFileObject;
      } /* size: 0x0028 */ Overlay;
      /* 0x0040 */ struct _KAPC Apc;
      /* 0x0040 */ void* CompletionKey;
    }; /* size: 0x0030 */
  } /* size: 0x0030 */ Tail;
} IRP, *PIRP; /* size: 0x0070 */

typedef enum _IRQ_DEVICE_POLICY
{
  IrqPolicyMachineDefault = 0,
  IrqPolicyAllCloseProcessors = 1,
  IrqPolicyOneCloseProcessor = 2,
  IrqPolicyAllProcessorsInMachine = 3,
  IrqPolicySpecifiedProcessors = 4,
  IrqPolicySpreadMessagesAcrossAllProcessors = 5,
} IRQ_DEVICE_POLICY, *PIRQ_DEVICE_POLICY;

typedef enum _IRQ_PRIORITY
{
  IrqPriorityUndefined = 0,
  IrqPriorityLow = 1,
  IrqPriorityNormal = 2,
  IrqPriorityHigh = 3,
} IRQ_PRIORITY, *PIRQ_PRIORITY;

typedef struct _ISA_VECTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char Bus;
  /* 0x0003 */ unsigned char Source;
  /* 0x0004 */ unsigned long GlobalSystemInterruptVector;
  /* 0x0008 */ unsigned short Flags;
} ISA_VECTOR, *PISA_VECTOR; /* size: 0x000a */

typedef struct _KAPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char SpareByte0;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char SpareByte1;
  /* 0x0004 */ unsigned long SpareLong0;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x000c */ struct _LIST_ENTRY ApcListEntry;
  /* 0x0014 */ void* KernelRoutine /* function */;
  /* 0x0018 */ void* RundownRoutine /* function */;
  /* 0x001c */ void* NormalRoutine /* function */;
  /* 0x0020 */ void* NormalContext;
  /* 0x0024 */ void* SystemArgument1;
  /* 0x0028 */ void* SystemArgument2;
  /* 0x002c */ char ApcStateIndex;
  /* 0x002d */ char ApcMode;
  /* 0x002e */ unsigned char Inserted;
  /* 0x002f */ char __PADDING__[1];
} KAPC, *PKAPC; /* size: 0x0030 */

typedef struct _KDEVICE_QUEUE
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ struct _LIST_ENTRY DeviceListHead;
  /* 0x000c */ unsigned long Lock;
  /* 0x0010 */ unsigned char Busy;
  /* 0x0011 */ char __PADDING__[3];
} KDEVICE_QUEUE, *PKDEVICE_QUEUE; /* size: 0x0014 */

typedef struct _KDEVICE_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY DeviceListEntry;
  /* 0x0008 */ unsigned long SortKey;
  /* 0x000c */ unsigned char Inserted;
  /* 0x000d */ char __PADDING__[3];
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY; /* size: 0x0010 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ unsigned short Number;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

struct _KPROCESS;

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ long Limit;
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0014 */

typedef enum _KSPIN_LOCK_QUEUE_NUMBER
{
  LockQueueDispatcherLock = 0,
  LockQueueExpansionLock = 1,
  LockQueuePfnLock = 2,
  LockQueueSystemSpaceLock = 3,
  LockQueueVacbLock = 4,
  LockQueueMasterLock = 5,
  LockQueueNonPagedPoolLock = 6,
  LockQueueIoCancelLock = 7,
  LockQueueWorkQueueLock = 8,
  LockQueueIoVpbLock = 9,
  LockQueueIoDatabaseLock = 10,
  LockQueueIoCompletionLock = 11,
  LockQueueNtfsStructLock = 12,
  LockQueueAfdWorkQueueLock = 13,
  LockQueueBcbLock = 14,
  LockQueueMmNonPagedPoolLock = 15,
  LockQueueUnusedSpare16 = 16,
  LockQueueTimerTableLock = 17,
  LockQueueMaximumLock = 33,
} KSPIN_LOCK_QUEUE_NUMBER, *PKSPIN_LOCK_QUEUE_NUMBER;

struct _KTHREAD;

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_62
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _LOCAL_NMISOURCE
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ProcessorID;
  /* 0x0003 */ unsigned short Flags;
  /* 0x0005 */ unsigned char LINTIN;
} LOCAL_NMISOURCE, *PLOCAL_NMISOURCE; /* size: 0x0006 */

typedef struct _LOOKASIDE_LIST_EX
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE_POOL L;
} LOOKASIDE_LIST_EX, *PLOOKASIDE_LIST_EX; /* size: 0x0048 */

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _LUID_AND_ATTRIBUTES
{
  /* 0x0000 */ struct _LUID Luid;
  /* 0x0008 */ unsigned long Attributes;
} LUID_AND_ATTRIBUTES, *PLUID_AND_ATTRIBUTES; /* size: 0x000c */

typedef struct _MAPIC
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long LocalAPICAddress;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ unsigned long APICTables[1];
} MAPIC, *PMAPIC; /* size: 0x0030 */

typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0004 */ short Size;
  /* 0x0006 */ short MdlFlags;
  /* 0x0008 */ struct _EPROCESS* Process;
  /* 0x000c */ void* MappedSystemVa;
  /* 0x0010 */ void* StartVa;
  /* 0x0014 */ unsigned long ByteCount;
  /* 0x0018 */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x001c */

typedef enum _MEMORY_CACHING_TYPE_ORIG
{
  MmFrameBufferCached = 2,
} MEMORY_CACHING_TYPE_ORIG, *PMEMORY_CACHING_TYPE_ORIG;

typedef struct _NPAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE L;
  /* 0x0048 */ unsigned long Lock__ObsoleteButDoNotDelete;
  /* 0x004c */ long __PADDING__[1];
} NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST; /* size: 0x0050 */

typedef struct _OBJECT_ATTRIBUTES
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ void* RootDirectory;
  /* 0x0008 */ struct _UNICODE_STRING* ObjectName;
  /* 0x000c */ unsigned long Attributes;
  /* 0x0010 */ void* SecurityDescriptor;
  /* 0x0014 */ void* SecurityQualityOfService;
} OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES; /* size: 0x0018 */

struct _OBJECT_TYPE;

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned long OwnerThread;
  union
  {
    /* 0x0004 */ long OwnerCount;
    /* 0x0004 */ unsigned long TableSize;
  }; /* size: 0x0004 */
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0008 */

typedef struct _PAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE L;
  /* 0x0048 */ struct _FAST_MUTEX Lock__ObsoleteButDoNotDelete;
} PAGED_LOOKASIDE_LIST, *PPAGED_LOOKASIDE_LIST; /* size: 0x0068 */

typedef struct _PCIE_DEVICE_ID
{
  /* 0x0000 */ unsigned short VendorID;
  /* 0x0002 */ unsigned short DeviceID;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long ClassCode : 24; /* bit position: 0 */
    /* 0x0004 */ unsigned long FunctionNumber : 8; /* bit position: 24 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long DeviceNumber : 8; /* bit position: 0 */
    /* 0x0008 */ unsigned long Segment : 16; /* bit position: 8 */
    /* 0x0008 */ unsigned long PrimaryBusNumber : 8; /* bit position: 24 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x000c */ unsigned long SecondaryBusNumber : 8; /* bit position: 0 */
    /* 0x000c */ unsigned long Reserved1 : 2; /* bit position: 8 */
    /* 0x000c */ unsigned long SlotNumber : 14; /* bit position: 10 */
    /* 0x000c */ unsigned long Reserved2 : 8; /* bit position: 24 */
  }; /* bitfield */
} PCIE_DEVICE_ID, *PPCIE_DEVICE_ID; /* size: 0x0010 */

typedef struct _PLATFORM_INTERRUPT
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned char InterruptType;
  /* 0x0005 */ unsigned char APICID;
  /* 0x0006 */ unsigned char ACPIEID;
  /* 0x0007 */ unsigned char IOSAPICVector;
  /* 0x0008 */ unsigned long GlobalVector;
  /* 0x000c */ unsigned long Reserved;
} PLATFORM_INTERRUPT, *PPLATFORM_INTERRUPT; /* size: 0x0010 */

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _POWER_SEQUENCE
{
  /* 0x0000 */ unsigned long SequenceD1;
  /* 0x0004 */ unsigned long SequenceD2;
  /* 0x0008 */ unsigned long SequenceD3;
} POWER_SEQUENCE, *PPOWER_SEQUENCE; /* size: 0x000c */

typedef union _POWER_STATE
{
  union
  {
    /* 0x0000 */ enum _SYSTEM_POWER_STATE SystemState;
    /* 0x0000 */ enum _DEVICE_POWER_STATE DeviceState;
  }; /* size: 0x0004 */
} POWER_STATE, *PPOWER_STATE; /* size: 0x0004 */

typedef enum _POWER_STATE_TYPE
{
  SystemPowerState = 0,
  DevicePowerState = 1,
} POWER_STATE_TYPE, *PPOWER_STATE_TYPE;

typedef struct _PRIVILEGE_SET
{
  /* 0x0000 */ unsigned long PrivilegeCount;
  /* 0x0004 */ unsigned long Control;
  /* 0x0008 */ struct _LUID_AND_ATTRIBUTES Privilege[1];
} PRIVILEGE_SET, *PPRIVILEGE_SET; /* size: 0x0014 */

typedef struct _PROCLOCALAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ACPIProcessorID;
  /* 0x0003 */ unsigned char APICID;
  /* 0x0004 */ unsigned long Flags;
} PROCLOCALAPIC, *PPROCLOCALAPIC; /* size: 0x0008 */

typedef struct _PROCLOCALSAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ACPIProcessorID;
  /* 0x0003 */ unsigned char APICID;
  /* 0x0004 */ unsigned char APICEID;
  /* 0x0005 */ unsigned char Reserved[3];
  /* 0x0008 */ unsigned long Flags;
} PROCLOCALSAPIC, *PPROCLOCALSAPIC; /* size: 0x000c */

typedef enum _REG_NOTIFY_CLASS
{
  RegNtDeleteKey = 0,
  RegNtPreDeleteKey = 0,
  RegNtSetValueKey = 1,
  RegNtPreSetValueKey = 1,
  RegNtDeleteValueKey = 2,
  RegNtPreDeleteValueKey = 2,
  RegNtSetInformationKey = 3,
  RegNtPreSetInformationKey = 3,
  RegNtRenameKey = 4,
  RegNtPreRenameKey = 4,
  RegNtEnumerateKey = 5,
  RegNtPreEnumerateKey = 5,
  RegNtEnumerateValueKey = 6,
  RegNtPreEnumerateValueKey = 6,
  RegNtQueryKey = 7,
  RegNtPreQueryKey = 7,
  RegNtQueryValueKey = 8,
  RegNtPreQueryValueKey = 8,
  RegNtQueryMultipleValueKey = 9,
  RegNtPreQueryMultipleValueKey = 9,
  RegNtPreCreateKey = 10,
  RegNtPostCreateKey = 11,
  RegNtPreOpenKey = 12,
  RegNtPostOpenKey = 13,
  RegNtKeyHandleClose = 14,
  RegNtPreKeyHandleClose = 14,
  RegNtPostDeleteKey = 15,
  RegNtPostSetValueKey = 16,
  RegNtPostDeleteValueKey = 17,
  RegNtPostSetInformationKey = 18,
  RegNtPostRenameKey = 19,
  RegNtPostEnumerateKey = 20,
  RegNtPostEnumerateValueKey = 21,
  RegNtPostQueryKey = 22,
  RegNtPostQueryValueKey = 23,
  RegNtPostQueryMultipleValueKey = 24,
  RegNtPostKeyHandleClose = 25,
  RegNtPreCreateKeyEx = 26,
  RegNtPostCreateKeyEx = 27,
  RegNtPreOpenKeyEx = 28,
  RegNtPostOpenKeyEx = 29,
  RegNtPreFlushKey = 30,
  RegNtPostFlushKey = 31,
  RegNtPreLoadKey = 32,
  RegNtPostLoadKey = 33,
  RegNtPreUnLoadKey = 34,
  RegNtPostUnLoadKey = 35,
  RegNtPreQueryKeySecurity = 36,
  RegNtPostQueryKeySecurity = 37,
  RegNtPreSetKeySecurity = 38,
  RegNtPostSetKeySecurity = 39,
  RegNtCallbackObjectContextCleanup = 40,
  MaxRegNtNotifyClass = 41,
} REG_NOTIFY_CLASS, *PREG_NOTIFY_CLASS;

typedef struct _RSDP
{
  /* 0x0000 */ unsigned __int64 Signature;
  /* 0x0008 */ unsigned char Checksum;
  /* 0x0009 */ unsigned char OEMID[6];
  /* 0x000f */ unsigned char Revision;
  /* 0x0010 */ unsigned long RsdtAddress;
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ union _LARGE_INTEGER XsdtAddress;
  /* 0x0020 */ unsigned char XChecksum;
  /* 0x0021 */ unsigned char Reserved[3];
} RSDP, *PRSDP; /* size: 0x0024 */

typedef struct _RSDT_32
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long Tables[1];
} RSDT_32, *PRSDT_32; /* size: 0x0028 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _SCATTER_GATHER_ELEMENT
{
  /* 0x0000 */ union _LARGE_INTEGER Address;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ unsigned long Reserved;
} SCATTER_GATHER_ELEMENT, *PSCATTER_GATHER_ELEMENT; /* size: 0x0010 */

typedef struct _SCATTER_GATHER_LIST
{
  /* 0x0000 */ unsigned long NumberOfElements;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ struct _SCATTER_GATHER_ELEMENT* Elements /* zero-length array */;
} SCATTER_GATHER_LIST, *PSCATTER_GATHER_LIST; /* size: 0x0008 */

struct _SCSI_REQUEST_BLOCK;

typedef struct _SECTION_OBJECT_POINTERS
{
  /* 0x0000 */ void* DataSectionObject;
  /* 0x0004 */ void* SharedCacheMap;
  /* 0x0008 */ void* ImageSectionObject;
} SECTION_OBJECT_POINTERS, *PSECTION_OBJECT_POINTERS; /* size: 0x000c */

typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SECURITY_QUALITY_OF_SERVICE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ unsigned char ContextTrackingMode;
  /* 0x0009 */ unsigned char EffectiveOnly;
  /* 0x000a */ char __PADDING__[2];
} SECURITY_QUALITY_OF_SERVICE, *PSECURITY_QUALITY_OF_SERVICE; /* size: 0x000c */

typedef struct _SECURITY_SUBJECT_CONTEXT
{
  /* 0x0000 */ void* ClientToken;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ void* PrimaryToken;
  /* 0x000c */ void* ProcessAuditId;
} SECURITY_SUBJECT_CONTEXT, *PSECURITY_SUBJECT_CONTEXT; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ char* Buffer;
} STRING, *PSTRING; /* size: 0x0008 */

typedef enum _SYSTEM_POWER_STATE
{
  PowerSystemUnspecified = 0,
  PowerSystemWorking = 1,
  PowerSystemSleeping1 = 2,
  PowerSystemSleeping2 = 3,
  PowerSystemSleeping3 = 4,
  PowerSystemHibernate = 5,
  PowerSystemShutdown = 6,
  PowerSystemMaximum = 7,
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;

typedef struct _SYSTEM_POWER_STATE_CONTEXT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Reserved1 : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long TargetSystemState : 4; /* bit position: 8 */
      /* 0x0000 */ unsigned long EffectiveSystemState : 4; /* bit position: 12 */
      /* 0x0000 */ unsigned long CurrentSystemState : 4; /* bit position: 16 */
      /* 0x0000 */ unsigned long IgnoreHibernationPath : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned long Reserved2 : 11; /* bit position: 21 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long ContextAsUlong;
  }; /* size: 0x0004 */
} SYSTEM_POWER_STATE_CONTEXT, *PSYSTEM_POWER_STATE_CONTEXT; /* size: 0x0004 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_63
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _VPB
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short VolumeLabelLength;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x000c */ struct _DEVICE_OBJECT* RealDevice;
  /* 0x0010 */ unsigned long SerialNumber;
  /* 0x0014 */ unsigned long ReferenceCount;
  /* 0x0018 */ wchar_t VolumeLabel[32];
} VPB, *PVPB; /* size: 0x0058 */

typedef struct _WAIT_CONTEXT_BLOCK
{
  /* 0x0000 */ struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
  /* 0x0010 */ void* DeviceRoutine /* function */;
  /* 0x0014 */ void* DeviceContext;
  /* 0x0018 */ unsigned long NumberOfMapRegisters;
  /* 0x001c */ void* DeviceObject;
  /* 0x0020 */ void* CurrentIrp;
  /* 0x0024 */ struct _KDPC* BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK; /* size: 0x0028 */

typedef struct _WHEA_ERROR_PACKET
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned __int64 Size;
  /* 0x0010 */ unsigned __int64 RawDataLength;
  /* 0x0018 */ unsigned __int64 Context;
  /* 0x0020 */ enum _WHEA_ERROR_TYPE ErrorType;
  /* 0x0024 */ enum _WHEA_ERROR_SEVERITY ErrorSeverity;
  /* 0x0028 */ unsigned long ErrorSourceId;
  /* 0x002c */ enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
  /* 0x0030 */ unsigned long Reserved1;
  /* 0x0034 */ unsigned long Version;
  /* 0x0038 */ unsigned __int64 Cpu;
  union // _TAG_UNNAMED_64
  {
    union
    {
      /* 0x0040 */ struct _WHEA_GENERIC_PROCESSOR_ERROR ProcessorError;
      /* 0x0040 */ struct _WHEA_MEMORY_ERROR MemoryError;
      /* 0x0040 */ struct _WHEA_NMI_ERROR NmiError;
      /* 0x0040 */ struct _WHEA_PCIEXPRESS_ERROR PciExpressError;
      /* 0x0040 */ struct _WHEA_PCIX_BUS_ERROR PciXBusError;
      /* 0x0040 */ struct _WHEA_PCIX_DEVICE_ERROR PciXDeviceError;
    }; /* size: 0x00d0 */
  } /* size: 0x00d0 */ u;
  /* 0x0110 */ enum _WHEA_ERROR_STATUS_FORMAT RawDataFormat;
  /* 0x0114 */ unsigned long Reserved2;
  /* 0x0118 */ unsigned char RawData[1];
} WHEA_ERROR_PACKET, *PWHEA_ERROR_PACKET; /* size: 0x0119 */

typedef struct _WHEA_ERROR_RECORD
{
  /* 0x0000 */ struct _WHEA_ERROR_RECORD_HEADER Header;
  /* 0x0088 */ struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];
} WHEA_ERROR_RECORD, *PWHEA_ERROR_RECORD; /* size: 0x00d0 */

typedef struct _WHEA_ERROR_RECORD_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned short Revision;
  /* 0x0006 */ unsigned short Reserved1;
  /* 0x0008 */ unsigned short Reserved2;
  /* 0x000a */ unsigned short SectionCount;
  /* 0x000c */ enum _WHEA_ERROR_SEVERITY Severity;
  /* 0x0010 */ unsigned long ValidationBits;
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ union _LARGE_INTEGER Timestamp;
  /* 0x0020 */ struct _GUID PlatformId;
  /* 0x0030 */ struct _GUID PartitionId;
  /* 0x0040 */ struct _GUID CreatorId;
  /* 0x0050 */ struct _GUID NotifyType;
  /* 0x0060 */ unsigned __int64 RecordId;
  /* 0x0068 */ unsigned long Flags;
  /* 0x0070 */ struct _WHEA_PERSISTENCE_INFO PersistenceInfo;
  /* 0x0078 */ unsigned char Reserved3[12];
  /* 0x0084 */ long __PADDING__[1];
} WHEA_ERROR_RECORD_HEADER, *PWHEA_ERROR_RECORD_HEADER; /* size: 0x0088 */

typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
{
  /* 0x0000 */ unsigned long SectionOffset;
  /* 0x0004 */ unsigned long SectionLength;
  /* 0x0008 */ unsigned short Revision;
  /* 0x000a */ unsigned char ValidationBits;
  /* 0x000b */ unsigned char Reserved;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ struct _GUID SectionType;
  /* 0x0020 */ struct _GUID FRUId;
  /* 0x0030 */ enum _WHEA_ERROR_SEVERITY SectionSeverity;
  /* 0x0034 */ char FRUText[20];
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR; /* size: 0x0048 */

typedef enum _WHEA_ERROR_SEVERITY
{
  WheaErrSevRecoverable = 0,
  WheaErrSevFatal = 1,
  WheaErrSevCorrected = 2,
  WheaErrSevNone = 3,
} WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;

typedef enum _WHEA_ERROR_SOURCE_TYPE
{
  WheaErrSrcTypeMCE = 0,
  WheaErrSrcTypeCMC = 1,
  WheaErrSrcTypeCPE = 2,
  WheaErrSrcTypeNMI = 3,
  WheaErrSrcTypePCIe = 4,
  WheaErrSrcTypeOther = 5,
  WheaErrSrcTypeMax = 6,
} WHEA_ERROR_SOURCE_TYPE, *PWHEA_ERROR_SOURCE_TYPE;

typedef struct _WHEA_ERROR_STATUS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Reserved1 : 8; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ErrorType : 8; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Address : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 Control : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned __int64 Data : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned __int64 Responder : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned __int64 Requester : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned __int64 FirstError : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned __int64 Overflow : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned __int64 Reserved2 : 41; /* bit position: 23 */
  }; /* bitfield */
} WHEA_ERROR_STATUS, *PWHEA_ERROR_STATUS; /* size: 0x0008 */

typedef enum _WHEA_ERROR_STATUS_FORMAT
{
  WheaErrorStatusFormatIPFSalRecord = 0,
  WheaErrorStatusFormatIA32MCA = 1,
  WheaErrorStatusFormatEM64TMCA = 2,
  WheaErrorStatusFormatAMD64MCA = 3,
  WheaErrorStatusFormatPCIExpress = 4,
  WheaErrorStatusFormatNMIPort = 5,
  WheaErrorStatusFormatOther = 6,
  WheaErrorStatusFormatMax = 7,
} WHEA_ERROR_STATUS_FORMAT, *PWHEA_ERROR_STATUS_FORMAT;

typedef enum _WHEA_ERROR_TYPE
{
  WheaErrTypeProcessor = 0,
  WheaErrTypeMemory = 1,
  WheaErrTypePCIExpress = 2,
  WheaErrTypeNMI = 3,
  WheaErrTypePCIXBus = 4,
  WheaErrTypePCIXDevice = 5,
} WHEA_ERROR_TYPE, *PWHEA_ERROR_TYPE;

typedef struct _WHEA_GENERIC_PROCESSOR_ERROR
{
  /* 0x0000 */ unsigned __int64 ValidBits;
  /* 0x0008 */ unsigned char ProcessorType;
  /* 0x0009 */ unsigned char InstructionSet;
  /* 0x000a */ unsigned char ErrorType;
  /* 0x000b */ unsigned char Operation;
  /* 0x000c */ unsigned char Flags;
  /* 0x000d */ unsigned char Level;
  /* 0x000e */ unsigned short Reserved;
  /* 0x0010 */ unsigned __int64 CPUVersion;
  /* 0x0018 */ unsigned char CPUBrandString[128];
  /* 0x0098 */ unsigned __int64 ProcessorId;
  /* 0x00a0 */ unsigned __int64 TargetAddress;
  /* 0x00a8 */ unsigned __int64 RequestorId;
  /* 0x00b0 */ unsigned __int64 ResponderId;
  /* 0x00b8 */ unsigned __int64 InstructionPointer;
} WHEA_GENERIC_PROCESSOR_ERROR, *PWHEA_GENERIC_PROCESSOR_ERROR; /* size: 0x00c0 */

typedef struct _WHEA_MEMORY_ERROR
{
  /* 0x0000 */ unsigned __int64 ValidationBits;
  /* 0x0008 */ struct _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned __int64 PhysicalAddress;
  /* 0x0018 */ unsigned __int64 PhysicalAddressMask;
  /* 0x0020 */ unsigned short Node;
  /* 0x0022 */ unsigned short Card;
  /* 0x0024 */ unsigned short Module;
  /* 0x0026 */ unsigned short Bank;
  /* 0x0028 */ unsigned short Device;
  /* 0x002a */ unsigned short Row;
  /* 0x002c */ unsigned short Column;
  /* 0x002e */ unsigned short BitPosition;
  /* 0x0030 */ unsigned __int64 RequestorId;
  /* 0x0038 */ unsigned __int64 ResponderId;
  /* 0x0040 */ unsigned __int64 TargetId;
  /* 0x0048 */ unsigned char ErrorType;
  /* 0x0049 */ char __PADDING__[7];
} WHEA_MEMORY_ERROR, *PWHEA_MEMORY_ERROR; /* size: 0x0050 */

typedef struct _WHEA_NMI_ERROR
{
  /* 0x0000 */ unsigned char Data[8];
} WHEA_NMI_ERROR, *PWHEA_NMI_ERROR; /* size: 0x0008 */

typedef struct _WHEA_PCIEXPRESS_ERROR
{
  /* 0x0000 */ unsigned __int64 ValidationBits;
  /* 0x0008 */ enum PCI_EXPRESS_DEVICE_TYPE PortType;
  /* 0x000c */ unsigned long Version;
  /* 0x0010 */ unsigned long CommandStatus;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ struct _PCIE_DEVICE_ID DeviceId;
  /* 0x0028 */ unsigned __int64 DeviceSN;
  /* 0x0030 */ unsigned long BridgeCtrlSts;
  /* 0x0034 */ unsigned char ExpressCapability[60];
  /* 0x0070 */ unsigned char AerInfo[96];
} WHEA_PCIEXPRESS_ERROR, *PWHEA_PCIEXPRESS_ERROR; /* size: 0x00d0 */

typedef struct _WHEA_PCIX_BUS_ERROR
{
  /* 0x0000 */ struct _WHEA_PCIX_BUS_VALIDATION_BITS ValidationBits;
  /* 0x0008 */ struct _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned short ErrorType;
  /* 0x0012 */ unsigned short BusId;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ unsigned __int64 BusAddress;
  /* 0x0020 */ unsigned __int64 BusData;
  /* 0x0028 */ unsigned __int64 BusCommand;
  /* 0x0030 */ unsigned __int64 BusRequestorId;
  /* 0x0038 */ unsigned __int64 BusCompleterId;
  /* 0x0040 */ unsigned __int64 TargetId;
} WHEA_PCIX_BUS_ERROR, *PWHEA_PCIX_BUS_ERROR; /* size: 0x0048 */

typedef struct _WHEA_PCIX_BUS_VALIDATION_BITS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 ErrorStatusValid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ErrorTypeValid : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 BusIdValid : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 BusAddressValid : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 BusDataValid : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 CommandValid : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 RequestorIdValid : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 CompleterIdValid : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 TargetIdValid : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Reserved : 55; /* bit position: 9 */
  }; /* bitfield */
} WHEA_PCIX_BUS_VALIDATION_BITS, *PWHEA_PCIX_BUS_VALIDATION_BITS; /* size: 0x0008 */

typedef struct _WHEA_PCIX_DEVICE_ERROR
{
  /* 0x0000 */ struct _WHEA_PCIX_DEV_VALIDATION_BITS ValidationBits;
  /* 0x0008 */ struct _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned char IdInfo[16];
  /* 0x0020 */ unsigned long MemoryNumber;
  /* 0x0024 */ unsigned long IoNumber;
  /* 0x0028 */ unsigned char RegisterDataPairs[64];
} WHEA_PCIX_DEVICE_ERROR, *PWHEA_PCIX_DEVICE_ERROR; /* size: 0x0068 */

typedef struct _WHEA_PCIX_DEV_VALIDATION_BITS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 ErrorStatusValid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 IdInfoValid : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 MemoryNumberValid : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 IoNumberValid : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 RegisterDataPairValid : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Reserved : 59; /* bit position: 5 */
  }; /* bitfield */
} WHEA_PCIX_DEV_VALIDATION_BITS, *PWHEA_PCIX_DEV_VALIDATION_BITS; /* size: 0x0008 */

typedef struct _WHEA_PERSISTENCE_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Identifier : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Length : 24; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 Reserved : 6; /* bit position: 40 */
    /* 0x0000 */ unsigned __int64 Attributes : 2; /* bit position: 46 */
    /* 0x0000 */ unsigned __int64 Signature : 16; /* bit position: 48 */
  }; /* bitfield */
} WHEA_PERSISTENCE_INFO, *PWHEA_PERSISTENCE_INFO; /* size: 0x0008 */

/*
@HalClearSoftwareInterrupt@4
@HalRequestSoftwareInterrupt@4
@HalSystemVectorDispatchEntry@12
@HalpAcpiFlushCache@0
@HalpAcquireHighLevelLock@4
@HalpCheckForSoftwareInterrupt@8
@HalpComplete440BXWorkaround@4
@HalpGenerateInterrupt@4
@HalpIoDelay@0
@HalpLowerIrqlHardwareInterrupts@4
@HalpReleaseHighLevelLock@8
@HalpSendFlatIpi@8
@HalpSendIpi@8
@HalpSendNodeIpi32@8
@HalpSendNodeIpi64@8
@HalpSendPhysicalIpi@8
@HalpSetup440BXWorkaround@0
@HalpWaitForPending@8
@KeAcquireInStackQueuedSpinLock@8
@KeAcquireInStackQueuedSpinLockRaiseToSynch@8
@KeAcquireQueuedSpinLock@4
@KeAcquireQueuedSpinLockRaiseToSynch@4
@KeAcquireSpinLockRaiseToSynch@4
@KeAcquireSpinLockRaiseToSynchMCE@4
@KeReleaseInStackQueuedSpinLock@4
@KeReleaseQueuedSpinLock@8
@KeTryToAcquireQueuedSpinLock@8
@KeTryToAcquireQueuedSpinLockRaiseToSynch@8
@KfAcquireSpinLock@4
@KfLowerIrql@4
@KfRaiseIrql@4
@KfReleaseSpinLock@8
@KiAcquireSpinLock@4
@KiCheckForSListAddress@4
@KiReleaseSpinLock@4
@RDMSR@4
@_EH4_CallFilterFunc@8
@_EH4_GlobalUnwind@4
@_EH4_LocalUnwind@16
@_EH4_TransferToHandler@8
@__security_check_cookie@4
PicHandler@0
PicNopHandler@0
PicSpuriousService37@0
_ArbDeleteMmConfigRange@0
_ArbInitializeMmConfigRange@4
_CMOS_READ@4
_CMOS_WRITE@8
_ConvertEfiToNtStatus@4
_DbgBreakPoint@0
_DbgPrint
_DetectAcpiMP@8
_EmClientQueryRuleState@8
_EmpProviderRegister@24
_GetPdeAddressEx@8
_GetPteAddress@8
_HalAcpiEmCheckOperator@12
_HalAcpiGetAllTablesDispatch@0
_HalAcpiGetFacsMappingDispatch@0
_HalAcpiGetRsdpDispatch@0
_HalAcpiGetTable@8
_HalAcpiGetTableDispatch@12
_HalAcquireDisplayOwnership@4
_HalAdjustResourceList@4
_HalAllProcessorsStarted@0
_HalAllocateAdapterChannel@16
_HalAllocateCommonBuffer@16
_HalAllocateCrashDumpRegisters@8
_HalAssignSlotResources@32
_HalBeginSystemInterrupt@12
_HalBugCheckSystem@4
_HalBuildMdlFromScatterGatherList@16
_HalBuildScatterGatherList@40
_HalCalculateScatterGatherListSize@24
_HalCalibratePerformanceCounter@12
_HalConvertDeviceIdtToIrql@4
_HalDisableInterrupt@4
_HalDisplayString@4
_HalDynamicProcessorStarted@8
_HalEfiGetEnvironmentVariable@20
_HalEfiSetEnvironmentVariable@20
_HalEnableInterrupt@4
_HalEndSystemInterrupt@8
_HalEnumerateEnvironmentVariablesEx@12
_HalFlushCommonBuffer@20
_HalFreeCommonBuffer@24
_HalGetAdapter@8
_HalGetBusData@20
_HalGetBusDataByOffset@24
_HalGetDmaAlignment@4
_HalGetEnvironmentVariable@12
_HalGetEnvironmentVariableEx@20
_HalGetInterruptTargetInformation@12
_HalGetInterruptVector@24
_HalGetMessageRoutingInfo@8
_HalGetScatterGatherList@32
_HalGetVectorInput@16
_HalHandleNMI@4
_HalInitApicInterruptHandlers@0
_HalInitSystem@8
_HalInitializeBios@8
_HalInitializeErrSrc@8
_HalInitializeMCA@8
_HalInitializeNMI@8
_HalInitializeProcessor@8
_HalMakeBeep@4
_HalMatchAcpiCreatorRevision@28
_HalMatchAcpiFADTBootArch@28
_HalMatchAcpiOemId@28
_HalMatchAcpiOemRevision@28
_HalMatchAcpiOemTableId@28
_HalMatchAcpiRevision@28
_HalProcessorIdle@0
_HalPutDmaAdapter@4
_HalPutScatterGatherList@12
_HalQueryDisplayParameters@16
_HalQueryRealTimeClock@4
_HalReadBootRegister@4
_HalReadDmaCounter@4
_HalRegisterErrataCallbacks@0
_HalReportResourceUsage@0
_HalRequestIpi@4
_HalReturnToFirmware@4
_HalSetBusData@20
_HalSetBusDataByOffset@24
_HalSetDisplayParameters@8
_HalSetEnvironmentVariable@8
_HalSetEnvironmentVariableEx@20
_HalSetProfileInterval@4
_HalSetRealTimeClock@4
_HalSetTimeIncrement@4
_HalStartDynamicProcessor@12
_HalStartNextProcessor@8
_HalStartProcessor@12
_HalStartProfileInterrupt@4
_HalStopProfileInterrupt@4
_HalTranslateBusAddress@24
_HalWriteBootRegister@4
_HalaAcpiTimerInit@8
_HalacpIrqTranslatorDereference@4
_HalacpiIrqTranslateResourceRequirementsIsa@20
_HalacpiIrqTranslateResourcesIsa@28
_HalacpiIrqTranslatorReference@4
_HaliAcpiMachineStateInit@8
_HaliAcpiQueryFlags@0
_HaliAcpiSleep@20
_HaliAcpiTimerCarry@0
_HaliAcpiTimerInit@8
_HaliGetDmaAdapter@12
_HaliGetInterruptTranslator@28
_HaliHaltSystem@0
_HaliHandlePCIConfigSpaceAccess@16
_HaliInitPnpDriver@0
_HaliInitPowerManagement@8
_HaliIsVectorValid@4
_HaliLocateHiberRanges@4
_HaliPciInterfaceReadConfig@24
_HaliPciInterfaceWriteConfig@24
_HaliQuerySystemInformation@16
_HaliSetMaxLegacyPciBusNumber@4
_HaliSetSystemInformation@12
_HaliSetWakeAlarm@12
_HaliSetWakeEnable@4
_HalpAcpiAllocateMemory@8
_HalpAcpiApplyFadtSettings@4
_HalpAcpiCacheOverrideTables@20
_HalpAcpiCacheTable@8
_HalpAcpiCalculateCacheSizeForOverrideTables@8
_HalpAcpiCheckAndMapTable@36
_HalpAcpiCopyBiosTable@16
_HalpAcpiDetectMachineSpecificActions@8
_HalpAcpiFallbackOnLegacyConfigMethod@8
_HalpAcpiFindRsdp@8
_HalpAcpiGetAllTables@4
_HalpAcpiGetAllTablesWork@4
_HalpAcpiGetCachedTable@12
_HalpAcpiGetFacsMapping@4
_HalpAcpiGetTable@16
_HalpAcpiGetTableFromBios@24
_HalpAcpiGetTableWork@16
_HalpAcpiIBMExaMatch@8
_HalpAcpiIBMVigilMatch@8
_HalpAcpiPicStateIntact@0
_HalpAcpiPostSleep@4
_HalpAcpiPreSleep@4
_HalpAcpiTableCacheInit@4
_HalpAcpiValidateAcpiTable@4
_HalpAcquireCmosSpinLock@0
_HalpAddAdapterToList@4
_HalpAddDevice@8
_HalpAddInterruptDest@8
_HalpAllocPhysicalMemory@16
_HalpAllocateAdapterCallback@16
_HalpAllocateAdapterEx@16
_HalpAllocateCR3Root@4
_HalpAllocateMapRegisters@16
_HalpApicRebootService@0
_HalpApicRestartProfileTimeInterrupt@0
_HalpApicSetProfileInterval@4
_HalpApicSpuriousService@0
_HalpApicStartProfileInterrupt@0
_HalpApicStopProfileInterrupt@0
_HalpAssignDriveLetters@16
_HalpAssignSlotResourcesStub@32
_HalpBiosDisplayReset@0
_HalpBroadcastCallService@0
_HalpBrokenPmTimerCalibratePerformanceCounter@12
_HalpBrokenPmTimerQueryPerformanceCounter@4
_HalpBrokenPmTimerRestorePerformanceCounter@0
_HalpBrokenPmTimerSavePerformanceCounter@0
_HalpBrokenPmTimerStallExecutionProcessor@4
_HalpBugCheckCallback@8
_HalpBuildAcpiResourceList@8
_HalpBuildIpiDestinationMap@4
_HalpBuildResumeStructures@0
_HalpBuildTiledCR3@4
_HalpBuildTiledCR3Ex@8
_HalpCheckFixedWakeSources@4
_HalpCheckLowMemoryPostSleep@12
_HalpCheckLowMemoryPreSleep@4
_HalpCheckPowerButton@0
_HalpCheckWakeupTimeAndAdjust@0
_HalpClearSlpSmiStsInICH@0
_HalpClockInterruptPn@0
_HalpCmcDispatchRoutine@4
_HalpCmcInit@4
_HalpCmcPollingDpcRoutine@16
_HalpCmcPollingWorkerRoutine@4
_HalpCmosNullReference@4
_HalpCmosRangeHandler@20
_HalpConsumeLowMemory@4
_HalpCopyBufferMap@20
_HalpCopyBufferMapSafe@20
_HalpCopyFirmwareAndRuntimeInformation@8
_HalpCpuID@20
_HalpDetectPmTimerDoubleFrequency@0
_HalpDeterminePmTimerSkew@28
_HalpDisablePicInti@4
_HalpDisableRedirEntry@8
_HalpDisableSystemInterrupt@16
_HalpDispatchPnp@8
_HalpDispatchPower@8
_HalpDispatchSoftwareInterrupt@8
_HalpDispatchSystemStateTransition@4
_HalpDispatchWmi@8
_HalpDmaFinalizeDoubleBufferingDisposition@0
_HalpDriverEntry@8
_HalpDynamicSystemResourceConfiguration@4
_HalpEfiInitialization@4
_HalpEnableLocalNmiSources@0
_HalpEnableNMI@0
_HalpEnablePerfInterupt@4
_HalpEnableRedirEntry@12
_HalpEnableSystemInterrupt@24
_HalpEndOfBoot@0
_HalpFDMANotificationCallback@8
_HalpFindBusAddressTranslation@24
_HalpFixupPhysicalIntiDestinations@8
_HalpFlushTLB@0
_HalpFreeNvsBuffers@0
_HalpFreePte@4
_HalpFreeResumeStructures@0
_HalpFreeTiledCR3@0
_HalpFreeTiledCR3Ex@4
_HalpGenerateConsistentPmTimerRead@0
_HalpGenericCall@12
_HalpGetAcpiStaticNumaTopology@4
_HalpGetAdapterMaximumPhysicalAddress@4
_HalpGetApicIdByProcessorNumber@8
_HalpGetApicInti@8
_HalpGetApicVersion@4
_HalpGetCPUVendor@0
_HalpGetChipHacks@16
_HalpGetCmosCenturyByte@0
_HalpGetCmosData@16
_HalpGetDisplayBiosInformation@0
_HalpGetEisaData@24
_HalpGetFeatureBits@0
_HalpGetHotPlugMemoryInfo@4
_HalpGetIoApicId@4
_HalpGetMcaLog@12
_HalpGetMceInformation@8
_HalpGetNMICrashFlag@0
_HalpGetNextProcessorApicId@8
_HalpGetPCIData@24
_HalpGetPageFrameNumber@4
_HalpGetParameters@4
_HalpGetPmTimerPerfCounterValue@0
_HalpGetPmTimerSleepModePerfCounterValue@0
_HalpGetRedirEntry@12
_HalpGetResourceSortValue@12
_HalpGrowMapBufferWorker@4
_HalpGrowMapBuffers@8
_HalpHpetCalibratePerfCount@12
_HalpHpetClockInterrupt@0
_HalpHpetClockInterruptStub@0
_HalpHpetClockInterruptWork@0
_HalpHpetConfigureInterruptRouting@0
_HalpHpetHandleRollover@0
_HalpHpetInitializeClock@0
_HalpHpetPopulateIncrementTables@4
_HalpHpetQueryPerformanceCounter@4
_HalpHpetReinitializeClock@0
_HalpHpetResetCounter@4
_HalpHpetRolloverInterrupt@0
_HalpHpetSavePerformanceCounter@0
_HalpHpetSetProfileInterval@4
_HalpHpetSetTimeIncrement@4
_HalpHpetStallExecutionProcessor@4
_HalpHpetStartProfileInterrupt@0
_HalpHpetStopProfileInterrupt@0
_HalpHpetSuspendClock@0
_HalpHpetTickCountFromIncrement@16
_HalpHpetWriteEtwEvent@0
_HalpIndexPteArray@8
_HalpInitBootTable@4
_HalpInitChipHacks@0
_HalpInitErrorPktInfo@4
_HalpInitIntiInfo@0
_HalpInitIrqlAuditFlag@0
_HalpInitMP@8
_HalpInitMpInfo@12
_HalpInitNonBusHandler@0
_HalpInitReservedPages@0
_HalpInitializeApicAddressing@0
_HalpInitializeBrokenPmTimer@0
_HalpInitializeClock@0
_HalpInitializeCmos@0
_HalpInitializeHpet@4
_HalpInitializeIOUnits@0
_HalpInitializeLocalUnit@0
_HalpInitializePICs@4
_HalpInitializePciBus@0
_HalpInitializePciStubs@0
_HalpIpiHandler@0
_HalpIsMsiSupported@0
_HalpIsMsiSupportedAMD@0
_HalpIsMsiSupportedIntel@0
_HalpIsNXEnabled@0
_HalpIsPteFree@4
_HalpKdAllocateAddressRange@20
_HalpKdConfigureCardBusSocket@16
_HalpKdConfigureDebuggingDevice@28
_HalpKdExtendAddressRange@28
_HalpKdFindFreeResourceLimits@12
_HalpKdGetBarRange@16
_HalpKdGetCardBusBridgeResources@16
_HalpKdGetLengthFromBar@4
_HalpKdGetPciBridgeResources@16
_HalpKdMatchRequestedPciDevice@16
_HalpKdPowerUpDevice@8
_HalpKdReadPCIConfig@20
_HalpKdReleasePciDevice@4
_HalpKdRemoveSystemMemoryRanges@8
_HalpKdSearchBehindCardBusBridge@32
_HalpKdSearchBehindPciBridge@32
_HalpKdSearchForPciDebuggingDevice@48
_HalpKdSearchForTopOfMMIO@4
_HalpKdSetupPciDevice@8
_HalpKdStallExecution@4
_HalpKdSupersetRange@8
_HalpKdUnconfigureCardBusBridge@16
_HalpKdUnconfigurePciBridge@16
_HalpKdUpdateAddressRange@16
_HalpKdValidateCardbusSocketRegs@4
_HalpKdWidenCardBusBridgeBusRange@32
_HalpKdWidenCardBusBridgeIoRange@32
_HalpKdWidenCardBusBridgeMemoryRange@32
_HalpKdWidenPciBridgeBusRange@32
_HalpKdWidenPciBridgeIoRange@32
_HalpKdWidenPciBridgeMemoryRange@32
_HalpKdWritePCIConfig@20
_HalpLoadMicrocode@4
_HalpLocalApicErrorService@0
_HalpLockPagableCodeSection@0
_HalpMapCR3Ex@20
_HalpMapNtToHwProcessorId@4
_HalpMapNvsArea@0
_HalpMapPhysicalMemory64@12
_HalpMapPhysicalMemoryWriteThrough64@12
_HalpMapTransfer@24
_HalpMapTransferHelper@20
_HalpMarkProcessorStarted@8
_HalpMaskAcpiInterrupt@0
_HalpMcUpdateFindDataTableEntry@4
_HalpMcUpdateInitialize@8
_HalpMcUpdateLock@0
_HalpMcUpdateMicrocode@4
_HalpMcUpdatePostUpdate@0
_HalpMcUpdateUnlock@0
_HalpMcaCurrentProcessorInitErrorPacket@0
_HalpMcaCurrentProcessorSetConfig@0
_HalpMcaCurrentProcessorSetTSS@4
_HalpMcaExceptionHandler@0
_HalpMcaExceptionHandlerWrapper
_HalpMcaFillSkeletalExceptionRecord@4
_HalpMcaGetConfiguration@16
_HalpMcaInit@0
_HalpMcaInitializeProcessor@0
_HalpMcaLockInterface@0
_HalpMcaQueueDpc@0
_HalpMcaReadProcessorException@12
_HalpMcaReadRegisterInterface@12
_HalpMcaRegisterDriver@4
_HalpMcaUnlockInterface@0
_HalpMceRegisterKernelDriver@8
_HalpMovntiCopyBuffer@12
_HalpNMIHalt@4
_HalpNumaInitializeStaticConfiguration@4
_HalpNumaQueryPageToNode@4
_HalpNumaQueryProcessorNode@12
_HalpNumaQueryProximityNode@8
_HalpPCIAcquireConfigSpaceLock@4
_HalpPCIAcquireType2Lock@8
_HalpPCIConfig@24
_HalpPCIConfigHoldingConfigLock@24
_HalpPCIEndConfigAccess@4
_HalpPCIISALine2Pin@20
_HalpPCIPerformConfigAccess@20
_HalpPCIPin2ISALine@16
_HalpPCIReadUcharType1@12
_HalpPCIReadUcharType2@12
_HalpPCIReadUlongType1@12
_HalpPCIReadUlongType2@12
_HalpPCIReadUshortType1@12
_HalpPCIReadUshortType2@12
_HalpPCIReleaseConfigSpaceLock@4
_HalpPCIReleaseType2Lock@8
_HalpPCIStartConfigAccess@16
_HalpPCIWriteUcharType1@12
_HalpPCIWriteUcharType2@12
_HalpPCIWriteUlongType1@12
_HalpPCIWriteUlongType2@12
_HalpPCIWriteUshortType1@12
_HalpPCIWriteUshortType2@12
_HalpPassIrpFromFdoToPdo@8
_HalpPciAccessMmConfigSpace@28
_HalpPciAddMmConfigEntry@8
_HalpPciCheckForAmdK8SpecialLocationHack@0
_HalpPciFindMmConfigBaseAddress@8
_HalpPciFreeMmConfigList@4
_HalpPciInitializeMmConfigAccess@0
_HalpPciMapMmConfigPhysicalAddress@8
_HalpPciReadMmConfigUchar@12
_HalpPciReadMmConfigUlong@12
_HalpPciReadMmConfigUshort@12
_HalpPciReportMmConfigAddressRange@0
_HalpPciWriteMmConfigUchar@12
_HalpPciWriteMmConfigUlong@12
_HalpPciWriteMmConfigUshort@12
_HalpPerfInterrupt@0
_HalpPhase0GetPciDataByOffset@20
_HalpPhase0SetPciDataByOffset@20
_HalpPiix4Detect@4
_HalpPmTimerCalibratePerformanceCounter@12
_HalpPmTimerCarry@0
_HalpPmTimerEnableSleepMode@0
_HalpPmTimerQueryPerformanceCounter@4
_HalpPmTimerRestorePerformanceCounter@0
_HalpPmTimerSavePerformanceCounter@0
_HalpPmTimerSleepModeCarry@0
_HalpPmTimerStallExecutionProcessor@4
_HalpPmTimerStallForScale@4
_HalpPmTimerTickCountStall@4
_HalpPollForBroadcast@0
_HalpPostSleepMP@8
_HalpPowerStateCallback@12
_HalpPreserveNvsArea@0
_HalpProcessAcpiStartDevice@0
_HalpProfileInterrupt@0
_HalpProgramHpetClock@4
_HalpProgramHpetRolloverTimer@0
_HalpProgramRtcClock@0
_HalpPutAcpiHacksInRegistry@0
_HalpQuery8254Counter@0
_HalpQueryAcpiResourceRequirements@4
_HalpQueryBrokenPmTimerCount@0
_HalpQueryCapabilities@8
_HalpQueryDeviceRelations@12
_HalpQueryHpetCount@0
_HalpQueryIdFdo@12
_HalpQueryIdPdo@12
_HalpQueryInterface@28
_HalpQueryPciRegistryInfo@0
_HalpQueryResourceRequirements@8
_HalpQueryResources@8
_HalpReadCmosDataByPort@20
_HalpReadCmosTime@4
_HalpReadErrorInfo@4
_HalpReadLocalApicID@0
_HalpReadPCIConfig@20
_HalpReadPartitionTable@16
_HalpReadRtcStdPCAT@12
_HalpReadStdCmosData@12
_HalpReboot@0
_HalpReenableAcpi@0
_HalpRegisterKdSupportFunctions@4
_HalpRegisterPciDebuggingDeviceInfo@0
_HalpRegisterVector@16
_HalpReleaseCmosSpinLock@0
_HalpRemapVirtualAddress64@16
_HalpRemoveInterruptDest@8
_HalpReportMachineCheck@8
_HalpReportResourceUsage@8
_HalpReportSerialNumber@0
_HalpRequestIpiSpecifyVector@8
_HalpResetAllProcessors@0
_HalpResetSBF@0
_HalpResetThisProcessor@0
_HalpRestartProfileTimeInterrupt@0
_HalpRestoreDmaControllerState@0
_HalpRestoreInterruptControllerState@0
_HalpRestoreIoApicRedirTable@0
_HalpRestoreNvsArea@0
_HalpRestorePerformanceCounter@0
_HalpResumeClock@0
_HalpRtcClockInterrupt@0
_HalpRtcClockInterruptStub@0
_HalpRtcInitializeClock@0
_HalpRtcSetTimeIncrement@4
_HalpRtcUnmaskClock@0
_HalpSaveContextTargetProcessor@16
_HalpSaveDmaControllerState@0
_HalpSaveInterruptControllerState@0
_HalpSavePerformanceCounter@0
_HalpSaveProcessorStateAndWait@8
_HalpScaleTimers@0
_HalpSerialize@0
_HalpSet8259Mask@4
_HalpSetClockAfterSleep@0
_HalpSetClockBeforeSleep@0
_HalpSetCmosCenturyByte@4
_HalpSetCmosData@16
_HalpSetCr4MCEBit@0
_HalpSetInternalVector@16
_HalpSetInterruptControllerWakeupState@4
_HalpSetPCIData@24
_HalpSetPageFrameNumber@12
_HalpSetPartitionInformation@16
_HalpSetRedirEntry@12
_HalpSetSystemInformation@12
_HalpSetWakeAlarm@12
_HalpSetupAcpiPhase0@4
_HalpSetupRealModeResume@4
_HalpSetupSystemClockSupport@0
_HalpSimpleCheck@8
_HalpStartProcessor@12
_HalpStartProcessorsInClusteredApicMode@0
_HalpStopOhciInterrupt@8
_HalpStopUhciInterrupt@12
_HalpStoreFreeCr3@8
_HalpSuspendClock@0
_HalpTranslateBusAddress@24
_HalpTscQueryPerformanceCounter@4
_HalpUnMapIOApics@0
_HalpUnloadMicrocode@0
_HalpUnlockPagableCodeSection@0
_HalpUnmapVirtualAddress@8
_HalpUnmaskAcpiInterrupt@0
_HalpUnmaskClock@0
_HalpUnmaskCriticalClockInterruptSources@0
_HalpValidPCISlot@8
_HalpValidatePendingInterrupts@0
_HalpVerifyIOUnit@4
_HalpWaitForCmosRisingEdge@0
_HalpWakeupTimeElapsed@0
_HalpWasteTime@4
_HalpWhackICHUsbSmi@8
_HalpWriteCmosDataByPort@20
_HalpWriteCmosTime@4
_HalpWritePCIConfig@20
_HalpWritePartitionTable@20
_HalpWriteResetCommand@0
_HalpWriteRtcStdPCAT@12
_HalpWriteStdCmosData@12
_HalpYieldProcessor@0
_HalpcGetCmosDataByType@16
_HalpcSetCmosDataByType@16
_IoAllocateAdapterChannel@20
_IoFlushAdapterBuffers@24
_IoFreeAdapterChannel@4
_IoFreeMapRegisters@12
_IoMapTransfer@24
_KdRestore@4
_KeAcquireSpinLock@8
_KeFlushWriteBuffer@0
_KeGetCurrentIrql@0
_KeLowerIrql@4
_KeMemoryBarrier@0
_KeQueryPerformanceCounter@4
_KeRaiseIrql@8
_KeRaiseIrqlToDpcLevel@0
_KeRaiseIrqlToSynchLevel@0
_KeReleaseSpinLock@8
_KeSaveStateForHibernate
_KeStallExecutionProcessor@4
_KeUpdateSystemTime@0
_MiGetPteAddress@4
_MiGetPteIndex@4
_PoSetFixedWakeSource@4
_PshedRetrieveErrorInfo@4
_READ_PORT_BUFFER_UCHAR@12
_READ_PORT_BUFFER_ULONG@12
_READ_PORT_BUFFER_USHORT@12
_READ_PORT_UCHAR@4
_READ_PORT_ULONG@4
_READ_PORT_USHORT@4
_ResetPicInterruptHandler@4
_RtlMoveMemory@12
_RtlStringCbPrintfW
_RtlUnwind@16
_StartPx_BuildRealModeStart@4
_StartPx_PMStub@0
_StartPx_RMStub@0
_TranslateGlobalVectorToIsaVector@8
_WRITE_PORT_BUFFER_UCHAR@12
_WRITE_PORT_BUFFER_ULONG@12
_WRITE_PORT_BUFFER_USHORT@12
_WRITE_PORT_UCHAR@8
_WRITE_PORT_ULONG@8
_WRITE_PORT_USHORT@8
_WRMSR@12
_WheaRegisterErrSrcInitializer@8
_WheaReportHwError@4
_XmAaaOp@4
_XmAadOp@4
_XmAamOp@4
_XmAasOp@4
_XmAccumImmediate@4
_XmAccumRegister@4
_XmAdcOp@4
_XmAddOp@4
_XmAddOperands@8
_XmAndOp@4
_XmBitScanGeneral@4
_XmBoundOp@4
_XmBsfOp@4
_XmBsrOp@4
_XmBswapOp@4
_XmBtOp@4
_XmBtcOp@4
_XmBtrOp@4
_XmBtsOp@4
_XmByteImmediate@4
_XmCallOp@4
_XmCbwOp@4
_XmClcOp@4
_XmCldOp@4
_XmCliOp@4
_XmCmcOp@4
_XmCmpOp@4
_XmCmpsOp@4
_XmCmpxchgOp@4
_XmCompareOperands@4
_XmComputeParity@4
_XmCwdOp@4
_XmDaaOp@4
_XmDasOp@4
_XmDecOp@4
_XmDivOp@4
_XmEffectiveOffset@4
_XmEmulateInterrupt@8
_XmEmulateStream@16
_XmEnterOp@4
_XmEvaluateAddressSpecifier@8
_XmEvaluateIndexSpecifier@8
_XmExecuteInt1a@4
_XmFlagsRegister@4
_XmGeneralBitOffset@4
_XmGeneralRegister@4
_XmGetByteImmediate@4
_XmGetCodeByte@4
_XmGetImmediateSourceValue@8
_XmGetLongImmediate@4
_XmGetOffsetAddress@8
_XmGetRegisterAddress@8
_XmGetSignedByteImmediateToLong@4
_XmGetSignedByteImmediateToWord@4
_XmGetStringAddress@12
_XmGetStringAddressRange@16
_XmGetWordImmediate@4
_XmGroup1General@4
_XmGroup1Immediate@4
_XmGroup2By1@4
_XmGroup2ByByte@4
_XmGroup2ByCL@4
_XmGroup3General@4
_XmGroup45General@4
_XmGroup7General@4
_XmGroup8BitOffset@4
_XmHltOp@4
_XmIdivOp@4
_XmIllOp@4
_XmImmediateEnter@4
_XmImmediateJump@4
_XmImulImmediate@4
_XmImulOp@4
_XmImulxOp@4
_XmInOp@4
_XmIncOp@4
_XmInitializeEmulator@20
_XmInsOp@4
_XmInt1aFindPciClassCode@4
_XmInt1aFindPciDevice@4
_XmInt1aPciBiosPresent@4
_XmInt1aReadConfigRegister@4
_XmInt1aWriteConfigRegister@4
_XmIntOp@4
_XmIretOp@4
_XmJcxzOp@4
_XmJmpOp@4
_XmJxxOp@4
_XmLahfOp@4
_XmLeaveOp@4
_XmLoadSegment@4
_XmLodsOp@4
_XmLongJump@4
_XmLoopOp@4
_XmMovOp@4
_XmMoveGeneral@4
_XmMoveImmediate@4
_XmMoveRegImmediate@4
_XmMoveSegment@4
_XmMoveXxGeneral@4
_XmMovsOp@4
_XmMulOp@4
_XmNegOp@4
_XmNoOperands@4
_XmNopOp@4
_XmNotOp@4
_XmOpcodeEscape@4
_XmOpcodeRegister@4
_XmOrOp@4
_XmOutOp@4
_XmOutsOp@4
_XmPopGeneral@4
_XmPopOp@4
_XmPopStack@4
_XmPopaOp@4
_XmPortDX@4
_XmPortImmediate@4
_XmPrefixOpcode@4
_XmPushImmediate@4
_XmPushOp@4
_XmPushPopSegment@4
_XmPushStack@8
_XmPushaOp@4
_XmRclOp@4
_XmRcrOp@4
_XmRdtscOp@4
_XmRetOp@4
_XmRolOp@4
_XmRorOp@4
_XmSahfOp@4
_XmSarOp@4
_XmSbbOp@4
_XmScasOp@4
_XmSegmentOffset@4
_XmSetDataType@4
_XmSetDestinationValue@8
_XmSetImmediateSourceValue@8
_XmSetLogicalResult@8
_XmSetSourceValue@8
_XmSetccByte@4
_XmShiftDouble@4
_XmShlOp@4
_XmShldOp@4
_XmShortJump@4
_XmShrOp@4
_XmShrdOp@4
_XmSmswOp@4
_XmStcOp@4
_XmStdOp@4
_XmStiOp@4
_XmStoreResult@8
_XmStosOp@4
_XmStringOperands@4
_XmSubOp@4
_XmSubOperands@8
_XmSxxOp@4
_XmTestOp@4
_XmXaddOp@4
_XmXchgOp@4
_XmXlatOpcode@4
_XmXorOp@4
_ZwClose@4
_ZwDeleteValueKey@8
_ZwOpenKey@12
_ZwSetValueKey@24
__NLG_Call
__NLG_Notify
__NLG_Notify1
__SEH_epilog4
__SEH_prolog4
__abnormal_termination
__alldvrm
__allmul
__allshl
__allshr
__aulldiv
__aulldvrm
__aullrem
__except_handler4
__global_unwind2
__invalid_parameter
__iswctype_l
__local_unwind2
__local_unwind4
__rt_probe_read4@4
__seh_longjmp_unwind4@4
__setjmp3
__stricmp
__vsnwprintf
__wchartodigit
__wcsicmp
_atoi
_iswctype
_longjmp
_memcpy
_memset
_strncmp
_strncpy_s
_strstr
_wcstoul
_x86BiosAllocateBuffer@12
_x86BiosCall@8
_x86BiosExecuteInterruptShadowed@20
_x86BiosFreeBuffer@8
_x86BiosGetPciBusData@20
_x86BiosInitializeBiosEx@20
_x86BiosInitializeBiosShadowed@12
_x86BiosReadCmosPort@8
_x86BiosReadCmosPortByte@4
_x86BiosReadIoSpace@8
_x86BiosReadMemory@16
_x86BiosReadPciAddressPort@8
_x86BiosReadPciDataPort@8
_x86BiosSetPciBusData@20
_x86BiosTranslateAddress@8
_x86BiosWriteCmosPort@12
_x86BiosWriteCmosPortByte@8
_x86BiosWriteIoSpace@12
_x86BiosWriteMemory@16
_x86BiosWritePciAddressPort@12
_x86BiosWritePciDataPort@12
*/
