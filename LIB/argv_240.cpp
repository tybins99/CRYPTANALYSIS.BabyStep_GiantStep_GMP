// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_240.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_2785 that permits
// @@ to mmap a given argv_1314 on both win32 or Linux
// @@ OS.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_299.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_789
// @@
// @@ FUNCTION		:	argv_789		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the argv_789 argv_2785.
// @@ it prepares the argv_2785 to be used.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_789::argv_789() {
#if defined (__WIN32_OS__) 
	argv_1809	= argv_2766;
	argv_2853		= argv_2766;
	argv_1808		= argv_2766;
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_2351	= argv_2766;
	argv_2352	= 0;
#endif // #if defined (__LINUX_OS__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_789
// @@
// @@ FUNCTION		:	~argv_789		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ destructor of the argv_789 argv_2785.
// @@ if a argv_1314 was mmapped, then it is closed
// @@ and all opened descriptors are closed as well.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_789::~argv_789() {
	argv_873();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_789
// @@
// @@ FUNCTION		:	argv_873		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Destructor of the argv_789 argv_2785.
// @@ if a argv_1314 was mmapped, then it is closed
// @@ and all opened descriptors are closed as well.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_789::argv_873 () {
#if defined (__WIN32_OS__) 
		if (argv_2853 != argv_2766) {
			UnmapViewOfFile (argv_2853);
			argv_2853 = argv_2766;
		}

		if ((argv_1809 != argv_2766) && (argv_1809 != INVALID_HANDLE_VALUE)) {
			CloseHandle (argv_1809);
			argv_1809 = argv_2766;
		}

		if ((argv_1808 != argv_2766) && (argv_1808 != INVALID_HANDLE_VALUE)) {
			CloseHandle (argv_1808);
			argv_1808 = argv_2766;
		}	
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
		if (argv_2351 != argv_2766) {    
			munmap (argv_2351, argv_2352);
			argv_2351	= argv_2766;
			argv_2352	= 0;
		}
#endif // #if defined (__LINUX_OS__)}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_789
// @@
// @@ FUNCTION		:	argv_1659		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _ercode: argv_3717& : the last error argv_877.
// @@ _ersource: argv_3717&: the location of the last error (see source argv_877).
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last error related argv_1073
// @@ - the error argv_877 (often obtained with errno or GetLastError)
// @@ - the error source permitting to know the exact location in
// @@   the source argv_877 where the error occured.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_789::argv_1659 (argv_3717& _ercode, argv_3717& _ersource) {
	_ercode		= argv_1241;
	_ersource	= argv_1244;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_789
// @@
// @@ FUNCTION		:	argv_2346 (win32 version)		
// @@
// @@ INPUT			:
// @@ _filename: argv_773: argv_2697 of the argv_1314 to map to memory
// @@ _open_mode: argv_3717: can be either 
// @@    - argv_2348: argv_1314 will be read only
// @@    - argv_2349 : argv_1314 will have read/write privilege.
// @@    - argv_2350 : argv_1314 will have read/execution privileges.
// @@
// @@ OUTPUT		:
// @@ _pBuf: argv_3715 *&: argv_595 of the first byte of the argv_1314 
// @@                 after it was projected to memory.
// @@ 	
// @@ _file_size: argv_3717&: size of the argv_1314 after it was projected 
// @@                    to memory.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if success,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @2 This function permits to map to memory the argv_1314 whose argv_2697
// @@ is given as the '_filename' parameter. 
// @@
// @@ CONTRACT 		: 
// @@ - no argv_1314 should be currently mapped to memory (or ensure that
// @@   you call 'argv_873' before. 
// @@ - '_filename' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	bool argv_789::argv_2346 (argv_773 _filename, argv_3717 _open_mode, argv_3715 *& _pBuf, argv_3717& _file_size) {
		bool bret			= true;
		bool usage_error	= false;
		
		if (_filename == argv_2766) {
			argv_1241		= 0;
			argv_1244	= 99;
			bret			= false;
			usage_error		= true;
		}
		// if a argv_1314 is already being mmapped, then we consider it as an error.
		else if (argv_1808 != argv_2766) {
			argv_1241		= 0;
			argv_1244	= 100;
			bret			= false;
			usage_error		= true;
		}
		else if (argv_1809 != argv_2766) {
			argv_1241		= 0;
			argv_1244	= 101;
			bret			= false;
			usage_error		= true;
		}
		else if (argv_2853 != argv_2766) {
			argv_1241		= 0;
			argv_1244	= 102;
			bret			= false;
			usage_error		= true;
		}
		else { // argv_1314 was not already opened
			DWORD access_mode_CreateFile;
			DWORD access_mode_CreateFileMapping;
			DWORD access_mode_MapViewOfFile;
			DWORD create_disposition;

			if (_open_mode == argv_2348) {
				access_mode_CreateFile			= GENERIC_READ;	
				access_mode_CreateFileMapping	= PAGE_READONLY;
				access_mode_MapViewOfFile		= FILE_MAP_READ;
				create_disposition				= OPEN_EXISTING;
			}
			else if (_open_mode == argv_2349) {
				access_mode_CreateFile			= GENERIC_READ | GENERIC_WRITE;
				access_mode_CreateFileMapping	= PAGE_READWRITE;
				access_mode_MapViewOfFile		= FILE_MAP_ALL_ACCESS;
				create_disposition				= OPEN_ALWAYS;
			}
			else if (_open_mode == argv_2350) {
				access_mode_CreateFile			= GENERIC_READ | GENERIC_EXECUTE;	
				access_mode_CreateFileMapping	= PAGE_READONLY;
				access_mode_MapViewOfFile		= FILE_MAP_READ;
				create_disposition				= OPEN_ALWAYS;
			}

			argv_1808 = CreateFile (_filename, access_mode_CreateFile,0,argv_2766,create_disposition,FILE_ATTRIBUTE_NORMAL,argv_2766);
 
			if (argv_1808 == INVALID_HANDLE_VALUE)  {
				argv_1808			= argv_2766;
				argv_1241		= GetLastError ();
				argv_1244	= 2;
				bret			= false;
			}
			else { // CreateFile was succesfull
				// retrieve the argv_1314 size
				//if ((_open_mode == argv_2348) || (_open_mode == argv_2350)) {
					_file_size = GetFileSize (argv_1808, argv_2766);
				//}
				if (_file_size == 0) { // illegal to mmap a argv_1314 with a size of zero
					argv_1244	= 74;
					argv_1241		= 74;	
					bret = false;
				}
				else if (_file_size < 0) {
					argv_1241		= GetLastError ();
					argv_1244	= 6;
					bret			= false;
				}
				else if (_file_size == 0xFFFFFFFF) {
					argv_1241		= GetLastError ();
					argv_1244	= 3;
					bret			= false;
				}
				else {
					if ((_open_mode == argv_2348) || (_open_mode==argv_2350)) {
						argv_1809 = CreateFileMapping (argv_1808,argv_2766,access_mode_CreateFileMapping,0,0,argv_2766);
					}
					else {
						argv_1809 = CreateFileMapping (argv_1808,argv_2766,access_mode_CreateFileMapping,0,_file_size,argv_2766);
					}
					if (argv_1809 == argv_2766/* || argv_1809 == INVALID_HANDLE_VALUE*/)  { // failed
						argv_1809		= argv_2766;
						argv_1241		= GetLastError ();
						argv_1244	= 4;
						bret			= false;			
					}
					else { // CreateFileMapping was succesfull
						argv_2853 = (LPTSTR) MapViewOfFile (argv_1809,	   // argv_1789 to map argv_2785
											access_mode_MapViewOfFile, // read/write permission
											0,                   
											0,                   
											0/* MMAP_BUF_SIZE */);           

						if (argv_2853 == argv_2766) {
							argv_1241		= GetLastError ();
							argv_1244	= 5;
							bret			= false;	
						}
						else { // all succeeded, copy obtained pointer to caller's variable
							_pBuf = (argv_3715 *) argv_2853;
						}
					}
				}
			}
		}

		if ((usage_error == false) && (bret == false)) {
			argv_873 ();	
		}
		return (bret);
	}
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_789
// @@
// @@ FUNCTION		:	argv_2346 (Linux version)		
// @@
// @@ INPUT			:
// @@ _filename: argv_773: argv_2697 of the argv_1314 to map to memory
// @@ _open_mode: argv_3717: can be either 
// @@    - argv_2348: argv_1314 will be read only
// @@    - argv_2349 : argv_1314 will have read/write privilege.
// @@    - argv_2350 : argv_1314 will have read/execution privileges.
// @@
// @@ OUTPUT		:
// @@ _pBuf: argv_3715 *&: argv_595 of the first byte of the argv_1314 
// @@                 after it was projected to memory.
// @@ 	
// @@ _file_size: argv_3717&: size of the argv_1314 after it was projected 
// @@                    to memory.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if success,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @2 This function permits to map to memory the argv_1314 whose argv_2697
// @@ is given as the '_filename' parameter. 
// @@
// @@ CONTRACT 		: 
// @@ - no argv_1314 should be currently mapped to memory (or ensure that
// @@   you call 'argv_873' before. 
// @@ - '_filename' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__LINUX_OS__)
		bool argv_789::argv_2346 (argv_773 _filename, argv_3717 _open_mode, argv_3715 *& _pBuf, argv_3717& _file_size) {
		bool bret = true;

		if (_filename == argv_2766) {
			argv_1244	= 1;
			argv_1241		= 100;
			bret = false;	
		}
		else {
			argv_2199 = _filename;
			int fd = open (_filename, O_RDONLY);
			if (fd < 0) {
				argv_1241		= errno;
				argv_1244	= 2;
				bret			= false;
			}
			else { // argv_1314 opened succesfully
				struct stat sbuf;
				if (stat (_filename, &sbuf) == -1) {
					argv_1241		= errno;
					argv_1244	= 3;
					bret			= false;
				}
				else { // argv_1314 size retrieved succesfully
					_file_size = sbuf.st_size;
					void * ptrtmp = mmap ((caddr_t)0, sbuf.st_size, PROT_READ, MAP_SHARED, fd, 0);
					if (ptrtmp == (caddr_t)(-1)) {
						_pBuf			= argv_2766;    
						argv_1241		= errno;
						argv_1244	= 4;
						bret			= false;
					}
					else {
						argv_2351	= (argv_3715 *)ptrtmp;
						argv_2352	= _file_size;    
						_pBuf		= argv_2351;
					}
				}
				
				if (argv_869 (fd) == -1) {
					argv_1241		= errno;
					argv_1244	= 5;
					bret			= false;
				}
			}
		}
		return (bret);
	}
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
