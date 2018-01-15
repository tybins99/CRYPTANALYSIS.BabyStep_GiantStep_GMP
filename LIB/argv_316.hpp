// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_316.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the definition of the 
// @@ log facility that permits to log events and
// @@ to associate a argv_3678 and date, coming along
// @@ with a argv_3366 level for each event.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_430
#define argv_430



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
#include <string>
#include <iostream>
#include <map>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_866
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 is a platform independant argv_2125 that
// @@ permits to avoid race conditions in threaded applications.
// @@ It works for both win32 and Linux platforms.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_866
{
private:
#if defined (__LINUX_OS__)
	pthread_mutex_t argv_2694;
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	CRITICAL_SECTION argv_1028;
#endif // #if defined (__WIN32_OS__) 

public:
	argv_866 ();
	void argv_2125 ();
	void argv_3770 ();
	~argv_866 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ log related constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2134				65536
#define argv_2144		256

//"02/20-17h51m48s "
#define argv_1078					16
//"|NOR| "
#define argv_2051				6

#if defined (__WIN32_OS__) 
	#define argv_2070				512 - argv_1078 - argv_2051
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	#define argv_2070				256 - argv_1078 - argv_2051
#endif // #if defined (__LINUX_OS__)

#if defined (__WIN32_OS__) 
	#define argv_3409 _snprintf
#endif // #if ! defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ log relative constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3099 {
    argv_2763,
    argv_3834,
    argv_1242,
    argv_620,
    argv_1086,
    argv_2762,
};

#if defined (__LINUX_OS__)
	#define MAX_PATH	256
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1073 types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (argv_3715)
	#define argv_3715	unsigned	char
#endif // argv_3715

#if ! defined (argv_1004)
	#define argv_1004				char *
#endif // #if ! defined (argv_1004)

#if ! defined (argv_773)
	#define argv_773	const		char *
#endif // #if ! defined (argv_773)

#if ! defined (argv_1007)
	#define argv_1007	const		argv_3715 *
#endif // #if ! defined (argv_1007) 

#if ! defined (argv_3377)
	#define argv_3377	signed		char
#endif // #if ! defined (argv_3377)

#if ! defined (argv_3716)
	#define argv_3716	unsigned	short
#endif // #if ! defined (argv_3716)

#if ! defined (argv_3378)
	#define argv_3378	signed		short
#endif // #if ! defined (argv_3378)

#if ! defined (argv_3379)
	#define argv_3379	signed		int
#endif // #if ! defined (argv_3379)

#if ! defined (argv_3717)
	#define argv_3717	unsigned	int
#endif // #if ! defined (argv_3717)

#if ! defined (argv_3718)
	#define argv_3718	unsigned	long
#endif // #if ! defined (argv_3718)

#if ! defined (argv_3270)
	#define argv_3270	float
#endif // #if ! defined (argv_3270)

#if ! defined (argv_3271)
	#define argv_3271	double
#endif // #if ! defined (argv_3271)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_978
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to have a fixed size argv_2069
// @@ composed of 
// @@ - a date
// @@ - a argv_3366 level
// @@ - a argv_2271
// @@
// @@ Notice that if the argv_2271 to append to the argv_2069
// @@ exceeds the argv_2069's maximum size, then the remaining
// @@ part of the argv_2271 is lost.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_978
{
private:
	string argv_3595;
	void insert_terminator (FILE *);

public:

	argv_978 () {
#if defined (__WIN32_OS__)
		argv_3595 = "\r\n";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		argv_3595 = "\n";
#endif // #if defined (__LINUX_OS__)
	}

	void insert_date (FILE *, argv_773);
	void insert_level (FILE *, argv_773);
	void insert_body (FILE *, argv_773);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_865
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to open a log argv_1314,
// @@ save argv_1073 into it, and argv_869 it.
// @@ It can be thread safe depending on the compilation
// @@ argv_1371 you choose.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_865
{
	private:
		string			argv_1364;
		string			argv_1018;
		argv_978		argv_2808;
		FILE *			argv_1396;
		argv_865 *			argv_1243;
		argv_3717			argv_1052;
		bool			argv_2133;
		char			argv_3590[argv_2144];
#if defined (__WIN32_OS__)
		SYSTEMTIME		argv_3677;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
        time_t			argv_1055;
        struct tm *		argv_3680;
#endif // #if defined (__LINUX_OS__)
		void			argv_3793 (bool _large_mode=false);
		void			insert_date ();
		void			insert_level (argv_3717);
		void			argv_816 ();
		void			reset ();
		argv_866	argv_699;

	public:
		argv_865();
		virtual			~argv_865();
		bool			argv_2814 (string, argv_865 *, string);
		void			argv_872 ();
		void			argv_2142 (argv_3717, argv_773);
		void			argv_2142 (argv_3717, argv_773, argv_3379);
		void			argv_2142 (argv_3717, argv_773, argv_3717);
		void			argv_2142 (argv_3715);
		void			argv_2142 (argv_3717, argv_3717, argv_3717);
		void			argv_2142 (argv_3717, argv_773, argv_773);
		void			argv_2142 (argv_3717, argv_773, argv_773, argv_773);
		void			argv_2142 (argv_3717, argv_773, argv_773, argv_773, argv_773);
		void			argv_2142 (argv_3717, argv_773, unsigned long);
		void			argv_2142 (argv_3717, argv_3717);
		void			argv_2143 (argv_3717, argv_773, argv_3717);
		void			argv_2129 (argv_3717, argv_3715 *, argv_773);
		void			argv_2128 (argv_3717, argv_3715 *, argv_3717, argv_773);
		FILE *			argv_1648 ();
		string			argv_1650 ();
		void			argv_1381 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  global argv_1073 container
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_792
{
public:
	argv_792 ();

	argv_865	argv_2146;

	string	argv_2851;
	string	argv_2712;
	string	argv_964;
	string	argv_834;
	string	argv_1991;
	string  argv_3023;
	string	argv_1350;
	string	argv_1625;
	string	argv_1118;
	argv_3717	int_size;
	string	argv_2708;
	string	argv_2704;
	string	argv_2703;
	string	argv_2699;
	string	argv_2701;

	string	argv_2706;
	string  argv_2700;
	string	argv_2702;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ misc functions declarations
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1137 (argv_773, argv_865&); 



extern "C" 
{
	void argv_2142 (argv_865 *, argv_3717, argv_773);
}



#endif // argv_430



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
