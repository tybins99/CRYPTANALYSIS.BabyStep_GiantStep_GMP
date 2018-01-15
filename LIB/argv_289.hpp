// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_289.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the functions that permit
// @@ to communicate with the service update.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_348
#define argv_348



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_321.hpp"
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_328.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



#if defined (__WIN32_OS__)
	#ifdef SYSTEM_DLL_EXPORTS
		#define argv_3581 __declspec(dllexport)
	#else
		#define argv_3581 __declspec(dllimport)
	#endif
#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C version of the stateful com client 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_551 {
	argv_876	*	argv_2251;
	argv_1000			*	argv_2884;	
	argv_3379				argv_2033;
} argv_3320;



#endif // argv_348



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ com client functions (exported by the DLL)
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C" {
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_904 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_905 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_903 (argv_773, argv_3717, argv_3379, argv_3379&, argv_1004);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ com client internal functions (not exported by the DLL)
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C" {
	argv_3379 internal_com_admin_client_send_request	(argv_3320 *, argv_3715);
	argv_3379 internal_com_admin_client_read_answer	(argv_3320 *, argv_3379, argv_3715, argv_3715&);
	argv_3379 internal_com_admin_client_create		(argv_2157 *, bool&);
	bool internal_com_admin_client_destruct		(argv_2157);
	bool internal_com_admin_client_connect		(argv_2157, argv_773, argv_3717);
	bool internal_com_admin_client_disconnect	(argv_2157);
	bool internal_com_admin_client_update		(argv_2157, argv_3379);
	argv_3379 internal_com_admin_get_last_error		(argv_2157, argv_1004);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
