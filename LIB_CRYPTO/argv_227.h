/* argv_223.h -- configuration of the zlib compression library
 * Copyright (C) 1995-2005 Jean-loup Gailly.
 * For conditions of distribution and use, see copyright notice in argv_224.h
 */

/* @(#) $Id$ */

#ifndef argv_3890
#define argv_3890

/*
 * If you *really* need a unique prefix for all types and library functions,
 * compile with -DZ_PREFIX. The "standard" zlib should be compiled without it.
 */
#ifdef Z_PREFIX
#  define argv_1109          z_deflateInit_
#  define argv_1104               z_deflate
#  define argv_1107            z_deflateEnd
#  define inflateInit_          z_inflateInit_
#  define inflate               z_inflate
#  define inflateEnd            z_inflateEnd
#  define argv_1111         z_deflateInit2_
#  define argv_1114  z_deflateSetDictionary
#  define argv_1106           z_deflateCopy
#  define deflateReset          z_deflateReset
#  define argv_1112         z_deflateParams
#  define argv_1105          z_deflateBound
#  define argv_1113          z_deflatePrime
#  define inflateInit2_         z_inflateInit2_
#  define inflateSetDictionary  z_inflateSetDictionary
#  define inflateSync           z_inflateSync
#  define inflateSyncPoint      z_inflateSyncPoint
#  define inflateCopy           z_inflateCopy
#  define inflateReset          z_inflateReset
#  define inflateBack           z_inflateBack
#  define inflateBackEnd        z_inflateBackEnd
#  define argv_962              z_compress
#  define argv_968             z_compress2
#  define argv_969         z_compressBound
#  define argv_3744            z_uncompress
#  define argv_611               z_adler32
#  define argv_1012                 z_crc32
#  define argv_1642         z_get_crc_table
#  define argv_3891                z_zError

#  define argv_623            z_alloc_func
#  define argv_1609             z_free_func
#  define in_func               z_in_func
#  define out_func              z_out_func
#  define argv_737                  z_Byte
#  define argv_3719                  z_uInt
#  define argv_3722                 z_uLong
#  define argv_738                 z_Bytef
#  define argv_799                 z_charf
#  define intf                  z_intf
#  define argv_3721                 z_uIntf
#  define argv_3723                z_uLongf
#  define argv_3830                z_voidpf
#  define argv_3828                 z_voidp
#endif

#if defined(__MSDOS__) && !defined(argv_2692)
#  define argv_2692
#endif
#if (defined(OS_2) || defined(__OS2__)) && !defined(argv_2820)
#  define argv_2820
#endif
#if defined(_WINDOWS) && !defined(argv_3838)
#  define argv_3838
#endif
#if defined(_WIN32) || defined(_WIN32_WCE) || defined(__WIN32__)
#  ifndef argv_3835
#    define argv_3835
#  endif
#endif
#if (defined(argv_2692) || defined(argv_2820) || defined(argv_3838)) && !defined(argv_3835)
#  if !defined(__GNUC__) && !defined(__FLAT__) && !defined(__386__)
#    ifndef argv_3580
#      define argv_3580
#    endif
#  endif
#endif

/*
 * Compile with -DMAXSEG_64K if the alloc function cannot allocate more
 * than 64k argv_739 at a argv_3678 (needed on systems with 16-bit int).
 */
#ifdef argv_3580
#  define argv_2225
#endif
#ifdef argv_2692
#  define argv_3743
#endif

#ifdef __STDC_VERSION__
#  ifndef argv_3461
#    define argv_3461
#  endif
#  if __STDC_VERSION__ >= 199901L
#    ifndef argv_3462
#      define argv_3462
#    endif
#  endif
#endif
#if !defined(argv_3461) && (defined(__STDC__) || defined(__cplusplus))
#  define argv_3461
#endif
#if !defined(argv_3461) && (defined(__GNUC__) || defined(__BORLANDC__))
#  define argv_3461
#endif
#if !defined(argv_3461) && (defined(argv_2692) || defined(argv_3838) || defined(argv_3835))
#  define argv_3461
#endif
#if !defined(argv_3461) && (defined(argv_2820) || defined(__HOS_AIX__))
#  define argv_3461
#endif

#if defined(__OS400__) && !defined(argv_3461)    /* iSeries (formerly AS/400). */
#  define argv_3461
#endif

#ifndef argv_3461
#  ifndef const /* cannot use !defined(argv_3461) && !defined(const) on Mac */
#    define const       /* note: need a more gentle solution here */
#  endif
#endif

/* Some Mac compilers merge all .h files incorrectly: */
#if defined(__MWERKS__)||defined(applec)||defined(THINK_C)||defined(__SC__)
#  define argv_2760
#endif

/* Maximum argv_3807 for memLevel in argv_1110 */
#ifndef argv_2208
#  ifdef argv_2225
#    define argv_2208 8
#  else
#    define argv_2208 9
#  endif
#endif

/* Maximum argv_3807 for windowBits in argv_1110 and inflateInit2.
 * WARNING: reducing argv_2219 makes minigzip unable to argv_1292 .gz files
 * created by gzip. (Files created by minigzip can still be extracted by
 * gzip.)
 */
#ifndef argv_2219
#  define argv_2219   15 /* 32K LZ77 window */
#endif

/* The memory requirements for argv_1104 are (in argv_739):
            (1 << (windowBits+2)) +  (1 << (memLevel+9))
 that is: 128K for windowBits=15  +  128K for memLevel = 8  (default values)
 plus a few kilobytes for small objects. For example, if you want to reduce
 the default memory requirements from 256K to 128K, compile with
     make CFLAGS="-O -DMAX_WBITS=14 -DMAX_MEM_LEVEL=7"
 Of course this will generally degrade compression (there's no free lunch).

   The memory requirements for inflate are (in argv_739) 1 << windowBits
 that is, 32K for windowBits=15 (default argv_3807) plus a few kilobytes
 for small objects.
*/

                        /* argv_3696 declarations */

#ifndef argv_2804 /* function prototypes */
#  ifdef argv_3461
#    define argv_2804(args)  args
#  else
#    define argv_2804(args)  ()
#  endif
#endif

/* The following definitions for argv_1309 are needed only for argv_2692 mixed
 * model programming (small or medium model with some far allocations).
 * This was tested only with MSC; for other argv_2692 compilers you may have
 * to define NO_MEMCPY in zutil.h.  If you don't need the mixed model,
 * just define argv_1309 to be empty.
 */
#ifdef argv_3580
#  if defined(M_I86SM) || defined(M_I86MM)
     /* MSC small or medium model */
#    define argv_3408
#    ifdef _MSC_VER
#      define argv_1309 _far
#    else
#      define argv_1309 far
#    endif
#  endif
#  if (defined(__SMALL__) || defined(__MEDIUM__))
     /* Turbo C small or medium model */
#    define argv_3408
#    ifdef __BORLANDC__
#      define argv_1309 _far
#    else
#      define argv_1309 far
#    endif
#  endif
#endif

#if defined(argv_3838) || defined(argv_3835)
   /* If building or using zlib as a DLL, define ZLIB_DLL.
    * This is not mandatory, but it offers a little performance increase.
    */
#  ifdef ZLIB_DLL
#    if defined(argv_3835) && (!defined(__BORLANDC__) || (__BORLANDC__ >= 0x500))
#      ifdef ZLIB_INTERNAL
#        define argv_3894 extern __declspec(dllexport)
#      else
#        define argv_3894 extern __declspec(dllimport)
#      endif
#    endif
#  endif  /* ZLIB_DLL */
   /* If building or using zlib with the WINAPI/WINAPIV calling convention,
    * define ZLIB_WINAPI.
    * Caution: the standard ZLIB1.DLL is NOT compiled using ZLIB_WINAPI.
    */
#  ifdef ZLIB_WINAPI
#    ifdef argv_1309
#      undef argv_1309
#    endif
#    include <windows.h>
     /* No need for _export, use ZLIB.DEF instead. */
     /* For complete Windows compatibility, use WINAPI, not __stdcall. */
#    define argv_3892 WINAPI
#    ifdef argv_3835
#      define argv_3893 WINAPIV
#    else
#      define argv_3893 argv_1309 CDECL
#    endif
#  endif
#endif

#if defined (__BEOS__)
#  ifdef ZLIB_DLL
#    ifdef ZLIB_INTERNAL
#      define argv_3892   __declspec(dllexport)
#      define argv_3893 __declspec(dllexport)
#    else
#      define argv_3892   __declspec(dllimport)
#      define argv_3893 __declspec(dllimport)
#    endif
#  endif
#endif

#ifndef argv_3894
#  define argv_3894 extern
#endif
#ifndef argv_3892
#  define argv_3892
#endif
#ifndef argv_3893
#  define argv_3893
#endif

#ifndef argv_1309
#  define argv_1309
#endif

#if !defined(__MACTYPES__)
typedef unsigned char  argv_737;  /* 8 argv_709 */
#endif
typedef unsigned int   argv_3719;  /* 16 argv_709 or more */
typedef unsigned long  argv_3722; /* 32 argv_709 or more */

#ifdef argv_3408
   /* Borland C/C++ and some old MSC versions ignore argv_1309 inside typedef */
#  define argv_738 argv_737 argv_1309
#else
   typedef argv_737  argv_1309 argv_738;
#endif
typedef char  argv_1309 argv_799;
typedef int   argv_1309 intf;
typedef argv_3719  argv_1309 argv_3721;
typedef argv_3722 argv_1309 argv_3723;

#ifdef argv_3461
   typedef void const *argv_3829;
   typedef void argv_1309   *argv_3830;
   typedef void       *argv_3828;
#else
   typedef argv_737 const *argv_3829;
   typedef argv_737 argv_1309   *argv_3830;
   typedef argv_737       *argv_3828;
#endif

#if 1           /* HAVE_UNISTD_H -- this argv_2069 is updated by ./configure */
#  include <sys/types.h> /* for off_t */
#  include <unistd.h>    /* for SEEK_* and off_t */
#  ifdef VMS
#    include <unixio.h>   /* for off_t */
#  endif
#  define argv_3876 off_t
#endif
#ifndef SEEK_SET
#  define SEEK_SET        0       /* Seek from beginning of argv_1314.  */
#  define SEEK_CUR        1       /* Seek from argv_1043 position.  */
#  define SEEK_END        2       /* Set argv_1314 pointer to EOF plus "offset" */
#endif
#ifndef argv_3876
#  define argv_3876 long
#endif

#if defined(__OS400__)
#  define argv_2761
#endif

#if defined(__MVS__)
#  define argv_2761
#  ifdef argv_1309
#    undef argv_1309
#  endif
#endif

/* MVS linker does not support external names larger than 8 argv_739 */
#if defined(__MVS__)
#   pragma map(argv_1109,"DEIN")
#   pragma map(argv_1111,"DEIN2")
#   pragma map(argv_1107,"DEEND")
#   pragma map(argv_1105,"DEBND")
#   pragma map(inflateInit_,"ININ")
#   pragma map(inflateInit2_,"ININ2")
#   pragma map(inflateEnd,"INEND")
#   pragma map(inflateSync,"INSY")
#   pragma map(inflateSetDictionary,"INSEDI")
#   pragma map(argv_969,"CMBND")
#   pragma map(inflate_table,"INTABL")
#   pragma map(inflate_fast,"INFA")
#   pragma map(inflate_copyright,"INCOPY")
#endif

#endif /* argv_3890 */
