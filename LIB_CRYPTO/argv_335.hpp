// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_350
#define argv_350



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
#include "../LIB_CRYPTO/argv_341.hpp"
#include "../LIB_CRYPTO/argv_225.h"
#include "../LIB_CRYPTO/argv_339.hpp"
#include "../LIB_CRYPTO/argv_340.hpp"
#include "../LIB_CRYPTO/argv_336.hpp"
#include "../LIB_CRYPTO/argv_337.hpp"
#include "../LIB_CRYPTO/argv_342.hpp"
#include "../LIB/argv_304.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;

#define argv_3372 655360

class Crandom_data_set
{
public:
	argv_794 *		argv_1774;

	argv_2674 argv_2370;
	argv_2674 argv_1639;
	argv_2674 argv_829;
	argv_2674 argv_708;
	argv_2674 argv_2371;
	argv_2674 argv_2806;
	argv_2674 argv_2826;

	Crandom_data_set (argv_794 *);
	~Crandom_data_set ();
};


class argv_1034
{
private:
	argv_801		argv_1795;
	FILE      *		argv_1462;
	argv_794 *		argv_1774;

	void			argv_974 (argv_2674, argv_2674);
	void			argv_695 (argv_2674, argv_2674, argv_2674, argv_2674);
	bool			argv_1687 (argv_2674, argv_2674, argv_2674, argv_2674, argv_2674);
	void			argv_1170 (const char * _varname, argv_2674 _value, bool _display_2_log=true);
	void			argv_1134 (argv_2674, argv_2674, argv_2674, argv_2674);

public:
	argv_1034 ();
	void			init (argv_794 *, FILE *);
	bool			argv_3249 (argv_2674, argv_2674, argv_2674, argv_2674);
	void			argv_826 (Crandom_data_set&, uint32_t);
	bool			argv_827 ();
};




#endif // #define argv_350



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

