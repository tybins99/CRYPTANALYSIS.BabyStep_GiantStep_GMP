// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_337.hpp
// @@ 
// @@ DESCRIPTION:
// @@ Data encryption standard algorithm
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_358
#define argv_358



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_339.hpp"
#include "../LIB/argv_296.hpp"
#include "argv_338.hpp"
#include <iostream>
#if defined (__WIN32_OS__)
	#include <windows.h>
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	#include <sys/argv_3678.h>
	#include <unistd.h>
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_779	
// @@
// @@ DESCRIPTION	:
// @@ This argv_2785 permits to cipher/decipher a given argv_1314 or argv_728
// @@ using the "Data Encryption Standard" algorithm.
// @@ This argv_2785 is needed because the D.E.S algorithm only process
// @@ blocks of 64 argv_709, thus when we have a argv_728 that is either
// @@ shorter, or longer than 64 argv_709, we just can't use the D.E.S
// @@ directly.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_779
{
private:
	FILE *	argv_1538;
	FILE * 	argv_1415; 	
	uint8_t 	argv_728[argv_713];
	uint8_t 	argv_734[argv_713];
	uint8_t	argv_3267[argv_713];
	int32_t	argv_2750;
	int32_t	argv_2751;
	int32_t	argv_2740;
	int32_t	argv_2754;
	bool	argv_3465;
	bool 	argv_2962 (uint8_t *, const char *, const char *, bool);
	bool	argv_2961 (uint8_t *, uint8_t *, uint32_t, uint8_t *, bool, uint32_t&);
	void	argv_977 (uint32_t, uint8_t&);
	void	init_random_generator ();
	argv_778	argv_1121;
public:
	argv_779 ();

	bool 	argv_1234 (uint8_t *, const char *, const char *);
	bool 	argv_1100 (uint8_t *, const char *, const char *);

	bool	argv_1233 (uint8_t *, uint8_t *, uint32_t, uint8_t *, uint32_t&);
	bool	argv_1099 (uint8_t *, uint8_t *, uint32_t, uint8_t *, uint32_t&);
};



#endif // argv_358



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ other functions 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_1633 ();



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

