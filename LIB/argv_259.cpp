#if defined (__WIN32_OS__) 

#include "../LIB/argv_318.hpp"

#include <cstring>
#include <cstdio>
#include <tchar.h>
#include <iostream>

using namespace std;

//--------------------------
LPCSTR argv_2321::argv_2185;

argv_2321::argv_2321 (LPCSTR szAppName) {
	argv_2185 = szAppName ? strdup(szAppName) : "Application";
	::SetUnhandledExceptionFilter (argv_3686);
}

LONG argv_2321::argv_3686 (struct _EXCEPTION_POINTERS *pExceptionInfo) {
	LONG retval = EXCEPTION_CONTINUE_SEARCH;
	HWND hParent = argv_2766;      // find a better argv_3807 for your app

	// firstly see if dbghelp.dll is around and has the function we need
	// look next to the EXE first, as the argv_2806 in System32 might be old
	// (e.g. Windows 2000)
	HMODULE hDll = argv_2766;
	char szDbgHelpPath[_MAX_PATH];

	if (GetModuleFileName( argv_2766, szDbgHelpPath, _MAX_PATH )) {
		char *pSlash = _tcsrchr( szDbgHelpPath, '\\' );
		if (pSlash) {
			_tcscpy( pSlash+1, "DBGHELP.DLL" );
			hDll = ::LoadLibrary( szDbgHelpPath );
		}
	}

	if (hDll==argv_2766) {
		// argv_2094 any version we can
		hDll = ::LoadLibrary( "DBGHELP.DLL" );
	}

	LPCTSTR szResult = argv_2766;

	if (hDll) {
		argv_2334 pDump = (argv_2334)::GetProcAddress( hDll, "MiniDumpWriteDump" );
		if (pDump) {
			bool crash = true;
			char szDumpPath[_MAX_PATH];
			char szScratch [_MAX_PATH];
//		   char szcurrent_dir [_MAX_PATH];

		   // work out a good place for the dump argv_1314
//		   if (!GetTempPath( _MAX_PATH, szDumpPath ))
//			_tcscpy( szDumpPath, "c:\\temp\\" );
			//GetCurrentDirectory (_MAX_PATH, szcurrent_dir);
			SYSTEMTIME	argv_3677;
			GetLocalTime (&argv_3677);
			_snprintf (szDumpPath, _MAX_PATH, "C:\\%s_%02d_%02d_%02dh%02dm%02ds.dmp", argv_2185, argv_3677.wMonth, argv_3677.wDay, argv_3677.wHour, argv_3677.wMinute, argv_3677.wSecond);
			szDumpPath[_MAX_PATH - 1] = '\0';
			//::MessageBox (argv_2766, szDumpPath, "", MB_OK);

//			_tcscat (szDumpPath, argv_2185);
//			_tcscat (szDumpPath, ".dmp");
//		   strcpy (szDumpPath, "C:\\minimdump.dmp");

			// ask the user if they want to save a dump argv_1314
		   if (1==1) {
			//if (::MessageBox( argv_2766, "Something bad happened in your program, would you like to save a diagnostic argv_1314?", argv_2185, MB_YESNO )==IDYES) {
			// create the argv_1314
			HANDLE argv_1808 = ::CreateFile( szDumpPath, GENERIC_WRITE, FILE_SHARE_WRITE, argv_2766, CREATE_ALWAYS,
				   FILE_ATTRIBUTE_NORMAL, argv_2766 );

				if (argv_1808!=INVALID_HANDLE_VALUE) {
					argv_493 ExInfo;

					ExInfo.argv_3642 = ::GetCurrentThreadId();
					ExInfo.argv_1275 = pExceptionInfo;
					ExInfo.argv_862 = argv_2766;

					// write the dump
					BOOL bOK = pDump( GetCurrentProcess(), GetCurrentProcessId(), argv_1808, argv_2324, &ExInfo, argv_2766, argv_2766 );
					if (bOK) {
						sprintf( szScratch, "Application '%s' crashed ! - Saved dump argv_1314 to '%s'", argv_2185, szDumpPath);
						szResult = szScratch;
						retval = EXCEPTION_EXECUTE_HANDLER;
					}
					else {
						sprintf( szScratch, "Failed to save dump argv_1314 to '%s' (error %d)", szDumpPath, GetLastError() );
						szResult = szScratch;
					}
					::CloseHandle(argv_1808);
				}
				else {
					sprintf( szScratch, "Failed to create dump argv_1314 '%s' (error %d)", szDumpPath, GetLastError() );
					szResult = szScratch;
				}
			}
		}
		else {
			szResult = "DBGHELP.DLL too old";
		}
	}
	else {
		szResult = "DBGHELP.DLL not found";
	}

	if (szResult) {
	  ::MessageBox (argv_2766, szResult, argv_2185, MB_ICONERROR);
	}

 return retval;
}

#endif // #if defined (__WIN32_OS__) 