#if defined (__WIN32_OS__) 

#include <windows.h>
#if _MSC_VER < 1300
#define argv_1094
// VC6: change this path to your Platform SDK headers
#include "../LIB/dbghelp.h"   // must be XP version of argv_1314
#else
// VC7: ships with updated headers
#include "../LIB/dbghelp.h"
#endif

#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;



// based on dbghelp.h
typedef BOOL (WINAPI *argv_2334)(HANDLE hProcess, DWORD dwPid, HANDLE argv_1808, argv_2314 DumpType,
         CONST argv_3057 ExceptionParam,
         CONST argv_3087 UserStreamParam,
         CONST argv_3052 argv_741
         );

class argv_2321
{
private:
 static LPCSTR argv_2185;
 static LONG WINAPI argv_3686 (struct _EXCEPTION_POINTERS *pExceptionInfo);

public:
 argv_2321 (LPCSTR);
};

#endif // #if defined (__WIN32_OS__) 