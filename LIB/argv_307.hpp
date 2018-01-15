// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_307.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the definition of the 
// @@ general kernel argv_2785 that permits to create
// @@ platform independant systems. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_417
#define argv_417



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
#pragma warning(disable: 4786)
#pragma warning(disable: 4503)
#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ include files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
#if defined (__WIN32_OS__) 
	#include <Windows.h>
#endif // #if defined (__WIN32_OS__) 

#include "../LIB/argv_312.hpp"
#include "../LIB/argv_313.hpp"
#include "../LIB/argv_314.hpp"
//#include "../LIB/argv_322.hpp"
#include "../LIB/argv_334.hpp"
//#include "../LIB/argv_308.hpp"
#include "../LIB/argv_324.hpp"
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_327.hpp"
//#include "../LIB/argv_323.hpp"
#include "../LIB/argv_316.hpp"
#include "../LIB/argv_310.hpp"
#include "../LIB_CRYPTO/argv_339.hpp"
#include "../LIB_CRYPTO/argv_340.hpp"


#if defined (argv_2805)
        #include <strstream.h>
#else
        #include <sstream>
#endif



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#ifdef SYSTEM_DLL_EXPORTS
	#define argv_3581 __declspec(dllexport)
	#else
	#define argv_3581 __declspec(dllimport)
	#endif
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ necessary function pointers definition
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void (* argv_1436)		(argv_3717&, argv_3717&);
typedef argv_3379 (* argv_1443)		(argv_2157, argv_773, argv_3449 *);
typedef argv_3379 (* argv_1449)	(argv_2157&);



class argv_837
{
public:
	bool						argv_2713;
	bool						argv_3745;
	bool						argv_1064;
	bool						argv_720;
	bool						argv_3498;
	bool						argv_3189;
	bool						argv_1733;

	string						argv_2711;	// argv_2697 of the copy
	string						argv_963; // argv_2697 of the copy 
	string						argv_833;	// argv_2697 of the copy
	string						argv_3015;

	argv_792				argv_1688;
	argv_1036				argv_3582;
	argv_3449 *				argv_3588; // group of system independant functions
	argv_767				argv_966;
	argv_774				argv_1069;
	argv_1061				argv_3846;
//	map<argv_3717, argv_1019>	m_resolve_query;
//	map<string, argv_1019>	m_unique_resolve_query; // for unique symbols (tool,..)

	vector<string>				argv_3804;	
	vector<string>				argv_3803;

	map<string, argv_979 *>	argv_2196; 
	argv_1021				argv_3257;

	argv_794					argv_1773;
	argv_1022						argv_3275;
	argv_1026				argv_3188;

	argv_837 ();
	void reset ();
};



class argv_836
{
protected:
	argv_837			argv_1813;
	argv_3379						argv_2105 (argv_773);
	argv_3379						argv_3731 ();

	argv_3379						argv_2116 (argv_773);
	argv_3379						argv_3735 ();

	argv_3379						argv_2096 (argv_773);
	argv_3379						argv_3729 ();

	argv_3379						argv_719  (argv_773, argv_773, argv_773, argv_773, argv_2157&);
	argv_3379						argv_3725  ();

	argv_3379						argv_722 (argv_773, argv_773, argv_773, argv_773, argv_2157&);
	argv_3379						argv_3726 ();

	void						argv_1139 (argv_773, argv_3379, argv_3379);

	argv_3379						argv_2812 (argv_773, argv_773);
	argv_3379						argv_3736 ();

	argv_3379						argv_1636 (argv_773, argv_773);
	argv_3379						argv_3727 ();

	argv_3379						argv_3254 (map<string, argv_979 *>::iterator&);
	argv_3379						argv_3740 ();

	argv_3379						argv_2100 (argv_773);
	argv_3379						argv_3730 ();

	argv_3379						argv_2113 (argv_773);
	argv_3379						argv_3734 ();

	argv_3379						argv_2112 (argv_773);
	argv_3379						argv_3733 ();

	argv_3379						argv_2110 (argv_773, argv_773, argv_979 *);
	argv_3379						argv_3732 ();

	argv_3379						argv_2095 ();
	argv_3379						argv_3728 ();

	argv_3379						argv_2847 (argv_3715 *, argv_3717, argv_773);
	argv_3379						argv_3737 ();

	argv_3379						argv_3256 ();
	argv_3379						argv_3742 ();

	argv_3379						resolve_all_symbols_of_profile (map<string, argv_979 *>::iterator&, argv_1019&);
	argv_3379						resolve_one_multiple_plugin_symbols (map<string, argv_979 *>::iterator&);
	argv_3379						resolve_one_unique_plugin_symbols (map<string, argv_979 *>::iterator&);

	argv_3379						argv_3255 (map<string, argv_979 *>::iterator&, argv_773, bool);
	argv_3379						argv_3741 ();

	argv_3379						argv_3114 ();
	argv_3379						argv_3739 ();

//	virtual	argv_3379				prepare_symbols_2_resolve ();
//	virtual	argv_3379				un_prepare_symbols_2_resolve ();

	virtual argv_3379				argv_718 (argv_773, argv_773, argv_773, argv_773, argv_2157&);
	virtual argv_3379				argv_3724 ();
	
	virtual argv_3379				argv_3105 ();
	virtual argv_3379				argv_3738 ();

	void						remove_remaining_tmp_files (argv_773, argv_773, argv_773);

public:
	argv_836 ();
	void						reset ();
	virtual						~argv_836 ();
	argv_3379						argv_717 (argv_773, argv_773, argv_773, argv_773, argv_2157&);
	argv_3379						argv_3374 ();
	argv_3379						argv_1686 (argv_3717&, argv_3717&);
	argv_3379						argv_1657 (argv_3717&, argv_3717&);
	argv_3379						argv_1674 (argv_773, argv_2157&);
};



#endif // argv_417



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

