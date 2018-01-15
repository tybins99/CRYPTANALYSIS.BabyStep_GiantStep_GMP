// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_295.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the functions and argv_1073
// @@ structures necessary for the scan daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_356
#define argv_356



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <string>
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_316.hpp"

#if defined (__WIN32_OS__)
	#include <windows.h>
	#include <mmsystem.h>
	#include <winsvc.h>
	#include <Windows.h>
#endif // #if defined (__WIN32_OS__)




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_776
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 is application independant, and permits 
// @@ to argv_3278 a given argv_2785 or routine as a service under
// @@ win32.
// @@ Notice that in order to be used, this argv_2785 must be derivated
// @@ so that the argv_2785 can be adapted to the needs of the service
// @@ required by the application.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_776
{
protected:
	argv_758				argv_699;
	string					argv_3347;
	string					argv_2132; // using the registry
	argv_865					argv_2146;
	string					argv_2131;
	bool					argv_3355;
	virtual argv_3379			argv_1017 ();

#if defined (__WIN32_OS__)
	DWORD					argv_3352;
	SERVICE_STATUS			argv_2764;
	HANDLE					argv_2019;
	SERVICE_STATUS_HANDLE	argv_2765; 
	argv_3379					argv_3792 (DWORD,DWORD,DWORD,DWORD,DWORD);
	friend void				argv_3351 (DWORD);
	friend DWORD WINAPI		doit_worker  (argv_2157);
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	friend argv_2157			doit_worker  (argv_2157);
	friend void				child_handler (int);
	friend void *			argv_1181 (void *);
#endif // #if defined (__LINUX_OS__)
	argv_3379					argv_2017 ();
	void					reset ();
	argv_3379					argv_1016 ();
	virtual argv_3379			argv_2018 () = 0;

public:
	argv_776 ();
	virtual ~argv_776 ();
	argv_3379					argv_3278 ();

};


class argv_1040
{
public:
	argv_3379	argv_1814;
#if defined (__LINUX_OS__)
	pthread_t argv_1789;
	pthread_t argv_2955;
#endif // #if defined (__LINUX_OS__)
	argv_776 * argv_1072;
};



#endif // argv_356



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
