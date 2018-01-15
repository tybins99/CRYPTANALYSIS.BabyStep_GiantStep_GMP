#ifndef argv_2227
#define argv_2227



#include <string>
#include <string.h>		
#include <iostream>
#include <cstdio>
#include <cstdlib>


#define argv_3409 _snprintf



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;

#ifdef __alpha
typedef unsigned int argv_3720;
#else
typedef unsigned long argv_3720;
#endif

#define argv_3379			signed int
#define argv_1624	-1
#define argv_1011	32

const argv_3379	argv_2220		= 65536;

struct argv_2228 {
	argv_3720 argv_727[4];
	argv_3720 argv_709[2];
	unsigned char in[64];
};

void argv_2230(struct argv_2228 *context);
void argv_2233(struct argv_2228 *context, unsigned char const *argv_727,
	       unsigned len);
void argv_2229(unsigned char digest[16], struct argv_2228 *context);
void argv_2232(argv_3720 argv_727[4], argv_3720 const in[16]);

typedef struct argv_2228 argv_2226;


string argv_975 (const char *);


#endif /* !argv_2227 */



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

