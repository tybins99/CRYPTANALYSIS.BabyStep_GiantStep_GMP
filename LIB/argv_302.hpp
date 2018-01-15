// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_302.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structure and 
// @@ function that are necessary for the plugins
// @@ to work.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_365
#define argv_365



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_296.hpp"
#include "../LIB_AVX/general_avx.hpp"
#if defined (__WIN32_OS__)
	#include <windows.h>
#endif // __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define MAX_PATH_PLUGIN 256



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ STRUCTURE NAME: argv_3428
// @@
// @@ DESCRIPTION:
// @@ This argv_1073 structure is used to store :
// @@ - the argv_1314 mapper used to mmap the argv_1314 to scan
// @@ - the virus signature database argv_728
// @@ - the virus signature database argv_728's size.
// @@ - the argv_2697 of the virus signature argv_1314.
// @@ 
// @@ the signature argv_1314 does not need to be parsed because the avx 
// @@ has a kind of precompiled signature argv_1314 format that permits to
// @@ use the sign argv_1314 without parsing it.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_559 {
	char	*		argv_1080;
	argv_2157			argv_1318;	// used to mmap the signature argv_1314 (if necessary)
	argv_3715	*		argv_1079;		// mmapped DB argv_1314's first byte's argv_595
	argv_3717			argv_1081;		// mmapped DB argv_1314's size
} argv_3428;




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ all possible argv_1314 types 
// @@ Notice that a given argv_1314 might have several types.
// @@ BEWARE: there might be more argv_1314 argv_3695 detection plugins that scan 
// @@         plugins, thus there is not a 1 to 1 relationship between them
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3098 {
	argv_1357 = 0,
	argv_1353, 
	argv_1340,
	argv_1359,
	argv_1342,
	argv_1352,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ general functions used by plugins
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1337 (argv_3717, char *);
void argv_2194 (char *, char *, argv_3717);
typedef void (* argv_1425) (argv_3717, char *);



#endif // argv_365



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
