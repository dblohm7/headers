typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_4
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef union _WHEA_NOTIFICATION_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short PollIntervalRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short SwitchToPollingThresholdRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short SwitchToPollingWindowRW : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short ErrorThresholdRW : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short ErrorThresholdWindowRW : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned short Reserved : 11; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_NOTIFICATION_FLAGS, *PWHEA_NOTIFICATION_FLAGS; /* size: 0x0002 */

typedef struct _WHEA_NOTIFICATION_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ union _WHEA_NOTIFICATION_FLAGS Flags;
  union // _TAG_UNNAMED_82
  {
    union
    {
      struct // _TAG_UNNAMED_83
      {
        /* 0x0004 */ unsigned long PollInterval;
      } /* size: 0x0004 */ Polled;
      struct // _TAG_UNNAMED_84
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Interrupt;
      struct // _TAG_UNNAMED_84
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ LocalInterrupt;
      struct // _TAG_UNNAMED_84
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sci;
      struct // _TAG_UNNAMED_84
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Nmi;
      struct // _TAG_UNNAMED_84
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sea;
      struct // _TAG_UNNAMED_84
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sei;
      struct // _TAG_UNNAMED_84
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Gsiv;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ u;
} WHEA_NOTIFICATION_DESCRIPTOR, *PWHEA_NOTIFICATION_DESCRIPTOR; /* size: 0x001c */

typedef struct _WHEA_GENERIC_ERROR_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Reserved;
  /* 0x0003 */ unsigned char Enabled;
  /* 0x0004 */ unsigned long ErrStatusBlockLength;
  /* 0x0008 */ unsigned long RelatedErrorSourceId;
  /* 0x000c */ unsigned char ErrStatusAddressSpaceID;
  /* 0x000d */ unsigned char ErrStatusAddressBitWidth;
  /* 0x000e */ unsigned char ErrStatusAddressBitOffset;
  /* 0x000f */ unsigned char ErrStatusAddressAccessSize;
  /* 0x0010 */ union _LARGE_INTEGER ErrStatusAddress;
  /* 0x0018 */ struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;
} WHEA_GENERIC_ERROR_DESCRIPTOR, *PWHEA_GENERIC_ERROR_DESCRIPTOR; /* size: 0x0034 */

