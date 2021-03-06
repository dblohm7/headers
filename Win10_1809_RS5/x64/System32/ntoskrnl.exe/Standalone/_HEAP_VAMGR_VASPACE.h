typedef enum _RTLP_HP_ADDRESS_SPACE_TYPE
{
  HeapAddressUser = 0,
  HeapAddressKernel = 1,
  HeapAddressSession = 2,
  HeapAddressTypeMax = 3,
} RTLP_HP_ADDRESS_SPACE_TYPE, *PRTLP_HP_ADDRESS_SPACE_TYPE;

typedef struct _RTL_CSPARSE_BITMAP
{
  /* 0x0000 */ unsigned __int64 CommitDirectory;
  /* 0x0008 */ unsigned __int64* CommitBitmap;
  /* 0x0010 */ unsigned __int64* UserBitmap;
  /* 0x0018 */ __int64 BitCount;
  /* 0x0020 */ unsigned __int64 BitmapLock;
  /* 0x0028 */ unsigned __int64 DecommitPageIndex;
  /* 0x0030 */ unsigned __int64 RtlpCSparseBitmapWakeLock;
  /* 0x0038 */ unsigned char LockType;
  /* 0x0039 */ unsigned char AddressSpace;
  /* 0x003a */ unsigned char MemType;
  /* 0x003b */ unsigned char AllocAlignment;
  /* 0x003c */ long __PADDING__[1];
} RTL_CSPARSE_BITMAP, *PRTL_CSPARSE_BITMAP; /* size: 0x0040 */

typedef struct _RTL_SPARSE_ARRAY
{
  /* 0x0000 */ struct _RTL_CSPARSE_BITMAP Bitmap;
  /* 0x0040 */ unsigned __int64 ElementCount;
  /* 0x0048 */ unsigned long ElementSizeShift;
  /* 0x004c */ long __PADDING__[1];
} RTL_SPARSE_ARRAY, *PRTL_SPARSE_ARRAY; /* size: 0x0050 */

typedef struct _HEAP_VAMGR_VASPACE
{
  /* 0x0000 */ enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;
  /* 0x0008 */ unsigned __int64 BaseAddress;
  /* 0x0010 */ struct _RTL_SPARSE_ARRAY VaRangeArray;
} HEAP_VAMGR_VASPACE, *PHEAP_VAMGR_VASPACE; /* size: 0x0060 */

