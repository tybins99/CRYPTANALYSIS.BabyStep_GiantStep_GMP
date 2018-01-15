// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_339.hpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_363
#define argv_363



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
#include <algorithm>
#include "../LIB/argv_296.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3097 {
	argv_1747 = 201274,
	argv_1732,
	argv_1731,
	argv_1730,
	argv_1723,
	argv_1724,
	argv_1741,
	argv_1742,
	argv_1745,
	argv_1744,
	argv_1738,
	argv_1734,
	argv_1743,
	argv_1721,
	argv_1720,
	argv_1727,
	argv_1725,
	argv_1740,
	argv_1737,
	argv_1739,
	argv_1728,
	argv_1735,
	argv_1726,
	argv_1711,
	argv_1708,
	argv_1707,
	argv_1709,
	argv_1710,
	argv_1718,
	argv_1713,
	argv_1712,
	argv_1714,
	argv_1717,
	argv_1715,
	argv_1716,
	argv_1706,
	argv_1705,
	argv_1736,
	argv_1719,
	argv_1729,
	argv_1746,
	argv_1722,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants and aliases definitions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__LINUX_OS__)
	#define LPVOID void *
	#define MAX_PATH	256
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1314 mmap possible open mode
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_2347 {
	argv_2348 = 0,
	argv_2349,
	argv_2350,
};


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool			argv_1316				(const char *);
int32_t			argv_2849			(const char *, map<string, bool>&, map<string, string>&);
int32_t			argv_2843			(FILE *, string&, string&, string&);
void			argv_1807		(uint8_t *, uint32_t, string&);
void			argv_2837	(string&, uint32_t);
bool			argv_2807			(uint8_t, uint8_t&);
bool			argv_797				(uint8_t, uint8_t, uint8_t&);
int32_t			argv_3471		(const char *, uint32_t, uint8_t *, uint32_t, uint32_t&);
bool			argv_1367		(const char * _file_1, const char * _file_2);
unsigned long	argv_1649			(const char *);
std::string		argv_1027		(uint32_t);

extern "C"
{
	void argv_1027 (uint32_t _ercode, char * _erstring);
}

class argv_781
{
protected:
	LARGE_INTEGER argv_2169;
	LARGE_INTEGER argv_2170;

	LONGLONG argv_2172;
	LONGLONG argv_2171;

public:
	argv_781(void);

	void argv_3457(void);
	void argv_3463(void);
	double argv_1646(void) const;
	string argv_3464 (const char *);
};

inline argv_781::argv_781(void) {
	LARGE_INTEGER liFrequency;

	QueryPerformanceFrequency(&liFrequency);
	argv_2172 = liFrequency.QuadPart;

	// Calibration
	argv_3457();
	argv_3463();

	argv_2171 = argv_2170.QuadPart-argv_2169.QuadPart;
}

inline void argv_781::argv_3457(void) {
	// Ensure we will not be interrupted by any other thread for a while
//	Sleep(0);
	QueryPerformanceCounter(&argv_2169);
}

inline void argv_781::argv_3463(void) {
	QueryPerformanceCounter(&argv_2170);
}

inline double argv_781::argv_1646(void) const {
	return (double)(argv_2170.QuadPart-argv_2169.QuadPart-argv_2171)*1000000.0 / argv_2172;
}

inline string argv_781::argv_3464 (const char * _msg) {
	argv_3463 ();
	double elapsed = argv_1646 ();
	char argv_3681[1024];
	if (elapsed > 1000000.0) {
		elapsed = elapsed / 1000000.0;
		if (elapsed > 60.0) {
			elapsed = elapsed / 60.0;
			snprintf (argv_3681, 1024, "elapsed argv_3678 : %.02lf minutes", elapsed);
		}
		else {
			snprintf (argv_3681, 1024, "%s: elapsed argv_3678 : %.02lf seconds", _msg, elapsed);
		}
	}
	else {
		snprintf (argv_3681, 1024, "%s: elapsed argv_3678 : %.02lf microseconds", _msg, elapsed);
	}
	argv_3681[1024 - 1] = '\0';
	return argv_3681;
}


#endif // #define argv_393



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
