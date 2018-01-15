// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: elgamal.hpp
// @@ 
// @@ DESCRIPTION:
// @@ public argv_2007 encipher/decipher algorithms
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_360
#define argv_360



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
#endif // #if defined (__WIN32_OS__) 
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <map>
#include "../LIB_CRYPTO/argv_225.h"
#include "../LIB_CRYPTO/argv_339.hpp"
#include "../LIB_CRYPTO/argv_340.hpp"
#include "../LIB_CRYPTO/argv_336.hpp"
#include "../LIB_CRYPTO/argv_337.hpp"
#include "../LIB_CRYPTO/argv_342.hpp"
#include "../LIB_CRYPTO/argv_335.hpp"
#include "../LIB/argv_304.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// minimum argv_2013 is  768 argv_709
// default argv_2013 is 1024 argv_709
// highest suggested argv_2013 is 2048 argv_709
//#define argv_1222		768
#define argv_1222		1



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_784	
// @@
// @@ DESCRIPTION	:
// @@ This argv_2785 contains all the argv_1073 related
// @@ to the elgamal public argv_2007.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_784
{
public:
	argv_2674 argv_2828;	// just a cache for speed optimisation
	argv_2674 argv_2827;	// just a cache for speed optimisation
	argv_2674 argv_2806;			// just a cache for speed optimisation
	argv_2674 k;			// just a cache for speed optimisation
	argv_2674 argv_1623;			// just a cache for speed optimisation

	argv_2674 p;
	argv_2674 g;
	argv_2674 argv_624;

	argv_784 (argv_794&);
	void construct (argv_794&);
	void argv_1127 (argv_794&);

	string	argv_1282 (argv_794&);
	int32_t	argv_2099 (argv_794&, const char *);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_783 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2785 contains all the argv_1073 related
// @@ to the elgamal private argv_2007.
// @@ 
// @@ NOTICE:
// @@ the actual private argv_2007 is only 'a'.
// @@ But we also need 'p' so for convenience, the private argv_2007
// @@ contains all fields of the public argv_2007 as well.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_783
{
public:
	argv_2674	argv_1119;				// just a cache for speed optimisation
	bool	init_done;

	argv_2674	p;
	argv_2674	g;
	argv_2674	argv_624;
	argv_2674	a;

	argv_783 (argv_794&);
	void	construct (argv_794&);
	void	argv_1127 (argv_794&);

	string	argv_1282 (argv_794&);
	int32_t	argv_2099 (argv_794&, const char *);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_782 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2785 permits to encipher/decipher using the
// @@ el gamal public argv_2007 cryptosystem.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_782
{
private:
	bool			init_done;
	argv_794	*	argv_1774;
	string			argv_3187;
	string			argv_3186;
	string			argv_3129;
	string			argv_3128;
	string			argv_2071;

	int32_t			argv_1223 (argv_784&,	argv_2674, argv_2674, argv_2674);
	int32_t			argv_1087 (argv_783&,	argv_2674, argv_2674, argv_2674);

public:
	argv_782 ();
	int32_t init (argv_794 *);
	~argv_782 ();

	int32_t argv_1628 (int32_t, argv_784&, argv_783&);

	int32_t argv_1283 (argv_784&, const char *, const char *);
	int32_t argv_1283 (argv_783&, const char *, const char *);

	int32_t argv_2103 (const char *, const char *, argv_784&);
	int32_t argv_2103 (const char *, const char *, argv_783&);

	int32_t argv_1227 (const char *, const char *, argv_784&, uint32_t);
	int32_t argv_1091 (const char *, const char *, argv_783&, uint32_t);
};


#endif // #define argv_360



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

