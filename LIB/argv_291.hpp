// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_291.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the functions that permit
// @@ to communicate with the service scanner either
// @@ from remote, or from a local client 
// @@ independantly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_353
#define argv_353



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_321.hpp"
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_328.hpp"
#include "../LIB_AVX/general_avx.hpp"



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
/*
typedef struct argv_552 {
	argv_876	*	argv_2251;
	argv_1000			*	argv_2884;	
	argv_3379				argv_2033;
} argv_3321;
*/


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ com client functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
extern "C" {
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_941 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_942 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_910 (argv_2157 *, bool&);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_911 (argv_2157);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_909 (argv_2157, argv_773, argv_3717);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_919 (argv_2157, argv_773, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_920 (argv_2157, argv_773, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_local_result (argv_2157, argv_3379, bool&, bool&, bool&, argv_1004, bool&, bool&);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_remote_result (argv_2157, argv_3379, argv_773, bool&, bool&, bool&, argv_1004, bool&, bool&);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_912 (argv_2157);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 com_client_get_last_error (argv_2157, argv_1004);
}
*/
// =============================================================
// =============================================================
// =============================================================
// =============================================================
// =============================================================
// =============================================================

// argv_2806 client connected to the service.
typedef struct argv_554 {
	argv_876		argv_2234;
	argv_1000				argv_2885;
	argv_1000				argv_2889;
	SOCKET 				argv_3410;
} argv_3323;

typedef struct argv_560 {
	fd_set			readfds;
	fd_set			readfds_dirty;
	argv_3379			argv_2221;
} argv_3429;

// 3 connections (argv_1292, argv_962, scan).
typedef struct argv_552 {
	string				argv_3684;
	argv_3717				argv_3685; // for the temporary argv_1314 argv_1637
	argv_3379				argv_3411;
	argv_3323	argv_678;
	argv_3323	argv_3319;
	argv_3429		argv_3333;
} argv_3321;


typedef struct argv_553 {
	argv_3715	argv_3695;			// answer argv_3695
	argv_3379	argv_1892;

	// general operation related argv_1073
	argv_3715	argv_2810;

	// argv_1292 list argv_3266
	argv_3717	argv_2747;
	argv_3717	argv_2744;
	argv_3717	argv_1047;
	string	argv_1301;

	// scan related argv_1073
	bool 	argv_3318;
	bool	infected;
	bool	argv_1199;
	char	argv_3827[MAX_PATH];
	bool	argv_1198;
	bool	argv_1200;
	argv_3379	argv_1201;
	char	argv_1125[MAX_PATH];
	char	argv_1049[MAX_PATH];
} argv_3322;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ Internal tool functions (not exported by the DLL).
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 internal_connect_unit (argv_3323&,  argv_773, argv_3717);
argv_3379 internal_prepare_packet (argv_1000&, vector<argv_772>&, argv_3715);
argv_3379 internal_update_maxfd (argv_2157);
argv_3379 internal_check_select_return_code (argv_3379, bool&);
argv_3379 internal_process_ready_descriptors (argv_2157, argv_3379, argv_3322 *);
argv_3379 internal_process_received_packet (argv_1000&, argv_3322 *);

argv_3379 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_LIST_RESULT		(argv_2157, argv_3323&, argv_3322 *);
argv_3379 internal_process_packet_PCK_TYPE_SCAN_REMOTE_RESULT				(argv_2157, argv_3323&, argv_3322 *);
argv_3379 internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT					(argv_2157, argv_3323&, argv_3322 *);
argv_3379 internal_process_packet_PCK_TYPE_SCAN_AND_DYSINFECT_LOCAL_RESULT	(argv_2157, argv_3323&, argv_3322 *);
argv_3379 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_RESULT			(argv_2157, argv_3323&, argv_3322 *);
argv_3379 internal_process_packet_PCK_TYPE_ARCHIVE_CREATE_RESULT				(argv_2157, argv_3323&, argv_3322 *);
void internal_generate_unique_tmp_filename (argv_773, argv_3717&, argv_1004);
void internal_reset_result (argv_3322&);

extern "C" {
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_941 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_942 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_910 (argv_2157 *, argv_773);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_911 (argv_2157);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_909 (argv_2157, argv_773, argv_3717, argv_3717);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_919 (argv_2157, argv_773, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_920 (argv_2157, argv_773, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_913 (argv_2157, argv_773, argv_773);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_908 (argv_2157, argv_773, argv_773);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_907 (argv_2157);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_906 (argv_2157);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_3190 (argv_2157, argv_3322 *);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_912 (argv_2157);
}



#endif // argv_353



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
