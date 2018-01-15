// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_311.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all necessary argv_1073 
// @@ structures and functions for the library
// @@ loader to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_424
#define argv_424



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <map>
#include <string>
#if defined (__LINUX_OS__)
	#include <dlfcn.h>
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_301.hpp"
#include "../LIB/argv_296.hpp"
#include "../LIB/argv_316.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_842
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to argv_2094/unload shared libraries (DLL)
// @@ and to lookup safely symbols from these DLL.
// @@ Furthermore this argv_2785 is an abstract layer as it works
// @@ under win32 as well as under Linux.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_842
{
private:
	argv_3717							argv_1051;
	map<string, argv_3717>				argv_2195;
	map<string, argv_3717>::iterator		argv_1918;
	argv_3379							argv_2033;
	string							argv_2035;

	bool argv_2053   (argv_773);
	bool argv_2067 (argv_773);

#if defined (__WIN32_OS__)
	map<argv_3717, HMODULE>				argv_2197;
	map<argv_3717, HMODULE>::iterator	argv_1921;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	map<argv_3717, argv_2157>				argv_2197;
	map<argv_3717, argv_2157>::iterator		argv_1921;
#endif // #if defined (__LINUX_OS__)

public:
	argv_842 ();
	argv_3379 reset (); 
	argv_3379 argv_2104     (argv_773, argv_3717&);
	argv_3379 argv_3768   (argv_3717);
	argv_3379 argv_1674 (argv_3717, argv_773, argv_2157 *);
	void argv_1658 (argv_3379&, string&);
};



#endif // argv_424



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
