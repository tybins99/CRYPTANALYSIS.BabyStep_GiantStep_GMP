// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_3582.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the declarations of
// @@ the complex functions that are built
// @@ upon the system independant functions
// @@ provided by the system tool argv_2785.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_428
#define argv_428



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
	#pragma warning(disable: 4503)
	#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <map>

#include "../LIB/argv_301.hpp"
#include "../LIB/argv_314.hpp"
#include <string>


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool			argv_1316			(argv_792 *, argv_3449 *, argv_773);
	unsigned long	argv_973	(argv_792 *, argv_3449 *, argv_773);
	argv_3715 *			argv_2102			(argv_792 *, argv_3449 *, argv_773);
	argv_3379			argv_996			(argv_792 *, argv_3449 *, argv_773, argv_773);
}



#endif // argv_428



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
