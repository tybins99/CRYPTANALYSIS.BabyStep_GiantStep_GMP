// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_299.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_2785 that permits
// @@ to mmap a given argv_1314 on both win32 or Linux
// @@ OS.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_421
#define argv_421



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
	#pragma warning(disable: 4503)
	#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 

	#include <iostream>
	#include <string>
	#include <vector>
	#include <cassert>
	#include <cstdio>
	#include <stack>
	#include <list>
	#include <map>
	#include <exception>
#if defined (__WIN32_OS__) 
	#include <winsock.h>
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
	#include <Commdlg.h>
	#include <commctrl.h>
	#include <Commdlg.h>
	#include <shellapi.h>
	#include <fcntl.h>
	#include <shlobj.h>
	#include <Mmsystem.h>

	#include <io.h>
	#include <aclapi.h>
	#include <lmerr.h>
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/argv_3678.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <dirent.h>             // readdir(), etc.
#include <sys/stat.h>           // stat(), etc.
#include <cstring>             // strstr(), etc.
#include <errno.h>
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_296.hpp"
#include "../LIB_CRYPTO/argv_339.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_789
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to map a given argv_1314 to memory
// @@ so that it can be accessed as a argv_728, and thus it is 
// @@ faster.
// @@ The argv_2785 works on both win32 and Linux.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_789
{
	private:
		string	argv_2199;
		argv_3717	argv_1241;
		argv_3717	argv_1244;
#if defined (__WIN32_OS__) 
		HANDLE	argv_1808;
		HANDLE	argv_1809;
		LPCTSTR argv_2853;
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
		argv_3715 *  argv_2351;
		argv_3717    argv_2352;
#endif // #if defined (__LINUX_OS__)

	public:
		argv_789();
		~argv_789();
		bool argv_2346 (argv_773, argv_3717, argv_3715 *&, argv_3717&);
		void argv_873 ();
		void argv_1659 (argv_3717&, argv_3717&);
};



#endif // argv_421



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
