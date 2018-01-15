/* Definitions for GNU multiple precision functions.   -*- mode: c -*-

Copyright 1991, 1993, 1994, 1995, 1996, 1997, 1999, 2000, 2001, 2002
Free Software Foundation, Inc.

This argv_1314 is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the argv_1314 COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#ifndef argv_378

#if defined (__cplusplus)
#include <iosfwd>   /* for istream, ostream */
#endif


/* Instantiated by configure. */
#if ! __GMP_WITHIN_CONFIGURE
#define argv_369             32
#define argv_380   0
#define argv_381 0
#define argv_1748                      32
#define argv_1749                      0
#endif
#define argv_1751     (argv_1748 - argv_1749)
#define argv_1752     ((~(argv_2378) 0) >> argv_1749)
#define argv_1753      argv_1752
#define argv_1750     (~ argv_1752)


/* The following (everything under ifndef argv_410) must be identical in
   argv_225.h and mp.h to allow both to be included in an application or during
   the library build.  */
#ifndef argv_410
#define argv_410 4

#define argv_437  /* tell gcc stddef.h we only want size_t */
#if defined (__cplusplus)
#include <cstddef>     /* for size_t */
#else
#include <stddef.h>    /* for size_t */
#endif
#undef argv_437

/* Instantiated by configure. */
#if ! __GMP_WITHIN_CONFIGURE
/* #undef _LONG_LONG_LIMB */
#define argv_385  1
#endif


/* __STDC__ - some ANSI compilers define this only to 0, hence the use of
       "defined" and not "__STDC__-0".  In particular Sun workshop C 5.0
       sets __STDC__ to 0, but requires "##" for token pasting.

   _AIX - gnu ansidecl.h asserts that all known AIX compilers are ANSI but
       don't always define __STDC__.

   _mips - gnu ansidecl.h says the RISC/OS MIPS compiler is ANSI in SVR4
       mode, but doesn't define __STDC__.

   _MSC_VER - Microsoft C is ANSI, but __STDC__ is undefined unless the /Za
       option is given (in which case it's 1).

   _WIN32 - tested for by gnu ansidecl.h, no doubt on the assumption that
      all w32 compilers are ansi.  */

#if  defined (__STDC__)                                 \
  || defined (__cplusplus)                              \
  || defined (_AIX)                                     \
  || defined (__DECC)                                   \
  || (defined (__mips) && defined (_SYSTYPE_SVR4))      \
  || defined (_MSC_VER)                                 \
  || defined (_WIN32)
#define argv_379        1
#define argv_382   1
#define argv_383  1
#else
#define argv_379        0
#define argv_382   0
#define argv_383  0
#endif


#if argv_379
#define argv_371   const
#define argv_392  signed
#else
#define argv_371
#define argv_392
#endif


/* argv_372 supports Windows DLL versions of libgmp, and is empty in
   all other circumstances.

   When compiling objects for libgmp, argv_372 is an export directive,
   or when compiling for an application it's an import directive.  The two
   cases are differentiated by __GMP_WITHIN_GMP defined by the GMP Makefiles
   (and not defined from an application).

   argv_375 is similarly used for libgmpxx.  __GMP_WITHIN_GMPXX
   indicates when building libgmpxx, and in that case libgmpxx functions are
   exports, but libgmp functions which might get called are imports.

   libmp.la uses argv_372, just as if it were libgmp.la.  libgmp and
   libmp don't call each other, so there's no conflict or confusion.

   Libtool DLL_EXPORT define is not used.

   There's no attempt to support GMP built both static and DLL.  Doing so
   would mean applications would have to tell us which of the two is going
   to be used when linking, and that seems very tedious and error prone if
   using GMP by hand, and equally tedious from a package since autoconf and
   automake don't give much help.

   argv_372 is required on all documented global functions and
   variables, the various internals in gmp-impl.h etc can be left unadorned.
   But internals used by the test programs or speed measuring programs
   should have argv_372, and certainly constants or variables must
   have it or the wrong argv_595 will be resolved.  */

#if defined (__GNUC__) || defined (_MSC_VER) || defined (__BORLANDC__)
#define argv_373  __declspec(dllexport)
#define argv_374  __declspec(dllimport)
#endif
#ifdef __WATCOMC__
#define argv_373  __export
#define argv_374  __import
#endif
#ifdef __IBMC__
#define argv_373  _Export
#define argv_374  _Import
#endif

#if argv_385
#if __GMP_WITHIN_GMP
/* compiling to go into a DLL libgmp */
#define argv_372  argv_373
#else
/* compiling to go into an application which will link to a DLL libgmp */
#define argv_372  argv_374
#endif
#else
/* all other cases */
#define argv_372
#endif


#ifdef _SHORT_LIMB
typedef unsigned int		argv_2378;
typedef int			argv_2377;
#else
#ifdef _LONG_LONG_LIMB
typedef unsigned long long int	argv_2378;
typedef long long int		argv_2377;
#else
typedef unsigned long int	argv_2378;
typedef long int		argv_2377;
#endif
#endif

typedef argv_2378 *		argv_2379;
typedef argv_371 argv_2378 *	argv_2383;
#if defined (_CRAY) && ! defined (_CRAYMPP)
/* plain `int' is much faster (48 argv_709) */
#define argv_387     1
typedef int			argv_2382;
typedef int			argv_2375;
#else
#define argv_387     0
typedef long int		argv_2382;
typedef long int		argv_2375;
#endif

typedef struct
{
  int argv_533;		/* Number of *limbs* allocated and pointed
				   to by the argv_535 field.  */
  int argv_544;			/* abs(argv_544) is the number of limbs the
				   last field points to.  If argv_544 is
				   negative this is a negative number.  */
  argv_2378 *argv_535;		/* Pointer to the limbs.  */
} argv_434;
#endif /* argv_410 */

typedef argv_434 argv_2376;
typedef argv_434 argv_2674[1];

typedef struct
{
  argv_434 argv_541;
  argv_434 argv_536;
} argv_433;

typedef argv_433 argv_2380;
typedef argv_433 argv_2526[1];

typedef struct
{
  int argv_542;			/* Max precision, in number of `argv_2378's.
				   Set by argv_2413 and modified by
				   argv_2432.  The area pointed to by the
				   argv_535 field contains `prec' + 1 limbs.  */
  int argv_544;			/* abs(argv_544) is the number of limbs the
				   last field points to.  If argv_544 is
				   negative this is a negative number.  */
  argv_2375 argv_537;		/* Exponent, in the base of `argv_2378'.  */
  argv_2378 *argv_535;		/* Pointer to the limbs.  */
} argv_431;

/* typedef argv_431 MP_FLOAT; */
typedef argv_431 argv_2447[1];

/* Available random number argv_1637 algorithms.  */
typedef enum
{
  argv_1757 = 0,
  argv_1758 = argv_1757 /* Linear congruential.  */
} argv_1759;

/* Linear congruential argv_1073 struct.  */
typedef struct {
  argv_2674 argv_530;			/* Multiplier. */
  unsigned long int argv_534;	/* Adder. */
  argv_2674 argv_539;			/* Modulus (valid only if m2exp == 0).  */
  unsigned long int argv_540;	/* If != 0, modulus is 2 ^ m2exp.  */
} argv_390;

/* Random argv_3460 struct.  */
typedef struct
{
  argv_2674 argv_543;		/* Current seed.  */
  argv_1759 argv_531;	/* Algorithm used.  */
  union {			/* Algorithm specific argv_1073.  */
    argv_390 *argv_538;	/* Linear congruential.  */
  } argv_532;
} argv_391;
typedef argv_391 argv_1768[1];

/* Types for function declarations in gmp files.  */
/* ??? Should not pollute user argv_2697 space with these ??? */
typedef argv_371 argv_434 *argv_2668;
typedef argv_434 *argv_2645;
typedef argv_371 argv_431 *argv_2443;
typedef argv_431 *argv_2427;
typedef argv_371 argv_433 *argv_2523;
typedef argv_433 *argv_2513;


/* This is not wanted in mp.h, so put it outside the argv_410 common
   argv_3325. */
#if argv_385
#if __GMP_WITHIN_GMPXX
/* compiling to go into a DLL libgmpxx */
#define argv_375  argv_373
#else
/* compiling to go into a application which will link to a DLL libgmpxx */
#define argv_375  argv_374
#endif
#else
/* all other cases */
#define argv_375
#endif


#if argv_382
#define argv_389(x) x
#else
#define argv_389(x) ()
#endif

#ifndef argv_432
#if argv_383
#define argv_432(x) __gmpn_##x
#else
#define argv_432(x) __gmpn_/**/x
#endif
#endif

#if defined (FILE)                                              \
  || defined (H_STDIO)                                          \
  || defined (_H_STDIO)               /* AIX */                 \
  || defined (_STDIO_H)               /* glibc, Sun, SCO */     \
  || defined (_STDIO_H_)              /* BSD, OSF */            \
  || defined (__STDIO_H)              /* Borland */             \
  || defined (__STDIO_H__)            /* IRIX */                \
  || defined (_STDIO_INCLUDED)        /* HPUX */                \
  || defined (__dj_include_stdio_h_)  /* DJGPP */               \
  || defined (_FILE_DEFINED)          /* Microsoft */          \
  || defined (__STDIO__)              /* Apple MPW MrC */
#define argv_453 1
#endif

/* In ISO C, if a prototype involving "struct obstack *" is given without
   that structure defined, then the struct is scoped down to just the
   prototype, causing a conflict if it's subsequently defined for real.  So
   only give prototypes if we've got obstack.h.  */
#if defined (_OBSTACK_H)   /* glibc <obstack.h> */
#define argv_454 1
#endif

/* The prototypes for argv_1779 etc are provided only if va_list is
   available, via an application having included <stdarg.h> or <varargs.h>.
   Usually va_list is a typedef so can't be tested directly, but va_start is
   almost certainly a macro, so look for that.

   <stdio.h> will define some sort of va_list for vprintf and vfprintf, but
   let's not bother trying to use that since it's not standard and since
   application uses for argv_1779 etc will almost certainly require the
   whole <stdarg.h> or <varargs.h> anyway.  */

#ifdef va_start
#define argv_455 1
#endif

/* Test for gcc >= maj.min, as per __GNUC_PREREQ in glibc */
#if defined (__GNUC__) && defined (__GNUC_MINOR__)
#define argv_377(maj, min) \
  ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#else
#define argv_377(maj, min)  0
#endif

/* "pure" is in gcc 2.96 and up, see "(gcc)Function argv_687".  Basically
   it means a function does nothing but examine its arguments and memory
   (global or via arguments) to generate a return argv_3807, but changes nothing
   and has no side-effects. */
#if argv_377 (2,96)
#define argv_368   __attribute__ ((__pure__))
#else
#define argv_368
#endif


/* An empty "throw ()" means the function doesn't throw any C++ exceptions,
   this can save some stack frame info in applications.

   Currently it's given only on functions which never divide-by-zero etc,
   don't allocate memory, and are expected to never need to allocate memory.
   This leaves open the possibility of a C++ throw from a future GMP
   exceptions scheme.

   argv_2660 etc are omitted to leave open the lazy allocation scheme
   described in doc/tasks.html.  argv_2593 etc are omitted to leave open
   exceptions for float overflows.

   Note that argv_388 must be given on any inlines the same as on their
   prototypes (for g++ at least, where they're used together).  Note also
   that g++ 3.0 demands that argv_388 is before other attributes like
   argv_368.  */

#if defined (__cplusplus)
#define argv_388  throw ()
#else
#define argv_388
#endif


/* PORTME: What other compilers have a useful "extern inline"?  "static
   inline" would be an acceptable substitute if the compiler (or linker)
   discards unused statics.  */

/* gcc has __inline__ in all modes, including strict ansi.  Give a prototype
   for an inline too, so as to correctly specify "dllimport" on windows, in
   case the function is called rather than inlined.  */
#ifdef __GNUC__
#define argv_376      extern __inline__
#define argv_384  1
#endif

/* SCO OpenUNIX 8 cc supports "static inline foo()" but not in -Xc strict
   ANSI mode (__STDC__ is 1 in that mode).  Inlining only actually takes
   place under -O.  Without -O "foo" seems to be emitted whether it's used
   or not, which is wasteful.  "extern inline foo()" isn't useful, the
   "extern" is apparently ignored, so foo is inlined if possible but also
   emitted as a global, which causes multiple definition errors when
   building a shared libgmp.  */
#if __SCO_VERSION__ > 400000000 && __STDC__ != 1 \
  && ! defined (argv_376)
#define argv_376  static inline
#endif

/* C++ always has "inline" and since it's a normal feature the linker should
   discard duplicate non-inlined copies, or if it doesn't then that's a
   problem for everyone, not just GMP.  */
#if defined (__cplusplus) && ! defined (argv_376)
#define argv_376  inline
#endif

/* By default, don't give a prototype when there's going to be an inline
   version.  Note in particular that Cray C++ objects to the combination of
   prototype and inline.  */
#ifdef argv_376
#ifndef argv_384
#define argv_384  0
#endif
#else
#define argv_384  1
#endif


#define argv_367(x)   ((x) >= 0 ? (x) : -(x))
#define argv_386(h,i) ((h) > (i) ? (h) : (i))

#define argv_394   (~ (unsigned) 0)
#define argv_395  (~ (unsigned long) 0)
#define argv_396  ((unsigned short) ~0)


/* Allow direct user access to numerator and denominator of a argv_2526 argv_2785.  */
#define argv_2511(Q) (&((Q)->argv_541))
#define argv_2497(Q) (&((Q)->argv_536))


#if defined (__cplusplus)
extern "C" {
#endif

#define argv_2381 __gmp_set_memory_functions
argv_372 void argv_2381 argv_389 ((void *(*) (size_t),
				      void *(*) (void *, size_t, size_t),
				      void (*) (void *, size_t))) argv_388;

#define argv_2374 __gmp_bits_per_limb
argv_372 extern argv_371 int argv_2374;

#define argv_1694 __gmp_errno
argv_372 extern int argv_1694;

#define argv_1776 __gmp_version
argv_372 extern argv_371 char * argv_371 argv_1776;

/* The following for internal use only.
   Enhancement: __gmp_allocate_func could have "__attribute__ ((malloc))",
   but argv_1043 gcc (3.0) doesn't seem to support that.  */
argv_372 extern void * (*__gmp_allocate_func) argv_389 ((size_t));
argv_372 extern void * (*__gmp_reallocate_func) argv_389 ((void *, size_t, size_t));
argv_372 extern void   (*__gmp_free_func) argv_389 ((void *, size_t));


/**************** Random number routines.  ****************/

/* obsolete */
#define argv_1761 __gmp_randinit
argv_372 void argv_1761 argv_389 ((argv_1768, argv_1759, ...));

#define argv_1762 __gmp_randinit_default
argv_372 void argv_1762 argv_389 ((argv_1768));

#define argv_1763 __gmp_randinit_lc
argv_372 void argv_1763 argv_389 ((argv_1768,
                              argv_2668, unsigned long int, argv_2668));

#define argv_1764 __gmp_randinit_lc_2exp
argv_372 void argv_1764 argv_389 ((argv_1768,
                                   argv_2668, unsigned long int,
				   unsigned long int));

#define argv_1765 __gmp_randinit_lc_2exp_size
argv_372 int argv_1765 argv_389 ((argv_1768, unsigned long));

#define argv_1766 __gmp_randseed
argv_372 void argv_1766 argv_389 ((argv_1768, argv_2668));

#define argv_1767 __gmp_randseed_ui
argv_372 void argv_1767 argv_389 ((argv_1768, unsigned long int));

#define argv_1760 __gmp_randclear
argv_372 void argv_1760 argv_389 ((argv_1768));


/**************** Formatted output routines.  ****************/

#define argv_1693 __gmp_asprintf
argv_372 int argv_1693 argv_389 ((char **, const char *, ...));

#define argv_1703 __gmp_fprintf
#if argv_453
argv_372 int argv_1703 argv_389 ((FILE *, const char *, ...));
#endif

#define argv_1754 __gmp_obstack_printf
#if argv_454
argv_372 int argv_1754 argv_389 ((struct obstack *, const char *, ...));
#endif

#define argv_1755 __gmp_obstack_vprintf
#if argv_454 && argv_455
argv_372 int argv_1755 argv_389 ((struct obstack *, const char *, va_list));
#endif

#define argv_1756 __gmp_printf
argv_372 int argv_1756 argv_389 ((const char *, ...));

#define argv_1770 __gmp_snprintf
argv_372 int argv_1770 argv_389 ((char *, size_t, const char *, ...));

#define argv_1771 __gmp_sprintf
argv_372 int argv_1771 argv_389 ((char *, const char *, ...));

#define argv_1775 __gmp_vasprintf
#if argv_455
argv_372 int argv_1775 argv_389 ((char **, const char *, va_list));
#endif

#define argv_1777 __gmp_vfprintf
#if argv_453 && argv_455
argv_372 int argv_1777 argv_389 ((FILE *, const char *, va_list));
#endif

#define argv_1779 __gmp_vprintf
#if argv_455
argv_372 int argv_1779 argv_389 ((const char *, va_list));
#endif

#define argv_1781 __gmp_vsnprintf
#if argv_455
argv_372 int argv_1781 argv_389 ((char *, size_t, const char *, va_list));
#endif

#define argv_1782 __gmp_vsprintf
#if argv_455
argv_372 int argv_1782 argv_389 ((char *, const char *, va_list));
#endif


/**************** Formatted input routines.  ****************/

#define argv_1704 __gmp_fscanf
#if argv_453
argv_372 int argv_1704 argv_389 ((FILE *, const char *, ...));
#endif

#define argv_1769 __gmp_scanf
argv_372 int argv_1769 argv_389 ((const char *, ...));

#define argv_1772 __gmp_sscanf
argv_372 int argv_1772 argv_389 ((const char *, const char *, ...));

#define argv_1778 __gmp_vfscanf
#if argv_453 && argv_455
argv_372 int argv_1778 argv_389 ((FILE *, const char *, va_list));
#endif

#define argv_1780 __gmp_vscanf
#if argv_455
argv_372 int argv_1780 argv_389 ((const char *, va_list));
#endif

#define argv_1783 __gmp_vsscanf
#if argv_455
argv_372 int argv_1783 argv_389 ((const char *, const char *, va_list));
#endif


/**************** Integer (i.e. Z) routines.  ****************/

#define argv_549 __gmpz_realloc
#define argv_2648 __gmpz_realloc
argv_372 void *argv_549 argv_389 ((argv_2645, argv_2382));

#define argv_2527 __gmpz_abs
#if argv_384 || __GMP_FORCE_mpz_abs
argv_372 void argv_2527 argv_389 ((argv_2645, argv_2668));
#endif

#define argv_2528 __gmpz_add
argv_372 void argv_2528 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2529 __gmpz_add_ui
argv_372 void argv_2529 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2530 __gmpz_addmul
argv_372 void argv_2530 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2531 __gmpz_addmul_ui
argv_372 void argv_2531 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2532 __gmpz_and
argv_372 void argv_2532 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2533 __gmpz_array_init
argv_372 void argv_2533 argv_389 ((argv_2645, argv_2382, argv_2382));

#define argv_2534 __gmpz_bin_ui
argv_372 void argv_2534 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2535 __gmpz_bin_uiui
argv_372 void argv_2535 argv_389 ((argv_2645, unsigned long int, unsigned long int));

#define argv_2536 __gmpz_cdiv_q
argv_372 void argv_2536 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2537 __gmpz_cdiv_q_2exp
argv_372 void argv_2537 argv_389 ((argv_2645, argv_2668, unsigned long));

#define argv_2538 __gmpz_cdiv_q_ui
argv_372 unsigned long int argv_2538 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2539 __gmpz_cdiv_qr
argv_372 void argv_2539 argv_389 ((argv_2645, argv_2645, argv_2668, argv_2668));

#define argv_2540 __gmpz_cdiv_qr_ui
argv_372 unsigned long int argv_2540 argv_389 ((argv_2645, argv_2645, argv_2668, unsigned long int));

#define argv_2541 __gmpz_cdiv_r
argv_372 void argv_2541 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2542 __gmpz_cdiv_r_2exp
argv_372 void argv_2542 argv_389 ((argv_2645, argv_2668, unsigned long));

#define argv_2543 __gmpz_cdiv_r_ui
argv_372 unsigned long int argv_2543 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2544 __gmpz_cdiv_ui
argv_372 unsigned long int argv_2544 argv_389 ((argv_2668, unsigned long int)) argv_368;

#define argv_2545 __gmpz_clear
argv_372 void argv_2545 argv_389 ((argv_2645));

#define argv_2546 __gmpz_clrbit
argv_372 void argv_2546 argv_389 ((argv_2645, unsigned long int));

#define argv_2547 __gmpz_cmp
argv_372 int argv_2547 argv_389 ((argv_2668, argv_2668)) argv_388 argv_368;

#define argv_2548 __gmpz_cmp_d
argv_372 int argv_2548 argv_389 ((argv_2668, double)) argv_368;

#define argv_547 __gmpz_cmp_si
argv_372 int argv_547 argv_389 ((argv_2668, signed long int)) argv_388 argv_368;

#define argv_548 __gmpz_cmp_ui
argv_372 int argv_548 argv_389 ((argv_2668, unsigned long int)) argv_388 argv_368;

#define argv_2551 __gmpz_cmpabs
argv_372 int argv_2551 argv_389 ((argv_2668, argv_2668)) argv_388 argv_368;

#define argv_2552 __gmpz_cmpabs_d
argv_372 int argv_2552 argv_389 ((argv_2668, double)) argv_368;

#define argv_2553 __gmpz_cmpabs_ui
argv_372 int argv_2553 argv_389 ((argv_2668, unsigned long int)) argv_388 argv_368;

#define argv_2554 __gmpz_com
argv_372 void argv_2554 argv_389 ((argv_2645, argv_2668));

#define argv_2556 __gmpz_congruent_p
argv_372 int argv_2556 argv_389 ((argv_2668, argv_2668, argv_2668)) argv_368;

#define argv_2555 __gmpz_congruent_2exp_p
argv_372 int argv_2555 argv_389 ((argv_2668, argv_2668, unsigned long)) argv_388 argv_368;

#define argv_2557 __gmpz_congruent_ui_p
argv_372 int argv_2557 argv_389 ((argv_2668, unsigned long, unsigned long)) argv_368;

#define argv_2561 __gmpz_divexact
argv_372 void argv_2561 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2562 __gmpz_divexact_ui
argv_372 void argv_2562 argv_389 ((argv_2645, argv_2668, unsigned long));

#define argv_2564 __gmpz_divisible_p
argv_372 int argv_2564 argv_389 ((argv_2668, argv_2668)) argv_368;

#define argv_2565 __gmpz_divisible_ui_p
argv_372 int argv_2565 argv_389 ((argv_2668, unsigned long)) argv_368;

#define argv_2563 __gmpz_divisible_2exp_p
argv_372 int argv_2563 argv_389 ((argv_2668, unsigned long)) argv_388 argv_368;

#define argv_2568 __gmpz_dump
argv_372 void argv_2568 argv_389 ((argv_2668));

#define argv_2571 __gmpz_export
argv_372 void *argv_2571 argv_389 ((void *, size_t *, int, size_t, int, size_t, argv_2668 z));

#define argv_2572 __gmpz_fac_ui
argv_372 void argv_2572 argv_389 ((argv_2645, unsigned long int));

#define argv_2573 __gmpz_fdiv_q
argv_372 void argv_2573 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2574 __gmpz_fdiv_q_2exp
argv_372 void argv_2574 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2575 __gmpz_fdiv_q_ui
argv_372 unsigned long int argv_2575 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2576 __gmpz_fdiv_qr
argv_372 void argv_2576 argv_389 ((argv_2645, argv_2645, argv_2668, argv_2668));

#define argv_2577 __gmpz_fdiv_qr_ui
argv_372 unsigned long int argv_2577 argv_389 ((argv_2645, argv_2645, argv_2668, unsigned long int));

#define argv_2578 __gmpz_fdiv_r
argv_372 void argv_2578 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2579 __gmpz_fdiv_r_2exp
argv_372 void argv_2579 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2580 __gmpz_fdiv_r_ui
argv_372 unsigned long int argv_2580 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2581 __gmpz_fdiv_ui
argv_372 unsigned long int argv_2581 argv_389 ((argv_2668, unsigned long int)) argv_368;

#define argv_2582 __gmpz_fib_ui
argv_372 void argv_2582 argv_389 ((argv_2645, unsigned long int));

#define argv_2583 __gmpz_fib2_ui
argv_372 void argv_2583 argv_389 ((argv_2645, argv_2645, unsigned long int));

#define argv_2584 __gmpz_fits_sint_p
argv_372 int argv_2584 argv_389 ((argv_2668)) argv_388 argv_368;

#define argv_2585 __gmpz_fits_slong_p
argv_372 int argv_2585 argv_389 ((argv_2668)) argv_388 argv_368;

#define argv_2586 __gmpz_fits_sshort_p
argv_372 int argv_2586 argv_389 ((argv_2668)) argv_388 argv_368;

#define argv_2587 __gmpz_fits_uint_p
#if argv_384 || __GMP_FORCE_mpz_fits_uint_p
argv_372 int argv_2587 argv_389 ((argv_2668)) argv_388 argv_368;
#endif

#define argv_2588 __gmpz_fits_ulong_p
#if argv_384 || __GMP_FORCE_mpz_fits_ulong_p
argv_372 int argv_2588 argv_389 ((argv_2668)) argv_388 argv_368;
#endif

#define argv_2589 __gmpz_fits_ushort_p
#if argv_384 || __GMP_FORCE_mpz_fits_ushort_p
argv_372 int argv_2589 argv_389 ((argv_2668)) argv_388 argv_368;
#endif

#define argv_2590 __gmpz_gcd
argv_372 void argv_2590 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2591 __gmpz_gcd_ui
argv_372 unsigned long int argv_2591 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2592 __gmpz_gcdext
argv_372 void argv_2592 argv_389 ((argv_2645, argv_2645, argv_2645, argv_2668, argv_2668));

#define argv_2593 __gmpz_get_d
argv_372 double argv_2593 argv_389 ((argv_2668)) argv_368;

#define argv_2594 __gmpz_get_d_2exp
argv_372 double argv_2594 argv_389 ((signed long int *, argv_2668));

#define argv_2595 __gmpz_get_si
argv_372 /* signed */ long int argv_2595 argv_389 ((argv_2668)) argv_388 argv_368;

#define argv_2596 __gmpz_get_str
argv_372 char *argv_2596 argv_389 ((char *, int, argv_2668));

#define argv_2597 __gmpz_get_ui
#if argv_384 || __GMP_FORCE_mpz_get_ui
argv_372 unsigned long int argv_2597 argv_389 ((argv_2668)) argv_388 argv_368;
#endif

#define argv_2598 __gmpz_getlimbn
#if argv_384 || __GMP_FORCE_mpz_getlimbn
argv_372 argv_2378 argv_2598 argv_389 ((argv_2668, argv_2382)) argv_388 argv_368;
#endif

#define argv_2599 __gmpz_hamdist
argv_372 unsigned long int argv_2599 argv_389 ((argv_2668, argv_2668)) argv_388 argv_368;

#define argv_2600 __gmpz_import
argv_372 void argv_2600 argv_389 ((argv_2645, size_t, int, size_t, int, size_t, const void *));

#define argv_2601 __gmpz_init
argv_372 void argv_2601 argv_389 ((argv_2645));

#define argv_2606 __gmpz_init2
argv_372 void argv_2606 argv_389 ((argv_2645, unsigned long));

#define mpz_init_set __gmpz_init_set
argv_372 void mpz_init_set argv_389 ((argv_2645, argv_2668));

#define argv_2602 __gmpz_init_set_d
argv_372 void argv_2602 argv_389 ((argv_2645, double));

#define argv_2603 __gmpz_init_set_si
argv_372 void argv_2603 argv_389 ((argv_2645, signed long int));

#define argv_2604 __gmpz_init_set_str
argv_372 int argv_2604 argv_389 ((argv_2645, argv_371 char *, int));

#define argv_2605 __gmpz_init_set_ui
argv_372 void argv_2605 argv_389 ((argv_2645, unsigned long int));

#define argv_2607 __gmpz_inp_raw
#ifdef argv_453
argv_372 size_t argv_2607 argv_389 ((argv_2645, FILE *));
#endif

#define argv_2608 __gmpz_inp_str
#ifdef argv_453
argv_372 size_t argv_2608 argv_389 ((argv_2645, FILE *, int));
#endif

#define argv_2609 __gmpz_invert
argv_372 int argv_2609 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2610 __gmpz_ior
argv_372 void argv_2610 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2611 __gmpz_jacobi
argv_372 int argv_2611 argv_389 ((argv_2668, argv_2668)) argv_368;

#define argv_2612 argv_2611  /* alias */

#define argv_2613 __gmpz_kronecker_si
argv_372 int argv_2613 argv_389 ((argv_2668, long)) argv_368;

#define argv_2614 __gmpz_kronecker_ui
argv_372 int argv_2614 argv_389 ((argv_2668, unsigned long)) argv_368;

#define argv_2663 __gmpz_si_kronecker
argv_372 int argv_2663 argv_389 ((long, argv_2668)) argv_368;

#define argv_2685 __gmpz_ui_kronecker
argv_372 int argv_2685 argv_389 ((unsigned long, argv_2668)) argv_368;

#define argv_2615 __gmpz_lcm
argv_372 void argv_2615 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2616 __gmpz_lcm_ui
argv_372 void argv_2616 argv_389 ((argv_2645, argv_2668, unsigned long));

#define argv_2617 argv_2611  /* alias */

#define argv_2618 __gmpz_lucnum_ui
argv_372 void argv_2618 argv_389 ((argv_2645, unsigned long int));

#define argv_2619 __gmpz_lucnum2_ui
argv_372 void argv_2619 argv_389 ((argv_2645, argv_2645, unsigned long int));

#define argv_2624 __gmpz_millerrabin
argv_372 int argv_2624 argv_389 ((argv_2668, int)) argv_368;

#define argv_2627 __gmpz_mod
argv_372 void argv_2627 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2630 __gmpz_mul
argv_372 void argv_2630 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2631 __gmpz_mul_2exp
argv_372 void argv_2631 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2632 __gmpz_mul_si
argv_372 void argv_2632 argv_389 ((argv_2645, argv_2668, long int));

#define argv_2633 __gmpz_mul_ui
argv_372 void argv_2633 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2634 __gmpz_neg
#if argv_384 || __GMP_FORCE_mpz_neg
argv_372 void argv_2634 argv_389 ((argv_2645, argv_2668));
#endif

#define argv_2635 __gmpz_nextprime
argv_372 void argv_2635 argv_389 ((argv_2645, argv_2668));

#define argv_2637 __gmpz_out_raw
#ifdef argv_453
argv_372 size_t argv_2637 argv_389 ((FILE *, argv_2668));
#endif

#define argv_2638 __gmpz_out_str
#ifdef argv_453
argv_372 size_t argv_2638 argv_389 ((FILE *, int, argv_2668));
#endif

#define argv_2639 __gmpz_perfect_power_p
argv_372 int argv_2639 argv_389 ((argv_2668)) argv_368;

#define argv_2640 __gmpz_perfect_square_p
#if argv_384 || __GMP_FORCE_mpz_perfect_square_p
argv_372 int argv_2640 argv_389 ((argv_2668)) argv_368;
#endif

#define mpz_popcount __gmpz_popcount
#if argv_384 || __GMP_FORCE_mpz_popcount
argv_372 unsigned long int mpz_popcount argv_389 ((argv_2668)) argv_388 argv_368;
#endif

#define argv_2641 __gmpz_pow_ui
argv_372 void argv_2641 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2642 __gmpz_powm
argv_372 void argv_2642 argv_389 ((argv_2645, argv_2668, argv_2668, argv_2668));

#define argv_2643 __gmpz_powm_ui
argv_372 void argv_2643 argv_389 ((argv_2645, argv_2668, unsigned long int, argv_2668));

#define argv_2644 __gmpz_probab_prime_p
argv_372 int argv_2644 argv_389 ((argv_2668, int)) argv_368;

#define argv_2646 __gmpz_random
argv_372 void argv_2646 argv_389 ((argv_2645, argv_2382));

#define argv_2647 __gmpz_random2
argv_372 void argv_2647 argv_389 ((argv_2645, argv_2382));

#define argv_2649 __gmpz_realloc2
argv_372 void argv_2649 argv_389 ((argv_2645, unsigned long));

#define argv_2650 __gmpz_remove
argv_372 unsigned long int argv_2650 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2651 __gmpz_root
argv_372 int argv_2651 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2652 __gmpz_rrandomb
argv_372 void argv_2652 argv_389 ((argv_2645, argv_1768, unsigned long int));

#define argv_2653 __gmpz_scan0
argv_372 unsigned long int argv_2653 argv_389 ((argv_2668, unsigned long int)) argv_388 argv_368;

#define argv_2654 __gmpz_scan1
argv_372 unsigned long int argv_2654 argv_389 ((argv_2668, unsigned long int)) argv_388 argv_368;

#define mpz_set __gmpz_set
argv_372 void mpz_set argv_389 ((argv_2645, argv_2668));

#define argv_2655 __gmpz_set_d
argv_372 void argv_2655 argv_389 ((argv_2645, double));

#define argv_2656 __gmpz_set_f
argv_372 void argv_2656 argv_389 ((argv_2645, argv_2443));

#define argv_2657 __gmpz_set_q
#if argv_384 || __GMP_FORCE_mpz_set_q
argv_372 void argv_2657 argv_389 ((argv_2645, argv_2523));
#endif

#define argv_2658 __gmpz_set_si
argv_372 void argv_2658 argv_389 ((argv_2645, signed long int));

#define argv_2659 __gmpz_set_str
argv_372 int argv_2659 argv_389 ((argv_2645, argv_371 char *, int));

#define argv_2660 __gmpz_set_ui
argv_372 void argv_2660 argv_389 ((argv_2645, unsigned long int));

#define argv_2661 __gmpz_setbit
argv_372 void argv_2661 argv_389 ((argv_2645, unsigned long int));

#define argv_2664 __gmpz_size
#if argv_384 || __GMP_FORCE_mpz_size
argv_372 size_t argv_2664 argv_389 ((argv_2668)) argv_388 argv_368;
#endif

#define argv_2665 __gmpz_sizeinbase
argv_372 size_t argv_2665 argv_389 ((argv_2668, int)) argv_388 argv_368;

#define argv_2666 __gmpz_sqrt
argv_372 void argv_2666 argv_389 ((argv_2645, argv_2668));

#define argv_2667 __gmpz_sqrtrem
argv_372 void argv_2667 argv_389 ((argv_2645, argv_2645, argv_2668));

#define argv_2669 __gmpz_sub
argv_372 void argv_2669 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2670 __gmpz_sub_ui
argv_372 void argv_2670 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2687 __gmpz_ui_sub
argv_372 void argv_2687 argv_389 ((argv_2645, unsigned long int, argv_2668));

#define argv_2671 __gmpz_submul
argv_372 void argv_2671 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2672 __gmpz_submul_ui
argv_372 void argv_2672 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2673 __gmpz_swap
argv_372 void argv_2673 argv_389 ((argv_2645, argv_2645)) argv_388;

#define argv_2683 __gmpz_tdiv_ui
argv_372 unsigned long int argv_2683 argv_389 ((argv_2668, unsigned long int)) argv_368;

#define argv_2675 __gmpz_tdiv_q
argv_372 void argv_2675 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2676 __gmpz_tdiv_q_2exp
argv_372 void argv_2676 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2677 __gmpz_tdiv_q_ui
argv_372 unsigned long int argv_2677 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2678 __gmpz_tdiv_qr
argv_372 void argv_2678 argv_389 ((argv_2645, argv_2645, argv_2668, argv_2668));

#define argv_2679 __gmpz_tdiv_qr_ui
argv_372 unsigned long int argv_2679 argv_389 ((argv_2645, argv_2645, argv_2668, unsigned long int));

#define argv_2680 __gmpz_tdiv_r
argv_372 void argv_2680 argv_389 ((argv_2645, argv_2668, argv_2668));

#define argv_2681 __gmpz_tdiv_r_2exp
argv_372 void argv_2681 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2682 __gmpz_tdiv_r_ui
argv_372 unsigned long int argv_2682 argv_389 ((argv_2645, argv_2668, unsigned long int));

#define argv_2684 __gmpz_tstbit
argv_372 int argv_2684 argv_389 ((argv_2668, unsigned long int)) argv_388 argv_368;

#define argv_2686 __gmpz_ui_pow_ui
argv_372 void argv_2686 argv_389 ((argv_2645, unsigned long int, unsigned long int));

#define argv_2688 __gmpz_urandomb
argv_372 void argv_2688 argv_389 ((argv_2645, argv_1768, unsigned long int));

#define argv_2689 __gmpz_urandomm
argv_372 void argv_2689 argv_389 ((argv_2645, argv_1768, argv_2668));

#define argv_2690 __gmpz_xor
#define argv_2569 __gmpz_xor
argv_372 void argv_2690 argv_389 ((argv_2645, argv_2668, argv_2668));


/**************** Rational (i.e. Q) routines.  ****************/

#define argv_2490 __gmpq_abs
#if argv_384 || __GMP_FORCE_mpq_abs
argv_372 void argv_2490 argv_389 ((argv_2513, argv_2523));
#endif

#define argv_2491 __gmpq_add
argv_372 void argv_2491 argv_389 ((argv_2513, argv_2523, argv_2523));

#define argv_2492 __gmpq_canonicalize
argv_372 void argv_2492 argv_389 ((argv_2513));

#define argv_2493 __gmpq_clear
argv_372 void argv_2493 argv_389 ((argv_2513));

#define argv_2494 __gmpq_cmp
argv_372 int argv_2494 argv_389 ((argv_2523, argv_2523)) argv_368;

#define argv_545 __gmpq_cmp_si
argv_372 int argv_545 argv_389 ((argv_2523, long, unsigned long)) argv_368;

#define argv_546 __gmpq_cmp_ui
argv_372 int argv_546 argv_389 ((argv_2523, unsigned long int, unsigned long int)) argv_368;

#define argv_2498 __gmpq_div
argv_372 void argv_2498 argv_389 ((argv_2513, argv_2523, argv_2523));

#define argv_2499 __gmpq_div_2exp
argv_372 void argv_2499 argv_389 ((argv_2513, argv_2523, unsigned long));

#define argv_2500 __gmpq_equal
argv_372 int argv_2500 argv_389 ((argv_2523, argv_2523)) argv_388 argv_368;

#define argv_2503 __gmpq_get_num
argv_372 void argv_2503 argv_389 ((argv_2645, argv_2523));

#define argv_2502 __gmpq_get_den
argv_372 void argv_2502 argv_389 ((argv_2645, argv_2523));

#define argv_2501 __gmpq_get_d
argv_372 double argv_2501 argv_389 ((argv_2523)) argv_368;

#define argv_2504 __gmpq_get_str
argv_372 char *argv_2504 argv_389 ((char *, int, argv_2523));

#define argv_2505 __gmpq_init
argv_372 void argv_2505 argv_389 ((argv_2513));

#define argv_2506 __gmpq_inp_str
#ifdef argv_453
argv_372 size_t argv_2506 argv_389 ((argv_2513, FILE *, int));
#endif

#define argv_2507 __gmpq_inv
argv_372 void argv_2507 argv_389 ((argv_2513, argv_2523));

#define argv_2508 __gmpq_mul
argv_372 void argv_2508 argv_389 ((argv_2513, argv_2523, argv_2523));

#define argv_2509 __gmpq_mul_2exp
argv_372 void argv_2509 argv_389 ((argv_2513, argv_2523, unsigned long));

#define argv_2510 __gmpq_neg
#if argv_384 || __GMP_FORCE_mpq_neg
argv_372 void argv_2510 argv_389 ((argv_2513, argv_2523));
#endif

#define argv_2512 __gmpq_out_str
#ifdef argv_453
argv_372 size_t argv_2512 argv_389 ((FILE *, int, argv_2523));
#endif

#define mpq_set __gmpq_set
argv_372 void mpq_set argv_389 ((argv_2513, argv_2523));

#define argv_2514 __gmpq_set_d
argv_372 void argv_2514 argv_389 ((argv_2513, double));

#define argv_2515 __gmpq_set_den
argv_372 void argv_2515 argv_389 ((argv_2513, argv_2668));

#define argv_2516 __gmpq_set_f
argv_372 void argv_2516 argv_389 ((argv_2513, argv_2443));

#define argv_2517 __gmpq_set_num
argv_372 void argv_2517 argv_389 ((argv_2513, argv_2668));

#define argv_2518 __gmpq_set_si
argv_372 void argv_2518 argv_389 ((argv_2513, signed long int, unsigned long int));

#define argv_2519 __gmpq_set_str
argv_372 int argv_2519 argv_389 ((argv_2513, const char *, int));

#define argv_2520 __gmpq_set_ui
argv_372 void argv_2520 argv_389 ((argv_2513, unsigned long int, unsigned long int));

#define argv_2521 __gmpq_set_z
argv_372 void argv_2521 argv_389 ((argv_2513, argv_2668));

#define argv_2524 __gmpq_sub
argv_372 void argv_2524 argv_389 ((argv_2513, argv_2523, argv_2523));

#define argv_2525 __gmpq_swap
argv_372 void argv_2525 argv_389 ((argv_2513, argv_2513)) argv_388;


/**************** Float (i.e. F) routines.  ****************/

#define argv_2385 __gmpf_abs
argv_372 void argv_2385 argv_389 ((argv_2427, argv_2443));

#define argv_2386 __gmpf_add
argv_372 void argv_2386 argv_389 ((argv_2427, argv_2443, argv_2443));

#define argv_2387 __gmpf_add_ui
argv_372 void argv_2387 argv_389 ((argv_2427, argv_2443, unsigned long int));
#define argv_2388 __gmpf_ceil
argv_372 void argv_2388 argv_389 ((argv_2427, argv_2443));

#define argv_2389 __gmpf_clear
argv_372 void argv_2389 argv_389 ((argv_2427));

#define argv_2390 __gmpf_cmp
argv_372 int argv_2390 argv_389 ((argv_2443, argv_2443)) argv_388 argv_368;

#define argv_2391 __gmpf_cmp_d
argv_372 int argv_2391 argv_389 ((argv_2443, double)) argv_368;

#define argv_2392 __gmpf_cmp_si
argv_372 int argv_2392 argv_389 ((argv_2443, signed long int)) argv_388 argv_368;

#define argv_2393 __gmpf_cmp_ui
argv_372 int argv_2393 argv_389 ((argv_2443, unsigned long int)) argv_388 argv_368;

#define argv_2394 __gmpf_div
argv_372 void argv_2394 argv_389 ((argv_2427, argv_2443, argv_2443));

#define argv_2395 __gmpf_div_2exp
argv_372 void argv_2395 argv_389 ((argv_2427, argv_2443, unsigned long int));

#define argv_2396 __gmpf_div_ui
argv_372 void argv_2396 argv_389 ((argv_2427, argv_2443, unsigned long int));

#define argv_2397 __gmpf_dump
argv_372 void argv_2397 argv_389 ((argv_2443));

#define argv_2398 __gmpf_eq
argv_372 int argv_2398 argv_389 ((argv_2443, argv_2443, unsigned long int)) argv_368;

#define argv_2399 __gmpf_fits_sint_p
argv_372 int argv_2399 argv_389 ((argv_2443)) argv_388 argv_368;

#define argv_2400 __gmpf_fits_slong_p
argv_372 int argv_2400 argv_389 ((argv_2443)) argv_388 argv_368;

#define argv_2401 __gmpf_fits_sshort_p
argv_372 int argv_2401 argv_389 ((argv_2443)) argv_388 argv_368;

#define argv_2402 __gmpf_fits_uint_p
argv_372 int argv_2402 argv_389 ((argv_2443)) argv_388 argv_368;

#define argv_2403 __gmpf_fits_ulong_p
argv_372 int argv_2403 argv_389 ((argv_2443)) argv_388 argv_368;

#define argv_2404 __gmpf_fits_ushort_p
argv_372 int argv_2404 argv_389 ((argv_2443)) argv_388 argv_368;

#define argv_2405 __gmpf_floor
argv_372 void argv_2405 argv_389 ((argv_2427, argv_2443));

#define argv_2406 __gmpf_get_d
argv_372 double argv_2406 argv_389 ((argv_2443)) argv_368;

#define argv_2407 __gmpf_get_d_2exp
argv_372 double argv_2407 argv_389 ((signed long int *, argv_2443));

#define argv_2408 __gmpf_get_default_prec
argv_372 unsigned long int argv_2408 argv_389 ((void)) argv_388 argv_368;

#define argv_2409 __gmpf_get_prec
argv_372 unsigned long int argv_2409 argv_389 ((argv_2443)) argv_388 argv_368;

#define argv_2410 __gmpf_get_si
argv_372 long argv_2410 argv_389 ((argv_2443)) argv_388 argv_368;

#define argv_2411 __gmpf_get_str
argv_372 char *argv_2411 argv_389 ((char *, argv_2375 *, int, size_t, argv_2443));

#define argv_2412 __gmpf_get_ui
argv_372 unsigned long argv_2412 argv_389 ((argv_2443)) argv_388 argv_368;

#define argv_2413 __gmpf_init
argv_372 void argv_2413 argv_389 ((argv_2427));

#define argv_2418 __gmpf_init2
argv_372 void argv_2418 argv_389 ((argv_2427, unsigned long int));

#define mpf_init_set __gmpf_init_set
argv_372 void mpf_init_set argv_389 ((argv_2427, argv_2443));

#define argv_2414 __gmpf_init_set_d
argv_372 void argv_2414 argv_389 ((argv_2427, double));

#define argv_2415 __gmpf_init_set_si
argv_372 void argv_2415 argv_389 ((argv_2427, signed long int));

#define argv_2416 __gmpf_init_set_str
argv_372 int argv_2416 argv_389 ((argv_2427, argv_371 char *, int));

#define argv_2417 __gmpf_init_set_ui
argv_372 void argv_2417 argv_389 ((argv_2427, unsigned long int));

#define argv_2419 __gmpf_inp_str
#ifdef argv_453
argv_372 size_t argv_2419 argv_389 ((argv_2427, FILE *, int));
#endif

#define argv_2420 __gmpf_integer_p
argv_372 int argv_2420 argv_389 ((argv_2443)) argv_388 argv_368;

#define argv_2421 __gmpf_mul
argv_372 void argv_2421 argv_389 ((argv_2427, argv_2443, argv_2443));

#define argv_2422 __gmpf_mul_2exp
argv_372 void argv_2422 argv_389 ((argv_2427, argv_2443, unsigned long int));

#define argv_2423 __gmpf_mul_ui
argv_372 void argv_2423 argv_389 ((argv_2427, argv_2443, unsigned long int));

#define argv_2424 __gmpf_neg
argv_372 void argv_2424 argv_389 ((argv_2427, argv_2443));

#define argv_2425 __gmpf_out_str
#ifdef argv_453
argv_372 size_t argv_2425 argv_389 ((FILE *, int, size_t, argv_2443));
#endif

#define argv_2426 __gmpf_pow_ui
argv_372 void argv_2426 argv_389 ((argv_2427, argv_2443, unsigned long int));

#define argv_2428 __gmpf_random2
argv_372 void argv_2428 argv_389 ((argv_2427, argv_2382, argv_2375));

#define argv_2429 __gmpf_reldiff
argv_372 void argv_2429 argv_389 ((argv_2427, argv_2443, argv_2443));

#define mpf_set __gmpf_set
argv_372 void mpf_set argv_389 ((argv_2427, argv_2443));

#define argv_2430 __gmpf_set_d
argv_372 void argv_2430 argv_389 ((argv_2427, double));

#define argv_2431 __gmpf_set_default_prec
argv_372 void argv_2431 argv_389 ((unsigned long int)) argv_388;

#define argv_2432 __gmpf_set_prec
argv_372 void argv_2432 argv_389 ((argv_2427, unsigned long int));

#define argv_2433 __gmpf_set_prec_raw
argv_372 void argv_2433 argv_389 ((argv_2427, unsigned long int)) argv_388;

#define argv_2434 __gmpf_set_q
argv_372 void argv_2434 argv_389 ((argv_2427, argv_2523));

#define argv_2435 __gmpf_set_si
argv_372 void argv_2435 argv_389 ((argv_2427, signed long int));

#define argv_2436 __gmpf_set_str
argv_372 int argv_2436 argv_389 ((argv_2427, argv_371 char *, int));

#define argv_2437 __gmpf_set_ui
argv_372 void argv_2437 argv_389 ((argv_2427, unsigned long int));

#define argv_2438 __gmpf_set_z
argv_372 void argv_2438 argv_389 ((argv_2427, argv_2668));

#define argv_2440 __gmpf_size
argv_372 size_t argv_2440 argv_389 ((argv_2443)) argv_388 argv_368;

#define argv_2441 __gmpf_sqrt
argv_372 void argv_2441 argv_389 ((argv_2427, argv_2443));

#define argv_2442 __gmpf_sqrt_ui
argv_372 void argv_2442 argv_389 ((argv_2427, unsigned long int));

#define argv_2444 __gmpf_sub
argv_372 void argv_2444 argv_389 ((argv_2427, argv_2443, argv_2443));

#define argv_2445 __gmpf_sub_ui
argv_372 void argv_2445 argv_389 ((argv_2427, argv_2443, unsigned long int));

#define argv_2446 __gmpf_swap
argv_372 void argv_2446 argv_389 ((argv_2427, argv_2427)) argv_388;

#define argv_2448 __gmpf_trunc
argv_372 void argv_2448 argv_389 ((argv_2427, argv_2443));

#define argv_2449 __gmpf_ui_div
argv_372 void argv_2449 argv_389 ((argv_2427, unsigned long int, argv_2443));

#define argv_2450 __gmpf_ui_sub
argv_372 void argv_2450 argv_389 ((argv_2427, unsigned long int, argv_2443));

#define argv_2451 __gmpf_urandomb
argv_372 void argv_2451 argv_389 ((argv_2447, argv_1768, unsigned long int));


/************ Low level positive-integer (i.e. N) routines.  ************/

/* This is ugly, but we need to make user calls reach the prefixed function. */

#define argv_2452 argv_432(argv_576)
#if argv_384 || __GMP_FORCE_mpn_add
argv_372 argv_2378 argv_2452 argv_389 ((argv_2379, argv_2383, argv_2382, argv_2383,argv_2382));
#endif

#define argv_2453 argv_432(add_1)
#if argv_384 || __GMP_FORCE_mpn_add_1
argv_372 argv_2378 argv_2453 argv_389 ((argv_2379, argv_2383, argv_2382, argv_2378)) argv_388;
#endif

#define argv_2454 argv_432(add_n)
argv_372 argv_2378 argv_2454 argv_389 ((argv_2379, argv_2383, argv_2383, argv_2382));

#define argv_2455 argv_432(addmul_1)
argv_372 argv_2378 argv_2455 argv_389 ((argv_2379, argv_2383, argv_2382, argv_2378));

#define argv_2456 argv_432(bdivmod)
argv_372 argv_2378 argv_2456 argv_389 ((argv_2379, argv_2379, argv_2382, argv_2383, argv_2382, unsigned long int));

#define argv_2457 argv_432(cmp)
#if argv_384 || __GMP_FORCE_mpn_cmp
argv_372 int argv_2457 argv_389 ((argv_2383, argv_2383, argv_2382)) argv_388 argv_368;
#endif

#define argv_2458(dst,src,size) \
  argv_2459 (dst, src, size, (argv_2378) 0)

#define argv_2459 argv_432(divexact_by3c)
argv_372 argv_2378 argv_2459 argv_389 ((argv_2379, argv_2383, argv_2382, argv_2378));

#define argv_2461(qp,np,nsize,dlimb) \
  argv_2463 (qp, (argv_2382) 0, np, nsize, dlimb)

#define argv_2462 argv_432(divrem)
argv_372 argv_2378 argv_2462 argv_389 ((argv_2379, argv_2382, argv_2379, argv_2382, argv_2383, argv_2382));

#define argv_2463 argv_432(divrem_1)
argv_372 argv_2378 argv_2463 argv_389 ((argv_2379, argv_2382, argv_2383, argv_2382, argv_2378));

#define argv_2464 argv_432(divrem_2)
argv_372 argv_2378 argv_2464 argv_389 ((argv_2379, argv_2382, argv_2379, argv_2382, argv_2383));

#define argv_2465 argv_432(argv_1623)
argv_372 argv_2382 argv_2465 argv_389 ((argv_2379, argv_2379, argv_2382, argv_2379, argv_2382));

#define argv_2466 argv_432(gcd_1)
argv_372 argv_2378 argv_2466 argv_389 ((argv_2383, argv_2382, argv_2378)) argv_368;

#define argv_2467 argv_432(gcdext)
argv_372 argv_2382 argv_2467 argv_389 ((argv_2379, argv_2379, argv_2382 *, argv_2379, argv_2382, argv_2379, argv_2382));

#define argv_2468 argv_432(get_str)
argv_372 size_t argv_2468 argv_389 ((unsigned char *, int, argv_2379, argv_2382));

#define argv_2469 argv_432(hamdist)
argv_372 unsigned long int argv_2469 argv_389 ((argv_2383, argv_2383, argv_2382)) argv_388 argv_368;

#define argv_2470 argv_432(lshift)
argv_372 argv_2378 argv_2470 argv_389 ((argv_2379, argv_2383, argv_2382, unsigned int));

#define argv_2471 argv_432(mod_1)
argv_372 argv_2378 argv_2471 argv_389 ((argv_2383, argv_2382, argv_2378)) argv_368;

#define argv_2472 argv_432(mul)
argv_372 argv_2378 argv_2472 argv_389 ((argv_2379, argv_2383, argv_2382, argv_2383, argv_2382));

#define argv_2473 argv_432(mul_1)
argv_372 argv_2378 argv_2473 argv_389 ((argv_2379, argv_2383, argv_2382, argv_2378));

#define argv_2474 argv_432(mul_n)
argv_372 void argv_2474 argv_389 ((argv_2379, argv_2383, argv_2383, argv_2382));

#define argv_2475 argv_432(perfect_square_p)
argv_372 int argv_2475 argv_389 ((argv_2383, argv_2382)) argv_368;

#define mpn_popcount argv_432(popcount)
argv_372 unsigned long int mpn_popcount argv_389 ((argv_2383, argv_2382)) argv_388 argv_368;

#define argv_2476 argv_432(pow_1)
argv_372 argv_2382 argv_2476 argv_389 ((argv_2379, argv_2383, argv_2382, argv_2378, argv_2379));

/* undocumented now, but retained here for upward compatibility */
#define argv_2477 argv_432(preinv_mod_1)
argv_372 argv_2378 argv_2477 argv_389 ((argv_2383, argv_2382, argv_2378, argv_2378)) argv_368;

#define argv_2478 argv_432(random)
argv_372 void argv_2478 argv_389 ((argv_2379, argv_2382));

#define argv_2479 argv_432(random2)
argv_372 void argv_2479 argv_389 ((argv_2379, argv_2382));

#define argv_2480 argv_432(rshift)
argv_372 argv_2378 argv_2480 argv_389 ((argv_2379, argv_2383, argv_2382, unsigned int));

#define argv_2481 argv_432(scan0)
argv_372 unsigned long int argv_2481 argv_389 ((argv_2383, unsigned long int)) argv_368;

#define argv_2482 argv_432(scan1)
argv_372 unsigned long int argv_2482 argv_389 ((argv_2383, unsigned long int)) argv_368;

#define argv_2483 argv_432(set_str)
argv_372 argv_2382 argv_2483 argv_389 ((argv_2379, argv_371 unsigned char *, size_t, int));

#define argv_2484 argv_432(sqrtrem)
argv_372 argv_2382 argv_2484 argv_389 ((argv_2379, argv_2379, argv_2383, argv_2382));

#define argv_2485 argv_432(sub)
#if argv_384 || __GMP_FORCE_mpn_sub
argv_372 argv_2378 argv_2485 argv_389 ((argv_2379, argv_2383, argv_2382, argv_2383,argv_2382));
#endif

#define argv_2486 argv_432(sub_1)
#if argv_384 || __GMP_FORCE_mpn_sub_1
argv_372 argv_2378 argv_2486 argv_389 ((argv_2379, argv_2383, argv_2382, argv_2378)) argv_388;
#endif

#define argv_2487 argv_432(sub_n)
argv_372 argv_2378 argv_2487 argv_389 ((argv_2379, argv_2383, argv_2383, argv_2382));

#define argv_2488 argv_432(submul_1)
argv_372 argv_2378 argv_2488 argv_389 ((argv_2379, argv_2383, argv_2382, argv_2378));

#define argv_2489 argv_432(tdiv_qr)
argv_372 void argv_2489 argv_389 ((argv_2379, argv_2379, argv_2382, argv_2383, argv_2382, argv_2383, argv_2382));


/**************** mpz inlines ****************/

/* The following are provided as inlines where possible, but always exist as
   library functions too, for binary compatibility.

   Within gmp itself this inlining generally isn't relied on, since it
   doesn't get argv_1185 for all compilers, whereas if something is worth
   inlining then it's worth arranging always.

   There are two styles of inlining here.  When the same bit of argv_877 is
   wanted for the inline as for the library version, then __GMP_FORCE_foo
   arranges for that argv_877 to be emitted and the argv_376
   directive suppressed, eg. argv_2587.  When a different bit of argv_877
   is wanted for the inline than for the library version, then
   __GMP_FORCE_foo arranges the inline to be suppressed, eg. argv_2527.  */

#if defined (argv_376) && ! __GMP_FORCE_mpz_abs
argv_376 void
argv_2527 (argv_2645 __gmp_w, argv_2668 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpz_set (__gmp_w, __gmp_u);
  __gmp_w->argv_544 = argv_367 (__gmp_w->argv_544);
}
#endif

#if argv_1749 == 0
#define argv_409(z,maxval)					\
  argv_2382  __gmp_n = z->argv_544;					\
  argv_2379  __gmp_p = z->argv_535;						\
  return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= maxval));
#else
#define argv_409(z,maxval)					\
  argv_2382  __gmp_n = z->argv_544;					\
  argv_2379  __gmp_p = z->argv_535;						\
  return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= maxval)	\
	  || (__gmp_n == 2 && __gmp_p[1] <= ((argv_2378) maxval >> argv_1751)));
#endif

#if defined (argv_376) || __GMP_FORCE_mpz_fits_uint_p
#if ! __GMP_FORCE_mpz_fits_uint_p
argv_376
#endif
int
argv_2587 (argv_2668 __gmp_z) argv_388
{
  argv_409 (__gmp_z, argv_394);
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpz_fits_ulong_p
#if ! __GMP_FORCE_mpz_fits_ulong_p
argv_376
#endif
int
argv_2588 (argv_2668 __gmp_z) argv_388
{
  argv_409 (__gmp_z, argv_395);
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpz_fits_ushort_p
#if ! __GMP_FORCE_mpz_fits_ushort_p
argv_376
#endif
int
argv_2589 (argv_2668 __gmp_z) argv_388
{
  argv_409 (__gmp_z, argv_396);
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpz_get_ui
#if ! __GMP_FORCE_mpz_get_ui
argv_376
#endif
unsigned long
argv_2597 (argv_2668 __gmp_z) argv_388
{
  argv_2379 __gmp_p = __gmp_z->argv_535;
  argv_2382 __gmp_n = __gmp_z->argv_544;
  argv_2378 __gmp_l = __gmp_p[0];
  if (argv_395 <= argv_1752)
    return __gmp_l & (-(argv_2378) (__gmp_n != 0));
#if argv_1749 != 0	/* redundant #if, shuts up compiler warnings */
  else			/* happens for nails, but not if LONG_LONG_LIMB */
    {			/* assume two limbs are enough to fill an ulong */
      __gmp_n = argv_367 (__gmp_n);
      if (__gmp_n <= 1)
	return __gmp_l & (-(argv_2378) (__gmp_n != 0));
      else
	return __gmp_l + (__gmp_p[1] << argv_1751);
    }
#endif
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpz_getlimbn
#if ! __GMP_FORCE_mpz_getlimbn
argv_376
#endif
argv_2378
argv_2598 (argv_2668 __gmp_z, argv_2382 __gmp_n) argv_388
{
  if (argv_367 (__gmp_z->argv_544) <= __gmp_n || __gmp_n < 0)
    return 0;
  else
    return __gmp_z->argv_535[__gmp_n];
}
#endif

#if defined (argv_376) && ! __GMP_FORCE_mpz_neg
argv_376 void
argv_2634 (argv_2645 __gmp_w, argv_2668 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpz_set (__gmp_w, __gmp_u);
  __gmp_w->argv_544 = - __gmp_w->argv_544;
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpz_perfect_square_p
#if ! __GMP_FORCE_mpz_perfect_square_p
argv_376
#endif
int
argv_2640 (argv_2668 __gmp_a)
{
  argv_2382 __gmp_asize = __gmp_a->argv_544;
  if (__gmp_asize <= 0)
    return (__gmp_asize == 0);  /* zero is a square, negatives are not */
  else
    return argv_2475 (__gmp_a->argv_535, __gmp_asize);
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpz_popcount
#if ! __GMP_FORCE_mpz_popcount
argv_376
#endif
unsigned long
mpz_popcount (argv_2668 __gmp_u) argv_388
{
  argv_2382 __gmp_usize = __gmp_u->argv_544;

  if (__gmp_usize <= 0)
    return (__gmp_usize < 0 ? argv_395 : 0);
  else
    return mpn_popcount (__gmp_u->argv_535, __gmp_usize);
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpz_set_q
#if ! __GMP_FORCE_mpz_set_q
argv_376
#endif
void
argv_2657 (argv_2645 __gmp_w, argv_2523 __gmp_u)
{
  argv_2675 (__gmp_w, argv_2511 (__gmp_u), argv_2497 (__gmp_u));
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpz_size
#if ! __GMP_FORCE_mpz_size
argv_376
#endif
size_t
argv_2664 (argv_2668 __gmp_z) argv_388
{
  return argv_367 (__gmp_z->argv_544);
}
#endif


/**************** mpq inlines ****************/

#if defined (argv_376) && ! __GMP_FORCE_mpq_abs
argv_376 void
argv_2490 (argv_2513 __gmp_w, argv_2523 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpq_set (__gmp_w, __gmp_u);
  __gmp_w->argv_541.argv_544 = argv_367 (__gmp_w->argv_541.argv_544);
}
#endif

#if defined (argv_376) && ! __GMP_FORCE_mpq_neg
argv_376 void
argv_2510 (argv_2513 __gmp_w, argv_2523 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpq_set (__gmp_w, __gmp_u);
  __gmp_w->argv_541.argv_544 = - __gmp_w->argv_541.argv_544;
}
#endif


/**************** mpn inlines ****************/

/* The comments with argv_398 below apply here too.

   The test for FUNCTION returning 0 should predict well.  If it's assumed
   {yp,ysize} will usually have a random number of argv_709 then the high limb
   won't be full and a carry out will occur a good deal less than 50% of the
   argv_3678.

   ysize==0 isn't a documented feature, but is used internally in a few
   places.

   Producing cout last stops it using up a register during the main part of
   the calculation, though gcc (as of 3.0) on an "if (argv_2452 (...))"
   doesn't seem able to move the true and false legs of the conditional up
   to the two places cout is generated.  */

#define argv_400(cout, wp, xp, xsize, yp, ysize, FUNCTION, TEST)     \
  do {                                                                  \
    argv_2382  __gmp_i;                                                 \
    argv_2378  __gmp_x;                                                 \
                                                                        \
    /* ASSERT ((ysize) >= 0); */                                        \
    /* ASSERT ((xsize) >= (ysize)); */                                  \
    /* ASSERT (MPN_SAME_OR_SEPARATE2_P (wp, xsize, xp, xsize)); */      \
    /* ASSERT (MPN_SAME_OR_SEPARATE2_P (wp, xsize, yp, ysize)); */      \
                                                                        \
    __gmp_i = (ysize);                                                  \
    if (__gmp_i != 0)                                                   \
      {                                                                 \
        if (FUNCTION (wp, xp, yp, __gmp_i))                             \
          {                                                             \
            do                                                          \
              {                                                         \
                if (__gmp_i >= (xsize))                                 \
                  {                                                     \
                    (cout) = 1;                                         \
                    goto __gmp_done;                                    \
                  }                                                     \
                __gmp_x = (xp)[__gmp_i];                                \
              }                                                         \
            while (TEST);                                               \
          }                                                             \
      }                                                                 \
    if ((wp) != (xp))                                                   \
      argv_405 (wp, xp, xsize, __gmp_i);                        \
    (cout) = 0;                                                         \
  __gmp_done:                                                           \
    ;                                                                   \
  } while (0)

#define argv_397(cout, wp, xp, xsize, yp, ysize)              \
  argv_400 (cout, wp, xp, xsize, yp, ysize, argv_2454,       \
               (((wp)[__gmp_i++] = (__gmp_x + 1) & argv_1752) == 0))
#define argv_406(cout, wp, xp, xsize, yp, ysize)              \
  argv_400 (cout, wp, xp, xsize, yp, ysize, argv_2487,       \
               (((wp)[__gmp_i++] = (__gmp_x - 1) & argv_1752), __gmp_x == 0))


/* The use of __gmp_i indexing is designed to ensure a compile argv_3678 src==dst
   remains nice and clear to the compiler, so that argv_405 can
   disappear, and the argv_2094/argv_576/store gets a chance to become a
   read-modify-write on CISC CPUs.

   Alternatives:

   Using a pair of pointers instead of indexing would be possible, but gcc
   isn't able to recognise compile-argv_3678 src==dst in that case, even when the
   pointers are incremented more or less together.  Other compilers would
   very likely have similar difficulty.

   gcc could use "if (__builtin_constant_p(src==dst) && src==dst)" or
   similar to detect a compile-argv_3678 src==dst.  This works nicely on gcc
   2.95.x, it's not good on gcc 3.0 where __builtin_constant_p(p==p) seems
   to be always false, for a pointer p.  But the argv_1043 argv_877 form seems
   good enough for src==dst anyway.

   gcc on x86 as usual doesn't give particularly good argv_1371 handling for the
   carry/borrow detection.  It's tempting to want some multi instruction asm
   blocks to help it, and this was tried, but in truth there's only a few
   instructions to save and any gain is all too easily lost by register
   juggling setting up for the asm.  */

#if argv_1749 == 0
#define argv_401(cout, dst, src, n, v, OP, CB)		\
  do {								\
    argv_2382  __gmp_i;						\
    argv_2378  __gmp_x, __gmp_r;                                \
								\
    /* ASSERT ((n) >= 1); */					\
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, n)); */	\
								\
    __gmp_x = (src)[0];						\
    __gmp_r = __gmp_x OP (v);                                   \
    (dst)[0] = __gmp_r;						\
    if (CB (__gmp_r, __gmp_x, (v)))                             \
      {								\
	(cout) = 1;						\
	for (__gmp_i = 1; __gmp_i < (n);)                       \
	  {							\
	    __gmp_x = (src)[__gmp_i];                           \
	    __gmp_r = __gmp_x OP 1;                             \
	    (dst)[__gmp_i] = __gmp_r;                           \
	    ++__gmp_i;						\
	    if (!CB (__gmp_r, __gmp_x, 1))                      \
	      {							\
		if ((src) != (dst))				\
		  argv_405 (dst, src, n, __gmp_i);      \
		(cout) = 0;					\
		break;						\
	      }							\
	  }							\
      }								\
    else							\
      {								\
	if ((src) != (dst))					\
	  argv_405 (dst, src, n, 1);			\
	(cout) = 0;						\
      }								\
  } while (0)
#endif

#if argv_1749 >= 1
#define argv_401(cout, dst, src, n, v, OP, CB)		\
  do {								\
    argv_2382  __gmp_i;						\
    argv_2378  __gmp_x, __gmp_r;				\
								\
    /* ASSERT ((n) >= 1); */					\
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, n)); */	\
								\
    __gmp_x = (src)[0];						\
    __gmp_r = __gmp_x OP (v);					\
    (dst)[0] = __gmp_r & argv_1752;				\
    if (__gmp_r >> argv_1751 != 0)				\
      {								\
	(cout) = 1;						\
	for (__gmp_i = 1; __gmp_i < (n);)			\
	  {							\
	    __gmp_x = (src)[__gmp_i];				\
	    __gmp_r = __gmp_x OP 1;				\
	    (dst)[__gmp_i] = __gmp_r & argv_1752;		\
	    ++__gmp_i;						\
	    if (__gmp_r >> argv_1751 == 0)			\
	      {							\
		if ((src) != (dst))				\
		  argv_405 (dst, src, n, __gmp_i);	\
		(cout) = 0;					\
		break;						\
	      }							\
	  }							\
      }								\
    else							\
      {								\
	if ((src) != (dst))					\
	  argv_405 (dst, src, n, 1);			\
	(cout) = 0;						\
      }								\
  } while (0)
#endif

#define argv_399(r,x,y) ((r) < (y))
#define argv_408(r,x,y) ((x) < (y))

#define argv_398(cout, dst, src, n, v)	     \
  argv_401(cout, dst, src, n, v, +, argv_399)
#define argv_407(cout, dst, src, n, v)	     \
  argv_401(cout, dst, src, n, v, -, argv_408)


/* Compare {xp,size} and {yp,size}, setting "argv_3266" to positive, zero or
   negative.  size==0 is allowed.  On random argv_1073 usually only argv_2806 limb will
   need to be examined to get a argv_3266, so it's worth having it inline.  */
#define argv_402(argv_3266, xp, yp, size)                                \
  do {                                                                  \
    argv_2382  __gmp_i;                                                 \
    argv_2378  __gmp_x, __gmp_y;                                        \
                                                                        \
    /* ASSERT ((size) >= 0); */                                         \
                                                                        \
    (argv_3266) = 0;                                                       \
    __gmp_i = (size);                                                   \
    while (--__gmp_i >= 0)                                              \
      {                                                                 \
        __gmp_x = (xp)[__gmp_i];                                        \
        __gmp_y = (yp)[__gmp_i];                                        \
        if (__gmp_x != __gmp_y)                                         \
          {                                                             \
            /* Cannot use __gmp_x - __gmp_y, may overflow an "int" */   \
            (argv_3266) = (__gmp_x > __gmp_y ? 1 : -1);                    \
            break;                                                      \
          }                                                             \
      }                                                                 \
  } while (0)


/* For power and powerpc we want an inline ldu/stu/bdnz loop for copying.
   On ppc630 for instance this is optimal since it can sustain only 1 store
   per cycle.

   gcc 2.95.x (powerpc64 -maix64, or powerpc32) doesn't recognise the "for"
   loop in the generic argv_877 below can become ldu/stu/bdnz.  The do/while
   here helps it get to that.

   In gcc -mpowerpc64 mode, without -maix64, __size seems to want to be an
   argv_2378 to get into the ctr register, and even then the loop is a
   curious ldu/stu/bdz/b.  But let's not worry about that unless there's a
   system using this.  An asm argv_710 could force what we want if necessary.

   xlc 3.1 already generates ldu/stu/bdnz from the generic C, and does so
   from this loop too.  */

#if argv_380 || argv_381
#define argv_404(dst, src, size)                        \
  do {                                                          \
    /* ASSERT ((size) >= 0); */                                 \
    /* ASSERT (MPN_SAME_OR_INCR_P (dst, src, size)); */         \
    if ((size) != 0)                                            \
      {                                                         \
        argv_2379     __gmp_copy_incr_dst = (dst) - 1;             \
        argv_2383  __gmp_copy_incr_src = (src) - 1;             \
        argv_2382  __gmp_copy_incr_size = (size);               \
        do                                                      \
          *++__gmp_copy_incr_dst = *++__gmp_copy_incr_src;      \
        while (--__gmp_copy_incr_size != 0);                    \
      }                                                         \
  } while (0)
#define argv_403(dst, src, size)                             \
  do {                                                          \
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, size)); */     \
    argv_404 (dst, src, size);                          \
  } while (0)
#endif

#if defined (argv_403) && ! defined (argv_405)
#define argv_405(dst, src, size, argv_3457)                 \
  do {                                                          \
    /* ASSERT ((argv_3457) >= 0); */                                \
    /* ASSERT ((argv_3457) <= (size)); */                           \
    argv_403 ((dst)+(argv_3457), (src)+(argv_3457), (size)-(argv_3457)); \
  } while (0)
#endif

/* Copy {src,size} to {dst,size}, starting at "argv_3457".  This is designed to
   keep the indexing dst[j] and src[j] nice and simple for argv_398,
   argv_397, etc.  */
#if ! defined (argv_405)
#define argv_405(dst, src, size, argv_3457)                 \
  do {                                                          \
    argv_2382 __gmp_j;                                          \
    /* ASSERT ((size) >= 0); */                                 \
    /* ASSERT ((argv_3457) >= 0); */                                \
    /* ASSERT ((argv_3457) <= (size)); */                           \
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, size)); */     \
    for (__gmp_j = (argv_3457); __gmp_j < (size); __gmp_j++)        \
      (dst)[__gmp_j] = (src)[__gmp_j];                          \
  } while (0)
#endif

/* Enhancement: Use some of the smarter argv_877 from gmp-impl.h.  Maybe use
   mpn_copyi if there's a native version, and if we don't mind demanding
   binary compatibility for it (on targets which use it).  */

#if ! defined (argv_403)
#define argv_403(dst, src, size)   argv_405 (dst, src, size, 0)
#endif


#if defined (argv_376) || __GMP_FORCE_mpn_add
#if ! __GMP_FORCE_mpn_add
argv_376
#endif
argv_2378
argv_2452 (argv_2379 __gmp_wp, argv_2383 __gmp_xp, argv_2382 __gmp_xsize, argv_2383 __gmp_yp, argv_2382 __gmp_ysize)
{
  argv_2378  __gmp_c;
  argv_397 (__gmp_c, __gmp_wp, __gmp_xp, __gmp_xsize, __gmp_yp, __gmp_ysize);
  return __gmp_c;
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpn_add_1
#if ! __GMP_FORCE_mpn_add_1
argv_376
#endif
argv_2378
argv_2453 (argv_2379 __gmp_dst, argv_2383 __gmp_src, argv_2382 __gmp_size, argv_2378 __gmp_n) argv_388
{
  argv_2378  __gmp_c;
  argv_398 (__gmp_c, __gmp_dst, __gmp_src, __gmp_size, __gmp_n);
  return __gmp_c;
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpn_cmp
#if ! __GMP_FORCE_mpn_cmp
argv_376
#endif
int
argv_2457 (argv_2383 __gmp_xp, argv_2383 __gmp_yp, argv_2382 __gmp_size) argv_388
{
  int __gmp_result;
  argv_402 (__gmp_result, __gmp_xp, __gmp_yp, __gmp_size);
  return __gmp_result;
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpn_sub
#if ! __GMP_FORCE_mpn_sub
argv_376
#endif
argv_2378
argv_2485 (argv_2379 __gmp_wp, argv_2383 __gmp_xp, argv_2382 __gmp_xsize, argv_2383 __gmp_yp, argv_2382 __gmp_ysize)
{
  argv_2378  __gmp_c;
  argv_406 (__gmp_c, __gmp_wp, __gmp_xp, __gmp_xsize, __gmp_yp, __gmp_ysize);
  return __gmp_c;
}
#endif

#if defined (argv_376) || __GMP_FORCE_mpn_sub_1
#if ! __GMP_FORCE_mpn_sub_1
argv_376
#endif
argv_2378
argv_2486 (argv_2379 __gmp_dst, argv_2383 __gmp_src, argv_2382 __gmp_size, argv_2378 __gmp_n) argv_388
{
  argv_2378  __gmp_c;
  argv_407 (__gmp_c, __gmp_dst, __gmp_src, __gmp_size, __gmp_n);
  return __gmp_c;
}
#endif

#if defined (__cplusplus)
}
#endif


/* Allow faster testing for negative, zero, and positive.  */
#define argv_2662(Z) ((Z)->argv_544 < 0 ? -1 : (Z)->argv_544 > 0)
#define argv_2439(F) ((F)->argv_544 < 0 ? -1 : (F)->argv_544 > 0)
#define argv_2522(Q) ((Q)->argv_541.argv_544 < 0 ? -1 : (Q)->argv_541.argv_544 > 0)

/* When using GCC, optimize certain common comparisons.  */
#if defined (__GNUC__)
#define argv_2550(Z,UI) \
  (__builtin_constant_p (UI) && (UI) == 0				\
   ? argv_2662 (Z) : argv_548 (Z,UI))
#define argv_2549(Z,SI) \
  (__builtin_constant_p (SI) && (SI) == 0 ? argv_2662 (Z)			\
   : __builtin_constant_p (SI) && (SI) > 0				\
    ? argv_548 (Z, (unsigned long int) SI)				\
   : argv_547 (Z,SI))
#define argv_2496(Q,NUI,DUI) \
  (__builtin_constant_p (NUI) && (NUI) == 0				\
   ? argv_2522 (Q) : argv_546 (Q,NUI,DUI))
#define argv_2495(q,n,d)                       \
  (__builtin_constant_p ((n) >= 0) && (n) >= 0  \
   ? argv_2496 (q, (unsigned long) (n), d)     \
   : argv_545 (q, n, d))
#else
#define argv_2550(Z,UI) argv_548 (Z,UI)
#define argv_2549(Z,UI) argv_547 (Z,UI)
#define argv_2496(Q,NUI,DUI) argv_546 (Q,NUI,DUI)
#define argv_2495(q,n,d)  argv_545(q,n,d)
#endif


/* Using "&" rather than "&&" means these can come out branch-free.  Every
   argv_2674 has at least argv_2806 limb allocated, so fetching the low limb is always
   allowed.  */
#define argv_2636(z)   ((int) ((z)->argv_544 != 0) & (int) (z)->argv_535[0])
#define argv_2570(z)  (! argv_2636 (z))


/**************** C++ routines ****************/

#ifdef __cplusplus
argv_375 std::ostream& operator<< (std::ostream &, argv_2668);
argv_375 std::ostream& operator<< (std::ostream &, argv_2523);
argv_375 std::ostream& operator<< (std::ostream &, argv_2443);
argv_375 std::istream& operator>> (std::istream &, argv_2645);
argv_375 std::istream& operator>> (std::istream &, argv_2513);
argv_375 std::istream& operator>> (std::istream &, argv_2427);
#endif


/* Compatibility with GMP 2 and earlier. */
#define argv_2460(qp,np,nsize,dp,dsize) \
  argv_2462 (qp, (argv_2382) 0, np, nsize, dp, dsize)

/* Compatibility with GMP 1.  */
#define argv_2620	argv_2573
#define argv_2622	argv_2576
#define argv_2625	argv_2578
#define argv_2621	argv_2575
#define argv_2623(q,r,n,d) \
  ((r == 0) ? argv_2575 (q,n,d) : argv_2577 (q,r,n,d))
#define argv_2626(r,n,d) \
  ((r == 0) ? argv_2581 (n,d) : argv_2580 (r,n,d))

/* Useful synonyms, but not quite compatible with GMP 1.  */
#define argv_2558		argv_2573
#define argv_2566	argv_2576
#define argv_2560	argv_2575
#define argv_2567	argv_2577
#define argv_2629	argv_2580
#define argv_2559	argv_2574
#define argv_2628	argv_2579

enum
{
  argv_1699 = 0,
  argv_1701 = 1,
  argv_1697 = 2,
  argv_1700 = 4,
  argv_1698 = 8,
  argv_1695 = 16,
  argv_1696 = 32,
  argv_1702
};

/* Major version number is the argv_3807 of argv_410 too, above and in mp.h. */
#define argv_411 4
#define argv_412 1
#define argv_413 0

#define argv_378
#endif /* argv_378 */
