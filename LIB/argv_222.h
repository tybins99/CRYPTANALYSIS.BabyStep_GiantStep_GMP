/*++ BUILD argv_3818: 0001     Increment this if a change has global effects

Copyright (c) Microsoft Corporation. All rights argv_3217.

argv_2356 argv_2698:

    dbghelp.h

Abstract:

    This module defines the prototypes and constants required for the image
    help routines.

    Contains debugging support routines that are redistributable.

argv_3268 History:

--*/

#ifndef argv_452
#define argv_452

#if _MSC_VER > 1020
#pragma once
#endif


// As a general principal always call the 64 bit version
// of every API, if a choice exists.  The 64 bit version
// works great on 32 bit platforms, and is forward
// compatible to 64 bit platforms.

#ifdef _WIN64
#ifndef argv_483
#define argv_483
#endif
#endif


#ifdef __cplusplus
extern "C" {
#endif

#ifdef _IMAGEHLP_SOURCE_
 #define argv_1833 __stdcall
 #define argv_1084
#else
 #define argv_1833 DECLSPEC_IMPORT __stdcall
 #if (_MSC_VER >= 1300) && !defined(MIDL_PASS)
  #define argv_1084   __declspec(deprecated)
 #else
  #define argv_1084
 #endif
#endif

#define argv_1085 argv_1833

#define argv_1830 (64*1024)

typedef struct argv_486 {
    PSTR                  argv_2361;
    HANDLE                argv_1808;
    PUCHAR                argv_2200;
#ifdef argv_483
    PIMAGE_NT_HEADERS64   argv_1363;
#else
    PIMAGE_NT_HEADERS32   argv_1363;
#endif
    PIMAGE_SECTION_HEADER argv_2037;
    ULONG                 argv_2777;
    PIMAGE_SECTION_HEADER argv_3331;
    ULONG                 argv_798;
    BOOLEAN               argv_1611;
    BOOLEAN               argv_1310;
    LIST_ENTRY            argv_2077;
    ULONG                 argv_3394;
} argv_2118, *argv_2998;

#define argv_2216            2000


HANDLE
argv_1833
FindDebugInfoFile (
    PSTR argv_1365,
    PSTR SymbolPath,
    PSTR DebugFilePath
    );

typedef BOOL
(CALLBACK *argv_2966)(
    HANDLE FileHandle,
    PSTR argv_1365,
    PVOID CallerData
    );

HANDLE
argv_1833
FindDebugInfoFileEx (
    PSTR argv_1365,
    PSTR SymbolPath,
    PSTR DebugFilePath,
    argv_2966 Callback,
    PVOID CallerData
    );

typedef BOOL
(CALLBACK *argv_2968)(
    PSTR  argv_1364,
    PVOID context
    );

BOOL
argv_1833
SymFindFileInPath(
    HANDLE hprocess,
    LPSTR  SearchPath,
    LPSTR  argv_1365,
    PVOID  argv_1814,
    DWORD  two,
    DWORD  three,
    DWORD  argv_1371,
    LPSTR  FoundFile,
    argv_2968 callback,
    PVOID  context
    );

HANDLE
argv_1833
FindExecutableImage(
    PSTR argv_1365,
    PSTR SymbolPath,
    PSTR argv_1836
    );

typedef BOOL
(CALLBACK *argv_2967)(
    HANDLE FileHandle,
    PSTR argv_1365,
    PVOID CallerData
    );

HANDLE
argv_1833
FindExecutableImageEx(
    PSTR argv_1365,
    PSTR SymbolPath,
    PSTR argv_1836,
    argv_2967 Callback,
    PVOID CallerData
    );

PIMAGE_NT_HEADERS
argv_1833
ImageNtHeader (
    IN PVOID Base
    );

PVOID
argv_1833
ImageDirectoryEntryToDataEx (
    IN PVOID Base,
    IN BOOLEAN MappedAsImage,
    IN USHORT DirectoryEntry,
    OUT PULONG argv_3381,
    OUT PIMAGE_SECTION_HEADER *FoundHeader OPTIONAL
    );

PVOID
argv_1833
ImageDirectoryEntryToData (
    IN PVOID Base,
    IN BOOLEAN MappedAsImage,
    IN USHORT DirectoryEntry,
    OUT PULONG argv_3381
    );

PIMAGE_SECTION_HEADER
argv_1833
ImageRvaToSection(
    IN PIMAGE_NT_HEADERS NtHeaders,
    IN PVOID Base,
    IN ULONG argv_3279
    );

PVOID
argv_1833
ImageRvaToVa(
    IN PIMAGE_NT_HEADERS NtHeaders,
    IN PVOID Base,
    IN ULONG argv_3279,
    IN OUT PIMAGE_SECTION_HEADER *argv_2037
    );

// argv_3478 server exports

typedef BOOL (WINAPI *argv_3181)(LPCSTR, LPCSTR, PVOID, DWORD, DWORD, LPSTR);
typedef BOOL (WINAPI *argv_3179)(VOID);
typedef BOOL (WINAPI *argv_3177)(VOID);
typedef BOOL (WINAPI *argv_3182)(UINT_PTR, ULONG64);
typedef BOOL (CALLBACK WINAPI *argv_3176)(UINT_PTR action, ULONG64 argv_1073, ULONG64 context);
typedef UINT_PTR (WINAPI *argv_3178)();
typedef BOOL (WINAPI *argv_3180)(LPCSTR);

#define argv_3435            0x0001
#define argv_3437               0x0002
#define argv_3438            0x0004
#define argv_3439             0x0008
#define argv_3441          0x0010
#define argv_3448          0x0020
#define argv_3440              0x0040
#define argv_3443           0x0080
#define argv_3442           0x0100
#define argv_3445              0x0200
#define argv_3447               0x0400
#define argv_3446          0x0800
#define argv_3444               0x1000
#define argv_3436    0x2000
#define SSRVOPT_RESET               ((ULONG_PTR)-1)

#define argv_3434        1
#define argv_3433  2
#define argv_3432        3

#ifndef _WIN64
// This api won't be ported to Win64 - Fix your argv_877.

typedef struct argv_457 {
    LIST_ENTRY argv_2078;
    DWORD argv_3242;
    PVOID argv_3234;
    USHORT argv_3233;
    USHORT argv_3222;
    DWORD argv_3223;
    DWORD argv_1834;
    DWORD argv_3394;

    DWORD argv_3238;
    PIMAGE_SECTION_HEADER argv_3241;

    DWORD argv_3228;
    PSTR argv_3227;

    DWORD argv_3237;
    PIMAGE_FUNCTION_ENTRY argv_3230;
    DWORD argv_3232;
    DWORD argv_3231;

    DWORD argv_3236;
    PFPO_DATA argv_3229;

    DWORD argv_3384;
    PIMAGE_COFF_SYMBOLS_HEADER argv_901;

    DWORD argv_3243;
    PVOID argv_3224;

    PSTR argv_1836;
    PSTR argv_1835;
    PSTR argv_3226;

    DWORD argv_3246;

    BOOL  argv_3240;
    PIMAGE_DEBUG_DIRECTORY argv_3225;
    DWORD argv_3235;

    DWORD argv_3239;

    DWORD argv_3218[ 2 ];

} argv_1817, *argv_2974;


argv_2974
argv_1833
MapDebugInformation(
    HANDLE FileHandle,
    PSTR argv_1365,
    PSTR SymbolPath,
    DWORD argv_1834
    );

BOOL
argv_1833
UnmapDebugInformation(
    argv_2974 DebugInfo
    );

#endif

BOOL
argv_1833
SearchTreeForFile(
    PSTR RootPath,
    PSTR InputPathName,
    PSTR OutputPathBuffer
    );

typedef BOOL
(CALLBACK *argv_2956)(
    LPCSTR FilePath,
    PVOID  CallerData
    );

BOOL
argv_1833
EnumDirTree(
    HANDLE hProcess,
    PSTR   RootPath,
    PSTR   InputPathName,
    PSTR   OutputPathBuffer,
    argv_2956 Callback,
    PVOID  CallbackData
    );

BOOL
argv_1833
MakeSureDirectoryPathExists(
    PCSTR DirPath
    );

//
// UnDecorateSymbolName argv_1372
//

#define argv_3750                 (0x0000)  // Enable full undecoration
#define argv_3758   (0x0001)  // Remove leading underscores from MS extended keywords
#define argv_3760           (0x0002)  // Disable expansion of MS extended keywords
#define argv_3757      (0x0004)  // Disable expansion of return argv_3695 for primary declaration
#define argv_3754      (0x0008)  // Disable expansion of the declaration model
#define argv_3753   (0x0010)  // Disable expansion of the declaration language specifier
#define argv_3761           (0x0020)  // NYI Disable expansion of MS keywords on the 'this' argv_3695 for primary declaration
#define argv_3756           (0x0040)  // NYI Disable expansion of CV modifiers on the 'this' argv_3695 for primary declaration
#define argv_3764              (0x0060)  // Disable all modifiers on the 'this' argv_3695
#define argv_3752     (0x0080)  // Disable expansion of access specifiers for members
#define argv_3765      (0x0100)  // Disable expansion of 'throw-signatures' for functions and pointers to functions
#define argv_3759           (0x0200)  // Disable expansion of 'static' or 'virtual'ness of members
#define argv_3762      (0x0400)  // Disable expansion of MS model for UDT returns
#define argv_3749            (0x0800)  // Undecorate 32-bit decorated names
#define argv_3751                (0x1000)  // Crack only the argv_2697 for primary declaration;
                                                                                                   //  return just [scope::]argv_2697.  Does expand template params
#define argv_3755             (0x2000)  // Don't undecorate arguments to function
#define argv_3763          (0x4000)  // Don't undecorate special names (v-table, vcall, vector xxx, metatype, etc)

DWORD
argv_1833
WINAPI
UnDecorateSymbolName(
    PCSTR   DecoratedName,         // argv_2698 to undecorate
    PSTR    UnDecoratedName,       // If argv_2766, it will be allocated
    DWORD    UndecoratedLength,     // The maximym length
    DWORD    argv_1372                  // See above.
    );


//
// these values are used for synthesized argv_1314 types
// that can be passed in as image headers instead of
// the standard ones from ntimage.h
//

#define argv_1083     0x1

typedef struct argv_527 {
    DWORD   argv_3431;                  // size of this struct
    DWORD   argv_3430;                   // signature identifying the passed argv_1073
    PVOID   argv_1073;                   // pointer to passed argv_1073
    DWORD   size;                   // size of passed argv_1073
    DWORD   argv_1371;                  // options
} argv_2355, *argv_3088;

//
// StackWalking API
//

typedef enum {
    argv_604,
    argv_605,
    argv_607,
    argv_606
} argv_598;

typedef struct argv_566 {
    DWORD64       Offset;
    WORD          argv_3332;
    argv_598  argv_2354;
} argv_600, *argv_2153;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_597 argv_600
#define argv_2152 argv_2153
#else
typedef struct argv_565 {
    DWORD         Offset;
    WORD          argv_3332;
    argv_598  argv_2354;
} argv_597, *argv_2152;

__inline
void
argv_599(
    argv_2152 a32,
    argv_2153 a64
    )
{
    a64->Offset = (ULONG64)(LONG64)(LONG)a32->Offset;
    a64->argv_3332 = a32->argv_3332;
    a64->argv_2354 = a32->argv_2354;
}

__inline
void
argv_601(
    argv_2153 a64,
    argv_2152 a32
    )
{
    a32->Offset = (ULONG)a64->Offset;
    a32->argv_3332 = a64->argv_3332;
    a32->argv_2354 = a64->argv_2354;
}
#endif

//
// This structure is included in the argv_3454 structure,
// and is used to trace through usermode callbacks in a thread's
// kernel stack.  The values must be copied by the kernel debugger
// from the DBGKD_GET_VERSION and WAIT_STATE_CHANGE packets.
//

//
// New argv_1930 structure for 64 bit system support.
// This structure is preferred in new argv_877.
//
typedef struct argv_485 {

    //
    // argv_595 of kernel thread argv_2785, as provided in the
    // WAIT_STATE_CHANGE packet.
    //
    DWORD64   argv_3632;

    //
    // offset in thread argv_2785 to pointer to the argv_1043 callback frame
    // in kernel stack.
    //
    DWORD   argv_3631;

    //
    // offset in thread argv_2785 to pointer to the argv_1043 callback backing
    // store frame in kernel stack.
    //
    DWORD   argv_3630;

    //
    // offsets to values in frame:
    //
    // argv_595 of next callback frame
    DWORD   argv_2759;

    // argv_595 of saved frame pointer (if applicable)
    DWORD   argv_1608;


    //
    // argv_596 of the kernel function that calls out to user mode
    //
    DWORD64   argv_2015;

    //
    // argv_596 of the user mode dispatcher function
    //
    DWORD64   argv_2006;

    //
    // Lowest kernel mode argv_595
    //
    DWORD64   argv_3586;

    DWORD64  argv_3218[8];

} argv_1932, *argv_2996;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_1930 argv_1932
#define argv_2995 argv_2996
#else
typedef struct argv_484 {

    //
    // argv_595 of kernel thread argv_2785, as provided in the
    // WAIT_STATE_CHANGE packet.
    //
    DWORD   argv_3632;

    //
    // offset in thread argv_2785 to pointer to the argv_1043 callback frame
    // in kernel stack.
    //
    DWORD   argv_3631;

    //
    // offsets to values in frame:
    //
    // argv_595 of next callback frame
    DWORD   argv_2759;

    // argv_595 of saved frame pointer (if applicable)
    DWORD   argv_1608;

    //
    // argv_596 of the kernel function that calls out to user mode
    //
    DWORD   argv_2015;

    //
    // argv_596 of the user mode dispatcher function
    //
    DWORD   argv_2006;

    //
    // Lowest kernel mode argv_595
    //
    DWORD   argv_3586;

    //
    // offset in thread argv_2785 to pointer to the argv_1043 callback backing
    // store frame in kernel stack.
    //
    DWORD   argv_3630;

    DWORD  argv_3218[8];

} argv_1930, *argv_2995;

__inline
void
argv_1931(
    argv_2995 p32,
    argv_2996 p64
    )
{
    p64->argv_3632 = p32->argv_3632;
    p64->argv_3631 = p32->argv_3631;
    p64->argv_2759 = p32->argv_2759;
    p64->argv_1608 = p32->argv_1608;
    p64->argv_2015 = p32->argv_2015;
    p64->argv_2006 = p32->argv_2006;
    p64->argv_3586 = p32->argv_3586;
}
#endif

typedef struct argv_568 {
    argv_600   AddrPC;               // program counter
    argv_600   argv_608;           // return argv_595
    argv_600   argv_603;            // frame pointer
    argv_600   argv_609;            // stack pointer
    argv_600   argv_594;           // backing store pointer
    PVOID       argv_1614;       // pointer to pdata/fpo or argv_2766
    DWORD64     argv_2838[4];            // possible arguments to the function
    BOOL        argv_1308;                  // WOW far call
    BOOL        argv_3824;              // is this a virtual frame?
    DWORD64     argv_3218[3];
    argv_1932    argv_1929;
} argv_3455, *argv_2156;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3454 argv_3455
#define argv_2155 argv_2156
#else
typedef struct argv_567 {
    argv_597     AddrPC;               // program counter
    argv_597     argv_608;           // return argv_595
    argv_597     argv_603;            // frame pointer
    argv_597     argv_609;            // stack pointer
    PVOID       argv_1614;       // pointer to pdata/fpo or argv_2766
    DWORD       argv_2838[4];            // possible arguments to the function
    BOOL        argv_1308;                  // WOW far call
    BOOL        argv_3824;              // is this a virtual frame?
    DWORD       argv_3218[3];
    argv_1930      argv_1929;
    argv_597     argv_594;           // backing store pointer
} argv_3454, *argv_2155;
#endif


typedef
BOOL
(__stdcall *argv_3108)(
    HANDLE      hProcess,
    DWORD64     qwBaseAddress,
    PVOID       lpBuffer,
    DWORD       nSize,
    LPDWORD     lpNumberOfBytesRead
    );

typedef
PVOID
(__stdcall *argv_2970)(
    HANDLE  hProcess,
    DWORD64 AddrBase
    );

typedef
DWORD64
(__stdcall *argv_2972)(
    HANDLE  hProcess,
    DWORD64 argv_596
    );

typedef
DWORD64
(__stdcall *argv_3184)(
    HANDLE    hProcess,
    HANDLE    hThread,
    argv_2153 lpaddr
    );

BOOL
argv_1833
StackWalk64(
    DWORD                             MachineType,
    HANDLE                            hProcess,
    HANDLE                            hThread,
    argv_2156                    StackFrame,
    PVOID                             argv_993,
    argv_3108    ReadMemoryRoutine,
    argv_2970  FunctionTableAccessRoutine,
    argv_2972        GetModuleBaseRoutine,
    argv_3184      TranslateAddress
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)

#define argv_3107 argv_3108
#define argv_2969 argv_2970
#define argv_2971 argv_2972
#define argv_3183 argv_3184

#define argv_3456 StackWalk64

#else

typedef
BOOL
(__stdcall *argv_3107)(
    HANDLE  hProcess,
    DWORD   lpBaseAddress,
    PVOID   lpBuffer,
    DWORD   nSize,
    PDWORD  lpNumberOfBytesRead
    );

typedef
PVOID
(__stdcall *argv_2969)(
    HANDLE  hProcess,
    DWORD   AddrBase
    );

typedef
DWORD
(__stdcall *argv_2971)(
    HANDLE  hProcess,
    DWORD   argv_596
    );

typedef
DWORD
(__stdcall *argv_3183)(
    HANDLE    hProcess,
    HANDLE    hThread,
    argv_2152 lpaddr
    );

BOOL
argv_1833
argv_3456(
    DWORD                             MachineType,
    HANDLE                            hProcess,
    HANDLE                            hThread,
    argv_2155                      StackFrame,
    PVOID                             argv_993,
    argv_3107      ReadMemoryRoutine,
    argv_2969    FunctionTableAccessRoutine,
    argv_2971          GetModuleBaseRoutine,
    argv_3183        TranslateAddress
    );

#endif


#define argv_632 9

typedef struct argv_631 {
    USHORT  argv_2193;
    USHORT  argv_2340;
    USHORT  argv_3268;
    USHORT  argv_3218;
} argv_631, *argv_2154;

argv_2154
argv_1833
ImagehlpApiVersion(
    VOID
    );

argv_2154
argv_1833
ImagehlpApiVersionEx(
    argv_2154 AppVersion
    );

DWORD
argv_1833
GetTimestampForLoadedLibrary(
    HMODULE argv_2356
    );

//
// typedefs for function pointers
//
typedef BOOL
(CALLBACK *argv_3164)(
    PSTR argv_2361,
    DWORD64 BaseOfDll,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3167)(
    PSTR SymbolName,
    DWORD64 SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3168)(
    PWSTR SymbolName,
    DWORD64 SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_2958)(
    PSTR argv_2361,
    DWORD64 ModuleBase,
    ULONG ModuleSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3175)(
    HANDLE  hProcess,
    ULONG   ActionCode,
    ULONG64 CallbackData,
    ULONG64 UserContext
    );

typedef
PVOID
(CALLBACK *argv_3170)(
    HANDLE  hProcess,
    DWORD   AddrBase,
    PVOID   UserContext
    );

typedef
PVOID
(CALLBACK *argv_3171)(
    HANDLE  hProcess,
    ULONG64 AddrBase,
    ULONG64 UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)

#define argv_3163 argv_3164
#define argv_3166 argv_3167
#define argv_3169 argv_3168
#define argv_2957 argv_2958
#define argv_3174 argv_3175
#define argv_3170 argv_3171

#else

typedef BOOL
(CALLBACK *argv_3163)(
    PSTR  argv_2361,
    ULONG BaseOfDll,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3166)(
    PSTR  SymbolName,
    ULONG SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3169)(
    PWSTR  SymbolName,
    ULONG SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_2957)(
    PSTR  argv_2361,
    ULONG ModuleBase,
    ULONG ModuleSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3174)(
    HANDLE  hProcess,
    ULONG   ActionCode,
    PVOID   CallbackData,
    PVOID   UserContext
    );

#endif


//
// argv_1371 found in argv_3482.argv_1372
//

#define argv_3535     0x00000001
#define argv_3531         0x00000008
#define argv_3532           0x00000010
#define argv_3527         0x00000020
#define argv_3530        0x00000040
#define argv_3529            0x00000080
#define argv_3524         0x00000100
#define argv_3525           0x00000200
#define argv_3526        0x00000400
#define argv_3528         0x00000800
#define argv_3536          0x00001000
#define argv_3533            0x00002000
#define argv_3534           0x00004000

//
// symbol argv_3695 enumeration
//
typedef enum {
    argv_3550 = 0,
    argv_3500,
    argv_3501,
    argv_3572,
    argv_3509,
    argv_3502,
    argv_3575,       // .argv_3476 argv_1314
    argv_3503,
    argv_3579,
    argv_2783
} argv_3477;

//
// symbol argv_1073 structure
//

typedef struct argv_481 {
    DWORD                       argv_3403;           // set to sizeof(argv_1866)
    DWORD64                     argv_596;                // virtual argv_595 including dll base argv_595
    DWORD                       argv_3381;                   // estimated size of symbol, can be zero
    DWORD                       argv_1372;                  // info about the symbols, see the SYMF defines
    DWORD                       argv_2224;          // maximum size of symbol argv_2697 in 'argv_2698'
    CHAR                        argv_2698[1];                // symbol argv_2697 (null terminated string)
} argv_1866, *argv_2993;

typedef struct argv_482 {
    argv_1866 argv_3476;
    CHAR              argv_2697[argv_2216 + 1];
} argv_1867, *argv_2994;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)

 #define argv_1851 argv_1866
 #define argv_2990 argv_2993
 #define argv_1861 argv_1867
 #define argv_2991 argv_2994

#else

 typedef struct argv_477 {
     DWORD                       argv_3403;           // set to sizeof(argv_1851)
     DWORD                       argv_596;                // virtual argv_595 including dll base argv_595
     DWORD                       argv_3381;                   // estimated size of symbol, can be zero
     DWORD                       argv_1372;                  // info about the symbols, see the SYMF defines
     DWORD                       argv_2224;          // maximum size of symbol argv_2697 in 'argv_2698'
     CHAR                        argv_2698[1];                // symbol argv_2697 (null terminated string)
 } argv_1851, *argv_2990;

 typedef struct argv_478 {
     argv_1851 argv_3476;
     CHAR            argv_2697[argv_2216 + 1];
 } argv_1861, *argv_2991;

#endif

//
// module argv_1073 structure
//

typedef struct argv_473 {
    DWORD                       argv_3403;           // set to sizeof(argv_1847)
    DWORD64                     argv_704;            // base argv_2094 argv_595 of module
    DWORD                       argv_1869;              // virtual size of the argv_2117 module
    DWORD                       argv_3679;          // date/argv_3678 stamp from pe argv_1806
    DWORD                       argv_817;               // checksum from the pe argv_1806
    DWORD                       argv_2782;                // number of symbols in the symbol table
    argv_3477                    argv_3576;                // argv_3695 of symbols argv_2117
    CHAR                        argv_2361[32];         // module argv_2697
    CHAR                        argv_1868[256];         // image argv_2697
    // new elements: 07-Jun-2002
    CHAR                        argv_2119[256];   // symbol argv_1314 argv_2697
    CHAR                        argv_2120[256];     // pdb argv_1314 argv_2697
    DWORD                       argv_1060;                  // argv_3380 of the CV record in the debug directories
    CHAR			            argv_1057[MAX_PATH * 3];   // Contents of the CV record
    DWORD                       argv_2946;                 // argv_3380 of PDB
    GUID                        argv_2947;               // argv_3380 of PDB (VC 7 and up)
    DWORD                       argv_2944;                 // DBI age of pdb
    BOOL                        argv_2948;           // argv_2117 an unmatched pdb
    BOOL                        argv_1082;           // argv_2117 an unmatched dbg
    BOOL                        argv_2073;            // we have argv_2069 number information
    BOOL                        argv_1692;          // we have internal symbol information
    BOOL                        argv_3713;               // we have argv_3695 information
} argv_1847, *argv_2986;

typedef struct argv_474 {
    DWORD                       argv_3403;           // set to sizeof(argv_1847)
    DWORD64                     argv_704;            // base argv_2094 argv_595 of module
    DWORD                       argv_1869;              // virtual size of the argv_2117 module
    DWORD                       argv_3679;          // date/argv_3678 stamp from pe argv_1806
    DWORD                       argv_817;               // checksum from the pe argv_1806
    DWORD                       argv_2782;                // number of symbols in the symbol table
    argv_3477                    argv_3576;                // argv_3695 of symbols argv_2117
    WCHAR                       argv_2361[32];         // module argv_2697
    WCHAR                       argv_1868[256];         // image argv_2697
    // new elements: 07-Jun-2002
    WCHAR                       argv_2119[256];   // symbol argv_1314 argv_2697
    WCHAR                       argv_2120[256];     // pdb argv_1314 argv_2697
    DWORD                       argv_1060;                  // argv_3380 of the CV record in the debug directories
    WCHAR			            argv_1057[MAX_PATH * 3];   // Contents of the CV record
    DWORD                       argv_2946;                 // argv_3380 of PDB
    GUID                        argv_2947;               // argv_3380 of PDB (VC 7 and up)
    DWORD                       argv_2944;                 // DBI age of pdb
    BOOL                        argv_2948;           // argv_2117 an unmatched pdb
    BOOL                        argv_1082;           // argv_2117 an unmatched dbg
    BOOL                        argv_2073;            // we have argv_2069 number information
    BOOL                        argv_1692;          // we have internal symbol information
    BOOL                        argv_3713;               // we have argv_3695 information
} argv_1849, *argv_2988;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_1846 argv_1847
#define argv_2985 argv_2986
#define argv_1848 argv_1849
#define argv_2987 argv_2988
#else
typedef struct argv_472 {
    DWORD                       argv_3403;           // set to sizeof(argv_1846)
    DWORD                       argv_704;            // base argv_2094 argv_595 of module
    DWORD                       argv_1869;              // virtual size of the argv_2117 module
    DWORD                       argv_3679;          // date/argv_3678 stamp from pe argv_1806
    DWORD                       argv_817;               // checksum from the pe argv_1806
    DWORD                       argv_2782;                // number of symbols in the symbol table
    argv_3477                    argv_3576;                // argv_3695 of symbols argv_2117
    CHAR                        argv_2361[32];         // module argv_2697
    CHAR                        argv_1868[256];         // image argv_2697
    CHAR                        argv_2119[256];   // symbol argv_1314 argv_2697
} argv_1846, *argv_2985;

typedef struct argv_475 {
    DWORD                       argv_3403;           // set to sizeof(argv_1846)
    DWORD                       argv_704;            // base argv_2094 argv_595 of module
    DWORD                       argv_1869;              // virtual size of the argv_2117 module
    DWORD                       argv_3679;          // date/argv_3678 stamp from pe argv_1806
    DWORD                       argv_817;               // checksum from the pe argv_1806
    DWORD                       argv_2782;                // number of symbols in the symbol table
    argv_3477                    argv_3576;                // argv_3695 of symbols argv_2117
    WCHAR                       argv_2361[32];         // module argv_2697
    WCHAR                       argv_1868[256];         // image argv_2697
    WCHAR                       argv_2119[256];   // symbol argv_1314 argv_2697
} argv_1848, *argv_2987;
#endif

//
// source argv_1314 argv_2069 argv_1073 structure
//

typedef struct argv_471 {
    DWORD                       argv_3403;           // set to sizeof(argv_1845)
    PVOID                       argv_2008;                    // internal
    DWORD                       argv_2072;             // argv_2069 number in argv_1314
    PCHAR                       argv_1365;               // full argv_1364
    DWORD64                     argv_596;                // first instruction of argv_2069
} argv_1845, *argv_2984;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_1844 argv_1845
#define argv_2983 argv_2984
#else
typedef struct argv_470 {
    DWORD                       argv_3403;           // set to sizeof(argv_1844)
    PVOID                       argv_2008;                    // internal
    DWORD                       argv_2072;             // argv_2069 number in argv_1314
    PCHAR                       argv_1365;               // full argv_1364
    DWORD                       argv_596;                // first instruction of argv_2069
} argv_1844, *argv_2983;
#endif

//
// source argv_1314 structure
//

typedef struct argv_557 {
    DWORD64                     argv_2353;                // base argv_595 of argv_2117 module
    PCHAR                       argv_1365;               // full argv_1364 of source
} argv_3415, *argv_3159;

//
// argv_1073 structures used for registered symbol callbacks
//

#define argv_752          0x00000001
#define argv_749       0x00000002
#define argv_750        0x00000003
#define argv_757                    0x00000004
#define argv_753                    0x00000005
#define argv_755                         0x00000006
#define argv_748         0x00000007
#define argv_756                         0x00000008
#define argv_754                               0x00000010
#define argv_751        0x00000020
#define argv_747                          0x10000000

typedef struct argv_465 {
    DWORD64   argv_593;                                     // argv_595 to read from
    PVOID     argv_727;                                      // argv_728 to read to
    DWORD     argv_739;                                    // amount of argv_739 to read
    DWORD    *argv_740;                                // pointer to store amount of argv_739 read
} argv_1838, *argv_2977;

enum {
    argv_3368 = 0,
    argv_3370,
    argv_3365,
    argv_3367,
    argv_3369  // unused
};

typedef struct argv_464 {
    DWORD argv_3366;                                     // values from argv_3368 to argv_3367
    DWORD argv_877;                                         // numerical argv_877 IDs the error
    PCHAR argv_1122;                                         // may contain a argv_3629 description of the error
    PVOID argv_2785;                                       // argv_3807 dependant upon the error argv_877
} argv_1837, *argv_2976;

typedef struct argv_467 {
    DWORD                       argv_3403;           // set to sizeof(argv_1841)
    DWORD64                     argv_704;            // base argv_2094 argv_595 of module
    DWORD                       argv_817;               // checksum from the pe argv_1806
    DWORD                       argv_3679;          // date/argv_3678 stamp from pe argv_1806
    CHAR                        argv_1365[MAX_PATH];     // symbols argv_1314 or image argv_2697
    BOOLEAN                     argv_3214;                // argv_2094 failure reparse
    HANDLE                      argv_1808;                  // argv_1314 argv_1789, if passed
    DWORD                       argv_1372;			//
} argv_1841, *argv_2980;

#define argv_1187	0x1
#define argv_1186  0x2

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_1840 argv_1841
#define argv_2979 argv_2980
#else
typedef struct argv_466 {
    DWORD                       argv_3403;           // set to sizeof(argv_1840)
    DWORD                       argv_704;            // base argv_2094 argv_595 of module
    DWORD                       argv_817;               // checksum from the pe argv_1806
    DWORD                       argv_3679;          // date/argv_3678 stamp from pe argv_1806
    CHAR                        argv_1365[MAX_PATH];     // symbols argv_1314 or image argv_2697
    BOOLEAN                     argv_3214;                // argv_2094 failure reparse
    HANDLE                      argv_1808;                  // argv_1314 argv_1789, if passed
} argv_1840, *argv_2979;
#endif

typedef struct argv_469 {
    DWORD                       argv_3403;           // set to sizeof(argv_1843)
    DWORD                       argv_2769;           // number of duplicates in the argv_3478 array
    argv_2993          argv_3478;                 // array of duplicate symbols
    DWORD                       argv_3334;         // symbol selected (-1 to argv_3457)
} argv_1843, *argv_2982;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_1842 argv_1843
#define argv_2981 argv_2982
#else
typedef struct argv_468 {
    DWORD                       argv_3403;           // set to sizeof(argv_1842)
    DWORD                       argv_2769;           // number of duplicates in the argv_3478 array
    argv_2990            argv_3478;                 // array of duplicate symbols
    DWORD                       argv_3334;         // symbol selected (-1 to argv_3457)
} argv_1842, *argv_2981;
#endif

// If dbghelp ever needs to argv_1130 graphical UI, it will use this as the parent window.

BOOL
argv_1833
SymSetParentWindow(
    HWND hwnd
    );

PCHAR
argv_1833
SymSetHomeDirectory(
    PCSTR dir
    );

PCHAR
argv_1833
SymGetHomeDirectory(
    DWORD  argv_3695,
    PSTR   dir,
    size_t size
    );
    
typedef enum {
    argv_1802 = 0, // root directory for dbghelp
    argv_1805,      // where symbols are stored
    argv_1804,      // where source is stored
    argv_1803       // end marker
};
    
//
// options that are set/returned by SymSetOptions() & SymGetOptions()
// these are used as a mask
//
#define argv_3553         0x00000001
#define argv_3571                  0x00000002
#define argv_3555           0x00000004
#define argv_3563                   0x00000008
#define argv_3562               0x00000010
#define argv_3568        0x00000020
#define argv_3561            0x00000040
#define argv_3558             0x00000080
#define argv_3567     0x00000100
#define argv_3557     0x00000200
#define argv_3556            0x00000400
#define argv_3551   0x00000800
#define argv_3559        0x00001000
#define argv_3560    0x00002000
#define argv_3569             0x00004000
#define argv_3566               0x00008000
#define argv_3552             0x00010000
#define argv_3564          0x00020000
#define argv_3570                   0x00040000
#define argv_3565               0x00080000

#define argv_3554                    0x80000000

DWORD
argv_1833
SymSetOptions(
    IN DWORD   SymOptions
    );

DWORD
argv_1833
SymGetOptions(
    VOID
    );

BOOL
argv_1833
SymCleanup(
    IN HANDLE hProcess
    );

BOOL
argv_1833
SymMatchString(
    IN LPSTR string,
    IN LPSTR expression,
    IN BOOL  fCase
    );

typedef BOOL
(CALLBACK *argv_3165)(
    argv_3159 pSourceFile,
    PVOID       UserContext
    );

BOOL
argv_1833
SymEnumSourceFiles(
    IN HANDLE  hProcess,
    IN ULONG64 argv_2353,
    IN LPSTR   Mask,
    IN argv_3165 cbSrcFiles,
    IN PVOID   UserContext
    );

BOOL
argv_1833
SymEnumerateModules64(
    IN HANDLE                       hProcess,
    IN argv_3164  EnumModulesCallback,
    IN PVOID                        UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3504 SymEnumerateModules64
#else
BOOL
argv_1833
argv_3504(
    IN HANDLE                     hProcess,
    IN argv_3163  EnumModulesCallback,
    IN PVOID                      UserContext
    );
#endif

BOOL
argv_1833
SymEnumerateSymbols64(
    IN HANDLE                       hProcess,
    IN DWORD64                      BaseOfDll,
    IN argv_3167  EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

BOOL
argv_1833
SymEnumerateSymbolsW64(
    IN HANDLE                       hProcess,
    IN DWORD64                      BaseOfDll,
    IN argv_3168 EnumSymbolsCallback,
    IN PVOID                        UserContext
    );


#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3505 SymEnumerateSymbols64
#define argv_3506 SymEnumerateSymbolsW64
#else
BOOL
argv_1833
argv_3505(
    IN HANDLE                     hProcess,
    IN DWORD                      BaseOfDll,
    IN argv_3166  EnumSymbolsCallback,
    IN PVOID                      UserContext
    );

BOOL
argv_1833
argv_3506(
    IN HANDLE                       hProcess,
    IN DWORD                        BaseOfDll,
    IN argv_3169   EnumSymbolsCallback,
    IN PVOID                        UserContext
    );
#endif

BOOL
argv_1833
EnumerateLoadedModules64(
    IN HANDLE                           hProcess,
    IN argv_2958   EnumLoadedModulesCallback,
    IN PVOID                            UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_1237 EnumerateLoadedModules64
#else
BOOL
argv_1833
argv_1237(
    IN HANDLE                         hProcess,
    IN argv_2957   EnumLoadedModulesCallback,
    IN PVOID                          UserContext
    );
#endif

PVOID
argv_1833
SymFunctionTableAccess64(
    HANDLE  hProcess,
    DWORD64 AddrBase
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3537 SymFunctionTableAccess64
#else
PVOID
argv_1833
argv_3537(
    HANDLE  hProcess,
    DWORD   AddrBase
    );
#endif

BOOL
argv_1833
SymGetModuleInfo64(
    IN  HANDLE                  hProcess,
    IN  DWORD64                 qwAddr,
    OUT argv_2986      ModuleInfo
    );

BOOL
argv_1833
SymGetModuleInfoW64(
    IN  HANDLE                  hProcess,
    IN  DWORD64                 qwAddr,
    OUT argv_2988     ModuleInfo
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3543   SymGetModuleInfo64
#define argv_3544  SymGetModuleInfoW64
#else
BOOL
argv_1833
argv_3543(
    IN  HANDLE              hProcess,
    IN  DWORD               dwAddr,
    OUT argv_2985  ModuleInfo
    );

BOOL
argv_1833
argv_3544(
    IN  HANDLE              hProcess,
    IN  DWORD               dwAddr,
    OUT argv_2987  ModuleInfo
    );
#endif

DWORD64
argv_1833
SymGetModuleBase64(
    IN  HANDLE              hProcess,
    IN  DWORD64             qwAddr
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3542 SymGetModuleBase64
#else
DWORD
argv_1833
argv_3542(
    IN  HANDLE              hProcess,
    IN  DWORD               dwAddr
    );
#endif

BOOL
argv_1833
SymGetSymNext64(
    IN     HANDLE              hProcess,
    IN OUT argv_2993  argv_3478
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3547 SymGetSymNext64
#else
BOOL
argv_1833
argv_3547(
    IN     HANDLE            hProcess,
    IN OUT argv_2990  argv_3478
    );
#endif

BOOL
argv_1833
SymGetSymPrev64(
    IN     HANDLE              hProcess,
    IN OUT argv_2993  argv_3478
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3548 SymGetSymPrev64
#else
BOOL
argv_1833
argv_3548(
    IN     HANDLE            hProcess,
    IN OUT argv_2990  argv_3478
    );
#endif

typedef struct argv_558 {
    DWORD   argv_3403;           // set to sizeof(argv_3427)
    PVOID   argv_2008;                    // not used
    DWORD64 argv_2353;                // base argv_595 of module this applies to
    CHAR    argv_2784[MAX_PATH + 1];      // the argv_2785 argv_1314 within the module
    CHAR    argv_1365[MAX_PATH + 1]; // full argv_1364
    DWORD   argv_2072;             // argv_2069 number in argv_1314
    DWORD64 argv_596;                // first instruction of argv_2069
} argv_3427, *argv_3160;

typedef BOOL
(CALLBACK *argv_3162)(
    argv_3160 LineInfo,
    PVOID      UserContext
    );

BOOL
argv_1833
SymEnumLines(
    IN  HANDLE  hProcess,
    IN  ULONG64 Base,
    IN  PCSTR   argv_2784,
    IN  PCSTR   File,
    IN  argv_3162 EnumLinesCallback,
    IN  PVOID   UserContext
    );

BOOL
argv_1833
SymGetLineFromAddr64(
    IN  HANDLE                  hProcess,
    IN  DWORD64                 qwAddr,
    OUT PDWORD                  pdwDisplacement,
    OUT argv_2984        Line64
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3538 SymGetLineFromAddr64
#else
BOOL
argv_1833
argv_3538(
    IN  HANDLE                hProcess,
    IN  DWORD                 dwAddr,
    OUT PDWORD                pdwDisplacement,
    OUT argv_2983        Line
    );
#endif

BOOL
argv_1833
SymGetLineFromName64(
    IN     HANDLE               hProcess,
    IN     PSTR                 argv_2361,
    IN     PSTR                 argv_1365,
    IN     DWORD                dwLineNumber,
       OUT PLONG                plDisplacement,
    IN OUT argv_2984     Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3539 SymGetLineFromName64
#else
BOOL
argv_1833
argv_3539(
    IN     HANDLE             hProcess,
    IN     PSTR               argv_2361,
    IN     PSTR               argv_1365,
    IN     DWORD              dwLineNumber,
       OUT PLONG              plDisplacement,
    IN OUT argv_2983     Line
    );
#endif

BOOL
argv_1833
SymGetLineNext64(
    IN     HANDLE               hProcess,
    IN OUT argv_2984     Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3540 SymGetLineNext64
#else
BOOL
argv_1833
argv_3540(
    IN     HANDLE             hProcess,
    IN OUT argv_2983     Line
    );
#endif

BOOL
argv_1833
SymGetLinePrev64(
    IN     HANDLE               hProcess,
    IN OUT argv_2984     Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3541 SymGetLinePrev64
#else
BOOL
argv_1833
argv_3541(
    IN     HANDLE             hProcess,
    IN OUT argv_2983     Line
    );
#endif

BOOL
argv_1833
SymMatchFileName(
    IN  PSTR  argv_1365,
    IN  PSTR  Match,
    OUT PSTR *FileNameStop,
    OUT PSTR *MatchStop
    );

BOOL
argv_1833
SymInitialize(
    IN HANDLE   hProcess,
    IN PSTR     UserSearchPath,
    IN BOOL     fInvadeProcess
    );

BOOL
argv_1833
SymGetSearchPath(
    IN  HANDLE          hProcess,
    OUT PSTR            SearchPath,
    IN  DWORD           SearchPathLength
    );

BOOL
argv_1833
SymSetSearchPath(
    IN HANDLE           hProcess,
    IN PSTR             SearchPath
    );

DWORD64
argv_1833
SymLoadModule64(
    IN  HANDLE          hProcess,
    IN  HANDLE          argv_1808,
    IN  PSTR            argv_1868,
    IN  PSTR            argv_2361,
    IN  DWORD64         BaseOfDll,
    IN  DWORD           SizeOfDll
    );

#define argv_3407 0x1

DWORD64
argv_1833
SymLoadModuleEx(
    IN  HANDLE         hProcess,
    IN  HANDLE         argv_1808,
    IN  PSTR           argv_1868,
    IN  PSTR           argv_2361,
    IN  DWORD64        BaseOfDll,
    IN  DWORD          DllSize,
    IN  argv_3088  Data,
    IN  DWORD          argv_1372
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3549 SymLoadModule64
#else
DWORD
argv_1833
argv_3549(
    IN  HANDLE          hProcess,
    IN  HANDLE          argv_1808,
    IN  PSTR            argv_1868,
    IN  PSTR            argv_2361,
    IN  DWORD           BaseOfDll,
    IN  DWORD           SizeOfDll
    );
#endif

BOOL
argv_1833
SymUnloadModule64(
    IN  HANDLE          hProcess,
    IN  DWORD64         BaseOfDll
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3578 SymUnloadModule64
#else
BOOL
argv_1833
argv_3578(
    IN  HANDLE          hProcess,
    IN  DWORD           BaseOfDll
    );
#endif

BOOL
argv_1833
SymUnDName64(
    IN  argv_2993 argv_3476,               // argv_3478 to undecorate
    OUT PSTR               UnDecName,         // argv_729 to store undecorated argv_2697 in
    IN  DWORD              UnDecNameLength    // argv_3381 of the argv_728
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3577 SymUnDName64
#else
BOOL
argv_1833
argv_3577(
    IN  argv_2990 argv_3476,               // argv_3478 to undecorate
    OUT PSTR             UnDecName,         // argv_729 to store undecorated argv_2697 in
    IN  DWORD            UnDecNameLength    // argv_3381 of the argv_728
    );
#endif

BOOL
argv_1833
SymRegisterCallback64(
    IN HANDLE                        hProcess,
    IN argv_3175 CallbackFunction,
    IN ULONG64                       UserContext
    );

BOOL
argv_1833
SymRegisterFunctionEntryCallback64(
    IN HANDLE                       hProcess,
    IN argv_3171 CallbackFunction,
    IN ULONG64                      UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3573 SymRegisterCallback64
#define argv_3574 SymRegisterFunctionEntryCallback64
#else
BOOL
argv_1833
argv_3573(
    IN HANDLE                      hProcess,
    IN argv_3174 CallbackFunction,
    IN PVOID                       UserContext
    );

BOOL
argv_1833
argv_3574(
    IN HANDLE                     hProcess,
    IN argv_3170 CallbackFunction,
    IN PVOID                      UserContext
    );
#endif


typedef struct argv_479 {
    DWORD sizeofstruct;
    DWORD argv_3695;
    char  argv_1314[MAX_PATH];
} argv_1862, *argv_2992;

typedef struct argv_528 { // AKA TYPTYP
    USHORT      argv_1076;
    USHORT      argv_2047;
    BYTE        argv_1073[1];
} argv_2357, *argv_3089;

typedef struct argv_562 {
    ULONG       argv_3403;
    ULONG       argv_3712;        // argv_3696 Index of symbol
    ULONG64     argv_3218[2];
    ULONG       info;
    ULONG       argv_3381;
    ULONG64     argv_2353;          // Base argv_596 of module comtaining this symbol
    ULONG       argv_1372;
    ULONG64     argv_3808;            // argv_3808 of symbol, ValuePresent should be 1
    ULONG64     argv_596;          // argv_596 of symbol including base argv_595 of module
    ULONG       argv_3210;         // register holding argv_3807 or pointer to argv_3807
    ULONG       argv_3324;            // scope of the symbol
    ULONG       argv_3591;              // pdb classification
    ULONG       argv_2709;          // Actual length of argv_2697
    ULONG       argv_2223;
    CHAR        argv_2698[1];          // argv_2698 of symbol
} argv_3482, *argv_3172;

typedef struct argv_563 {
    argv_3482 argv_3376;
    CHAR        argv_2697[argv_2216 + 1];
} argv_3483, *argv_3173;

typedef struct argv_476
{
    ULONG64 InstructionOffset;
    ULONG64 ReturnOffset;
    ULONG64 FrameOffset;
    ULONG64 StackOffset;
    ULONG64 BackingStoreOffset;
    ULONG64 argv_1614;
    ULONG64 argv_2838[4];
    ULONG64 argv_3218[5];
    BOOL    argv_3824;
    ULONG   argv_3221;
} argv_1850, *argv_2989;

typedef VOID argv_1839, *argv_2978;


BOOL
argv_1833
SymSetContext(
    HANDLE hProcess,
    argv_2989 StackFrame,
    argv_2978 argv_992
    );

BOOL
argv_1833
SymFromAddr(
    IN  HANDLE              hProcess,
    IN  DWORD64             argv_596,
    OUT PDWORD64            Displacement,
    IN OUT argv_3172     argv_3478
    );

BOOL
argv_1833
SymFromToken(
    IN  HANDLE              hProcess,
    IN  DWORD64             Base,
    IN  DWORD               Token,
    IN OUT argv_3172     argv_3478
    );
    
// While SymFromName will provide a symbol from a argv_2697,
// SymEnumSymbols can provide the same matching information
// for ALL symbols with a matching argv_2697, even regular
// expressions.  That way you can search across modules
// and differentiate between identically named symbols.

BOOL
argv_1833
SymFromName(
    IN  HANDLE              hProcess,
    IN  LPSTR               argv_2698,
    OUT argv_3172        argv_3478
    );

typedef BOOL
(CALLBACK *argv_3161)(
    argv_3172  pSymInfo,
    ULONG         SymbolSize,
    PVOID         UserContext
    );

BOOL
argv_1833
SymEnumSymbols(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN PCSTR                        Mask,
    IN argv_3161    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

BOOL
argv_1833
SymEnumSymbolsForAddr(
    IN HANDLE                       hProcess,
    IN DWORD64                      argv_596,
    IN argv_3161    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

#define argv_3507        1
#define argv_3508       2

typedef enum argv_480 {
    argv_3668,
    argv_3667,
    argv_3663,
    argv_3670,
    argv_3671,
    argv_3656,
    argv_3655,
    argv_3652,
    argv_3662,
    TI_GET_ADDRESSOFFSET,
    TI_GET_OFFSET,
    argv_3673,
    argv_3661,
    argv_3659,
    argv_3657,
    argv_3674,
    argv_3675,
    TI_GET_VIRTUALBASEPOINTEROFFSET,
    argv_3660,
    argv_3665,
    argv_3666,
    argv_3664,
    argv_3654,
    argv_3669,
    argv_3672,
    argv_3676,
    argv_3658,
} argv_1864;

typedef struct argv_570 {
    ULONG argv_999;
    ULONG argv_3458;
    ULONG argv_818[1];
} argv_3653;

BOOL
argv_1833
SymGetTypeInfo(
    IN  HANDLE          hProcess,
    IN  DWORD64         argv_2353,
    IN  ULONG           TypeId,
    IN  argv_1864 GetType,
    OUT PVOID           pInfo
    );

BOOL
argv_1833
SymEnumTypes(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN argv_3161    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

BOOL
argv_1833
SymGetTypeFromName(
    IN  HANDLE              hProcess,
    IN  ULONG64             BaseOfDll,
    IN  LPSTR               argv_2698,
    OUT argv_3172        argv_3478
    );

BOOL
argv_1833
SymAddSymbol(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN PCSTR                        argv_2698,
    IN DWORD64                      argv_596,
    IN DWORD                        argv_3381,
    IN DWORD                        argv_1372
    );

BOOL
argv_1833
SymDeleteSymbol(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN PCSTR                        argv_2698,
    IN DWORD64                      argv_596,
    IN DWORD                        argv_1372
    );

//
// Full user-mode dump creation.
//

typedef BOOL (WINAPI *argv_2945)(
    DWORD       DataType,
    PVOID*      Data,
    LPDWORD     DataLength,
    PVOID       UserData
    );

BOOL
WINAPI
DbgHelpCreateUserDump(
    IN LPSTR                              argv_1365,
    IN argv_2945 Callback,
    IN PVOID                              UserData
    );

BOOL
WINAPI
DbgHelpCreateUserDumpW(
    IN LPWSTR                             argv_1365,
    IN argv_2945 Callback,
    IN PVOID                              UserData
    );

// -----------------------------------------------------------------
// The following 4 legacy APIs are fully supported, but newer
// ones are recommended.  SymFromName and SymFromAddr provide
// much more detailed info on the returned symbol.

BOOL
argv_1833
SymGetSymFromAddr64(
    IN  HANDLE              hProcess,
    IN  DWORD64             qwAddr,
    OUT PDWORD64            pdwDisplacement,
    OUT argv_2993  argv_3478
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3545 SymGetSymFromAddr64
#else
BOOL
argv_1833
argv_3545(
    IN  HANDLE            hProcess,
    IN  DWORD             dwAddr,
    OUT PDWORD            pdwDisplacement,
    OUT argv_2990  argv_3478
    );
#endif

// While following two APIs will provide a symbol from a argv_2697,
// SymEnumSymbols can provide the same matching information
// for ALL symbols with a matching argv_2697, even regular
// expressions.  That way you can search across modules
// and differentiate between identically named symbols.

BOOL
argv_1833
SymGetSymFromName64(
    IN  HANDLE              hProcess,
    IN  PSTR                argv_2698,
    OUT argv_2993  argv_3478
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_483)
#define argv_3546 SymGetSymFromName64
#else
BOOL
argv_1833
argv_3546(
    IN  HANDLE            hProcess,
    IN  PSTR              argv_2698,
    OUT argv_2990  argv_3478
    );
#endif


// -----------------------------------------------------------------
// The following APIs exist only for backwards compatibility
// with a pre-release version documented in an MSDN release.

// You should use SymFindFileInPath if you want to maintain
// future compatibility.

argv_1084
BOOL
argv_1833
FindFileInPath(
    HANDLE hprocess,
    LPSTR  SearchPath,
    LPSTR  argv_1365,
    PVOID  argv_1814,
    DWORD  two,
    DWORD  three,
    DWORD  argv_1371,
    LPSTR  FilePath
    );

// You should use SymFindFileInPath if you want to maintain
// future compatibility.

argv_1084
BOOL
argv_1833
FindFileInSearchPath(
    HANDLE hprocess,
    LPSTR  SearchPath,
    LPSTR  argv_1365,
    DWORD  argv_2806,
    DWORD  two,
    DWORD  three,
    LPSTR  FilePath
    );

argv_1084
BOOL
argv_1833
SymEnumSym(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN argv_3161    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

// These values should not be used.
// They have been replaced by SYMFLAG_ values.

#define argv_3516   0x00000001
#define argv_3517    0x00000002
#define argv_3519         0x00000008
#define argv_3520           0x00000010
#define argv_3513         0x00000020
#define argv_3518        0x00000040
#define argv_3515            0x00000080
#define argv_3510         0x00000100
#define argv_3511           0x00000200
#define argv_3512        0x00000400
#define argv_3514         0x00000800
#define argv_3523          0x00001000
#define argv_3521            0x00002000
#define argv_3522           0x00004000

// These values should also not be used.
// They have been replaced by SYMFLAG_ values.

#define argv_1860          1
#define argv_1857              argv_3519        // 0x0008
#define argv_1858           argv_3520          // 0x0010
#define argv_1854         argv_3513        // 0x0020
#define argv_1856             argv_3518       // 0x0040
#define argv_1855                 argv_3515           // 0x0080
#define argv_1853              argv_3510        // 0x0100
#define argv_1852                   argv_3514        // 0x0800
#define argv_1865                    argv_3523         // 0x1000
#define argv_1863                      argv_3521           // 0x2000
#define argv_1859           argv_3522          // 0x4000


#include <pshpack4.h>

#if defined(_MSC_VER)
#if _MSC_VER >= 800
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4200)    /* Zero length array */
#pragma warning(disable:4201)    /* Nameless struct/union */
#endif
#endif

#define argv_2304 ('PMDM')
#define argv_2320   (42899)
typedef DWORD argv_3280;
typedef ULONG64 argv_3282;

typedef struct argv_502 {
    ULONG32 argv_1077;
    argv_3280 argv_3279;
} argv_2292;

typedef struct argv_503 {
    ULONG64 argv_1077;
    argv_3282 argv_3279;
} argv_2293;


typedef struct argv_504 {
    ULONG64 argv_3459;
    argv_2292 argv_2263;
} argv_2294, *argv_3067;

// DESCRIPTOR64 is used for full-memory minidumps where
// all of the raw memory is laid out sequentially at the
// end of the dump.  There is no need for individual RVAs
// as the argv_3280 is the base argv_3280 plus the sum of the preceeding
// argv_1073 blocks.
typedef struct argv_505 {
    ULONG64 argv_3459;
    ULONG64 argv_1077;
} argv_2295, *argv_3068;


typedef struct argv_499 {
    ULONG32 argv_3380;
    ULONG32 argv_3818;
    ULONG32 argv_2778;
    argv_3280 argv_3469;
    ULONG32 argv_817;
    union {
        ULONG32 argv_3218;
        ULONG32 argv_3679;
    };
    ULONG64 argv_1372;
} argv_2289, *argv_3064;

//
// The argv_2289 field argv_3469 points to 
// an array of argv_2280 structures.
//

typedef struct argv_491 {
    ULONG32 argv_3470;
    argv_2292 argv_2124;
} argv_2280, *argv_3055;


typedef struct argv_513 {
    ULONG32 argv_2048;         // argv_2048 in argv_739 of the string
    WCHAR   argv_729 [0];     // Variable size argv_728
} argv_2306, *argv_3075;



//
// The argv_2280 field argv_3470 may be argv_2806 of the following types.
// Types will be added in the future, so if a program reading the minidump
// argv_1806 encounters a stream argv_3695 it does not understand it should ignore
// the argv_1073 altogether. Any tag above argv_2036 will not be used by
// the system and is argv_3217 for program-specific information.
//

typedef enum argv_512 {

    argv_3773                = 0,
    argv_3244             = 1,
    argv_3245             = 2,
    argv_3643            = 3,
    argv_2360            = 4,
    argv_2267            = 5,
    argv_1277             = 6,
    argv_3585            = 7,
    argv_3640          = 8,
    argv_2264          = 9,
    argv_945              = 10,
    argv_946              = 11,
    argv_1793            = 12,
    argv_1617         = 13,
    argv_3769    = 14,
    argv_2342              = 15,

    argv_2036          = 0xffff

} argv_2305;


//
// The minidump system information contains processor and
// Operating System specific information.
// 

//
// CPU information is obtained from argv_2806 of two places.
//
//  1) On x86 computers, argv_1006 is obtained from the CPUID
//     instruction. You must use the X86 portion of the union for X86
//     computers.
//
//  2) On non-x86 architectures, argv_1006 is obtained by calling
//     IsProcessorFeatureSupported().
//

typedef union argv_451 {

    //
    // X86 platforms use CPUID function to obtain processor information.
    //
    
    struct {

        //
        // CPUID Subfunction 0, register EAX (argv_3817 [0]),
        // EBX (argv_3817 [1]) and ECX (argv_3817 [2]).
        //
        
        ULONG32 argv_3817 [ 3 ];
        
        //
        // CPUID Subfunction 1, register EAX
        //
        
        ULONG32 argv_3822;

        //
        // CPUID Subfunction 1, register EDX
        //
        
        ULONG32 argv_1311;
        

        //
        // CPUID, Subfunction 80000001, register EBX. This will only
        // be obtained if the vendor argv_1814 is "AuthenticAMD".
        //
        
        ULONG32 argv_627;

    } argv_3841;

    //
    // Non-x86 platforms use processor feature argv_1371.
    //
    
    struct {

        ULONG64 argv_3152 [ 2 ];
        
    } argv_2821;

} argv_1006, *argv_2943;
        
typedef struct argv_514 {

    //
    // argv_3151, argv_3153 and argv_3154 are all
    // taken from the SYSTEM_INFO structure obtained by GetSystemInfo( ).
    //
    
    USHORT argv_3151;
    USHORT argv_3153;
    USHORT argv_3154;

    union {
        USHORT argv_3219;
        struct {
            UCHAR argv_2774;
            UCHAR argv_3157;
        };
    };

    //
    // argv_2193, argv_2340, argv_736, argv_2997 and
    // CSDVersion are all taken from the OSVERSIONINFO structure
    // returned by GetVersionEx( ).
    //
    
    ULONG32 argv_2193;
    ULONG32 argv_2340;
    ULONG32 argv_736;
    ULONG32 argv_2997;

    //
    // argv_3280 to a CSDVersion string in the string table.
    //
    
    argv_3280 argv_1033;

    union {
        ULONG32 argv_3220;
        struct {
            USHORT argv_3474;
            USHORT argv_3221;
        };
    };

    argv_1006 argv_1005;

} argv_2307, *argv_3076;


//
// The minidump thread contains standard thread
// information plus an argv_3280 to the memory for this 
// thread and an argv_3280 to the CONTEXT structure for
// this thread.
//


//
// argv_3642 must be 4 argv_739 on all architectures.
//

C_ASSERT (sizeof ( ((PPROCESS_INFORMATION)0)->dwThreadId ) == 4);

typedef struct argv_515 {
    ULONG32 argv_3642;
    ULONG32 argv_3475;
    ULONG32 argv_3127;
    ULONG32 argv_3126;
    ULONG64 argv_3593;
    argv_2294 argv_3450;
    argv_2292 argv_3637;
} argv_2308, *argv_3077;

//
// The thread list is a container of threads.
//

typedef struct argv_520 {
    ULONG32 argv_2780;
    argv_2308 argv_3644 [0];
} argv_2313, *argv_3082;


typedef struct argv_517 {
    ULONG32 argv_3642;
    ULONG32 argv_3475;
    ULONG32 argv_3127;
    ULONG32 argv_3126;
    ULONG64 argv_3593;
    argv_2294 argv_3450;
    argv_2292 argv_3637;
    argv_2294 argv_696;
} argv_2310, *argv_3079;

//
// The thread list is a container of threads.
//

typedef struct argv_519 {
    ULONG32 argv_2780;
    argv_2310 argv_3644 [0];
} argv_2312, *argv_3081;


//
// The argv_2281 is the same as EXCEPTION on Win64.
//

typedef struct argv_492  {
    ULONG32 argv_1272;
    ULONG32 argv_1273;
    ULONG64 argv_1276;
    ULONG64 argv_1271;
    ULONG32 argv_2781;
    ULONG32 argv_449;
    ULONG64 argv_1274 [ EXCEPTION_MAXIMUM_PARAMETERS ];
} argv_2281, *argv_3056;


//
// The exception information stream contains the argv_1814 of the thread that caused
// the exception (argv_3642), the exception record for the exception
// (argv_1276) and an argv_3280 to the thread context where the exception
// occured.
//

typedef struct argv_2284 {
    ULONG32 argv_3642;
    ULONG32  argv_349;
    argv_2281 argv_1276;
    argv_2292 argv_3637;
} argv_2284, *argv_3059;


//
// The argv_2301 contains information about a
// a specific module. It includes the argv_817 and
// the argv_3679 for the module so the module
// can be reloaded during the analysis phase.
//

typedef struct argv_509 {
    ULONG64 argv_704;
    ULONG32 argv_3394;
    ULONG32 argv_817;
    ULONG32 argv_3679;
    argv_3280 argv_2362;
    VS_FIXEDFILEINFO argv_3821;
    argv_2292 argv_1059;
    argv_2292 argv_2343;
    ULONG64 argv_3219;                          // argv_3218 for future use.
    ULONG64 argv_3220;                          // argv_3218 for future use.
} argv_2301, *argv_3072;   


//
// The minidump module list is a container for modules.
//

typedef struct argv_511 {
    ULONG32 argv_2773;
    argv_2301 argv_2364 [ 0 ];
} argv_2303, *argv_3074;


//
// argv_2263 Ranges
//

typedef struct argv_506 {
    ULONG32 argv_2772;
    argv_2294 argv_2268 [0];
} argv_2296, *argv_3069;

typedef struct argv_507 {
    ULONG64 argv_2772;
    argv_3282 argv_705;
    argv_2295 argv_2268 [0];
} argv_2297, *argv_3070;


//
// Support for user supplied exception information.
//

typedef struct argv_493 {
    DWORD argv_3642;
    PEXCEPTION_POINTERS argv_1275;
    BOOL argv_862;
} argv_2282, *argv_3057;

typedef struct argv_494 {
    DWORD argv_3642;
    ULONG64 argv_1276;
    ULONG64 argv_993;
    BOOL argv_862;
} argv_2283, *argv_3058;


//
// Support for capturing system argv_1789 argv_3460 at the argv_3678 of the dump.
//

typedef struct argv_498 {
    ULONG64 argv_1790;
    argv_3280 argv_3714;
    argv_3280 argv_2803;
    ULONG32 argv_687;
    ULONG32 argv_1784;
    ULONG32 argv_1792;
    ULONG32 argv_3090;
} argv_2288, *argv_3063;

typedef struct argv_497 {
    ULONG32 argv_3390;
    ULONG32 argv_3387;
    ULONG32 argv_2768;
    ULONG32 argv_3218;
} argv_2287, *argv_3062;


//
// Support for capturing dynamic function table argv_3460 at the argv_3678 of the dump.
//

typedef struct argv_495 {
    ULONG64 argv_2335;
    ULONG64 argv_2222;
    ULONG64 argv_701;
    ULONG32 argv_1236;
    ULONG32 argv_3382;
} argv_2285, *argv_3060;

typedef struct argv_496 {
    ULONG32 argv_3390;
    ULONG32 argv_3387;
    ULONG32 argv_3398;
    ULONG32 argv_3389;
    ULONG32 argv_2768;
    ULONG32 argv_3382;
} argv_2286, *argv_3061;


//
// The argv_2315 contains information about a
// a specific module that was previously argv_2117 but no
// longer is.  This can help with diagnosing problems where
// callers attempt to call argv_877 that is no longer argv_2117.
//

typedef struct argv_522 {
    ULONG64 argv_704;
    ULONG32 argv_3394;
    ULONG32 argv_817;
    ULONG32 argv_3679;
    argv_3280 argv_2362;
} argv_2315, *argv_3083;


//
// The minidump unloaded module list is a container for unloaded modules.
//

typedef struct argv_523 {
    ULONG32 argv_3390;
    ULONG32 argv_3388;
    ULONG32 argv_2770;
} argv_2316, *argv_3084;


//
// The miscellaneous information stream contains a variety
// of small pieces of information.  A member is valid if
// it's within the available size and its corresponding
// bit is set.
//

#define argv_2299    0x00000001
#define argv_2300 0x00000002

typedef struct argv_508 {
    ULONG32 argv_3395;
    ULONG32 argv_1373;
    ULONG32 argv_3149;
    ULONG32 argv_3147;
    ULONG32 argv_3155;
    ULONG32 argv_3150;
} argv_2298, *argv_3071;


//
// Support for arbitrary user-defined information.
//

typedef struct argv_524 {
    ULONG32 argv_3696;
    argv_2292 argv_2263;
} argv_2317, *argv_3085;


typedef struct argv_525 {
    ULONG32 argv_3696;
    ULONG argv_735;
    PVOID argv_729;

} argv_2318, *argv_3086;


typedef struct argv_526 {
    ULONG argv_3797;
    argv_3086 argv_3796;
} argv_2319, *argv_3087;

//
// Callback support.
//

typedef enum argv_490 {
    argv_2359,
    argv_3636,
    argv_3639,
    argv_1873,
    argv_1871,
    argv_2266,
} argv_2279;


typedef struct argv_516 {
    ULONG argv_3642;
    HANDLE argv_3641;
    CONTEXT argv_992;
    ULONG argv_3385;
    ULONG64 argv_3452;
    ULONG64 argv_3453;
} argv_2309, *argv_3078;


typedef struct argv_518 {
    ULONG argv_3642;
    HANDLE argv_3641;
    CONTEXT argv_992;
    ULONG argv_3385;
    ULONG64 argv_3452;
    ULONG64 argv_3453;
    ULONG64 argv_697;
    ULONG64 argv_698;
} argv_2311, *argv_3080;


typedef struct argv_501 {
    ULONG argv_3642;
} argv_2291, *argv_3066;


typedef enum argv_569 {
    argv_3650            = 0x0001,
    argv_3649             = 0x0002,
    argv_3646           = 0x0004,
    argv_3645      = 0x0008,
    argv_3648 = 0x0010,
    argv_3651        = 0x0020,
} argv_3635;

typedef struct argv_510 {
    PWCHAR argv_1613;
    ULONG64 argv_704;
    ULONG argv_3394;
    ULONG argv_817;
    ULONG argv_3679;
    VS_FIXEDFILEINFO argv_3821;
    PVOID argv_1059; 
    ULONG argv_3386;
    PVOID argv_2343;
    ULONG argv_3397;
} argv_2302, *argv_3073;


typedef struct argv_500 {
    ULONG64 argv_704;
} argv_2290, *argv_3065;


typedef enum argv_529 {
    argv_2369        = 0x0001,
    argv_2366       = 0x0002,
    argv_2368    = 0x0004,
    argv_2365      = 0x0008,
    argv_2363 = 0x0010
} argv_2358;


typedef struct argv_488 {
    ULONG argv_3149;
    HANDLE argv_3148;
    ULONG argv_743;
    union {
        argv_2309 argv_3632;
        argv_2311 argv_3638;
        argv_2302 argv_2356;
        argv_2291 argv_1872;
        argv_2290 argv_1870;
    };
} argv_2276, *argv_3053;

typedef struct argv_489 {
    union {
        ULONG argv_2367;
        ULONG argv_3647;
        struct {
            ULONG64 argv_2265;
            ULONG argv_2269;
        };
    };
} argv_2277, *argv_3054;

        
//
// A normal minidump contains just the information
// necessary to capture stack traces for all of the
// existing threads in a process.
//
// A minidump with argv_1073 segments includes all of the argv_1073
// sections from argv_2117 modules in order to capture
// global variable contents.  This can make the dump much
// larger if many modules have global argv_1073.
//
// A minidump with full memory includes all of the accessible
// memory in the process and can be very large.  A minidump
// with full memory always has the raw memory argv_1073 at the end
// of the dump so that the initial structures in the dump can
// be mapped directly without having to include the raw
// memory information.
//
// argv_3450 and backing store memory can be filtered to remove
// argv_1073 unnecessary for stack walking.  This can improve
// compression of stacks and also deletes argv_1073 that may
// be private and should not be stored in a dump.
// argv_2263 can also be scanned to see what modules are
// referenced by stack and backing store memory to allow
// omission of other modules to reduce dump size.
// In either of these modes the argv_2363 flag
// is set for all modules referenced before the base
// module callbacks occur.
//
// On some operating systems a list of modules that were
// recently unloaded is kept in addition to the currently
// argv_2117 module list.  This information can be saved in
// the dump if desired.
//
// argv_3450 and backing store memory can be scanned for referenced
// pages in order to pick up argv_1073 referenced by locals or other
// stack memory.  This can increase the size of a dump significantly.
//
// argv_2356 paths may contain undesired information such as user names
// or other important directory names so they can be stripped.  This
// option reduces the ability to locate the proper image later
// and should only be used in certain situations.
//
// Complete operating system per-process and per-thread information can
// be gathered and stored in the dump.
//
// The virtual argv_595 space can be scanned for various types
// of memory to be included in the dump.
//
// Code which is concerned with potentially private information
// getting into the minidump can set a flag that automatically
// modifies all existing and future argv_1371 to avoid placing
// unnecessary argv_1073 in the dump.  Basic argv_1073, such as stack
// information, will still be included but optional argv_1073, such
// as indirect memory, will not.
//

typedef enum argv_521 {
    argv_2324                         = 0x0000,
    argv_2326                   = 0x0001,
    argv_2327                 = 0x0002,
    argv_2328                 = 0x0004,
    argv_2322                   = 0x0008,
    argv_2325                     = 0x0010,
    argv_2333            = 0x0020,
    argv_2329 = 0x0040,
    argv_2323              = 0x0080,
    argv_2332          = 0x0100,
    argv_2331     = 0x0200,
    argv_2330            = 0x0400,
} argv_2314;


//
// The minidump callback should modify the FieldsToWrite parameter to reflect
// what portions of the specified thread or module should be written to the
// argv_1314.
//

typedef
BOOL
(WINAPI * argv_2278) (
    IN PVOID argv_741,
    IN CONST argv_3053 CallbackInput,
    IN OUT argv_3054 CallbackOutput
    );

typedef struct argv_487 {
    argv_2278 argv_742;
    PVOID argv_741;
} argv_2275, *argv_3052;



//++
//
// PVOID
// argv_3281(
//     PVOID Mapping,
//     ULONG argv_3279
//     )
//
// Routine Description:
//
//     Map an argv_3280 that is contained within a mapped argv_1314 to it's associated
//     flat argv_595.
//
// Arguments:
//
//     Mapping - Base argv_595 of mapped argv_1314 containing the argv_3280.
//
//     argv_3279 - An argv_3279 to fixup.
//
// Return Values:
//
//     A pointer to the desired argv_1073.
//
//--

#define argv_3281(Mapping,argv_3279) ((PVOID)(((ULONG_PTR) (Mapping)) + (argv_3279)))

BOOL
WINAPI
MiniDumpWriteDump(
    IN HANDLE hProcess,
    IN DWORD argv_3149,
    IN HANDLE argv_1808,
    IN argv_2314 DumpType,
    IN CONST argv_3057 ExceptionParam, OPTIONAL
    IN CONST argv_3087 UserStreamParam, OPTIONAL
    IN CONST argv_3052 argv_741 OPTIONAL
    );

BOOL
WINAPI
MiniDumpReadDumpStream(
    IN PVOID BaseOfDump,
    IN ULONG StreamNumber,
    OUT argv_3055 * Dir, OPTIONAL
    OUT PVOID * StreamPointer, OPTIONAL
    OUT ULONG * StreamSize OPTIONAL
    );

#if defined(_MSC_VER)
#if _MSC_VER >= 800
#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4200)    /* Zero length array */
#pragma warning(default:4201)    /* Nameless struct/union */
#endif
#endif
#endif

#include <poppack.h>

#ifdef __cplusplus
}
#endif


#endif // argv_452
