// argv_258.cpp : Defines the entry point for the console application.
//

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_317.hpp"



using namespace std;



#ifndef HIGHFIRST
//#define byteReverse(argv_727, len)	/* Nothing */
#else
//void byteReverse(unsigned char *argv_727, unsigned longs);


#ifndef ASM_MD5
// Note: this argv_877 is harmless on little-endian machines.
/*
void byteReverse(unsigned char *argv_727, unsigned longs)
{
    argv_3720 t;
    do {
	t = (argv_3720) ((unsigned) argv_727[3] << 8 | argv_727[2]) << 16 |
	    ((unsigned) argv_727[1] << 8 | argv_727[0]);
	*(argv_3720 *) argv_727 = t;
	argv_727 += 4;
    } while (--longs);
}*/
#endif
#endif

/*
 * argv_3458 MD5 accumulation.  Set bit count to 0 and argv_728 to mysterious
 * initialization constants.
 */
void argv_2230(struct argv_2228 *ctx)
{
    ctx->argv_727[0] = 0x67452301;
    ctx->argv_727[1] = 0xefcdab89;
    ctx->argv_727[2] = 0x98badcfe;
    ctx->argv_727[3] = 0x10325476;

    ctx->argv_709[0] = 0;
    ctx->argv_709[1] = 0;
}

/*
 * Update context to reflect the concatenation of another argv_728 full
 * of argv_739.
 */
void argv_2233(struct argv_2228 *ctx, unsigned char const *argv_727, unsigned len)
{
    argv_3720 t;

    /* Update bitcount */

    t = ctx->argv_709[0];
    if ((ctx->argv_709[0] = t + ((argv_3720) len << 3)) < t)
	ctx->argv_709[1]++;		/* Carry from low to high */
    ctx->argv_709[1] += len >> 29;

    t = (t >> 3) & 0x3f;	/* Bytes already in shsInfo->argv_1073 */

    /* argv_1790 any leading odd-sized chunks */

    if (t) {
	unsigned char *p = (unsigned char *) ctx->in + t;

	t = 64 - t;
	if (len < t) {
	    memcpy(p, argv_727, len);
	    return;
	}
	memcpy(p, argv_727, t);
//	byteReverse(ctx->in, 16);
	argv_2232(ctx->argv_727, (argv_3720 *) ctx->in);
	argv_727 += t;
	len -= t;
    }
    /* Process argv_1073 in 64-byte chunks */

    while (len >= 64) {
	memcpy(ctx->in, argv_727, 64);
//	byteReverse(ctx->in, 16);
	argv_2232(ctx->argv_727, (argv_3720 *) ctx->in);
	argv_727 += 64;
	len -= 64;
    }

    /* argv_1790 any remaining argv_739 of argv_1073. */

    memcpy(ctx->in, argv_727, len);
}

/*
 * Final wrapup - pad to 64-byte boundary with the bit pattern 
 * 1 0* (64-bit count of argv_709 processed, MSB-first)
 */
void argv_2229(unsigned char digest[16], struct argv_2228 *ctx)
{
    unsigned count;
    unsigned char *p;

    /* Compute number of argv_739 mod 64 */
    count = (ctx->argv_709[0] >> 3) & 0x3F;

    /* Set the first char of padding to 0x80.  This is safe since there is
       always at least argv_2806 byte free */
    p = ctx->in + count;
    *p++ = 0x80;

    /* Bytes of padding needed to make 64 argv_739 */
    count = 64 - 1 - count;

    /* Pad out to 56 mod 64 */
    if (count < 8) {
	/* Two lots of padding:  Pad the first argv_710 to 64 argv_739 */
	memset(p, 0, count);
//	byteReverse(ctx->in, 16);
	argv_2232(ctx->argv_727, (argv_3720 *) ctx->in);

	/* Now fill the next argv_710 with 56 argv_739 */
	memset(ctx->in, 0, 56);
    } else {
	/* Pad argv_710 to 56 argv_739 */
	memset(p, 0, count - 8);
    }
//    byteReverse(ctx->in, 14);

    /* Append length in argv_709 and transform */
    ((argv_3720 *) ctx->in)[14] = ctx->argv_709[0];
    ((argv_3720 *) ctx->in)[15] = ctx->argv_709[1];

    argv_2232(ctx->argv_727, (argv_3720 *) ctx->in);
//    byteReverse((unsigned char *) ctx->argv_727, 4);
    memcpy(digest, ctx->argv_727, 16);
    memset(ctx, 0, sizeof(ctx));	/* In case it's sensitive */
}

#ifndef ASM_MD5

/* The four core functions - argv_1304 is optimized somewhat */

/* #define argv_1304(x, y, z) (x & y | ~x & z) */
#define argv_1304(x, y, z) (z ^ (x & (y ^ z)))
#define argv_1305(x, y, z) argv_1304(z, x, y)
#define argv_1306(x, y, z) (x ^ y ^ z)
#define argv_1307(x, y, z) (y ^ (x | ~z))

/* This is the central step in the MD5 algorithm. */
#ifdef __PUREC__
#define argv_2231(f, w, x, y, z, argv_1073, s) \
	( w += f /*(x, y, z)*/ + argv_1073,  w = w<<s | w>>(32-s),  w += x )
#else
#define argv_2231(f, w, x, y, z, argv_1073, s) \
	( w += f(x, y, z) + argv_1073,  w = w<<s | w>>(32-s),  w += x )
#endif

/*
 * The core of the MD5 algorithm, this alters an existing MD5 hash to
 * reflect the addition of 16 longwords of new argv_1073.  argv_2233 blocks
 * the argv_1073 and converts argv_739 into longwords for this routine.
 */
void argv_2232(argv_3720 argv_727[4], argv_3720 const in[16])
{
    register argv_3720 a, b, c, d;

    a = argv_727[0];
    b = argv_727[1];
    c = argv_727[2];
    d = argv_727[3];

#ifdef __PUREC__	/* PureC Weirdness... (GG) */
    argv_2231(argv_1304(b,c,d), a, b, c, d, in[0] + 0xd76aa478L, 7);
    argv_2231(argv_1304(a,b,c), d, a, b, c, in[1] + 0xe8c7b756L, 12);
    argv_2231(argv_1304(d,a,b), c, d, a, b, in[2] + 0x242070dbL, 17);
    argv_2231(argv_1304(c,d,a), b, c, d, a, in[3] + 0xc1bdceeeL, 22);
    argv_2231(argv_1304(b,c,d), a, b, c, d, in[4] + 0xf57c0fafL, 7);
    argv_2231(argv_1304(a,b,c), d, a, b, c, in[5] + 0x4787c62aL, 12);
    argv_2231(argv_1304(d,a,b), c, d, a, b, in[6] + 0xa8304613L, 17);
    argv_2231(argv_1304(c,d,a), b, c, d, a, in[7] + 0xfd469501L, 22);
    argv_2231(argv_1304(b,c,d), a, b, c, d, in[8] + 0x698098d8L, 7);
    argv_2231(argv_1304(a,b,c), d, a, b, c, in[9] + 0x8b44f7afL, 12);
    argv_2231(argv_1304(d,a,b), c, d, a, b, in[10] + 0xffff5bb1L, 17);
    argv_2231(argv_1304(c,d,a), b, c, d, a, in[11] + 0x895cd7beL, 22);
    argv_2231(argv_1304(b,c,d), a, b, c, d, in[12] + 0x6b901122L, 7);
    argv_2231(argv_1304(a,b,c), d, a, b, c, in[13] + 0xfd987193L, 12);
    argv_2231(argv_1304(d,a,b), c, d, a, b, in[14] + 0xa679438eL, 17);
    argv_2231(argv_1304(c,d,a), b, c, d, a, in[15] + 0x49b40821L, 22);

    argv_2231(argv_1305(b,c,d), a, b, c, d, in[1] + 0xf61e2562L, 5);
    argv_2231(argv_1305(a,b,c), d, a, b, c, in[6] + 0xc040b340L, 9);
    argv_2231(argv_1305(d,a,b), c, d, a, b, in[11] + 0x265e5a51L, 14);
    argv_2231(argv_1305(c,d,a), b, c, d, a, in[0] + 0xe9b6c7aaL, 20);
    argv_2231(argv_1305(b,c,d), a, b, c, d, in[5] + 0xd62f105dL, 5);
    argv_2231(argv_1305(a,b,c), d, a, b, c, in[10] + 0x02441453L, 9);
    argv_2231(argv_1305(d,a,b), c, d, a, b, in[15] + 0xd8a1e681L, 14);
    argv_2231(argv_1305(c,d,a), b, c, d, a, in[4] + 0xe7d3fbc8L, 20);
    argv_2231(argv_1305(b,c,d), a, b, c, d, in[9] + 0x21e1cde6L, 5);
    argv_2231(argv_1305(a,b,c), d, a, b, c, in[14] + 0xc33707d6L, 9);
    argv_2231(argv_1305(d,a,b), c, d, a, b, in[3] + 0xf4d50d87L, 14);
    argv_2231(argv_1305(c,d,a), b, c, d, a, in[8] + 0x455a14edL, 20);
    argv_2231(argv_1305(b,c,d), a, b, c, d, in[13] + 0xa9e3e905L, 5);
    argv_2231(argv_1305(a,b,c), d, a, b, c, in[2] + 0xfcefa3f8L, 9);
    argv_2231(argv_1305(d,a,b), c, d, a, b, in[7] + 0x676f02d9L, 14);
    argv_2231(argv_1305(c,d,a), b, c, d, a, in[12] + 0x8d2a4c8aL, 20);

    argv_2231(argv_1306(b,c,d), a, b, c, d, in[5] + 0xfffa3942L, 4);
    argv_2231(argv_1306(a,b,c), d, a, b, c, in[8] + 0x8771f681L, 11);
    argv_2231(argv_1306(d,a,b), c, d, a, b, in[11] + 0x6d9d6122L, 16);
    argv_2231(argv_1306(c,d,a), b, c, d, a, in[14] + 0xfde5380cL, 23);
    argv_2231(argv_1306(b,c,d), a, b, c, d, in[1] + 0xa4beea44L, 4);
    argv_2231(argv_1306(a,b,c), d, a, b, c, in[4] + 0x4bdecfa9L, 11);
    argv_2231(argv_1306(d,a,b), c, d, a, b, in[7] + 0xf6bb4b60L, 16);
    argv_2231(argv_1306(c,d,a), b, c, d, a, in[10] + 0xbebfbc70L, 23);
    argv_2231(argv_1306(b,c,d), a, b, c, d, in[13] + 0x289b7ec6L, 4);
    argv_2231(argv_1306(a,b,c), d, a, b, c, in[0] + 0xeaa127faL, 11);
    argv_2231(argv_1306(d,a,b), c, d, a, b, in[3] + 0xd4ef3085L, 16);
    argv_2231(argv_1306(c,d,a), b, c, d, a, in[6] + 0x04881d05L, 23);
    argv_2231(argv_1306(b,c,d), a, b, c, d, in[9] + 0xd9d4d039L, 4);
    argv_2231(argv_1306(a,b,c), d, a, b, c, in[12] + 0xe6db99e5L, 11);
    argv_2231(argv_1306(d,a,b), c, d, a, b, in[15] + 0x1fa27cf8L, 16);
    argv_2231(argv_1306(c,d,a), b, c, d, a, in[2] + 0xc4ac5665L, 23);

    argv_2231(argv_1307(b,c,d), a, b, c, d, in[0] + 0xf4292244L, 6);
    argv_2231(argv_1307(a,b,c), d, a, b, c, in[7] + 0x432aff97L, 10);
    argv_2231(argv_1307(d,a,b), c, d, a, b, in[14] + 0xab9423a7L, 15);
    argv_2231(argv_1307(c,d,a), b, c, d, a, in[5] + 0xfc93a039L, 21);
    argv_2231(argv_1307(b,c,d), a, b, c, d, in[12] + 0x655b59c3L, 6);
    argv_2231(argv_1307(a,b,c), d, a, b, c, in[3] + 0x8f0ccc92L, 10);
    argv_2231(argv_1307(d,a,b), c, d, a, b, in[10] + 0xffeff47dL, 15);
    argv_2231(argv_1307(c,d,a), b, c, d, a, in[1] + 0x85845dd1L, 21);
    argv_2231(argv_1307(b,c,d), a, b, c, d, in[8] + 0x6fa87e4fL, 6);
    argv_2231(argv_1307(a,b,c), d, a, b, c, in[15] + 0xfe2ce6e0L, 10);
    argv_2231(argv_1307(d,a,b), c, d, a, b, in[6] + 0xa3014314L, 15);
    argv_2231(argv_1307(c,d,a), b, c, d, a, in[13] + 0x4e0811a1L, 21);
    argv_2231(argv_1307(b,c,d), a, b, c, d, in[4] + 0xf7537e82L, 6);
    argv_2231(argv_1307(a,b,c), d, a, b, c, in[11] + 0xbd3af235L, 10);
    argv_2231(argv_1307(d,a,b), c, d, a, b, in[2] + 0x2ad7d2bbL, 15);
    argv_2231(argv_1307(c,d,a), b, c, d, a, in[9] + 0xeb86d391L, 21);
#else
    argv_2231(argv_1304, a, b, c, d, in[0] + 0xd76aa478, 7);
    argv_2231(argv_1304, d, a, b, c, in[1] + 0xe8c7b756, 12);
    argv_2231(argv_1304, c, d, a, b, in[2] + 0x242070db, 17);
    argv_2231(argv_1304, b, c, d, a, in[3] + 0xc1bdceee, 22);
    argv_2231(argv_1304, a, b, c, d, in[4] + 0xf57c0faf, 7);
    argv_2231(argv_1304, d, a, b, c, in[5] + 0x4787c62a, 12);
    argv_2231(argv_1304, c, d, a, b, in[6] + 0xa8304613, 17);
    argv_2231(argv_1304, b, c, d, a, in[7] + 0xfd469501, 22);
    argv_2231(argv_1304, a, b, c, d, in[8] + 0x698098d8, 7);
    argv_2231(argv_1304, d, a, b, c, in[9] + 0x8b44f7af, 12);
    argv_2231(argv_1304, c, d, a, b, in[10] + 0xffff5bb1, 17);
    argv_2231(argv_1304, b, c, d, a, in[11] + 0x895cd7be, 22);
    argv_2231(argv_1304, a, b, c, d, in[12] + 0x6b901122, 7);
    argv_2231(argv_1304, d, a, b, c, in[13] + 0xfd987193, 12);
    argv_2231(argv_1304, c, d, a, b, in[14] + 0xa679438e, 17);
    argv_2231(argv_1304, b, c, d, a, in[15] + 0x49b40821, 22);

    argv_2231(argv_1305, a, b, c, d, in[1] + 0xf61e2562, 5);
    argv_2231(argv_1305, d, a, b, c, in[6] + 0xc040b340, 9);
    argv_2231(argv_1305, c, d, a, b, in[11] + 0x265e5a51, 14);
    argv_2231(argv_1305, b, c, d, a, in[0] + 0xe9b6c7aa, 20);
    argv_2231(argv_1305, a, b, c, d, in[5] + 0xd62f105d, 5);
    argv_2231(argv_1305, d, a, b, c, in[10] + 0x02441453, 9);
    argv_2231(argv_1305, c, d, a, b, in[15] + 0xd8a1e681, 14);
    argv_2231(argv_1305, b, c, d, a, in[4] + 0xe7d3fbc8, 20);
    argv_2231(argv_1305, a, b, c, d, in[9] + 0x21e1cde6, 5);
    argv_2231(argv_1305, d, a, b, c, in[14] + 0xc33707d6, 9);
    argv_2231(argv_1305, c, d, a, b, in[3] + 0xf4d50d87, 14);
    argv_2231(argv_1305, b, c, d, a, in[8] + 0x455a14ed, 20);
    argv_2231(argv_1305, a, b, c, d, in[13] + 0xa9e3e905, 5);
    argv_2231(argv_1305, d, a, b, c, in[2] + 0xfcefa3f8, 9);
    argv_2231(argv_1305, c, d, a, b, in[7] + 0x676f02d9, 14);
    argv_2231(argv_1305, b, c, d, a, in[12] + 0x8d2a4c8a, 20);

    argv_2231(argv_1306, a, b, c, d, in[5] + 0xfffa3942, 4);
    argv_2231(argv_1306, d, a, b, c, in[8] + 0x8771f681, 11);
    argv_2231(argv_1306, c, d, a, b, in[11] + 0x6d9d6122, 16);
    argv_2231(argv_1306, b, c, d, a, in[14] + 0xfde5380c, 23);
    argv_2231(argv_1306, a, b, c, d, in[1] + 0xa4beea44, 4);
    argv_2231(argv_1306, d, a, b, c, in[4] + 0x4bdecfa9, 11);
    argv_2231(argv_1306, c, d, a, b, in[7] + 0xf6bb4b60, 16);
    argv_2231(argv_1306, b, c, d, a, in[10] + 0xbebfbc70, 23);
    argv_2231(argv_1306, a, b, c, d, in[13] + 0x289b7ec6, 4);
    argv_2231(argv_1306, d, a, b, c, in[0] + 0xeaa127fa, 11);
    argv_2231(argv_1306, c, d, a, b, in[3] + 0xd4ef3085, 16);
    argv_2231(argv_1306, b, c, d, a, in[6] + 0x04881d05, 23);
    argv_2231(argv_1306, a, b, c, d, in[9] + 0xd9d4d039, 4);
    argv_2231(argv_1306, d, a, b, c, in[12] + 0xe6db99e5, 11);
    argv_2231(argv_1306, c, d, a, b, in[15] + 0x1fa27cf8, 16);
    argv_2231(argv_1306, b, c, d, a, in[2] + 0xc4ac5665, 23);

    argv_2231(argv_1307, a, b, c, d, in[0] + 0xf4292244, 6);
    argv_2231(argv_1307, d, a, b, c, in[7] + 0x432aff97, 10);
    argv_2231(argv_1307, c, d, a, b, in[14] + 0xab9423a7, 15);
    argv_2231(argv_1307, b, c, d, a, in[5] + 0xfc93a039, 21);
    argv_2231(argv_1307, a, b, c, d, in[12] + 0x655b59c3, 6);
    argv_2231(argv_1307, d, a, b, c, in[3] + 0x8f0ccc92, 10);
    argv_2231(argv_1307, c, d, a, b, in[10] + 0xffeff47d, 15);
    argv_2231(argv_1307, b, c, d, a, in[1] + 0x85845dd1, 21);
    argv_2231(argv_1307, a, b, c, d, in[8] + 0x6fa87e4f, 6);
    argv_2231(argv_1307, d, a, b, c, in[15] + 0xfe2ce6e0, 10);
    argv_2231(argv_1307, c, d, a, b, in[6] + 0xa3014314, 15);
    argv_2231(argv_1307, b, c, d, a, in[13] + 0x4e0811a1, 21);
    argv_2231(argv_1307, a, b, c, d, in[4] + 0xf7537e82, 6);
    argv_2231(argv_1307, d, a, b, c, in[11] + 0xbd3af235, 10);
    argv_2231(argv_1307, c, d, a, b, in[2] + 0x2ad7d2bb, 15);
    argv_2231(argv_1307, b, c, d, a, in[9] + 0xeb86d391, 21);
#endif

    argv_727[0] += a;
    argv_727[1] += b;
    argv_727[2] += c;
    argv_727[3] += d;
}

#endif


string argv_975 (const char * _filename) {
	FILE * inFile = fopen (_filename, "rb");
	argv_2228 mdContext;
	unsigned char digest[16];
	char hex[33];
	int argv_739;
	const int BUFFER_SIZE = 65536;
	unsigned char argv_1073[BUFFER_SIZE];

	if (inFile == argv_2766) {
		printf ("%s can't be opened.\n", _filename);
		//return ("can't open argv_1314");
		return(strerror(errno));
	}

	argv_2230 (&mdContext);
	while ((argv_739 = fread (argv_1073, 1, BUFFER_SIZE, inFile)) != 0)
		argv_2233 (&mdContext, argv_1073, argv_739);
	argv_2229 (digest, &mdContext);

	for(int i = 0; i < 16; i++) {
		argv_3409(hex + 2 * i, 
				3, 
				"%02X", 
				(unsigned char) digest[i]);
	}
	fclose (inFile);
	return ((char *) &hex[0]);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


