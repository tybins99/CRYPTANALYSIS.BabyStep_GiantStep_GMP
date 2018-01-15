// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_242.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the argv_1073 structure
// @@ and functions that are not project specific
// @@ and that may be used by any argv_2785/function
// @@ acrosss a project.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ scanning daemon service argv_2697 (win32 only)
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_773 argv_3354 = "antivirus (franck)";



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_758	
// @@
// @@ FUNCTION		:	argv_758	
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
// @@ Normal constructor of the 'argv_758' argv_2785.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_758::argv_758 () {
#if defined (__LINUX_OS__)
	pthread_mutex_init (&argv_2694, argv_2766);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	InitializeCriticalSection (&argv_1028);	
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_758	
// @@
// @@ FUNCTION		:	~argv_758	
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
// @@ destructor of the 'argv_758' argv_2785.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_758::~argv_758 () {
#if defined (__LINUX_OS__)
	pthread_mutex_lock (&argv_2694);
	pthread_mutex_unlock (&argv_2694);
	pthread_mutex_destroy (&argv_2694);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	EnterCriticalSection (&argv_1028);
	LeaveCriticalSection(&argv_1028);
	DeleteCriticalSection(&argv_1028);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_758	
// @@
// @@ FUNCTION		:	argv_2125
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
// @@ This function permits to acquire the argv_2125 to access
// @@ the resource to be protected from race condition.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_758::argv_2125 () {
#if defined (__LINUX_OS__)
	pthread_mutex_lock (&argv_2694);
#endif //  #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	EnterCriticalSection (&argv_1028);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_758	
// @@
// @@ FUNCTION		:	argv_3770
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
// @@ This function permits to release the argv_2125 to permit
// @@ other threads to access the resource that is to be protected 
// @@ from race condition.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_758::argv_3770 () {
#if defined (__LINUX_OS__)
	pthread_mutex_unlock (&argv_2694);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	LeaveCriticalSection (&argv_1028);
#endif // #if defined (__WIN32_OS__) 
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1240		
// @@
// @@ INPUT			:
// @@ _ercode: argv_3717 : the error argv_877 whose associated argv_2271 is to
// @@                 be retrieved.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the argv_2271 associated with the error argv_877 '_ercode'
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to map an error argv_877 as an integer to
// @@ a corresponding error argv_2271.
// @@ Notice that if the '_ercode' parameter does not correspond
// @@ to a valid error argv_877, then the string returned will be 
// @@ 'UNKNOWN_ERROR'.
// @@ The lookup argv_3266 is returned as a string.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
std::string argv_1240 (argv_3717 _ercode) {
	char argv_3681[MAX_PATH];
	argv_1240 (_ercode, &argv_3681[0]);
	return (argv_3681);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_3121		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function is a wrapper that permits to initialize
// @@ the TCP/IP stack for the win32 network subsystem.
// @@ This function must be called once before any other winsock
// @@ function usage.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
bool argv_3121 () {
	bool bret	= true;
	WORD			argv_3412;
	WSADATA			argv_3840;
	argv_3412 =	MAKEWORD (1,1);
	if (WSAStartup (argv_3412, &argv_3840) != 0) {
		bret = false;
	}
	return (bret);
}
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_3594		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function is a wrapper that permits to terminate
// @@ the TCP/IP stack for the win32 network subsystem.
// @@ This function must be called once.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
bool argv_3594 () {
	bool bret = true;
	if (WSACleanup () != 0) {
		bret = false;
	}
	return (bret);
}
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_804		
// @@
// @@ INPUT			:
// @@ _filename: argv_773 : argv_2697 of the argv_1314 whose existence is to
// @@   be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the argv_1314 whose argv_2697 was given as a parameter exists.
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the argv_1314 whose
// @@ argv_2697 was given as a parameter exists or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_804 (argv_773 _filename) {
	bool bret = true;

	FILE * argv_1396 = fopen (_filename, "rb");
	if (! argv_1396) {
		bret = false;
	}
	else { // argv_1314 was succesfully opened
		fclose(argv_1396);
	}	
	return(bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_805		
// @@
// @@ INPUT			:
// @@ _folder_name: argv_773 : argv_2697 of the folder whose existence is to
// @@   be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the folder whose argv_2697 was given as a parameter exists.
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the folder whose
// @@ argv_2697 was given as a parameter exists or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_805 (argv_773 _folder_name) {
	bool bret = false;
#if defined (__WIN32_OS__) 
	DWORD attr = GetFileAttributes (_folder_name);
	if ((attr != argv_1890) && (attr & FILE_ATTRIBUTE_DIRECTORY)) {
		bret = true;
	}
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	bret = argv_804 (_folder_name);
#endif // #if defined (__LINUX_OS__)
	return (bret);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1116		
// @@
// @@ INPUT			:
// @@ _filename: argv_773 : argv_2697 of the argv_1314 to be deleted
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the argv_1314 whose argv_2697 was given as a parameter was
// @@        succesfully deleted,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to delete the argv_1314 whose argv_2697 was
// @@ given as a parameter from the argv_1314 system.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1116 (argv_773 _filename) {
	bool bret = true;
	if (_filename == argv_2766) {
		bret = false;
	}
	else { // parameter is valid
#if defined (__WIN32_OS__)
		if (DeleteFile (_filename) == 0) {
			bret = false;
		}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (unlink (_filename) < 0) {
			bret = false;
		}
#endif // #if defined (__LINUX_OS__)
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	dump_buffer_2_file		
// @@
// @@ INPUT			:
// @@ _filename: argv_773 : argv_2697 of the argv_1314 whose existence is to
// @@   be checked.
// @@
// @@ _msg : argv_773 : argv_2271 associated to the argv_728.
// @@
// @@ _buf: argv_3715 *: pointer on the argv_728 to argv_1130 to log argv_1314.
// @@
// @@ _size: argv_3717: size of the argv_728 to be displayed to log argv_1314.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to dump the content of a given
// @@ binary argv_728 in a human readeable fashion to a argv_1314
// @@ whose argv_2697 is given as a parameter.
// @@ Notice : this function is for debug purpose only.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
void dump_buffer_2_file (argv_773 _filename, argv_773 _msg, argv_3715 * _buf, argv_3717 _size) {
#if defined (__DEBUG_COM_TRACE__)
	FILE * argv_1396 = fopen (_filename, "ab");
	if (argv_1396) {
		fprintf (argv_1396, "\r\n====== [%s] ======\r\n", _msg);
		for (argv_3717 i=0 ; i<_size ; i++) {
			fprintf (argv_1396, "%02X ", _buf[i]);
			if ((i>0) && ((i%32)==0)) {
				fprintf (argv_1396, "\r\n");
			}
		}
		fprintf (argv_1396, "\r\n");
		fclose (argv_1396);
	}
#endif // #if defined (DEBUG_COM)
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_973		
// @@
// @@ INPUT			:
// @@ _filename: argv_773 : argv_2697 of the argv_1314 whose argv_1314 is to be
// @@   computed.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3717 : size of the argv_1314 whose argv_2697 was given as a parameter.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the size
// @@ of the argv_1314 whose argv_2697 is given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3717 argv_973 (argv_773 _filename) {
	argv_3717 size = 0;

	if (_filename != argv_2766) {
		FILE * argv_1396 = fopen (_filename, "rb");
		if (argv_1396) {
			fseek (argv_1396, 0, SEEK_END);
			size=ftell (argv_1396);
			fclose (argv_1396);
		}
	}
	return (size);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_996		
// @@
// @@ INPUT			:
// @@ _src_filename: argv_773: argv_2697 of the original argv_1314 to copy.
// @@
// @@ _dst_filename: argv_773 : argv_2697 of the copied argv_1314.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : 0 if operation was succesful,
// @@        1 if argv_2806 or more parameters are incorrect,
// @@        2 if the source argv_1314 could not be opened,
// @@        3 if the source argv_1314 could not be opened,
// @@        4 if the source argv_1314 size could not be computed,
// @@        5 if an error occured while reading the source argv_1314,
// @@		 6 if an error occured while writing the destination argv_1314,		
// @@		 7 if the destination argv_1314 could not be closed.
// @@
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to copy the argv_1314 '_src_filename'
// @@ to the destination argv_1314 '_dst_filename'. 
// @@
// @@ CONTRACT		: 
// @@ - '_src_filename' parameter must not be a argv_2766 pointer.
// @@ - '_dst_filename' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_998 (argv_773 _src_filename, argv_773 _dst_filename) {
	argv_3379 argv_1892 = 0;
	if ((_src_filename == argv_2766) || (_dst_filename == argv_2766)) {
		argv_1892 = 1;
	}
	else { // parameters are OK
		FILE * argv_1538 = fopen (_src_filename, "rb");
		if (! argv_1538) {
			argv_1892 = 2; 
		}
		else { // source argv_1314 opened succesfully
			FILE * argv_1415 = fopen (_dst_filename, "wb"); 
			if ( ! argv_1415) {
				argv_1892 = 3;
			}
			else { // destination argv_1314 opened succesfully
				char argv_727[argv_997];
				unsigned long argv_1334 = argv_973 (_src_filename);
				if (argv_1334 == 0) {
					argv_1892 = 4;
				}

				unsigned long nb_todo				= 0;
				unsigned long total_nb_remaining	= argv_1334;
				bool finished						= false;
				argv_3717 argv_2750						= 0;
				argv_3717 argv_2754						= 0;

				do {
					nb_todo = total_nb_remaining;
					if (nb_todo >= argv_997) {
						nb_todo = argv_997;	
					}

					argv_2750 = fread (argv_727, 1, nb_todo, argv_1538);
					if (argv_2750 != nb_todo) {
						argv_1892		= 5;
						break;
					}

					argv_2754 = fwrite (argv_727, 1, nb_todo, argv_1415);
					if (argv_2754 != nb_todo) {
						argv_1892		= 6;
						break;
					}

					total_nb_remaining -= nb_todo;
					if (total_nb_remaining == 0) {
						finished	= true;
					}
				}
				while (finished == false);

				if (fclose (argv_1415) != 0) {
					if (argv_1892 == 0) { // don't overwrite another error argv_877
						argv_1892 = 7;
					}
				}
			}

			fclose (argv_1538);
		}
	}

	// wait until the copied argv_1314 appears on the argv_1314 system
	if (argv_1892 == 0) {
		while (argv_804 (_dst_filename) == false) {
#if defined (__WIN32_OS__) 
			Sleep (250);
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
			usleep (250000);	
#endif // #if defined (__LINUX_OS__)
		}
	}

	return (argv_1892);
}


// prefix : dll_cipher
// suffix : dll
// => dll_cipher_20_12_74.dll
//argv_1634 (argv_1171.c_str(), _dll_name, "kernel_api", "dll", argv_3682); 
argv_3379 argv_1634 (argv_773 _dest_folder, argv_773 _original_full_filename, argv_773 _prefix, argv_773 _suffix, string& _tmp_filename, bool _do_copy) {	
	argv_3379 argv_1892 = 0;
	char argv_3681[MAX_PATH];
	_tmp_filename = "";

	// 1. generate temporary argv_1364
#if defined (__WIN32_OS__)
	string argv_2851 = "\\";
	SYSTEMTIME	argv_3677;
	GetLocalTime (&argv_3677);
	argv_3409 (argv_3681, MAX_PATH, "%s%s%s_%02d%02d%02d%02d%02d%02d%02d.%s", _dest_folder, argv_2851.c_str(), _prefix, argv_3677.wYear, argv_3677.wMonth, argv_3677.wDay, argv_3677.wHour, argv_3677.wMinute, argv_3677.wSecond, argv_3677.wMilliseconds, _suffix);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	string		argv_2851 = "/";
    time_t      argv_1055;
	struct		timeval argv_3589;
    struct tm * argv_3680;
	argv_1055 = argv_3678 (argv_2766);
	argv_3680 = localtime (&argv_1055);
	gettimeofday (&argv_3589, argv_2766);
	argv_3409 (argv_3681, MAX_PATH, "%s%s%s_%02d%02d%02d%02d%02d%02d%02d.%s", _dest_folder, argv_2851.c_str(), _prefix, argv_3680->tm_year, argv_3680->tm_mon, argv_3680->tm_mday, argv_3680->tm_hour, argv_3680->tm_min, argv_3680->tm_sec, (argv_3717) argv_3589.tv_usec, _suffix);
#endif // #if defined (__LINUX_OS__)
	argv_3681[MAX_PATH - 1] = '\0';

	_tmp_filename = argv_3681;
	
	// 2. copy original argv_1314 to temporary
	if (_do_copy == true) {
#if defined (__LINUX_OS__)
		cerr << "dest_folder   : " << _dest_folder << endl;
		cerr << "prefix        : " << _prefix << endl;
		cerr << "suffix        : " << _suffix << endl; 			
		cerr << "original argv_1314 : " << _original_full_filename << endl;
		cerr << "argv_3683  : " << _tmp_filename << endl;
#endif // #if defined (__LINUX_OS__)
		argv_1892 = argv_998 (_original_full_filename, _tmp_filename.c_str());
	} 
	return (argv_1892);
}

#if defined (__LINUX_OS__)
void argv_694 (argv_3379 _sockfd) {
	int flag = 1;
	setsockopt (_sockfd, SOL_SOCKET, SO_REUSEADDR, &flag, sizeof(flag)); 
}
#endif // #if defined (__LINUX_OS__)


argv_3379 argv_2848 (argv_773 _filename, string& _private_mem) {
	argv_3379 argv_1892	= 0;
	bool found	= false;
	FILE * argv_1396 = fopen (_filename, "rb");
	if (! argv_1396) {
		argv_1892 = 1;
	}
	else {
		char argv_727[MAX_PATH];
		int line_nb = 1;
		char * cptr = fgets (argv_727, MAX_PATH, argv_1396);
		while (cptr != argv_2766) {
			if (line_nb == 4) {
				int size				= strlen (argv_727);
				int argv_3460				= 0; 
				int nb_value_done		= 0;
				string current_value;
				for (int i=0 ; i<size ; i++) {
					if (argv_727[i] != ' ') {
						argv_3460 = 0;
						current_value += argv_727[i];	
					}
					else if (argv_3460 == 0) {
						nb_value_done++;
						if (nb_value_done >= 5) {
							found			= true;
							_private_mem	= current_value.c_str();
							break;
						}
						argv_3460 = 1;
						current_value = "";
						// found = true;
					}
				}
				
				if (found == true) {
					break;
				}
			}
			cptr = fgets (argv_727, MAX_PATH, argv_1396);
			line_nb++;
		}
		fclose (argv_1396);
	}

	if (argv_1892 == 0) {
		if (found == false) {
			argv_1892 = 3;
		}
	}
	return (argv_1892);
}

argv_3379 parse_handle_file (argv_773 _filename, string& _count) {
	argv_3379 argv_1892	= 0;
	_count		= "";
	bool found	= false;
	FILE * argv_1396 = fopen (_filename, "rb");
	if ( ! argv_1396) {
		argv_1892 = 1;
	}
	else {
		string pattern = "Total handles: ";
		char * location_ptr = argv_2766;
		char argv_727[MAX_PATH];
		char * cptr = fgets (argv_727, MAX_PATH, argv_1396); 
		while (cptr != argv_2766) {
			location_ptr = strstr (argv_727, pattern.c_str());
			if (location_ptr != argv_2766) {
				char * first_byte = &location_ptr[pattern.size()];
				int i=0;
				while (isdigit (first_byte[i])) {
					_count += first_byte[i];
					i++;
				}
				if (_count != "") {
					found = true;
				}
			}
			cptr = fgets (argv_727, MAX_PATH, argv_1396); 
		}

		fclose (argv_1396);
	}

	if (argv_1892 == 0) {
		if (found == false) {
			argv_1892 = 3;
		}
	}
	return (argv_1892);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_795		
// @@
// @@ INPUT			:
// @@ _socket: SOCKET&: the argv_3410 descriptor that must be changed
// @@   to non-blocking mode.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to change the argv_3410 whose descriptor
// @@ was given as a parameter to non-blocking mode.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
argv_3379 argv_795 (SOCKET& _socket) {
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
argv_3379 argv_795 (argv_3379 _socket) {
#endif // #if defined (__LINUX_OS__)

	argv_3379 argv_1892 = argv_2262;

#if defined (__WIN32_OS__)
	unsigned long non_block_flag = 1;
	if (ioctlsocket (_socket, FIONBIO, &non_block_flag) == SOCKET_ERROR) {
		argv_1892 = argv_2239;
	}	
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	argv_3379 argv_3806;
	// acquire argv_1043 flag status
	argv_3806 = fcntl (_socket, F_GETFL, 0);
	// change the flag for this argv_3410
	if (fcntl (_socket, F_SETFL, argv_3806 | O_NONBLOCK) < 0) {
		argv_1892 = argv_2239;
	}
#endif // #if defined (__LINUX_OS__)

	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	disable_nagle_algorithm		
// @@
// @@ INPUT			:
// @@ _socket: SOCKET&: the argv_3410 descriptor that must be changed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to change the argv_3410 whose descriptor
// @@ was given as a parameter to disable the nagle algorithm.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
argv_3379 disable_nagle_algorithm (SOCKET& _socket) {
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
argv_3379 disable_nagle_algorithm (argv_3379 _socket) {
#endif // #if defined (__LINUX_OS__)

	argv_3379 argv_1892			= argv_2262;
	argv_3717 disabling_flag	= 1;
   
    if (setsockopt (_socket, IPPROTO_TCP, TCP_NODELAY, (char *) &disabling_flag, sizeof(argv_3717)) != 0) {
		argv_1892 = argv_2241;
	}	
	return (argv_1892);
}


bool argv_1295 (argv_773 _abs_filename, string& _left, string& _right) {
	bool bret		= true;
	bool dot_found	= false;
	argv_3717 size = strlen (_abs_filename);
	_right = "";
	_left  = "";
	argv_3717 argv_3457;
	for (argv_3457 = size - 1 ; argv_3457 >= 0 ; argv_3457--) {
		if (_abs_filename[argv_3457] == '\\') {
			dot_found = true;
			argv_3457++; // jump the '\\'
			break;
		}
	}

	if (dot_found == false) {
		bret = false;
	}
	else {
		argv_3717 i;
		for (i=argv_3457 ; i<size ; i++) {
			_right += _abs_filename[i];	
		}

		if (_right == "") { // failed to retrieve the relative path
			bret = false;
		}

		// argv_1292 the left part
		argv_3457--;
		if (argv_3457 >= 0) {
			for (i=0 ; i<argv_3457 ; i++) {
				_left += _abs_filename[i];	
			}
		}

		if (_left == "") { // failed to retrieve the relative path
			bret = false;
		}
	}
	return (bret);
}	

void argv_3346 (argv_3715 _separator, argv_773 _path, vector<string>& _v_result) {
	_v_result.clear ();
	argv_3717 size = strlen (_path);
	string argv_1043;
	for (argv_3717 i=0 ; i<size ; i++) {
		if (_path[i] == _separator) {
			_v_result.push_back (argv_1043);	
			argv_1043 = "";
		}
		else {
			argv_1043 += _path[i];
		}
	}

	// don't forget the last argv_2806 (if any)
	if (argv_1043 != "") {
		_v_result.push_back (argv_1043);
	}
}


#if defined (__WIN32_OS__)
// delete only files matching the pattern given as a parameter.
bool argv_1115 (argv_773 _folder_name, argv_773 _pattern) {
	bool bret = true;
	char previous_current_directory[MAX_PATH];
	// save the previous argv_1043 directory
	GetCurrentDirectory (MAX_PATH, previous_current_directory);

	if (SetCurrentDirectory (_folder_name) == false) {
		bret = false;
	}
	else {	
		WIN32_FIND_DATA	FindData;
		HANDLE hFind = FindFirstFile (_pattern, &FindData);

		if (hFind == INVALID_HANDLE_VALUE) { // no argv_1314 found matching the pattern
			bret = true;
		}
		else {
			string full_filename = "";
			do {
				// if it is not a directory
				if (!(FindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
					full_filename = _folder_name;
					full_filename = full_filename + "\\" + FindData.cFileName;
					DeleteFile (full_filename.c_str());
				}
			}
			while (FindNextFile (hFind, &FindData)) ;
			FindClose (hFind);
		}
	}

	// restore the original argv_1043 directory
	SetCurrentDirectory (previous_current_directory);
	return (bret);
}
#endif // #if defined (__WIN32_OS__)


#if defined (__LINUX_OS__)
void argv_1115 (argv_773 _folder_name, argv_773 _pattern) {

}
#endif // #if defined (__LINUX_OS__)

void argv_577 (argv_3715 _data, vector<argv_772>& _v_atom) {
	argv_772 atom;
	atom.argv_3695		= argv_990;
	atom.argv_3810	= _data;
	_v_atom.push_back (atom);
}

void argv_577 (argv_3717 _data, vector<argv_772>& _v_atom) {
	argv_772 atom;
	atom.argv_3695			= argv_991;
	atom.argv_3811		= _data;
	_v_atom.push_back (atom);
}

void argv_577 (argv_773 _data, vector<argv_772>& _v_atom) {
	argv_772 atom;
	atom.argv_3695			= argv_989;
	atom.argv_3809	= _data;
	_v_atom.push_back (atom);
}

void argv_577 (const string& _data, vector<argv_772>& _v_atom) {
	argv_772 atom;
	atom.argv_3695			= argv_989;
	atom.argv_3809	= _data;
	_v_atom.push_back (atom);
}


bool argv_1294 (argv_773 _dirname, vector<string>& v_dir) {
	bool bret = true;
	string dirname = _dirname;
	char previous_current_directory[MAX_PATH];
	// save the previous argv_1043 directory
	GetCurrentDirectory (MAX_PATH, previous_current_directory);

	if (SetCurrentDirectory (_dirname) == false) {
		bret = false;
	}
	else {
		WIN32_FIND_DATA FindData; 
		HANDLE hFind = FindFirstFile ("*.*", &FindData);	

		if (hFind == INVALID_HANDLE_VALUE) {
			bret = false;
		}
		else {
			v_dir.clear ();
			argv_3717 name_size;
			do  {
				if (FindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
					if((strcmp(FindData.cFileName, ".")!=0) && (strcmp(FindData.cFileName, "..")!=0)) {
//if ! defined (EXPLORE_HIDDEN_SYSTEM_DIR)
//						if (is_hidden_system_file (FindData.cFileName) == true) {
//#if defined (DEBUG_SCANNER)
						name_size = dirname.size ();
						if (name_size > 0) {
							if (dirname[name_size - 1] != '\\') {
								v_dir.push_back (dirname + "\\" + FindData.cFileName);
							}
							else {
								v_dir.push_back (dirname + FindData.cFileName);
							}
						}
					}
				}
			}
			while (FindNextFile (hFind, &FindData)) ;
		}
		FindClose (hFind);
	}

	// restore the original argv_1043 directory
	SetCurrentDirectory (previous_current_directory);
	return (bret);
}


bool empty_directory (argv_773 _folderPath) {
	bool bret = true;

	if (argv_805 (_folderPath) == false) {
		bret = false;
	}
	else {
		char fileFound[MAX_PATH];
		WIN32_FIND_DATA info;
		HANDLE hp; 
		argv_3409 (fileFound, MAX_PATH, "%s\\*.*", _folderPath);
		fileFound[MAX_PATH - 1] = '\0';
		hp = FindFirstFile(fileFound, &info);
		do {
			if (!((strcmp(info.cFileName, ".")==0)||
				(strcmp(info.cFileName, "..")==0))) {
			  if((info.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)==
				  FILE_ATTRIBUTE_DIRECTORY) {
				  string subFolder = _folderPath;
				  subFolder.append("\\");
				  subFolder.append(info.cFileName);
				  empty_directory((char*)subFolder.c_str());
				  RemoveDirectory(subFolder.c_str());
			  }
			  else {
				argv_3409 (fileFound, MAX_PATH, "%s\\%s", _folderPath, info.cFileName);
				fileFound[MAX_PATH - 1] = '\0';
				argv_3213 (fileFound);

				BOOL retVal = DeleteFile(fileFound);
				if (retVal == 0) {
					DWORD argv_1239 = GetLastError ();
					char argv_3681[MAX_PATH];
					argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: DeleteFile(%s) failed ! (erno=%d)", fileFound, argv_1239);
					argv_3681[MAX_PATH - 1] = '\0';
					MessageBox (argv_2766, argv_3681, "", MB_ICONERROR);
					bret = false;
					break;
				}
			  }
			}
		}while(FindNextFile(hp, &info)); 
		FindClose(hp);
	}
	return (bret);
}


argv_3379 empty_and_remove_directory (argv_773 _folder_name) {
	argv_3379 argv_1892 = 0;
	bool bret = empty_directory (_folder_name);
	if (bret == false) {
		argv_1892 = 1;
	} 
	else if (RemoveDirectory (_folder_name) == 0) { // failed
		DWORD argv_1239 = GetLastError ();
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: empty_and_remove_directory(%s) failed ! (erno=%d)", _folder_name, argv_1239);
		argv_3681[MAX_PATH - 1] = '\0';
		MessageBox (argv_2766, argv_3681, "", MB_ICONERROR);
		argv_1892 = 2;
	}
	return (argv_1892);
}


bool argv_1317 (argv_773 _filename) {
#if defined (__WIN32_OS__) 
	bool bret = false;

	DWORD dwAttrs; 
	dwAttrs = GetFileAttributes (_filename); 
	if ((dwAttrs != -1) && (dwAttrs & FILE_ATTRIBUTE_READONLY)) {
		bret = true;
	}
#endif // #if defined (__WIN32_OS__) 
	return (bret);
}

bool argv_3213 (argv_773 _filename) {
	bool bret = true;
#if defined (__WIN32_OS__) 
	DWORD dwAttrs;
	dwAttrs = GetFileAttributes (_filename); 
	if (dwAttrs == -1) {
		bret = false;
	}
	else {
		if (!(dwAttrs & FILE_ATTRIBUTE_READONLY)) {
			bret = false;
		}
		else {
			dwAttrs &= ~FILE_ATTRIBUTE_READONLY;
			if (! SetFileAttributes (_filename, dwAttrs)) {
				int argv_1892 = GetLastError();
				bret = false;	
			}
			else {
				bret = true;
			}
		}
	}
#endif // #if defined (__WIN32_OS__) 
	return (bret);
}


bool argv_585 (argv_773 _filename) {
	bool bret = true;
#if defined (__WIN32_OS__) 
	DWORD dwAttrs;
	dwAttrs = GetFileAttributes (_filename); 
	if (dwAttrs == -1) {
		bret = false;
	}
	else {
		dwAttrs |= FILE_ATTRIBUTE_READONLY;
		if (! SetFileAttributes (_filename, dwAttrs)) {
			int argv_1892 = GetLastError();
			bret = false;	
		}
		else {
			bret = true;
		}
	}
#endif // #if defined (__WIN32_OS__) 
	return (bret);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1240		
// @@
// @@ INPUT			:
// @@ _ercode: argv_3717 : the error argv_877 whose associated argv_2271 is to
// @@                 be retrieved.
// @@
// @@ OUTPUT		:	
// @@ _erstring: char * : the argv_728 in which this function will
// @@       copy the argv_3266 of the lookup of the error argv_2271
// @@       associated with the error argv_877 '_ercode'.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to map an error argv_877 as an integer to
// @@ a corresponding error argv_2271.
// @@ Notice that if the '_ercode' parameter does not correspond
// @@ to a valid error argv_877, then the string returned will be 
// @@ 'UNKNOWN_ERROR'.
// @@ 
// @@ The lookup argv_3266 is stored into the '_erstring' parameter.
// @@ Notice that it is up to the caller to allocate the '_erstring'
// @@ argv_728, with a sufficient size (MAX_PATH is a recommended argv_3807).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	void argv_1240 (argv_3717 _ercode, char * _erstring) {
		switch (_ercode) {
			// kernel related errors
			case argv_2001                                    :  strncpy (_erstring, "argv_2001", MAX_PATH);							break;
			case argv_1958                          :  strncpy (_erstring, "argv_1958", MAX_PATH);				break;
			case argv_1951                   :  strncpy (_erstring, "argv_1951", MAX_PATH);			break;
			case argv_1949                    :  strncpy (_erstring, "argv_1949", MAX_PATH);			break;
			case argv_1955           :  strncpy (_erstring, "argv_1955", MAX_PATH);	break;
			case argv_1956			   :  strncpy (_erstring, "argv_1956", MAX_PATH);		break;
			case argv_1990                         :  strncpy (_erstring, "argv_1990", MAX_PATH);				break;
			case argv_1986                 :  strncpy (_erstring, "argv_1986", MAX_PATH);		break;
			case argv_1987               :  strncpy (_erstring, "argv_1987", MAX_PATH);		break;
			case argv_1988                     :  strncpy (_erstring, "argv_1988", MAX_PATH);			break;
			case argv_1985                  :  strncpy (_erstring, "argv_1985", MAX_PATH);		break;
			case argv_1959                        :  strncpy (_erstring, "argv_1959", MAX_PATH);				break;
			case argv_1963                   :  strncpy (_erstring, "argv_1963", MAX_PATH);			break;
			case argv_1992          :  strncpy (_erstring, "argv_1992", MAX_PATH);break;
			case argv_1996            :  strncpy (_erstring, "argv_1996", MAX_PATH);  break;
			case argv_1934                  :  strncpy (_erstring, "argv_1934", MAX_PATH);		break;
			case argv_1950           :  strncpy (_erstring, "argv_1950", MAX_PATH);	break;
			case argv_1953          :  strncpy (_erstring, "argv_1953", MAX_PATH);break;
			case argv_1954              :  strncpy (_erstring, "argv_1954", MAX_PATH);	break;
			case argv_1941           :  strncpy (_erstring, "argv_1941", MAX_PATH);	break;
			case argv_1942         :  strncpy (_erstring, "argv_1942", MAX_PATH);  break;
			case argv_1983                             :  strncpy (_erstring, "argv_1983", MAX_PATH);					break;
			case argv_1947            :  strncpy (_erstring, "argv_1947", MAX_PATH);  break;
			case argv_1984          :  strncpy (_erstring, "argv_1984", MAX_PATH);break;
			case argv_1935           :  strncpy (_erstring, "argv_1935", MAX_PATH); break;
			case argv_2004            :  strncpy (_erstring, "argv_2004", MAX_PATH);  break;
			case argv_1933                     :  strncpy (_erstring, "argv_1933", MAX_PATH);			break;
			case argv_2000			   :  strncpy (_erstring, "argv_2000", MAX_PATH);	break;
			case argv_1999				   :  strncpy (_erstring, "argv_1999", MAX_PATH);		break;	
			case argv_1948					   :  strncpy (_erstring, "argv_1948", MAX_PATH);				break;	
			case argv_1998	       :  strncpy (_erstring, "argv_1998", MAX_PATH); break;
			case argv_1952         :  strncpy (_erstring, "argv_1952", MAX_PATH); break;
			case argv_1940        :  strncpy (_erstring, "argv_1940", MAX_PATH); break;
			case argv_1945				   :  strncpy (_erstring, "argv_1945", MAX_PATH);			break;
			case argv_1938			   :  strncpy (_erstring, "argv_1938", MAX_PATH);	break;
			case argv_2003					   :  strncpy (_erstring, "argv_2003", MAX_PATH);			break;
			case argv_1946 :  strncpy (_erstring, "argv_1946", MAX_PATH);	break;
			case argv_1989					   :  strncpy (_erstring, "argv_1989", MAX_PATH);			break;
			case argv_1944			   :  strncpy (_erstring, "argv_1944", MAX_PATH);	break;
			case argv_1995			   :  strncpy (_erstring, "argv_1995", MAX_PATH);	break;
			case argv_2005					   :  strncpy (_erstring, "argv_2005", MAX_PATH);			break;
			case argv_2002					   :  strncpy (_erstring, "argv_2002", MAX_PATH);			break;
			case argv_1943	   :  strncpy (_erstring, "argv_1943", MAX_PATH);	break;
			case argv_1993			   :  strncpy (_erstring, "argv_1993", MAX_PATH);	break;
			case argv_1957			   :  strncpy (_erstring, "argv_1957", MAX_PATH);		break;

			// library loader related errors
			case argv_2065                                :  strncpy (_erstring, "argv_2065", MAX_PATH);						break;
			case argv_2056                          :  strncpy (_erstring, "argv_2056", MAX_PATH);				break;
			case argv_2062                    :  strncpy (_erstring, "argv_2062", MAX_PATH);			break;
			case argv_2061                 :  strncpy (_erstring, "argv_2061", MAX_PATH);		break;
			case argv_2063                        :  strncpy (_erstring, "argv_2063", MAX_PATH);				break;
			case argv_2057                  :  strncpy (_erstring, "argv_2057", MAX_PATH);		break;
			case argv_2066                         :  strncpy (_erstring, "argv_2066", MAX_PATH);				break;
			case argv_2058                       :  strncpy (_erstring, "argv_2058", MAX_PATH);				break;
			case argv_2064                  :  strncpy (_erstring, "argv_2064", MAX_PATH);		break;
			case argv_2060            :  strncpy (_erstring, "argv_2060", MAX_PATH);  break;
			case argv_2059						   :  strncpy (_erstring, "argv_2059", MAX_PATH);				break;

			// plugin loader related errors
			case argv_3042                                    :  strncpy (_erstring, "argv_3042", MAX_PATH);							break;
			case argv_3022                          :  strncpy (_erstring, "argv_3022", MAX_PATH);				break;
			case argv_3021                   :  strncpy (_erstring, "argv_3021", MAX_PATH);			break;
			case argv_3019                    :  strncpy (_erstring, "argv_3019", MAX_PATH);			break;
			case argv_3031                               :  strncpy (_erstring, "argv_3031", MAX_PATH);						break;
			case argv_3011                 :  strncpy (_erstring, "argv_3011", MAX_PATH);		break;
			case argv_3032                     :  strncpy (_erstring, "argv_3032", MAX_PATH);			break;
			case argv_3040                            :  strncpy (_erstring, "argv_3040", MAX_PATH);					break;
			case argv_3041                           :  strncpy (_erstring, "argv_3041", MAX_PATH);					break;
			case argv_3043                      :  strncpy (_erstring, "argv_3043", MAX_PATH);			break;
			case argv_3051             :  strncpy (_erstring, "argv_3051", MAX_PATH);	break;
			case argv_3030                                :  strncpy (_erstring, "argv_3030", MAX_PATH);						break;
			case argv_3016                               :  strncpy (_erstring, "argv_3016", MAX_PATH);						break;
			case argv_3014                              :  strncpy (_erstring, "argv_3014", MAX_PATH);					break;
			case argv_3017                              :  strncpy (_erstring, "argv_3017", MAX_PATH);					break;
			case argv_3039                        :  strncpy (_erstring, "argv_3039", MAX_PATH);				break;
			case argv_3034                                :  strncpy (_erstring, "argv_3034", MAX_PATH);						break;
			case argv_3035                 :  strncpy (_erstring, "argv_3035", MAX_PATH);		break;
			case argv_3036                 :  strncpy (_erstring, "argv_3036", MAX_PATH);		break;
			case argv_3033                      :  strncpy (_erstring, "argv_3033", MAX_PATH);			break;
			case argv_3037                     :  strncpy (_erstring, "argv_3037", MAX_PATH);			break;
			case argv_3038                  :  strncpy (_erstring, "argv_3038", MAX_PATH);		break;
			case argv_3010                          :  strncpy (_erstring, "argv_3010", MAX_PATH);				break;
			case argv_3018               :  strncpy (_erstring, "argv_3018", MAX_PATH);		break;
			case argv_3020              :  strncpy (_erstring, "argv_3020", MAX_PATH);	break;
			case argv_3013        :  strncpy (_erstring, "argv_3013", MAX_PATH);	break;

			// compressor/decompressor related errors
			case argv_2029                                  :  strncpy (_erstring, "argv_2029", MAX_PATH);						break;
			case argv_2028                           :  strncpy (_erstring, "argv_2028", MAX_PATH);					break;
			case argv_2030                        :  strncpy (_erstring, "argv_2030", MAX_PATH);				break;
			case argv_2027                                 :  strncpy (_erstring, "argv_2027", MAX_PATH);						break;
			case argv_2031                     :  strncpy (_erstring, "argv_2031", MAX_PATH);			break;
			case argv_2032                   :  strncpy (_erstring, "argv_2032", MAX_PATH);			break;

			// cypher/decypher related errors
			case argv_1068                                    :  strncpy (_erstring, "argv_1068", MAX_PATH);							break;
			case argv_1066                          :  strncpy (_erstring, "argv_1066", MAX_PATH);				break;
			case argv_1071                          :  strncpy (_erstring, "argv_1071", MAX_PATH);				break;
			case argv_1067                                   :  strncpy (_erstring, "argv_1067", MAX_PATH);							break;

			// xmemroy related errors
			case argv_3852                                      :  strncpy (_erstring, "argv_3852", MAX_PATH);							break;
			case argv_3850                       :  strncpy (_erstring, "argv_3850", MAX_PATH);				break;
			case argv_3844                     :  strncpy (_erstring, "argv_3844", MAX_PATH);			break;
			case argv_3843                      :  strncpy (_erstring, "argv_3843", MAX_PATH);			break;
			case argv_3845                            :  strncpy (_erstring, "argv_3845", MAX_PATH);					break;

			// coff argv_1314 loader related errors
			case argv_2800                                    :  strncpy (_erstring, "argv_2800", MAX_PATH);							break;
			case argv_2791                             :  strncpy (_erstring, "argv_2791", MAX_PATH);					break;
			case argv_2798                                :  strncpy (_erstring, "argv_2798", MAX_PATH);						break;
			case argv_2790                       :  strncpy (_erstring, "argv_2790", MAX_PATH);				break;
			case argv_2799                    :  strncpy (_erstring, "argv_2799", MAX_PATH);			break;
			case argv_2786                              :  strncpy (_erstring, "argv_2786", MAX_PATH);					break;
			case argv_2794                    :  strncpy (_erstring, "argv_2794", MAX_PATH);			break;
			case argv_2789                      :  strncpy (_erstring, "argv_2789", MAX_PATH);			break;
			case argv_2797                        :  strncpy (_erstring, "argv_2797", MAX_PATH);				break;
			case argv_2796                          :  strncpy (_erstring, "argv_2796", MAX_PATH);				break;
			case argv_2792                   :  strncpy (_erstring, "argv_2792", MAX_PATH);			break;
			case argv_2793                   :  strncpy (_erstring, "argv_2793", MAX_PATH);			break;
			case argv_2802                          :  strncpy (_erstring, "argv_2802", MAX_PATH);				break;
			case argv_2787                   :  strncpy (_erstring, "argv_2787", MAX_PATH);			break;
			case argv_2801                     :  strncpy (_erstring, "argv_2801", MAX_PATH);			break;
			case argv_2795          :  strncpy (_erstring, "argv_2795", MAX_PATH);  break;
			case argv_2788          :  strncpy (_erstring, "argv_2788", MAX_PATH);  break;

			// list related errors
			case argv_2092                                      :  strncpy (_erstring, "argv_2092", MAX_PATH);							break;
			case argv_2091                     :  strncpy (_erstring, "argv_2091", MAX_PATH);			break;
			case argv_2090                            :  strncpy (_erstring, "argv_2090", MAX_PATH);					break;
			case argv_2089                 :  strncpy (_erstring, "argv_2089", MAX_PATH);		break;
			case argv_2083                                  :  strncpy (_erstring, "argv_2083", MAX_PATH);						break;
			case argv_2088              :  strncpy (_erstring, "argv_2088", MAX_PATH);	break;
			case argv_956     :  strncpy (_erstring, "argv_956", MAX_PATH);	break;
			case argv_2081						   :  strncpy (_erstring, "argv_2081", MAX_PATH);				break;

			// argv_1314 argv_3695 detection argv_3266 related errors
			case argv_3710                              :  strncpy (_erstring, "argv_3710", MAX_PATH);					break;
			case argv_3707                    :  strncpy (_erstring, "argv_3707", MAX_PATH);			break;
			case argv_3708             :  strncpy (_erstring, "argv_3708", MAX_PATH);	break;
			case argv_3706      :  strncpy (_erstring, "argv_3706", MAX_PATH);  break;
			case argv_3709                             :  strncpy (_erstring, "argv_3709", MAX_PATH);					break;

			// kernel related errors
			case argv_3009                                :  strncpy (_erstring, "argv_3009", MAX_PATH);						break;
			case argv_3006                      :  strncpy (_erstring, "argv_3006", MAX_PATH);			break;
			case argv_3004               :  strncpy (_erstring, "argv_3004", MAX_PATH);		break;
			case argv_3003                :  strncpy (_erstring, "argv_3003", MAX_PATH);		break;
			case argv_3005       :  strncpy (_erstring, "argv_3005", MAX_PATH);  break;
			case argv_3001                         :  strncpy (_erstring, "argv_3001", MAX_PATH);				break;
			case argv_3007                       :  strncpy (_erstring, "argv_3007", MAX_PATH);				break;
			case argv_2999                    :  strncpy (_erstring, "argv_2999", MAX_PATH);			break;
			case argv_3002                          :  strncpy (_erstring, "argv_3002", MAX_PATH);				break;
			case argv_3000                      :  strncpy (_erstring, "argv_3000", MAX_PATH);			break;
			case argv_3008                     :  strncpy (_erstring, "argv_3008", MAX_PATH);			break;

			// scanner related errors
			case argv_1331                              :  strncpy (_erstring, "argv_1331", MAX_PATH);					break;
			case argv_1328                    :  strncpy (_erstring, "argv_1328", MAX_PATH);			break;
			case argv_1322              :  strncpy (_erstring, "argv_1322", MAX_PATH);	break;
			case argv_1330             :  strncpy (_erstring, "argv_1330", MAX_PATH);	break;
			case argv_1321                      :  strncpy (_erstring, "argv_1321", MAX_PATH);			break;
			case argv_1327			   :  strncpy (_erstring, "argv_1327", MAX_PATH);		break;
			case argv_1333				   :  strncpy (_erstring, "argv_1333", MAX_PATH);		break;
			case argv_1332				   :  strncpy (_erstring, "argv_1332", MAX_PATH);		break;
			case argv_1329			   :  strncpy (_erstring, "argv_1329", MAX_PATH);		break;
			case argv_1323		   :  strncpy (_erstring, "argv_1323", MAX_PATH);		break;
			case argv_1324		   :  strncpy (_erstring, "argv_1324", MAX_PATH);		break;
			case argv_1326		   :  strncpy (_erstring, "argv_1326", MAX_PATH);		break;
			case argv_1325	   :  strncpy (_erstring, "argv_1325", MAX_PATH);	break;

			// symbol table related errors
			case argv_3496                              :  strncpy (_erstring, "argv_3496", MAX_PATH);					break;
			case argv_3494                    :  strncpy (_erstring, "argv_3494", MAX_PATH);			break;
			case argv_3497               :  strncpy (_erstring, "argv_3497", MAX_PATH);		break;
			case argv_3495                       :  strncpy (_erstring, "argv_3495", MAX_PATH);				break;
			case argv_3493             :  strncpy (_erstring, "argv_3493", MAX_PATH);	break;
			case argv_3492              :  strncpy (_erstring, "argv_3492", MAX_PATH);	break;

			// plugin manager related errors
			case argv_3029                            :  strncpy (_erstring, "argv_3029", MAX_PATH);					break;
			case argv_3026                  :  strncpy (_erstring, "argv_3026", MAX_PATH);		break;
			case argv_3024            :  strncpy (_erstring, "argv_3024", MAX_PATH);  break;
			case argv_3025           :  strncpy (_erstring, "argv_3025", MAX_PATH); break;
			case argv_3028             :  strncpy (_erstring, "argv_3028", MAX_PATH);	break;
			case argv_3027                     :  strncpy (_erstring, "argv_3027", MAX_PATH);			break;

			// COFF loader related errors
			case argv_894                               :  strncpy (_erstring, "argv_894", MAX_PATH);						break;
			case argv_887                     :  strncpy (_erstring, "argv_887", MAX_PATH);			break;
			case argv_883               :  strncpy (_erstring, "argv_883", MAX_PATH);		break;
			case argv_884              :  strncpy (_erstring, "argv_884", MAX_PATH);	break;
			case argv_885                 :  strncpy (_erstring, "argv_885", MAX_PATH);		break;
			case argv_895             :  strncpy (_erstring, "argv_895", MAX_PATH);	break;
			case argv_882                   :  strncpy (_erstring, "argv_882", MAX_PATH);			break;
			case argv_881              :  strncpy (_erstring, "argv_881", MAX_PATH);	break;
			case argv_891                              :  strncpy (_erstring, "argv_891", MAX_PATH);					break;
			case argv_897            :  strncpy (_erstring, "argv_897", MAX_PATH);  break;
			case argv_879          :  strncpy (_erstring, "argv_879", MAX_PATH);break;
			case argv_886            :  strncpy (_erstring, "argv_886", MAX_PATH);  break;
			case argv_896                 :  strncpy (_erstring, "argv_896", MAX_PATH);		break;
			case argv_880             :  strncpy (_erstring, "argv_880", MAX_PATH);	break;
			case argv_890              :  strncpy (_erstring, "argv_890", MAX_PATH);	break;
			case argv_893             :  strncpy (_erstring, "argv_893", MAX_PATH);	break;
			case argv_900           :  strncpy (_erstring, "argv_900", MAX_PATH); break;
			case argv_899          :  strncpy (_erstring, "argv_899", MAX_PATH);break;
			case argv_888                    :  strncpy (_erstring, "argv_888", MAX_PATH);			break;
			case argv_898                   :  strncpy (_erstring, "argv_898", MAX_PATH);			break;
			case argv_892              :  strncpy (_erstring, "argv_892", MAX_PATH);	break;
			case argv_889       :  strncpy (_erstring, "argv_889", MAX_PATH); break;

			// complex list related errors
			case argv_960                              :  strncpy (_erstring, "argv_960", MAX_PATH);					break;
			case argv_957                    :  strncpy (_erstring, "argv_957", MAX_PATH);			break;
			case argv_955      :  strncpy (_erstring, "argv_955", MAX_PATH);  break;
			case argv_958             :  strncpy (_erstring, "argv_958", MAX_PATH);	break;
			case argv_959                       :  strncpy (_erstring, "argv_959", MAX_PATH);				break;
			case argv_954                          :  strncpy (_erstring, "argv_954", MAX_PATH);				break;
			case argv_953                :  strncpy (_erstring, "argv_953", MAX_PATH);		break;

			// argv_1314 mapper related errors
			case argv_1380                                   :  strncpy (_erstring, "argv_1380", MAX_PATH);							break;
			case argv_1379                               :  strncpy (_erstring, "argv_1379", MAX_PATH);						break;
			case argv_1377                         :  strncpy (_erstring, "argv_1377", MAX_PATH);				break;
			case argv_1375           :  strncpy (_erstring, "argv_1375", MAX_PATH);	break;
			case argv_1378                  :  strncpy (_erstring, "argv_1378", MAX_PATH);		break;
			case argv_1376                  :  strncpy (_erstring, "argv_1376", MAX_PATH);		break;
			case argv_1374                   :  strncpy (_erstring, "argv_1374", MAX_PATH);			break;

			// PE extractor related error
			case argv_2954							   :  strncpy (_erstring, "argv_2954", MAX_PATH);					break;	
			case argv_2951					   :  strncpy (_erstring, "argv_2951", MAX_PATH);			break;			
			case argv_2950      :  strncpy (_erstring, "argv_2950", MAX_PATH); break;
			case argv_2953			   :  strncpy (_erstring, "argv_2953", MAX_PATH);	break;
			case argv_2952						   :  strncpy (_erstring, "argv_2952", MAX_PATH);				break;
			case argv_2949				   :  strncpy (_erstring, "argv_2949", MAX_PATH);		break;

			// argv_2234 related errors
			case argv_2262									   :  strncpy (_erstring, "argv_2262", MAX_PATH);							break;	
			case argv_2248                :  strncpy (_erstring, "argv_2248", MAX_PATH);		break;	
			case argv_2245               :  strncpy (_erstring, "argv_2245", MAX_PATH);		break;	
			case argv_2237               :  strncpy (_erstring, "argv_2237", MAX_PATH);		break;	
			case argv_2246                 :  strncpy (_erstring, "argv_2246", MAX_PATH);		break;	
			case argv_2247              :  strncpy (_erstring, "argv_2247", MAX_PATH);	break;	
			case argv_2249                           :  strncpy (_erstring, "argv_2249", MAX_PATH);					break;	
			case argv_2261                      :  strncpy (_erstring, "argv_2261", MAX_PATH);			break;	
			case argv_2236                                 :  strncpy (_erstring, "argv_2236", MAX_PATH);   			        break;	
			case argv_2250                               :  strncpy (_erstring, "argv_2250", MAX_PATH);   			        break;	
			case argv_2235                           :  strncpy (_erstring, "argv_2235", MAX_PATH); 		        break;	
			case argv_2238                           :  strncpy (_erstring, "argv_2238", MAX_PATH); 		        break;	
			case argv_2240                              :  strncpy (_erstring, "argv_2240", MAX_PATH); 		            break;	
			case argv_2239                 :  strncpy (_erstring, "argv_2239", MAX_PATH);       break;	
			case argv_2241              :  strncpy (_erstring, "argv_2241", MAX_PATH);    break;	
			case argv_2256                                 :  strncpy (_erstring, "argv_2256", MAX_PATH);						break;	
			case argv_2244                                :  strncpy (_erstring, "argv_2244", MAX_PATH);						break;	
			case argv_2253                                 :  strncpy (_erstring, "argv_2253", MAX_PATH);						break;	
			case argv_2260						   :  strncpy (_erstring, "argv_2260", MAX_PATH);				break;
			case argv_2254				   :  strncpy (_erstring, "argv_2254", MAX_PATH);		break;
			case argv_2257				   :  strncpy (_erstring, "argv_2257", MAX_PATH);		break;
			case argv_2255							   :  strncpy (_erstring, "argv_2255", MAX_PATH);						break;
			case argv_2252								   :  strncpy (_erstring, "argv_2252", MAX_PATH);						break;

			// packet coder related errors
			case argv_2863                                 :  strncpy (_erstring, "argv_2863", MAX_PATH); 		                break;	
			case argv_2860                       :  strncpy (_erstring, "argv_2860", MAX_PATH);             break;	
			case argv_2859                :  strncpy (_erstring, "argv_2859", MAX_PATH);      break;	
			case argv_2862                                :  strncpy (_erstring, "argv_2862", MAX_PATH);                      break;	
			case argv_2861                :  strncpy (_erstring, "argv_2861", MAX_PATH);      break;	
			case argv_2858                          :  strncpy (_erstring, "argv_2858", MAX_PATH);                break;	
				
			// packet related errors
			case argv_2901                                    :  strncpy (_erstring, "argv_2901", MAX_PATH);                             break;	
			case argv_2873                   :  strncpy (_erstring, "argv_2873", MAX_PATH);            break;	
			case argv_2877                     :  strncpy (_erstring, "argv_2877", MAX_PATH);              break;	
			case argv_2880							:  strncpy (_erstring, "argv_2880", MAX_PATH);					break;	
			case argv_2874                   :  strncpy (_erstring, "argv_2874", MAX_PATH);			break;	
			case argv_2883                               :  strncpy (_erstring, "argv_2883", MAX_PATH);			            break;	
			case argv_2878            :  strncpy (_erstring, "argv_2878", MAX_PATH);	    break;	
			case argv_2857			:  strncpy (_erstring, "argv_2857", MAX_PATH);	break;	
			case argv_2875	    :  strncpy (_erstring, "argv_2875", MAX_PATH);	break;	
			case argv_2866						:  strncpy (_erstring, "argv_2866", MAX_PATH);				break;	
			case argv_2865					:  strncpy (_erstring, "argv_2865", MAX_PATH);				break;	
			case argv_2888					:  strncpy (_erstring, "argv_2888", MAX_PATH);				break;	
			case argv_2869						:  strncpy (_erstring, "argv_2869", MAX_PATH);				break;	
			case argv_2867				:  strncpy (_erstring, "argv_2867", MAX_PATH);			break;	
			case argv_2870						:  strncpy (_erstring, "argv_2870", MAX_PATH);				break;	
			case argv_2871						:  strncpy (_erstring, "argv_2871", MAX_PATH);				break;	
			case argv_2868					:  strncpy (_erstring, "argv_2868", MAX_PATH);				break;	
			case argv_2864						:  strncpy (_erstring, "argv_2864", MAX_PATH);					break;	
			case argv_2881						:  strncpy (_erstring, "argv_2881", MAX_PATH);					break;	
			case argv_2905			:  strncpy (_erstring, "argv_2905", MAX_PATH);		break;	
			case argv_2879		:  strncpy (_erstring, "argv_2879", MAX_PATH);	break;	
			case PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET			:  strncpy (_erstring, "PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET", MAX_PATH);		break;	
			case argv_2872					:  strncpy (_erstring, "argv_2872", MAX_PATH);				break;	
			case argv_2882					:  strncpy (_erstring, "argv_2882", MAX_PATH);				break;	
			case argv_2876				:  strncpy (_erstring, "argv_2876", MAX_PATH);			break;	
			case PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET			:  strncpy (_erstring, "PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET", MAX_PATH);		break;	

			// test related error codes
			case argv_3628						:  strncpy (_erstring, "argv_3628", MAX_PATH);					break;	
			case argv_3627									:  strncpy (_erstring, "argv_3627", MAX_PATH);								break;	
			case argv_3607					:  strncpy (_erstring, "argv_3607", MAX_PATH);				break;	
			case argv_3606		:  strncpy (_erstring, "argv_3606", MAX_PATH);	break;	
			case argv_3612							:  strncpy (_erstring, "argv_3612", MAX_PATH);						break;	
			case argv_3604						:  strncpy (_erstring, "argv_3604", MAX_PATH);					break;	
			case argv_3605						:  strncpy (_erstring, "argv_3605", MAX_PATH);					break;	
			case argv_3609				:  strncpy (_erstring, "argv_3609", MAX_PATH);			break;	
			case argv_3608				:  strncpy (_erstring, "argv_3608", MAX_PATH);			break;	
			case argv_3613					:  strncpy (_erstring, "argv_3613", MAX_PATH);				break;	
			case argv_3611				:  strncpy (_erstring, "argv_3611", MAX_PATH);			break;	
			case argv_3610				:  strncpy (_erstring, "argv_3610", MAX_PATH);			break;	

			// test related error codes (internal test errors)
			case argv_3616							:  strncpy (_erstring, "argv_3616", MAX_PATH);						break;	
			case argv_3615				:  strncpy (_erstring, "argv_3615", MAX_PATH);			break;	

			// event loop related events
			case argv_1264								:  strncpy (_erstring, "argv_1264", MAX_PATH);							break;	
			case argv_1254					:  strncpy (_erstring, "argv_1254", MAX_PATH);				break;	
			case argv_1249						:  strncpy (_erstring, "argv_1249", MAX_PATH);					break;	
			case argv_1265					:  strncpy (_erstring, "argv_1265", MAX_PATH);				break;	
			case argv_1250				:  strncpy (_erstring, "argv_1250", MAX_PATH);			break;	
			case argv_1259							:  strncpy (_erstring, "argv_1259", MAX_PATH);						break;	
			case argv_1267						:  strncpy (_erstring, "argv_1267", MAX_PATH);					break;	
			case argv_1251			:  strncpy (_erstring, "argv_1251", MAX_PATH);		break;	
			case argv_1260						:  strncpy (_erstring, "argv_1260", MAX_PATH);					break;	
			case argv_1257					:  strncpy (_erstring, "argv_1257", MAX_PATH);				break;	
			case argv_1261					:  strncpy (_erstring, "argv_1261", MAX_PATH);				break;	
			case argv_1255			:  strncpy (_erstring, "argv_1255", MAX_PATH);		break;	
			case argv_1252			:  strncpy (_erstring, "argv_1252", MAX_PATH);		break;	
			case argv_1256			:  strncpy (_erstring, "argv_1256", MAX_PATH);		break;	
			case argv_1253					:  strncpy (_erstring, "argv_1253", MAX_PATH);				break;	
			case argv_1266					:  strncpy (_erstring, "argv_1266", MAX_PATH);				break;	
			case argv_1258					:  strncpy (_erstring, "argv_1258", MAX_PATH);				break;	
			case argv_1263						:  strncpy (_erstring, "argv_1263", MAX_PATH);					break;	
			case argv_1262				:  strncpy (_erstring, "argv_1262", MAX_PATH);			break;	

			// client argv_1073 related errors
			case argv_845							:  strncpy (_erstring, "argv_845", MAX_PATH);						break;	
			case argv_843			:  strncpy (_erstring, "argv_843", MAX_PATH);		break;	
			case argv_844				:  strncpy (_erstring, "argv_844", MAX_PATH);			break;	

			// scanning daemon related errors
			case argv_3303							:  strncpy (_erstring, "argv_3303", MAX_PATH);						break;	
			case argv_3302				:  strncpy (_erstring, "argv_3302", MAX_PATH);			break;	
			case argv_3301			:  strncpy (_erstring, "argv_3301", MAX_PATH);		break;	
			case argv_3291			:  strncpy (_erstring, "argv_3291", MAX_PATH);		break;	
			case argv_3297				:  strncpy (_erstring, "argv_3297", MAX_PATH);			break;	
			case argv_3292				:  strncpy (_erstring, "argv_3292", MAX_PATH);			break;	
			case argv_3300			:  strncpy (_erstring, "argv_3300", MAX_PATH);		break;	
			case argv_3295			:  strncpy (_erstring, "argv_3295", MAX_PATH);		break;	
			case argv_3296					:  strncpy (_erstring, "argv_3296", MAX_PATH);				break;	
			case argv_3293			:  strncpy (_erstring, "argv_3293", MAX_PATH);		break;	
			case argv_3298			:  strncpy (_erstring, "argv_3298", MAX_PATH);		break;	
			case argv_3299				:  strncpy (_erstring, "argv_3299", MAX_PATH);			break;	
			case argv_3294		:  strncpy (_erstring, "argv_3294", MAX_PATH);	break;	
			case argv_3305	:  strncpy (_erstring, "argv_3305", MAX_PATH);break;	
			case argv_3304		:  strncpy (_erstring, "argv_3304", MAX_PATH);	break;	

			// com client related errors
			case argv_922								:  strncpy (_erstring, "argv_922", MAX_PATH);							break;	
			case argv_916					:  strncpy (_erstring, "argv_916", MAX_PATH);				break;	
			case argv_914		:  strncpy (_erstring, "argv_914", MAX_PATH);	break;	
			case argv_917			:  strncpy (_erstring, "argv_917", MAX_PATH);		break;	
			case argv_918						:  strncpy (_erstring, "argv_918", MAX_PATH);					break;	
			case argv_915		:  strncpy (_erstring, "argv_915", MAX_PATH);	break;	
			case argv_923					:  strncpy (_erstring, "argv_923", MAX_PATH);				break;
			case argv_921						:  strncpy (_erstring, "argv_921", MAX_PATH);					break;

			// gateway related errors
			case argv_1622								:  strncpy (_erstring, "argv_1622", MAX_PATH);							break;	
			case argv_1619						:  strncpy (_erstring, "argv_1619", MAX_PATH);					break;	
			case argv_1620					:  strncpy (_erstring, "argv_1620", MAX_PATH);				break;	
			case argv_1618			:  strncpy (_erstring, "argv_1618", MAX_PATH);		break;	

 			// kernel manager related errors
			case argv_1981								:  strncpy (_erstring, "argv_1981", MAX_PATH);							break;	
			case argv_1971					:  strncpy (_erstring, "argv_1971", MAX_PATH);				break;	
			case argv_1976						:  strncpy (_erstring, "argv_1976", MAX_PATH);					break;	
			case argv_1973					:  strncpy (_erstring, "argv_1973", MAX_PATH);				break;	
			case argv_1969		:  strncpy (_erstring, "argv_1969", MAX_PATH);	break;	
			case argv_1970			:  strncpy (_erstring, "argv_1970", MAX_PATH);		break;	
			case argv_1974				:  strncpy (_erstring, "argv_1974", MAX_PATH);			break;	
			case argv_1968	:  strncpy (_erstring, "argv_1968", MAX_PATH);break;	
			case argv_1966			:  strncpy (_erstring, "argv_1966", MAX_PATH);		break;	
			case argv_1972			:  strncpy (_erstring, "argv_1972", MAX_PATH);		break;	
			case argv_1965			:  strncpy (_erstring, "argv_1965", MAX_PATH);		break;	
			case argv_1967		:  strncpy (_erstring, "argv_1967", MAX_PATH);	break;	
			case argv_1964					:  strncpy (_erstring, "argv_1964", MAX_PATH);				break;	
			case argv_1975		:  strncpy (_erstring, "argv_1975", MAX_PATH);	break;	

			// admin related errors
			case argv_3787							:  strncpy (_erstring, "argv_3787", MAX_PATH);								break;
			case argv_3780				:  strncpy (_erstring, "argv_3780", MAX_PATH);					break;
			case argv_3776		:  strncpy (_erstring, "argv_3776", MAX_PATH);			break;
			case argv_3784		:  strncpy (_erstring, "argv_3784", MAX_PATH);			break;
			case argv_3775				:  strncpy (_erstring, "argv_3775", MAX_PATH);					break;
			case argv_3777				:  strncpy (_erstring, "argv_3777", MAX_PATH);					break;
			case argv_3778	:  strncpy (_erstring, "argv_3778", MAX_PATH);		break;
			case argv_3779		:  strncpy (_erstring, "argv_3779", MAX_PATH);			break;
			case argv_3782	:  strncpy (_erstring, "argv_3782", MAX_PATH);		break;
			case argv_3788:  strncpy (_erstring, "argv_3788", MAX_PATH);	break;
			case argv_3783					:  strncpy (_erstring, "argv_3783", MAX_PATH);						break;
			case argv_3781		:  strncpy (_erstring, "argv_3781", MAX_PATH);			break;
			case argv_3789		:  strncpy (_erstring, "argv_3789", MAX_PATH);			break;
			case argv_3786	:  strncpy (_erstring, "argv_3786", MAX_PATH);		break;	
			case argv_3790					:  strncpy (_erstring, "argv_3790", MAX_PATH);						break;
			case argv_3791	:  strncpy (_erstring, "argv_3791", MAX_PATH);		break;

			// resolved shelf related errors
			case argv_3264							:  strncpy (_erstring, "argv_3264", MAX_PATH);						break;
			case argv_3261				:  strncpy (_erstring, "argv_3261", MAX_PATH);			break;
			case argv_3258		:  strncpy (_erstring, "argv_3258", MAX_PATH);	break;
			case argv_3259						:  strncpy (_erstring, "argv_3259", MAX_PATH);					break;
			case argv_3260					:  strncpy (_erstring, "argv_3260", MAX_PATH);				break;
			case argv_3263				:  strncpy (_erstring, "argv_3263", MAX_PATH);			break;
			case argv_3262	:  strncpy (_erstring, "argv_3262", MAX_PATH);break;

			// spyware manager related errors
			case argv_3422							:  strncpy (_erstring, "argv_3422", MAX_PATH);						break;
			case argv_3420					:  strncpy (_erstring, "argv_3420", MAX_PATH);				break;
			case argv_3421			:  strncpy (_erstring, "argv_3421", MAX_PATH);		break;
			case argv_3419		:  strncpy (_erstring, "argv_3419", MAX_PATH);	break;

			// inner argv_3095 related errors
			case argv_1887								:  strncpy (_erstring, "argv_1887", MAX_PATH);							break;
			case argv_1886					:  strncpy (_erstring, "argv_1886", MAX_PATH);				break;
			case argv_1883					:  strncpy (_erstring, "argv_1883", MAX_PATH);				break;
			case argv_1882			:  strncpy (_erstring, "argv_1882", MAX_PATH);		break;
			case argv_1885			:  strncpy (_erstring, "argv_1885", MAX_PATH);		break;
			case argv_1884			:  strncpy (_erstring, "argv_1884", MAX_PATH);		break;

			// inner client related errors
			case argv_1880							:  strncpy (_erstring, "argv_1880", MAX_PATH);						break;
			case argv_1877					:  strncpy (_erstring, "argv_1877", MAX_PATH);				break;
			case argv_1875		:  strncpy (_erstring, "argv_1875", MAX_PATH);	break;
			case argv_1878			:  strncpy (_erstring, "argv_1878", MAX_PATH);		break;
			case argv_1881					:  strncpy (_erstring, "argv_1881", MAX_PATH);				break;
			case argv_1874					:  strncpy (_erstring, "argv_1874", MAX_PATH);				break;
			case argv_1879		:  strncpy (_erstring, "argv_1879", MAX_PATH);	break;
			case argv_1876		:  strncpy (_erstring, "argv_1876", MAX_PATH);	break;

			// admin client related errors
			case argv_619							:  strncpy (_erstring, "argv_619", MAX_PATH);						break;
			case argv_614					:  strncpy (_erstring, "argv_614", MAX_PATH);				break;
			case argv_612	:  strncpy (_erstring, "argv_612", MAX_PATH); break;
			case argv_616			:  strncpy (_erstring, "argv_616", MAX_PATH);		break;
			case argv_613		:  strncpy (_erstring, "argv_613", MAX_PATH);	break;
			case argv_618				:  strncpy (_erstring, "argv_618", MAX_PATH);			break;
			case argv_617					:  strncpy (_erstring, "argv_617", MAX_PATH);				break;
			case argv_615					:  strncpy (_erstring, "argv_615", MAX_PATH);				break;

			// archive extractor related errors
			case argv_660						:  strncpy (_erstring, "argv_660", MAX_PATH);					break;
			case argv_662			:  strncpy (_erstring, "argv_662", MAX_PATH);		break;
			case argv_654					:  strncpy (_erstring, "argv_654", MAX_PATH);				break;
			case argv_655				:  strncpy (_erstring, "argv_655", MAX_PATH);			break;
			case argv_656			:  strncpy (_erstring, "argv_656", MAX_PATH);		break;
			case argv_661			:  strncpy (_erstring, "argv_661", MAX_PATH);		break;
			case argv_657		:  strncpy (_erstring, "argv_657", MAX_PATH);	break;
			case argv_653		:  strncpy (_erstring, "argv_653", MAX_PATH);	break;
			case argv_659		:  strncpy (_erstring, "argv_659", MAX_PATH);	break;
			case argv_649		:  strncpy (_erstring, "argv_649", MAX_PATH);	break;
			case argv_650				:  strncpy (_erstring, "argv_650", MAX_PATH);			break;
			case argv_651				:  strncpy (_erstring, "argv_651", MAX_PATH);			break;
			case argv_652				:  strncpy (_erstring, "argv_652", MAX_PATH);			break;

			// archive creator related errors
			case argv_644						:  strncpy (_erstring, "argv_644", MAX_PATH);					break;
			case argv_647			:  strncpy (_erstring, "argv_647", MAX_PATH);		break;
			case argv_640					:  strncpy (_erstring, "argv_640", MAX_PATH);				break;
			case argv_639				:  strncpy (_erstring, "argv_639", MAX_PATH);			break;
			case argv_641		:  strncpy (_erstring, "argv_641", MAX_PATH);	break;
			case argv_637		:  strncpy (_erstring, "argv_637", MAX_PATH);	break;
			case argv_645			:  strncpy (_erstring, "argv_645", MAX_PATH);		break;
			case argv_646			:  strncpy (_erstring, "argv_646", MAX_PATH);		break;
			case argv_638			:  strncpy (_erstring, "argv_638", MAX_PATH);		break;
			case argv_636				:  strncpy (_erstring, "argv_636", MAX_PATH);			break;
			case argv_642			:  strncpy (_erstring, "argv_642", MAX_PATH);		break;

			// argv_1314 argv_3695 analyzer related errors
			case argv_3702							:  strncpy (_erstring, "argv_3702", MAX_PATH);						break;
			case argv_3701				:  strncpy (_erstring, "argv_3701", MAX_PATH);			break;
			case argv_3698				:  strncpy (_erstring, "argv_3698", MAX_PATH);			break;
			case argv_3699					:  strncpy (_erstring, "argv_3699", MAX_PATH);				break;
			case argv_3700						:  strncpy (_erstring, "argv_3700", MAX_PATH);					break;

			// com manager related errors
			case argv_938							:  strncpy (_erstring, "argv_938", MAX_PATH);						break;
			case argv_931					:  strncpy (_erstring, "argv_931", MAX_PATH);				break;
			case argv_932				:  strncpy (_erstring, "argv_932", MAX_PATH);			break;
			case argv_935					:  strncpy (_erstring, "argv_935", MAX_PATH);				break;
			case argv_926					:  strncpy (_erstring, "argv_926", MAX_PATH);				break;
			case argv_929 :  strncpy (_erstring, "argv_929", MAX_PATH);		break;
			case argv_930				:  strncpy (_erstring, "argv_930", MAX_PATH);			break;
			case argv_936			:  strncpy (_erstring, "argv_936", MAX_PATH);		break;
			case argv_927			:  strncpy (_erstring, "argv_927", MAX_PATH);		break;
			case argv_937					:  strncpy (_erstring, "argv_937", MAX_PATH);				break;
			case argv_928				:  strncpy (_erstring, "argv_928", MAX_PATH);			break;
			case argv_933	:  strncpy (_erstring, "argv_933", MAX_PATH); break;
			case argv_940			:  strncpy (_erstring, "argv_940", MAX_PATH);		break;
			case argv_925		:  strncpy (_erstring, "argv_925", MAX_PATH);	break;

			// scan gateway related errors
			case argv_3313							:  strncpy (_erstring, "argv_3313", MAX_PATH);						break;
			case argv_3314		:  strncpy (_erstring, "argv_3314", MAX_PATH);	break;
			case argv_3311					:  strncpy (_erstring, "argv_3311", MAX_PATH);				break;
			case argv_3308	:  strncpy (_erstring, "argv_3308", MAX_PATH); break;
			case argv_3312				:  strncpy (_erstring, "argv_3312", MAX_PATH);			break;
			case argv_3315					:  strncpy (_erstring, "argv_3315", MAX_PATH);				break;
			case argv_3309		:  strncpy (_erstring, "argv_3309", MAX_PATH);	break;
			case argv_3310				:  strncpy (_erstring, "argv_3310", MAX_PATH);			break;

			// archive facility related errors
			case argv_677						:  strncpy (_erstring, "argv_677", MAX_PATH);					break;
			case argv_671				:  strncpy (_erstring, "argv_671", MAX_PATH);			break;
			case argv_669		:  strncpy (_erstring, "argv_669", MAX_PATH);	break;
			case argv_670		:  strncpy (_erstring, "argv_670", MAX_PATH);	break;
			case argv_675					:  strncpy (_erstring, "argv_675", MAX_PATH);				break;
			case argv_672			:  strncpy (_erstring, "argv_672", MAX_PATH);		break;
			case argv_673			:  strncpy (_erstring, "argv_673", MAX_PATH);		break;
			case argv_674	:  strncpy (_erstring, "argv_674", MAX_PATH);break;
			case argv_667		:  strncpy (_erstring, "argv_667", MAX_PATH);	break;
			case argv_665				:  strncpy (_erstring, "argv_665", MAX_PATH);			break;
			case argv_666	:  strncpy (_erstring, "argv_666", MAX_PATH);break;
			case argv_676			:  strncpy (_erstring, "argv_676", MAX_PATH);		break;
			case argv_668				:  strncpy (_erstring, "argv_668", MAX_PATH);			break;
			case argv_664		:  strncpy (_erstring, "argv_664", MAX_PATH);	break;
			case argv_663				:  strncpy (_erstring, "argv_663", MAX_PATH);			break;

			default: argv_1027 (_ercode, _erstring);
		}
		_erstring[MAX_PATH - 1] = '\0';
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_3044		
// @@
// @@ INPUT			:
// @@ _type: argv_3717: argv_3695 of the plugin whose associated readable argv_2697
// @@              is to be retrieved.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the readable argv_2697 associated with the plugin whose argv_3695
// @@ was given as a parameter.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the readable plugin argv_2697
// @@ associated with the plugin argv_3695 passed as a parameter.
// @@ The argv_3266 is returned as a std::string.
// @@
// @@ Notice that if the parameter '_type' is not a valid plugin
// @@ argv_3695, then "<UNDEFINED_PLUGIN_TYPE>" is returned.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
std::string argv_3044 (argv_3717 _type) {
	switch (_type) {
		case argv_3047:				return ("argv_3047");
		case argv_3046:	return ("argv_3046");	
		case argv_3045:			return ("argv_3045");
		case argv_3048:					return ("argv_3048");
		case argv_3050:				return ("argv_3050");
		case argv_3049:					return ("argv_3049");

		default: return "<UNDEFINED_PLUGIN_TYPE>";		
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

