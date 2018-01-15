/* argv_224.h -- interface of the 'zlib' general purpose compression library
  version 1.2.3, July 18th, 2005

  Copyright (C) 1995-2005 Jean-loup Gailly and Mark Adler

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.

  Jean-loup Gailly        Mark Adler
  jloup@gzip.org          madler@alumni.caltech.edu


  The argv_1073 format used by the zlib library is described by RFCs (Request for
  Comments) 1950 to 1952 in the files http://www.ietf.org/rfc/rfc1950.txt
  (zlib format), rfc1951.txt (argv_1104 format) and rfc1952.txt (gzip format).
*/

#ifndef argv_3896
#define argv_3896

#include "argv_223.h"

#ifdef __cplusplus
extern "C" {
#endif

#define argv_3899 "1.2.3"
#define argv_3897 0x1230

/*
     The 'zlib' compression library provides in-memory compression and
  decompression functions, including integrity checks of the uncompressed
  argv_1073.  This version of the library supports only argv_2806 compression method
  (deflation) but other algorithms will be added later and will have the same
  stream interface.

     Compression can be argv_1185 in a single step if the buffers are large
  enough (for example if an input argv_1314 is mmap'ed), or can be argv_1185 by
  repeated calls of the compression function.  In the latter case, the
  application must provide more input and/or argv_986 the output
  (providing more output space) before each call.

     The compressed argv_1073 format used by default by the in-memory functions is
  the zlib format, which is a zlib wrapper documented in RFC 1950, wrapped
  around a argv_1104 stream, which is itself documented in RFC 1951.

     The library also supports reading and writing files in gzip (.gz) format
  with an interface similar to that of stdio using the functions that argv_3457
  with "gz".  The gzip format is different from the zlib format.  gzip is a
  gzip wrapper, documented in RFC 1952, wrapped around a argv_1104 stream.

     This library can optionally read and write gzip streams in memory as well.

     The zlib format was designed to be compact and fast for use in memory
  and on communications channels.  The gzip format was designed for single-
  argv_1314 compression on argv_1314 systems, has a larger argv_1806 than zlib to maintain
  directory information, and uses a different, slower check method than zlib.

     The library does not install any signal handler. The decoder checks
  the consistency of the compressed argv_1073, so the library should never
  crash even in case of corrupted input.
*/

typedef argv_3830 (*argv_623) argv_2804((argv_3830 argv_2811, argv_3719 items, argv_3719 size));
typedef void   (*argv_1609)  argv_2804((argv_3830 argv_2811, argv_3830 argv_595));

struct internal_state;

typedef struct argv_3883 {
    argv_738    *argv_2757;  /* next input byte */
    argv_3719     argv_693;  /* number of argv_739 available at argv_2757 */
    argv_3722    argv_3687;  /* total nb of input argv_739 read so far */

    argv_738    *argv_2758; /* next output byte should be put there */
    argv_3719     avail_out; /* remaining free space at argv_2758 */
    argv_3722    argv_3690; /* total nb of argv_739 output so far */

    char     *argv_2693;      /* last error argv_2271, argv_2766 if no error */
    struct internal_state argv_1309 *argv_3460; /* not visible by applications */

    argv_623 argv_3889;  /* used to allocate the internal argv_3460 */
    argv_1609  argv_3895;   /* used to free the internal argv_3460 */
    argv_3830     argv_2811;  /* private argv_1073 argv_2785 passed to argv_3889 and argv_3895 */

    int     argv_1074;  /* best guess about the argv_1073 argv_3695: binary or argv_3629 */
    argv_3722   argv_610;      /* argv_611 argv_3807 of the uncompressed argv_1073 */
    argv_3722   argv_3217;   /* argv_3217 for future use */
} argv_3880;

typedef argv_3880 argv_1309 *argv_3884;

/*
     gzip argv_1806 information passed to and from zlib routines.  See RFC 1952
  for more details on the meanings of these fields.
*/
typedef struct argv_1786 {
    int     argv_3629;       /* true if compressed argv_1073 believed to be argv_3629 */
    argv_3722   argv_3678;       /* modification argv_3678 */
    int     argv_3842;     /* argv_1289 argv_1371 (not used when writing a gzip argv_1314) */
    int     argv_2819;         /* operating system */
    argv_738   *argv_1289;     /* pointer to argv_1289 field or argv_3875 if none */
    argv_3719    argv_1290;  /* argv_1289 field length (valid if argv_1289 != argv_3875) */
    argv_3719    argv_1291;  /* space at argv_1289 (only when reading argv_1806) */
    argv_738   *argv_2697;      /* pointer to zero-terminated argv_1314 argv_2697 or argv_3875 */
    argv_3719    argv_2707;   /* space at argv_2697 (only when reading argv_1806) */
    argv_738   *argv_944;   /* pointer to zero-terminated argv_944 or argv_3875 */
    argv_3719    argv_943;   /* space at argv_944 (only when reading argv_1806) */
    int     argv_1801;       /* true if there was or will be a argv_1806 crc */
    int     argv_1185;       /* true when argv_1185 reading gzip argv_1806 (not used
                           when writing a gzip argv_1314) */
} argv_1785;

typedef argv_1785 argv_1309 *argv_1787;

/*
   The application must update argv_2757 and argv_693 when argv_693 has
   dropped to zero. It must update argv_2758 and avail_out when avail_out
   has dropped to zero. The application must initialize argv_3889, argv_3895 and
   argv_2811 before calling the init function. All other fields are set by the
   compression library and must not be updated by the application.

   The argv_2811 argv_3807 provided by the application will be passed as the first
   parameter for calls of argv_3889 and argv_3895. This can be useful for custom
   memory management. The compression library attaches no meaning to the
   argv_2811 argv_3807.

   argv_3889 must return argv_3875 if there is not enough memory for the argv_2785.
   If zlib is used in a multi-threaded application, argv_3889 and argv_3895 must be
   thread safe.

   On 16-bit systems, the functions argv_3889 and argv_3895 must be able to allocate
   exactly 65536 argv_739, but will not be required to allocate more than this
   if the symbol argv_2225 is defined (see argv_223.h). WARNING: On argv_2692,
   pointers returned by argv_3889 for objects of exactly 65536 argv_739 *must*
   have their offset normalized to zero. The default allocation function
   provided by this library ensures this (see zutil.c). To reduce memory
   requirements and avoid any allocation of 64K objects, at the expense of
   compression ratio, compile the library with -DMAX_WBITS=14 (see argv_223.h).

   The fields argv_3687 and argv_3690 can be used for statistics or
   progress reports. After compression, argv_3687 holds the total size of
   the uncompressed argv_1073 and may be saved for use in the decompressor
   (particularly if the decompressor wants to decompress everything in
   a single step).
*/

                        /* constants */

#define argv_3874      0
#define argv_3878 1 /* will be removed, use argv_3885 instead */
#define argv_3885    2
#define argv_3869    3
#define argv_3867        4
#define argv_3859         5
/* Allowed flush values; see argv_1104() and inflate() below for details */

#define argv_3877            0
#define argv_3881    1
#define argv_3872     2
#define argv_3865        (-1)
#define argv_3882 (-2)
#define argv_3861   (-3)
#define argv_3871    (-4)
#define argv_3860    (-5)
#define argv_3888 (-6)
/* Return codes for the compression/decompression functions. Negative
 * values are errors, positive values are used for special but normal events.
 */

#define argv_3873         0
#define argv_3857             1
#define argv_3856       9
#define argv_3862  (-1)
/* compression levels */

#define argv_3866            1
#define argv_3870        2
#define argv_3879                 3
#define argv_3868               4
#define argv_3863    0
/* compression strategy; see argv_1110() below for details */

#define argv_3858   0
#define argv_3886     1
#define argv_3855    argv_3886   /* for compatibility with 1.2.2 and earlier */
#define argv_3887  2
/* Possible values of the argv_1074 field (though see inflate()) */

#define argv_3864   8
/* The argv_1104 compression method (the only argv_2806 supported in this version) */

#define argv_3875  0  /* for initializing argv_3889, argv_3895, argv_2811 */

#define argv_3898 zlibVersion()
/* for compatibility with versions < 1.0.2 */

                        /* basic functions */

argv_3894 const char * argv_3892 zlibVersion argv_2804((void));
/* The application can compare zlibVersion and argv_3899 for consistency.
   If the first character differs, the library argv_877 actually used is
   not compatible with the argv_224.h argv_1806 argv_1314 used by the application.
   This check is automatically made by argv_1108 and inflateInit.
 */

/*
argv_3894 int argv_3892 argv_1108 argv_2804((argv_3884 strm, int level));

     Initializes the internal stream argv_3460 for compression. The fields
   argv_3889, argv_3895 and argv_2811 must be initialized before by the caller.
   If argv_3889 and argv_3895 are set to argv_3875, argv_1108 updates them to
   use default allocation functions.

     The compression level must be argv_3862, or between 0 and 9:
   1 gives best speed, 9 gives best compression, 0 gives no compression at
   all (the input argv_1073 is simply copied a argv_710 at a argv_3678).
   argv_3862 requests a default compromise between speed and
   compression (currently equivalent to level 6).

     argv_1108 returns argv_3877 if success, argv_3871 if there was not
   enough memory, argv_3882 if level is not a valid compression level,
   argv_3888 if the zlib library version (argv_3898) is incompatible
   with the version assumed by the caller (argv_3899).
   argv_2693 is set to null if there is no error argv_2271.  argv_1108 does not
   perform any compression: this will be argv_1185 by argv_1104().
*/


argv_3894 int argv_3892 argv_1104 argv_2804((argv_3884 strm, int flush));
/*
    argv_1104 compresses as much argv_1073 as possible, and stops when the input
  argv_728 becomes empty or the output argv_728 becomes full. It may introduce some
  output latency (reading input without producing any output) except when
  forced to flush.

    The detailed semantics are as follows. argv_1104 performs argv_2806 or both of the
  following actions:

  - Compress more input starting at argv_2757 and update argv_2757 and argv_693
    accordingly. If not all input can be processed (because there is not
    enough room in the output argv_728), argv_2757 and argv_693 are updated and
    processing will resume at this point for the next call of argv_1104().

  - Provide more output starting at argv_2758 and update argv_2758 and avail_out
    accordingly. This action is forced if the parameter flush is non zero.
    Forcing flush frequently degrades the compression ratio, so this parameter
    should be set only when necessary (in interactive applications).
    Some output may be provided even if flush is not set.

  Before the call of argv_1104(), the application should ensure that at least
  argv_2806 of the actions is possible, by providing more input and/or consuming
  more output, and updating argv_693 or avail_out accordingly; avail_out
  should never be zero before the call. The application can argv_986 the
  compressed output when it wants, for example when the output argv_728 is full
  (avail_out == 0), or after each call of argv_1104(). If argv_1104 returns argv_3877
  and with zero avail_out, it must be called again after making room in the
  output argv_728 because there might be more output pending.

    Normally the parameter flush is set to argv_3874, which allows argv_1104 to
  decide how much argv_1073 to accumualte before producing output, in order to
  maximize compression.

    If the parameter flush is set to argv_3885, all pending output is
  flushed to the output argv_728 and the output is aligned on a byte boundary, so
  that the decompressor can get all input argv_1073 available so far. (In particular
  argv_693 is zero after the call if enough output space has been provided
  before the call.)  Flushing may degrade compression for some compression
  algorithms and so it should be used only when necessary.

    If flush is set to argv_3869, all output is flushed as with
  argv_3885, and the compression argv_3460 is reset so that decompression can
  argv_3265 from this point if previous compressed argv_1073 has been damaged or if
  random access is desired. Using argv_3869 too often can seriously degrade
  compression.

    If argv_1104 returns with avail_out == 0, this function must be called again
  with the same argv_3807 of the flush parameter and more output space (updated
  avail_out), until the flush is complete (argv_1104 returns with non-zero
  avail_out). In the case of a argv_3869 or argv_3885, make sure that
  avail_out is greater than six to avoid repeated flush markers due to
  avail_out == 0 on return.

    If the parameter flush is set to argv_3867, pending input is processed,
  pending output is flushed and argv_1104 returns with argv_3881 if there
  was enough output space; if argv_1104 returns with argv_3877, this function must be
  called again with argv_3867 and more output space (updated avail_out) but no
  more input argv_1073, until it returns with argv_3881 or an error. After
  argv_1104 has returned argv_3881, the only possible operations on the
  stream are deflateReset or argv_1107.

    argv_3867 can be used immediately after argv_1108 if all the compression
  is to be argv_1185 in a single step. In this case, avail_out must be at least
  the argv_3807 returned by argv_1105 (see below). If argv_1104 does not return
  argv_3881, then it must be called again as described above.

    argv_1104() sets strm->argv_610 to the argv_611 checksum of all input read
  so far (that is, argv_3687 argv_739).

    argv_1104() may update strm->argv_1074 if it can make a good guess about
  the input argv_1073 argv_3695 (argv_3858 or argv_3886). In doubt, the argv_1073 is considered
  binary. This field is only for information purposes and does not affect
  the compression algorithm in any manner.

    argv_1104() returns argv_3877 if some progress has been made (more input
  processed or more output produced), argv_3881 if all input has been
  consumed and all output has been produced (only when flush is set to
  argv_3867), argv_3882 if the stream argv_3460 was inconsistent (for example
  if argv_2757 or argv_2758 was argv_2766), argv_3860 if no progress is possible
  (for example argv_693 or avail_out was zero). Note that argv_3860 is not
  fatal, and argv_1104() can be called again with more input and more output
  space to continue compressing.
*/


argv_3894 int argv_3892 argv_1107 argv_2804((argv_3884 strm));
/*
     All dynamically allocated argv_1073 structures for this stream are freed.
   This function discards any unprocessed input and does not flush any
   pending output.

     argv_1107 returns argv_3877 if success, argv_3882 if the
   stream argv_3460 was inconsistent, argv_3861 if the stream was freed
   prematurely (some input or output was discarded). In the error case,
   argv_2693 may be set but then points to a static string (which must not be
   deallocated).
*/


/*
argv_3894 int argv_3892 inflateInit argv_2804((argv_3884 strm));

     Initializes the internal stream argv_3460 for decompression. The fields
   argv_2757, argv_693, argv_3889, argv_3895 and argv_2811 must be initialized before by
   the caller. If argv_2757 is not argv_3875 and argv_693 is large enough (the exact
   argv_3807 depends on the compression method), inflateInit determines the
   compression method from the zlib argv_1806 and allocates all argv_1073 structures
   accordingly; otherwise the allocation will be deferred to the first call of
   inflate.  If argv_3889 and argv_3895 are set to argv_3875, inflateInit updates them to
   use default allocation functions.

     inflateInit returns argv_3877 if success, argv_3871 if there was not enough
   memory, argv_3888 if the zlib library version is incompatible with the
   version assumed by the caller.  argv_2693 is set to null if there is no error
   argv_2271. inflateInit does not perform any decompression apart from reading
   the zlib argv_1806 if present: this will be argv_1185 by inflate().  (So argv_2757 and
   argv_693 may be modified, but argv_2758 and avail_out are unchanged.)
*/


argv_3894 int argv_3892 inflate argv_2804((argv_3884 strm, int flush));
/*
    inflate decompresses as much argv_1073 as possible, and stops when the input
  argv_728 becomes empty or the output argv_728 becomes full. It may introduce
  some output latency (reading input without producing any output) except when
  forced to flush.

  The detailed semantics are as follows. inflate performs argv_2806 or both of the
  following actions:

  - Decompress more input starting at argv_2757 and update argv_2757 and argv_693
    accordingly. If not all input can be processed (because there is not
    enough room in the output argv_728), argv_2757 is updated and processing
    will resume at this point for the next call of inflate().

  - Provide more output starting at argv_2758 and update argv_2758 and avail_out
    accordingly.  inflate() provides as much output as possible, until there
    is no more input argv_1073 or no more space in the output argv_728 (see below
    about the flush parameter).

  Before the call of inflate(), the application should ensure that at least
  argv_2806 of the actions is possible, by providing more input and/or consuming
  more output, and updating the next_* and avail_* values accordingly.
  The application can argv_986 the uncompressed output when it wants, for
  example when the output argv_728 is full (avail_out == 0), or after each
  call of inflate(). If inflate returns argv_3877 and with zero avail_out, it
  must be called again after making room in the output argv_728 because there
  might be more output pending.

    The flush parameter of inflate() can be argv_3874, argv_3885,
  argv_3867, or argv_3859. argv_3885 requests that inflate() flush as much
  output as possible to the output argv_728. argv_3859 requests that inflate() argv_3463
  if and when it gets to the next argv_1104 argv_710 boundary. When decoding the
  zlib or gzip format, this will cause inflate() to return immediately after
  the argv_1806 and before the first argv_710. When doing a raw inflate, inflate()
  will go ahead and process the first argv_710, and will return when it gets to
  the end of that argv_710, or when it runs out of argv_1073.

    The argv_3859 option assists in appending to or combining argv_1104 streams.
  Also to assist in this, on return inflate() will set strm->argv_1074 to the
  number of unused argv_709 in the last byte taken from strm->argv_2757, plus 64
  if inflate() is currently decoding the last argv_710 in the argv_1104 stream,
  plus 128 if inflate() returned immediately after decoding an end-of-argv_710
  argv_877 or decoding the complete argv_1806 up to just before the first byte of the
  argv_1104 stream. The end-of-argv_710 will not be indicated until all of the
  uncompressed argv_1073 from that argv_710 has been written to strm->argv_2758.  The
  number of unused argv_709 may in general be greater than seven, except when
  bit 7 of argv_1074 is set, in which case the number of unused argv_709 will be
  less than eight.

    inflate() should normally be called until it returns argv_3881 or an
  error. However if all decompression is to be performed in a single step
  (a single call of inflate), the parameter flush should be set to
  argv_3867. In this case all pending input is processed and all pending
  output is flushed; avail_out must be large enough to hold all the
  uncompressed argv_1073. (The size of the uncompressed argv_1073 may have been saved
  by the compressor for this purpose.) The next operation on this stream must
  be inflateEnd to deallocate the decompression argv_3460. The use of argv_3867
  is never required, but can be used to inform inflate that a faster approach
  may be used for the single inflate() call.

     In this implementation, inflate() always flushes as much output as
  possible to the output argv_728, and always uses the faster approach on the
  first call. So the only effect of the flush parameter in this implementation
  is on the return argv_3807 of inflate(), as noted below, or when it returns early
  because argv_3859 is used.

     If a preset dictionary is needed after this call (see inflateSetDictionary
  below), inflate sets strm->argv_610 to the argv_611 checksum of the dictionary
  chosen by the compressor and returns argv_3872; otherwise it sets
  strm->argv_610 to the argv_611 checksum of all output produced so far (that is,
  argv_3690 argv_739) and returns argv_3877, argv_3881 or an error argv_877 as described
  below. At the end of the stream, inflate() checks that its computed argv_611
  checksum is equal to that saved by the compressor and returns argv_3881
  only if the checksum is correct.

    inflate() will decompress and check either zlib-wrapped or gzip-wrapped
  argv_1104 argv_1073.  The argv_1806 argv_3695 is detected automatically.  Any information
  contained in the gzip argv_1806 is not retained, so applications that need that
  information should instead use raw inflate, see inflateInit2() below, or
  inflateBack() and perform their own processing of the gzip argv_1806 and
  trailer.

    inflate() returns argv_3877 if some progress has been made (more input processed
  or more output produced), argv_3881 if the end of the compressed argv_1073 has
  been reached and all uncompressed output has been produced, argv_3872 if a
  preset dictionary is needed at this point, argv_3861 if the input argv_1073 was
  corrupted (input stream not conforming to the zlib format or incorrect check
  argv_3807), argv_3882 if the stream structure was inconsistent (for example
  if argv_2757 or argv_2758 was argv_2766), argv_3871 if there was not enough memory,
  argv_3860 if no progress is possible or if there was not enough room in the
  output argv_728 when argv_3867 is used. Note that argv_3860 is not fatal, and
  inflate() can be called again with more input and more output space to
  continue decompressing. If argv_3861 is returned, the application may then
  call inflateSync() to look for a good compression argv_710 if a partial recovery
  of the argv_1073 is desired.
*/


argv_3894 int argv_3892 inflateEnd argv_2804((argv_3884 strm));
/*
     All dynamically allocated argv_1073 structures for this stream are freed.
   This function discards any unprocessed input and does not flush any
   pending output.

     inflateEnd returns argv_3877 if success, argv_3882 if the stream argv_3460
   was inconsistent. In the error case, argv_2693 may be set but then points to a
   static string (which must not be deallocated).
*/

                        /* Advanced functions */

/*
    The following functions are needed only in some special applications.
*/

/*
argv_3894 int argv_3892 argv_1110 argv_2804((argv_3884 strm,
                                     int  level,
                                     int  method,
                                     int  windowBits,
                                     int  memLevel,
                                     int  strategy));

     This is another version of argv_1108 with more compression options. The
   fields argv_2757, argv_3889, argv_3895 and argv_2811 must be initialized before by
   the caller.

     The method parameter is the compression method. It must be argv_3864 in
   this version of the library.

     The windowBits parameter is the base two logarithm of the window size
   (the size of the history argv_728). It should be in the range 8..15 for this
   version of the library. Larger values of this parameter argv_3266 in better
   compression at the expense of memory usage. The default argv_3807 is 15 if
   argv_1108 is used instead.

     windowBits can also be -8..-15 for raw argv_1104. In this case, -windowBits
   determines the window size. argv_1104() will then generate raw argv_1104 argv_1073
   with no zlib argv_1806 or trailer, and will not compute an argv_611 check argv_3807.

     windowBits can also be greater than 15 for optional gzip encoding. Add
   16 to windowBits to write a simple gzip argv_1806 and trailer around the
   compressed argv_1073 instead of a zlib wrapper. The gzip argv_1806 will have no
   argv_1314 argv_2697, no argv_1289 argv_1073, no argv_944, no modification argv_3678 (set to zero),
   no argv_1806 crc, and the operating system will be set to 255 (unknown).  If a
   gzip stream is being written, strm->argv_610 is a argv_1012 instead of an argv_611.

     The memLevel parameter specifies how much memory should be allocated
   for the internal compression argv_3460. memLevel=1 uses minimum memory but
   is slow and reduces compression ratio; memLevel=9 uses maximum memory
   for optimal speed. The default argv_3807 is 8. See argv_223.h for total memory
   usage as a function of windowBits and memLevel.

     The strategy parameter is used to tune the compression algorithm. Use the
   argv_3807 argv_3863 for normal argv_1073, argv_3866 for argv_1073 produced by a
   filter (or predictor), argv_3870 to force Huffman encoding only (no
   string match), or argv_3879 to limit match distances to argv_2806 (argv_3278-length
   encoding). Filtered argv_1073 consists mostly of small values with a somewhat
   random distribution. In this case, the compression algorithm is tuned to
   argv_962 them better. The effect of argv_3866 is to force more Huffman
   coding and less string matching; it is somewhat intermediate between
   Z_DEFAULT and argv_3870. argv_3879 is designed to be almost as fast as
   argv_3870, but give better compression for PNG image argv_1073. The strategy
   parameter only affects the compression ratio but not the correctness of the
   compressed output even if it is not set appropriately.  argv_3868 prevents the
   use of dynamic Huffman codes, allowing for a simpler decoder for special
   applications.

      argv_1110 returns argv_3877 if success, argv_3871 if there was not enough
   memory, argv_3882 if a parameter is invalid (such as an invalid
   method). argv_2693 is set to null if there is no error argv_2271.  argv_1110 does
   not perform any compression: this will be argv_1185 by argv_1104().
*/

argv_3894 int argv_3892 argv_1114 argv_2804((argv_3884 strm,
                                             const argv_738 *dictionary,
                                             argv_3719  dictLength));
/*
     Initializes the compression dictionary from the given byte sequence
   without producing any compressed output. This function must be called
   immediately after argv_1108, argv_1110 or deflateReset, before any
   call of argv_1104. The compressor and decompressor must use exactly the same
   dictionary (see inflateSetDictionary).

     The dictionary should consist of strings (byte sequences) that are likely
   to be encountered later in the argv_1073 to be compressed, with the most commonly
   used strings preferably put towards the end of the dictionary. Using a
   dictionary is most useful when the argv_1073 to be compressed is short and can be
   predicted with good accuracy; the argv_1073 can then be compressed better than
   with the default empty dictionary.

     Depending on the size of the compression argv_1073 structures selected by
   argv_1108 or argv_1110, a part of the dictionary may in effect be
   discarded, for example if the dictionary is larger than the window size in
   argv_1104 or deflate2. Thus the strings most likely to be useful should be
   put at the end of the dictionary, not at the argv_1610. In addition, the
   argv_1043 implementation of argv_1104 will use at most the window size minus
   262 argv_739 of the provided dictionary.

     Upon return of this function, strm->argv_610 is set to the argv_611 argv_3807
   of the dictionary; the decompressor may later use this argv_3807 to determine
   which dictionary has been used by the compressor. (The argv_611 argv_3807
   applies to the whole dictionary even if only a subset of the dictionary is
   actually used by the compressor.) If a raw argv_1104 was requested, then the
   argv_611 argv_3807 is not computed and strm->argv_610 is not set.

     argv_1114 returns argv_3877 if success, or argv_3882 if a
   parameter is invalid (such as argv_2766 dictionary) or the stream argv_3460 is
   inconsistent (for example if argv_1104 has already been called for this stream
   or if the compression method is bsort). argv_1114 does not
   perform any compression: this will be argv_1185 by argv_1104().
*/

argv_3894 int argv_3892 argv_1106 argv_2804((argv_3884 dest,
                                    argv_3884 source));
/*
     Sets the destination stream as a complete copy of the source stream.

     This function can be useful when several compression strategies will be
   tried, for example when there are several ways of pre-processing the input
   argv_1073 with a filter. The streams that will be discarded should then be freed
   by calling argv_1107.  Note that argv_1106 duplicates the internal
   compression argv_3460 which can be quite large, so this strategy is slow and
   can argv_986 lots of memory.

     argv_1106 returns argv_3877 if success, argv_3871 if there was not
   enough memory, argv_3882 if the source stream argv_3460 was inconsistent
   (such as argv_3889 being argv_2766). argv_2693 is left unchanged in both source and
   destination.
*/

argv_3894 int argv_3892 deflateReset argv_2804((argv_3884 strm));
/*
     This function is equivalent to argv_1107 followed by argv_1108,
   but does not free and reallocate all the internal compression argv_3460.
   The stream will keep the same compression level and any other attributes
   that may have been set by argv_1110.

      deflateReset returns argv_3877 if success, or argv_3882 if the source
   stream argv_3460 was inconsistent (such as argv_3889 or argv_3460 being argv_2766).
*/

argv_3894 int argv_3892 argv_1112 argv_2804((argv_3884 strm,
                                      int level,
                                      int strategy));
/*
     Dynamically update the compression level and compression strategy.  The
   interpretation of level and strategy is as in argv_1110.  This can be
   used to switch between compression and straight copy of the input argv_1073, or
   to switch to a different kind of input argv_1073 requiring a different
   strategy. If the compression level is changed, the input available so far
   is compressed with the old level (and may be flushed); the new level will
   take effect only at the next call of argv_1104().

     Before the call of argv_1112, the stream argv_3460 must be set as for
   a call of argv_1104(), since the currently available input may have to
   be compressed and flushed. In particular, strm->avail_out must be non-zero.

     argv_1112 returns argv_3877 if success, argv_3882 if the source
   stream argv_3460 was inconsistent or if a parameter was invalid, argv_3860
   if strm->avail_out was zero.
*/

argv_3894 int argv_3892 deflateTune argv_2804((argv_3884 strm,
                                    int good_length,
                                    int max_lazy,
                                    int nice_length,
                                    int max_chain));
/*
     Fine tune argv_1104's internal compression parameters.  This should only be
   used by someone who understands the algorithm used by zlib's argv_1104 for
   searching for the best matching string, and even then only by the most
   fanatic optimizer trying to squeeze out the last compressed bit for their
   specific input argv_1073.  Read the argv_1104.c source argv_877 for the meaning of the
   max_lazy, good_length, nice_length, and max_chain parameters.

     deflateTune() can be called after argv_1108() or argv_1110(), and
   returns argv_3877 on success, or argv_3882 for an invalid argv_1104 stream.
 */

argv_3894 argv_3722 argv_3892 argv_1105 argv_2804((argv_3884 strm,
                                       argv_3722 sourceLen));
/*
     argv_1105() returns an upper bound on the compressed size after
   deflation of sourceLen argv_739.  It must be called after argv_1108()
   or argv_1110().  This would be used to allocate an output argv_728
   for deflation in a single pass, and so would be called before argv_1104().
*/

argv_3894 int argv_3892 argv_1113 argv_2804((argv_3884 strm,
                                     int argv_709,
                                     int argv_3807));
/*
     argv_1113() inserts argv_709 in the argv_1104 output stream.  The intent
  is that this function is used to argv_3457 off the argv_1104 output with the
  argv_709 leftover from a previous argv_1104 stream when appending to it.  As such,
  this function can only be used for raw argv_1104, and must be used before the
  first argv_1104() call after a argv_1110() or deflateReset().  argv_709 must be
  less than or equal to 16, and that many of the least significant argv_709 of
  argv_3807 will be inserted in the output.

      argv_1113 returns argv_3877 if success, or argv_3882 if the source
   stream argv_3460 was inconsistent.
*/

argv_3894 int argv_3892 deflateSetHeader argv_2804((argv_3884 strm,
                                         argv_1787 head));
/*
      deflateSetHeader() provides gzip argv_1806 information for when a gzip
   stream is requested by argv_1110().  deflateSetHeader() may be called
   after argv_1110() or deflateReset() and before the first call of
   argv_1104().  The argv_3629, argv_3678, argv_2819, argv_1289 field, argv_2697, and argv_944 information
   in the provided argv_1785 structure are written to the gzip argv_1806 (xflag is
   ignored -- the argv_1289 argv_1371 are set according to the compression level).  The
   caller must assure that, if not argv_3875, argv_2697 and argv_944 are terminated with
   a zero byte, and that if argv_1289 is not argv_3875, that argv_1290 argv_739 are
   available there.  If argv_1801 is true, a gzip argv_1806 crc is included.  Note that
   the argv_1043 versions of the command-argv_2069 version of gzip (up through version
   1.3.x) do not support argv_1806 crc's, and will report that it is a "multi-part
   gzip argv_1314" and give up.

      If deflateSetHeader is not used, the default gzip argv_1806 has argv_3629 false,
   the argv_3678 set to zero, and argv_2819 set to 255, with no argv_1289, argv_2697, or argv_944
   fields.  The gzip argv_1806 is returned to the default argv_3460 by deflateReset().

      deflateSetHeader returns argv_3877 if success, or argv_3882 if the source
   stream argv_3460 was inconsistent.
*/

/*
argv_3894 int argv_3892 inflateInit2 argv_2804((argv_3884 strm,
                                     int  windowBits));

     This is another version of inflateInit with an argv_1289 parameter. The
   fields argv_2757, argv_693, argv_3889, argv_3895 and argv_2811 must be initialized
   before by the caller.

     The windowBits parameter is the base two logarithm of the maximum window
   size (the size of the history argv_728).  It should be in the range 8..15 for
   this version of the library. The default argv_3807 is 15 if inflateInit is used
   instead. windowBits must be greater than or equal to the windowBits argv_3807
   provided to argv_1110() while compressing, or it must be equal to 15 if
   argv_1110() was not used. If a compressed stream with a larger window
   size is given as input, inflate() will return with the error argv_877
   argv_3861 instead of trying to allocate a larger window.

     windowBits can also be -8..-15 for raw inflate. In this case, -windowBits
   determines the window size. inflate() will then process raw argv_1104 argv_1073,
   not looking for a zlib or gzip argv_1806, not generating a check argv_3807, and not
   looking for any check values for comparison at the end of the stream. This
   is for use with other formats that use the argv_1104 compressed argv_1073 format
   such as zip.  Those formats provide their own check values. If a custom
   format is developed using the raw argv_1104 format for compressed argv_1073, it is
   recommended that a check argv_3807 such as an argv_611 or a argv_1012 be applied to
   the uncompressed argv_1073 as is argv_1185 in the zlib, gzip, and zip formats.  For
   most applications, the zlib format should be used as is. Note that comments
   above on the use in argv_1110() applies to the magnitude of windowBits.

     windowBits can also be greater than 15 for optional gzip decoding. Add
   32 to windowBits to enable zlib and gzip decoding with automatic argv_1806
   detection, or argv_576 16 to decode only the gzip format (the zlib format will
   return a argv_3861).  If a gzip stream is being decoded, strm->argv_610 is
   a argv_1012 instead of an argv_611.

     inflateInit2 returns argv_3877 if success, argv_3871 if there was not enough
   memory, argv_3882 if a parameter is invalid (such as a null strm). argv_2693
   is set to null if there is no error argv_2271.  inflateInit2 does not perform
   any decompression apart from reading the zlib argv_1806 if present: this will
   be argv_1185 by inflate(). (So argv_2757 and argv_693 may be modified, but argv_2758
   and avail_out are unchanged.)
*/

argv_3894 int argv_3892 inflateSetDictionary argv_2804((argv_3884 strm,
                                             const argv_738 *dictionary,
                                             argv_3719  dictLength));
/*
     Initializes the decompression dictionary from the given uncompressed byte
   sequence. This function must be called immediately after a call of inflate,
   if that call returned argv_3872. The dictionary chosen by the compressor
   can be determined from the argv_611 argv_3807 returned by that call of inflate.
   The compressor and decompressor must use exactly the same dictionary (see
   argv_1114).  For raw inflate, this function can be called
   immediately after inflateInit2() or inflateReset() and before any call of
   inflate() to set the dictionary.  The application must insure that the
   dictionary that was used for compression is provided.

     inflateSetDictionary returns argv_3877 if success, argv_3882 if a
   parameter is invalid (such as argv_2766 dictionary) or the stream argv_3460 is
   inconsistent, argv_3861 if the given dictionary doesn't match the
   expected argv_2806 (incorrect argv_611 argv_3807). inflateSetDictionary does not
   perform any decompression: this will be argv_1185 by subsequent calls of
   inflate().
*/

argv_3894 int argv_3892 inflateSync argv_2804((argv_3884 strm));
/*
    Skips invalid compressed argv_1073 until a full flush point (see above the
  description of argv_1104 with argv_3869) can be found, or until all
  available input is skipped. No output is provided.

    inflateSync returns argv_3877 if a full flush point has been found, argv_3860
  if no more input was provided, argv_3861 if no flush point has been found,
  or argv_3882 if the stream structure was inconsistent. In the success
  case, the application may save the argv_1043 argv_1043 argv_3807 of argv_3687 which
  indicates where valid compressed argv_1073 was found. In the error case, the
  application may repeatedly call inflateSync, providing more input each argv_3678,
  until success or end of the input argv_1073.
*/

argv_3894 int argv_3892 inflateCopy argv_2804((argv_3884 dest,
                                    argv_3884 source));
/*
     Sets the destination stream as a complete copy of the source stream.

     This function can be useful when randomly accessing a large stream.  The
   first pass through the stream can periodically record the inflate argv_3460,
   allowing restarting inflate at those points when randomly accessing the
   stream.

     inflateCopy returns argv_3877 if success, argv_3871 if there was not
   enough memory, argv_3882 if the source stream argv_3460 was inconsistent
   (such as argv_3889 being argv_2766). argv_2693 is left unchanged in both source and
   destination.
*/

argv_3894 int argv_3892 inflateReset argv_2804((argv_3884 strm));
/*
     This function is equivalent to inflateEnd followed by inflateInit,
   but does not free and reallocate all the internal decompression argv_3460.
   The stream will keep attributes that may have been set by inflateInit2.

      inflateReset returns argv_3877 if success, or argv_3882 if the source
   stream argv_3460 was inconsistent (such as argv_3889 or argv_3460 being argv_2766).
*/

argv_3894 int argv_3892 inflatePrime argv_2804((argv_3884 strm,
                                     int argv_709,
                                     int argv_3807));
/*
     This function inserts argv_709 in the inflate input stream.  The intent is
  that this function is used to argv_3457 inflating at a bit position in the
  middle of a byte.  The provided argv_709 will be used before any argv_739 are used
  from argv_2757.  This function should only be used with raw inflate, and
  should be used before the first inflate() call after inflateInit2() or
  inflateReset().  argv_709 must be less than or equal to 16, and that many of the
  least significant argv_709 of argv_3807 will be inserted in the input.

      inflatePrime returns argv_3877 if success, or argv_3882 if the source
   stream argv_3460 was inconsistent.
*/

argv_3894 int argv_3892 inflateGetHeader argv_2804((argv_3884 strm,
                                         argv_1787 head));
/*
      inflateGetHeader() requests that gzip argv_1806 information be stored in the
   provided argv_1785 structure.  inflateGetHeader() may be called after
   inflateInit2() or inflateReset(), and before the first call of inflate().
   As inflate() processes the gzip stream, head->argv_1185 is zero until the argv_1806
   is completed, at which argv_3678 head->argv_1185 is set to argv_2806.  If a zlib stream is
   being decoded, then head->argv_1185 is set to -1 to indicate that there will be
   no gzip argv_1806 information forthcoming.  Note that argv_3859 can be used to
   force inflate() to return immediately after argv_1806 processing is complete
   and before any actual argv_1073 is decompressed.

      The argv_3629, argv_3678, argv_3842, and argv_2819 fields are filled in with the gzip argv_1806
   contents.  argv_1801 is set to true if there is a argv_1806 CRC.  (The argv_1806 CRC
   was valid if argv_1185 is set to argv_2806.)  If argv_1289 is not argv_3875, then argv_1291
   contains the maximum number of argv_739 to write to argv_1289.  Once argv_1185 is true,
   argv_1290 contains the actual argv_1289 field length, and argv_1289 contains the
   argv_1289 field, or that field truncated if argv_1291 is less than argv_1290.
   If argv_2697 is not argv_3875, then up to argv_2707 characters are written there,
   terminated with a zero unless the length is greater than argv_2707.  If
   argv_944 is not argv_3875, then up to argv_943 characters are written there,
   terminated with a zero unless the length is greater than argv_943.  When
   any of argv_1289, argv_2697, or argv_944 are not argv_3875 and the respective field is
   not present in the argv_1806, then that field is set to argv_3875 to signal its
   absence.  This allows the use of deflateSetHeader() with the returned
   structure to duplicate the argv_1806.  However if those fields are set to
   allocated memory, then the application will need to save those pointers
   elsewhere so that they can be eventually freed.

      If inflateGetHeader is not used, then the argv_1806 information is simply
   discarded.  The argv_1806 is always checked for validity, including the argv_1806
   CRC if present.  inflateReset() will reset the process to discard the argv_1806
   information.  The application would need to call inflateGetHeader() again to
   retrieve the argv_1806 from the next gzip stream.

      inflateGetHeader returns argv_3877 if success, or argv_3882 if the source
   stream argv_3460 was inconsistent.
*/

/*
argv_3894 int argv_3892 inflateBackInit argv_2804((argv_3884 strm, int windowBits,
                                        unsigned char argv_1309 *window));

     Initialize the internal stream argv_3460 for decompression using inflateBack()
   calls.  The fields argv_3889, argv_3895 and argv_2811 in strm must be initialized
   before the call.  If argv_3889 and argv_3895 are argv_3875, then the default library-
   derived memory allocation routines are used.  windowBits is the base two
   logarithm of the window size, in the range 8..15.  window is a caller
   supplied argv_728 of that size.  Except for special applications where it is
   assured that argv_1104 was used with small window sizes, windowBits must be 15
   and a 32K byte window must be supplied to be able to decompress general
   argv_1104 streams.

     See inflateBack() for the usage of these routines.

     inflateBackInit will return argv_3877 on success, argv_3882 if any of
   the paramaters are invalid, argv_3871 if the internal argv_3460 could not
   be allocated, or argv_3888 if the version of the library does not
   match the version of the argv_1806 argv_1314.
*/

typedef unsigned (*in_func) argv_2804((void argv_1309 *, unsigned char argv_1309 * argv_1309 *));
typedef int (*out_func) argv_2804((void argv_1309 *, unsigned char argv_1309 *, unsigned));

argv_3894 int argv_3892 inflateBack argv_2804((argv_3884 strm,
                                    in_func in, void argv_1309 *in_desc,
                                    out_func out, void argv_1309 *out_desc));
/*
     inflateBack() does a raw inflate with a single call using a call-back
   interface for input and output.  This is more efficient than inflate() for
   argv_1314 i/o applications in that it avoids copying between the output and the
   sliding window by simply making the window itself the output argv_728.  This
   function trusts the application to not change the output argv_728 passed by
   the output function, at least until inflateBack() returns.

     inflateBackInit() must be called first to allocate the internal argv_3460
   and to initialize the argv_3460 with the user-provided window argv_728.
   inflateBack() may then be used multiple times to inflate a complete, raw
   argv_1104 stream with each call.  inflateBackEnd() is then called to free
   the allocated argv_3460.

     A raw argv_1104 stream is argv_2806 with no zlib or gzip argv_1806 or trailer.
   This routine would normally be used in a utility that reads zip or gzip
   files and writes out uncompressed files.  The utility would decode the
   argv_1806 and process the trailer on its own, hence this routine expects
   only the raw argv_1104 stream to decompress.  This is different from the
   normal behavior of inflate(), which expects either a zlib or gzip argv_1806 and
   trailer around the argv_1104 stream.

     inflateBack() uses two subroutines supplied by the caller that are then
   called by inflateBack() for input and output.  inflateBack() calls those
   routines until it reads a complete argv_1104 stream and writes out all of the
   uncompressed argv_1073, or until it encounters an error.  The function's
   parameters and return types are defined above in the in_func and out_func
   typedefs.  inflateBack() will call in(in_desc, &argv_727) which should return the
   number of argv_739 of provided input, and a pointer to that input in argv_727.  If
   there is no input available, in() must return zero--argv_727 is ignored in that
   case--and inflateBack() will return a argv_728 error.  inflateBack() will call
   out(out_desc, argv_727, len) to write the uncompressed argv_1073 argv_727[0..len-1].  out()
   should return zero on success, or non-zero on failure.  If out() returns
   non-zero, inflateBack() will return with an error.  Neither in() nor out()
   are permitted to change the contents of the window provided to
   inflateBackInit(), which is also the argv_728 that out() uses to write from.
   The length written by out() will be at most the window size.  Any non-zero
   amount of input may be provided by in().

     For convenience, inflateBack() can be provided input on the first call by
   setting strm->argv_2757 and strm->argv_693.  If that input is exhausted, then
   in() will be called.  Therefore strm->argv_2757 must be initialized before
   calling inflateBack().  If strm->argv_2757 is argv_3875, then in() will be called
   immediately for input.  If strm->argv_2757 is not argv_3875, then strm->argv_693
   must also be initialized, and then if strm->argv_693 is not zero, input will
   initially be taken from strm->argv_2757[0 .. strm->argv_693 - 1].

     The in_desc and out_desc parameters of inflateBack() is passed as the
   first parameter of in() and out() respectively when they are called.  These
   descriptors can be optionally used to pass any information that the caller-
   supplied in() and out() functions need to do their job.

     On return, inflateBack() will set strm->argv_2757 and strm->argv_693 to
   pass back any unused input that was provided by the last in() call.  The
   return values of inflateBack() can be argv_3881 on success, argv_3860
   if in() or out() returned an error, argv_3861 if there was a format
   error in the argv_1104 stream (in which case strm->argv_2693 is set to indicate the
   nature of the error), or argv_3882 if the stream was not properly
   initialized.  In the case of argv_3860, an input or output error can be
   distinguished using strm->argv_2757 which will be argv_3875 only if in() returned
   an error.  If strm->next is not argv_3875, then the argv_3860 was due to
   out() returning non-zero.  (in() will always be called before out(), so
   strm->argv_2757 is assured to be defined if out() returns non-zero.)  Note
   that inflateBack() cannot return argv_3877.
*/

argv_3894 int argv_3892 inflateBackEnd argv_2804((argv_3884 strm));
/*
     All memory allocated by inflateBackInit() is freed.

     inflateBackEnd() returns argv_3877 on success, or argv_3882 if the stream
   argv_3460 was inconsistent.
*/

argv_3894 argv_3722 argv_3892 zlibCompileFlags argv_2804((void));
/* Return argv_1371 indicating compile-argv_3678 options.

    argv_3696 sizes, two argv_709 each, 00 = 16 argv_709, 01 = 32, 10 = 64, 11 = other:
     1.0: size of argv_3719
     3.2: size of argv_3722
     5.4: size of argv_3830 (pointer)
     7.6: size of argv_3876

    Compiler, assembler, and debug options:
     8: DEBUG
     9: ASMV or ASMINF -- use ASM argv_877
     10: ZLIB_WINAPI -- exported functions use the WINAPI calling convention
     11: 0 (argv_3217)

    One-argv_3678 table building (smaller argv_877, but not thread-safe if true):
     12: BUILDFIXED -- build static argv_710 decoding tables when needed
     13: DYNAMIC_CRC_TABLE -- build CRC calculation tables when needed
     14,15: 0 (argv_3217)

    Library content (indicates missing functionality):
     16: NO_GZCOMPRESS -- gz* functions cannot argv_962 (to avoid linking
                          argv_1104 argv_877 when not needed)
     17: NO_GZIP -- argv_1104 can't write gzip streams, and inflate can't detect
                    and decode gzip streams (to avoid linking crc argv_877)
     18-19: 0 (argv_3217)

    Operation variations (changes in library functionality):
     20: PKZIP_BUG_WORKAROUND -- slightly more permissive inflate
     21: FASTEST -- argv_1104 algorithm with only argv_2806, lowest compression level
     22,23: 0 (argv_3217)

    The sprintf variant used by gzprintf (zero is best):
     24: 0 = vs*, 1 = s* -- 1 means limited to 20 arguments after the format
     25: 0 = *nprintf, 1 = *printf -- 1 means gzprintf() not secure!
     26: 0 = returns argv_3807, 1 = void -- 1 means inferred string length returned

    Remainder:
     27-31: 0 (argv_3217)
 */


                        /* utility functions */

/*
     The following utility functions are implemented on top of the
   basic stream-oriented functions. To simplify the interface, some
   default options are assumed (compression level and memory usage,
   standard memory allocation functions). The source argv_877 of these
   utility functions can easily be modified if you need special options.
*/

argv_3894 int argv_3892 argv_962 argv_2804((argv_738 *dest,   argv_3723 *destLen,
                                 const argv_738 *source, argv_3722 sourceLen));
/*
     Compresses the source argv_728 into the destination argv_728.  sourceLen is
   the byte length of the source argv_728. Upon entry, destLen is the total
   size of the destination argv_728, which must be at least the argv_3807 returned
   by argv_969(sourceLen). Upon exit, destLen is the actual size of the
   compressed argv_728.
     This function can be used to argv_962 a whole argv_1314 at once if the
   input argv_1314 is mmap'ed.
     argv_962 returns argv_3877 if success, argv_3871 if there was not
   enough memory, argv_3860 if there was not enough room in the output
   argv_728.
*/

argv_3894 int argv_3892 argv_968 argv_2804((argv_738 *dest,   argv_3723 *destLen,
                                  const argv_738 *source, argv_3722 sourceLen,
                                  int level));
/*
     Compresses the source argv_728 into the destination argv_728. The level
   parameter has the same meaning as in argv_1108.  sourceLen is the byte
   length of the source argv_728. Upon entry, destLen is the total size of the
   destination argv_728, which must be at least the argv_3807 returned by
   argv_969(sourceLen). Upon exit, destLen is the actual size of the
   compressed argv_728.

     argv_968 returns argv_3877 if success, argv_3871 if there was not enough
   memory, argv_3860 if there was not enough room in the output argv_728,
   argv_3882 if the level parameter is invalid.
*/

argv_3894 argv_3722 argv_3892 argv_969 argv_2804((argv_3722 sourceLen));
/*
     argv_969() returns an upper bound on the compressed size after
   argv_962() or argv_968() on sourceLen argv_739.  It would be used before
   a argv_962() or argv_968() call to allocate the destination argv_728.
*/

argv_3894 int argv_3892 argv_3744 argv_2804((argv_738 *dest,   argv_3723 *destLen,
                                   const argv_738 *source, argv_3722 sourceLen));
/*
     Decompresses the source argv_728 into the destination argv_728.  sourceLen is
   the byte length of the source argv_728. Upon entry, destLen is the total
   size of the destination argv_728, which must be large enough to hold the
   entire uncompressed argv_1073. (The size of the uncompressed argv_1073 must have
   been saved previously by the compressor and transmitted to the decompressor
   by some mechanism outside the scope of this compression library.)
   Upon exit, destLen is the actual size of the compressed argv_728.
     This function can be used to decompress a whole argv_1314 at once if the
   input argv_1314 is mmap'ed.

     argv_3744 returns argv_3877 if success, argv_3871 if there was not
   enough memory, argv_3860 if there was not enough room in the output
   argv_728, or argv_3861 if the input argv_1073 was corrupted or incomplete.
*/


typedef argv_3828 argv_1788;

argv_3894 argv_1788 argv_3892 gzopen  argv_2804((const char *path, const char *mode));
/*
     Opens a gzip (.gz) argv_1314 for reading or writing. The mode parameter
   is as in fopen ("rb" or "wb") but can also include a compression level
   ("wb9") or a strategy: 'f' for filtered argv_1073 as in "wb6f", 'h' for
   Huffman only compression as in "wb1h", or 'R' for argv_3278-length encoding
   as in "wb1R". (See the description of argv_1110 for more information
   about the strategy parameter.)

     gzopen can be used to read a argv_1314 which is not in gzip format; in this
   case gzread will directly read from the argv_1314 without decompression.

     gzopen returns argv_2766 if the argv_1314 could not be opened or if there was
   insufficient memory to allocate the (de)compression argv_3460; errno
   can be checked to distinguish the two cases (if errno is zero, the
   zlib error is argv_3871).  */

argv_3894 argv_1788 argv_3892 gzdopen  argv_2804((int fd, const char *mode));
/*
     gzdopen() associates a argv_1788 with the argv_1314 descriptor fd.  File
   descriptors are obtained from calls like open, dup, creat, pipe or
   fileno (in the argv_1314 has been previously opened with fopen).
   The mode parameter is as in gzopen.
     The next call of gzclose on the returned argv_1788 will also argv_869 the
   argv_1314 descriptor fd, just like fclose(fdopen(fd), mode) closes the argv_1314
   descriptor fd. If you want to keep fd open, use gzdopen(dup(fd), mode).
     gzdopen returns argv_2766 if there was insufficient memory to allocate
   the (de)compression argv_3460.
*/

argv_3894 int argv_3892 gzsetparams argv_2804((argv_1788 argv_1314, int level, int strategy));
/*
     Dynamically update the compression level or strategy. See the description
   of argv_1110 for the meaning of these parameters.
     gzsetparams returns argv_3877 if success, or argv_3882 if the argv_1314 was not
   opened for writing.
*/

argv_3894 int argv_3892    gzread  argv_2804((argv_1788 argv_1314, argv_3828 argv_727, unsigned len));
/*
     Reads the given number of uncompressed argv_739 from the compressed argv_1314.
   If the input argv_1314 was not in gzip format, gzread copies the given number
   of argv_739 into the argv_728.
     gzread returns the number of uncompressed argv_739 actually read (0 for
   end of argv_1314, -1 for error). */

argv_3894 int argv_3892    gzwrite argv_2804((argv_1788 argv_1314,
                                   argv_3829 argv_727, unsigned len));
/*
     Writes the given number of uncompressed argv_739 into the compressed argv_1314.
   gzwrite returns the number of uncompressed argv_739 actually written
   (0 in case of error).
*/

argv_3894 int argv_3893   gzprintf argv_2804((argv_1788 argv_1314, const char *format, ...));
/*
     Converts, formats, and writes the args to the compressed argv_1314 under
   control of the format string, as in fprintf. gzprintf returns the number of
   uncompressed argv_739 actually written (0 in case of error).  The number of
   uncompressed argv_739 written is limited to 4095. The caller should assure that
   this limit is not exceeded. If it is exceeded, then gzprintf() will return
   return an error (0) with nothing written. In this case, there may also be a
   argv_728 overflow with unpredictable consequences, which is possible only if
   zlib was compiled with the insecure functions sprintf() or vsprintf()
   because the secure argv_3409() or vsnprintf() functions were not available.
*/

argv_3894 int argv_3892 gzputs argv_2804((argv_1788 argv_1314, const char *s));
/*
      Writes the given null-terminated string to the compressed argv_1314, excluding
   the terminating null character.
      gzputs returns the number of characters written, or -1 in case of error.
*/

argv_3894 char * argv_3892 gzgets argv_2804((argv_1788 argv_1314, char *argv_727, int len));
/*
      Reads argv_739 from the compressed argv_1314 until len-1 characters are read, or
   a newline character is read and transferred to argv_727, or an end-of-argv_1314
   condition is encountered.  The string is then terminated with a null
   character.
      gzgets returns argv_727, or argv_3875 in case of error.
*/

argv_3894 int argv_3892    gzputc argv_2804((argv_1788 argv_1314, int c));
/*
      Writes c, converted to an unsigned char, into the compressed argv_1314.
   gzputc returns the argv_3807 that was written, or -1 in case of error.
*/

argv_3894 int argv_3892    gzgetc argv_2804((argv_1788 argv_1314));
/*
      Reads argv_2806 byte from the compressed argv_1314. gzgetc returns this byte
   or -1 in case of end of argv_1314 or error.
*/

argv_3894 int argv_3892    gzungetc argv_2804((int c, argv_1788 argv_1314));
/*
      Push argv_2806 character back onto the stream to be read again later.
   Only argv_2806 character of push-back is allowed.  gzungetc() returns the
   character pushed, or -1 on failure.  gzungetc() will fail if a
   character has been pushed but not read yet, or if c is -1. The pushed
   character will be discarded if the stream is repositioned with gzseek()
   or gzrewind().
*/

argv_3894 int argv_3892    gzflush argv_2804((argv_1788 argv_1314, int flush));
/*
     Flushes all pending output into the compressed argv_1314. The parameter
   flush is as in the argv_1104() function. The return argv_3807 is the zlib
   error number (see function gzerror below). gzflush returns argv_3877 if
   the flush parameter is argv_3867 and all output could be flushed.
     gzflush should be called only when strictly necessary because it can
   degrade compression.
*/

argv_3894 argv_3876 argv_3892    gzseek argv_2804((argv_1788 argv_1314,
                                      argv_3876 offset, int whence));
/*
      Sets the starting position for the next gzread or gzwrite on the
   given compressed argv_1314. The offset represents a number of argv_739 in the
   uncompressed argv_1073 stream. The whence parameter is defined as in lseek(2);
   the argv_3807 SEEK_END is not supported.
     If the argv_1314 is opened for reading, this function is emulated but can be
   extremely slow. If the argv_1314 is opened for writing, only forward seeks are
   supported; gzseek then compresses a sequence of zeroes up to the new
   starting position.

      gzseek returns the resulting offset location as measured in argv_739 from
   the beginning of the uncompressed stream, or -1 in case of error, in
   particular if the argv_1314 is opened for writing and the new starting position
   would be before the argv_1043 position.
*/

argv_3894 int argv_3892    gzrewind argv_2804((argv_1788 argv_1314));
/*
     Rewinds the given argv_1314. This function is supported only for reading.

   gzrewind(argv_1314) is equivalent to (int)gzseek(argv_1314, 0L, SEEK_SET)
*/

argv_3894 argv_3876 argv_3892    gztell argv_2804((argv_1788 argv_1314));
/*
     Returns the starting position for the next gzread or gzwrite on the
   given compressed argv_1314. This position represents a number of argv_739 in the
   uncompressed argv_1073 stream.

   gztell(argv_1314) is equivalent to gzseek(argv_1314, 0L, SEEK_CUR)
*/

argv_3894 int argv_3892 gzeof argv_2804((argv_1788 argv_1314));
/*
     Returns 1 when EOF has previously been detected reading the given
   input stream, otherwise zero.
*/

argv_3894 int argv_3892 gzdirect argv_2804((argv_1788 argv_1314));
/*
     Returns 1 if argv_1314 is being read directly without decompression, otherwise
   zero.
*/

argv_3894 int argv_3892    gzclose argv_2804((argv_1788 argv_1314));
/*
     Flushes all pending output if necessary, closes the compressed argv_1314
   and deallocates all the (de)compression argv_3460. The return argv_3807 is the zlib
   error number (see function gzerror below).
*/

argv_3894 const char * argv_3892 gzerror argv_2804((argv_1788 argv_1314, int *errnum));
/*
     Returns the error argv_2271 for the last error which occurred on the
   given compressed argv_1314. errnum is set to zlib error number. If an
   error occurred in the argv_1314 system and not in the compression library,
   errnum is set to argv_3865 and the application may consult errno
   to get the exact error argv_877.
*/

argv_3894 void argv_3892 gzclearerr argv_2804((argv_1788 argv_1314));
/*
     Clears the error and end-of-argv_1314 argv_1371 for argv_1314. This is analogous to the
   clearerr() function in stdio. This is useful for continuing to read a gzip
   argv_1314 that is being written concurrently.
*/

                        /* checksum functions */

/*
     These functions are not related to compression but are exported
   anyway because they might be useful in applications using the
   compression library.
*/

argv_3894 argv_3722 argv_3892 argv_611 argv_2804((argv_3722 argv_610, const argv_738 *argv_727, argv_3719 len));
/*
     Update a running Adler-32 checksum with the argv_739 argv_727[0..len-1] and
   return the updated checksum. If argv_727 is argv_2766, this function returns
   the required initial argv_3807 for the checksum.
   An Adler-32 checksum is almost as reliable as a CRC32 but can be computed
   much faster. Usage example:

     argv_3722 argv_610 = argv_611(0L, argv_3875, 0);

     while (read_buffer(argv_728, length) != EOF) {
       argv_610 = argv_611(argv_610, argv_728, length);
     }
     if (argv_610 != original_adler) error();
*/

argv_3894 argv_3722 argv_3892 adler32_combine argv_2804((argv_3722 adler1, argv_3722 adler2,
                                          argv_3876 len2));
/*
     Combine two Adler-32 checksums into argv_2806.  For two sequences of argv_739, seq1
   and seq2 with lengths len1 and len2, Adler-32 checksums were calculated for
   each, adler1 and adler2.  adler32_combine() returns the Adler-32 checksum of
   seq1 and seq2 concatenated, requiring only adler1, adler2, and len2.
*/

argv_3894 argv_3722 argv_3892 argv_1012   argv_2804((argv_3722 crc, const argv_738 *argv_727, argv_3719 len));
/*
     Update a running CRC-32 with the argv_739 argv_727[0..len-1] and return the
   updated CRC-32. If argv_727 is argv_2766, this function returns the required initial
   argv_3807 for the for the crc. Pre- and post-conditioning (argv_2806's complement) is
   performed within this function so it shouldn't be argv_1185 by the application.
   Usage example:

     argv_3722 crc = argv_1012(0L, argv_3875, 0);

     while (read_buffer(argv_728, length) != EOF) {
       crc = argv_1012(crc, argv_728, length);
     }
     if (crc != original_crc) error();
*/

argv_3894 argv_3722 argv_3892 crc32_combine argv_2804((argv_3722 crc1, argv_3722 crc2, argv_3876 len2));

/*
     Combine two CRC-32 check values into argv_2806.  For two sequences of argv_739,
   seq1 and seq2 with lengths len1 and len2, CRC-32 check values were
   calculated for each, crc1 and crc2.  crc32_combine() returns the CRC-32
   check argv_3807 of seq1 and seq2 concatenated, requiring only crc1, crc2, and
   len2.
*/


                        /* various hacks, don't look :) */

/* argv_1108 and inflateInit are macros to allow checking the zlib version
 * and the compiler's view of argv_3880:
 */
argv_3894 int argv_3892 argv_1109 argv_2804((argv_3884 strm, int level,
                                     const char *version, int stream_size));
argv_3894 int argv_3892 inflateInit_ argv_2804((argv_3884 strm,
                                     const char *version, int stream_size));
argv_3894 int argv_3892 argv_1111 argv_2804((argv_3884 strm, int  level, int  method,
                                      int windowBits, int memLevel,
                                      int strategy, const char *version,
                                      int stream_size));
argv_3894 int argv_3892 inflateInit2_ argv_2804((argv_3884 strm, int  windowBits,
                                      const char *version, int stream_size));
argv_3894 int argv_3892 inflateBackInit_ argv_2804((argv_3884 strm, int windowBits,
                                         unsigned char argv_1309 *window,
                                         const char *version,
                                         int stream_size));
#define argv_1108(strm, level) \
        argv_1109((strm), (level),       argv_3899, sizeof(argv_3880))
#define inflateInit(strm) \
        inflateInit_((strm),                argv_3899, sizeof(argv_3880))
#define argv_1110(strm, level, method, windowBits, memLevel, strategy) \
        argv_1111((strm),(level),(method),(windowBits),(memLevel),\
                      (strategy),           argv_3899, sizeof(argv_3880))
#define inflateInit2(strm, windowBits) \
        inflateInit2_((strm), (windowBits), argv_3899, sizeof(argv_3880))
#define inflateBackInit(strm, windowBits, window) \
        inflateBackInit_((strm), (windowBits), (window), \
        argv_3899, sizeof(argv_3880))


#if !defined(ZUTIL_H) && !defined(argv_2760)
    struct internal_state {int argv_1191;}; /* hack for buggy compilers */
#endif

argv_3894 const char   * argv_3892 argv_3891           argv_2804((int));
argv_3894 int            argv_3892 inflateSyncPoint argv_2804((argv_3884 z));
argv_3894 const argv_3723 * argv_3892 argv_1642    argv_2804((void));

#ifdef __cplusplus
}
#endif

#endif /* argv_3896 */
