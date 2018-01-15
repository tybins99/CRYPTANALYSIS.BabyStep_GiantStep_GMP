// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_257.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the definition of the 
// @@ log facility that permits to log events and
// @@ to associate a argv_3678 and date, coming along
// @@ with a argv_3366 level for each event.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_316.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866	
// @@
// @@ FUNCTION		:	argv_866	
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
argv_866::argv_866 () {
#if defined (__LINUX_OS__)
	pthread_mutex_init (&argv_2694, argv_2766);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	InitializeCriticalSection (&argv_1028);	
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866	
// @@
// @@ FUNCTION		:	~argv_866	
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
argv_866::~argv_866 () {
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
// @@ CLASS			:	argv_866	
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
void argv_866::argv_2125 () {
#if defined (__LINUX_OS__)
	pthread_mutex_lock (&argv_2694);
#endif //  #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	EnterCriticalSection (&argv_1028);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866	
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
void argv_866::argv_3770 () {
#if defined (__LINUX_OS__)
	pthread_mutex_unlock (&argv_2694);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	LeaveCriticalSection (&argv_1028);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_978
// @@
// @@ FUNCTION		:	insert_date
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1314.
// @@ - _date: argv_773: pointer on a string containing the argv_1043 date
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
// @@ This function permits to insert the date in a fixed
// @@ format into the argv_1043 argv_2069.
// @@
// @@ CONTRACT		: 
// @@ - '_fp' must be a valid opened argv_1314's pointer
// @@ - '_date' must not be a argv_2766 pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_978::insert_date (FILE * _fp, argv_773 _date) {
	int nb_2_do = strlen (_date);
	if (nb_2_do > argv_1078) {
		nb_2_do = argv_1078;	
	}
	fwrite (_date, 1, nb_2_do, _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_978
// @@
// @@ FUNCTION		:	insert_level
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1314.
// @@ - _level: argv_773: pointer on a string containing the argv_1043 date
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the argv_3366 level in a fixed
// @@ format into the argv_1043 argv_2069.
// @@ Notice that the argv_3366 level may be chosen out of :
// @@ - argv_2763
// @@ - argv_3834
// @@ - argv_1242
// @@ - argv_620
// @@ - argv_1086
// @@ - argv_2762
// @@
// @@ CONTRACT		:
// @@ - '_fp' must be a valid opened argv_1314's pointer
// @@ - '_level' must not be a argv_2766 pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_978::insert_level (FILE * _fp, argv_773 _level) {
	int nb_2_do = strlen (_level);
	if (nb_2_do > argv_2051) {
		nb_2_do = argv_2051;	
	}
	fwrite (_level, 1, nb_2_do, _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_978
// @@
// @@ FUNCTION		:	insert_body
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1314.
// @@ - _level: argv_773: pointer on a string containing the argv_1043 date
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
// @@ This function permits to insert the argv_3366 level in a fixed
// @@ format into the argv_1043 argv_2069.
// @@
// @@ CONTRACT		:
// @@ - '_fp' must be a valid opened argv_1314's pointer
// @@ - '_level' must not be a argv_2766 pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_978::insert_body (FILE * _fp, argv_773 _body) {
	int nb_2_do = strlen (_body);
	if (nb_2_do > argv_2070) {
		nb_2_do = argv_2070;
	}
	fwrite (_body, 1, nb_2_do, _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
	int remaining = argv_2070 - nb_2_do;
	if (remaining > 0) {
		char vide = ' ';
		for (int i=0 ; i<remaining ; i++) {
			fwrite (&vide, 1, 1, _fp);
		}
#if defined (__LOG_DEBUG_MEDIUM__)
		fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
	}
	insert_terminator (_fp);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_978
// @@
// @@ FUNCTION		:	insert_terminator
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1314.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to end the argv_1043 argv_2069 by inserting
// @@ an end of argv_2069 character sequence, that is OS dependant.
// @@
// @@ CONTRACT		: 
// @@ - '_fp' must be a valid opened argv_1314's pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_978::insert_terminator (FILE * _fp) {
	fwrite (argv_3595.c_str(), 1, argv_3595.size (), _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1137	
// @@
// @@ INPUT			:
// @@ - _filename: argv_773: argv_2697 of the destination argv_1314.
// @@
// @@ OUTPUT		:	
// @@
// @@ IO			:	
// @@ - _logger: argv_865 : instance of the log facility to use.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to dump the content of a given argv_1314
// @@ into the argv_1043 log argv_1314 using the log facility given as
// @@ a parameter.
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' must not be a argv_2766 pointer
// @@ - '_filename' must be the argv_2697 of a valid and existing argv_1314.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1137 (argv_773 _filename, argv_865& _logger) {
	int ic;
	FILE * argv_1396 = fopen (_filename, "rb");
	if (! argv_1396) {
		_logger.argv_2142 (argv_1242, "+++ failed to visualize argv_1314 (fopen failed) : ", _filename);	
	}
	else {
		string total = "";
		ic = fgetc (argv_1396);
		while (ic != EOF) {
			total += ic;
			ic = fgetc (argv_1396);
		}
		fclose (argv_1396);
		_logger.argv_2142 (argv_1086, "argv_1314 content : ", total.c_str());
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_865		
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
// @@ Normal constructor of the argv_865 argv_2785.
// @@
// @@ CONTRACT 		:	none	 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_865::argv_865() {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	~argv_865		
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
// @@ destructor of the argv_865 argv_2785.
// @@
// @@ CONTRACT 		:	none	 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_865::~argv_865() {
	argv_872 ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_816	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the argv_1043 argv_2069
// @@ is the last argv_2069 of the rolling log argv_1314. If it is the case
// @@ then the argv_1314 is rewinded so that the next argv_2069 logged will
// @@ be located at the top of the log argv_1314.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_816 () {
	argv_1052++;
	if (argv_1052 >= argv_2134) {
		rewind (argv_1396);
		argv_1052 = 1;
	}

#if defined (__LOG_DEBUG_STRONG__)
	fclose (argv_1396);
	argv_1396 = fopen (argv_1364.c_str(), "ab");
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2814	
// @@
// @@ INPUT			:
// @@ _filename: string : argv_2697 of the log argv_1314 to open.
// @@ _error_log_ptr: argv_595 of the error log, can be argv_2766 if
// @@    error log is not used.
// @@ - _credential: string: symbolic argv_2697 of the log.
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
// @@ This function permits to open the log argv_1314 whose argv_2697 is given
// @@ as a parameter.
// @@ Notice that as soon as the log argv_1314 was opened, the opening date
// @@ and argv_3678 is logged to this log argv_1314 automatically.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_865::argv_2814 (string _filename, argv_865 * _error_log_ptr, string _credential) {
	bool bret = true;

	if (argv_1396 != argv_2766) { // argv_1314 already opened
		bret = false;
	}
	else {
		argv_1364 = _filename;
		argv_1396 = fopen (_filename.c_str(), "wb");

		if (!argv_1396) {
			bret = false;
		}
		else { // log opened ok
			argv_3793 (true);
			string stmp = "Log argv_1314 creation date : ";
			stmp = stmp + argv_3590;
			//argv_2142 (argv_620, stmp.c_str());

			argv_1018 = _credential;
			// the error log
			argv_1243 = _error_log_ptr;
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_3793	
// @@
// @@ INPUT			:
// @@ _large_mode: bool: true if we want a large argv_1130 of argv_1043 date and argv_3678
// @@                    false otherwise.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to obtain the argv_1043 date and argv_3678
// @@ formatted to either a condensed string, or to a developped
// @@ string.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_3793 (bool _large_mode) {
	#if defined (__WIN32_OS__)
		GetLocalTime (&argv_3677);
		if (_large_mode == false) {
			argv_3409 (argv_3590, MAX_PATH, "%02d/%02d-%02dh%02dm%02ds ", argv_3677.wMonth, argv_3677.wDay, argv_3677.wHour, argv_3677.wMinute, argv_3677.wSecond);
		}
		else {
			argv_3409 (argv_3590, MAX_PATH, "month %d the %dth at %d hour %d minutes and %d seconds", argv_3677.wMonth, argv_3677.wDay, argv_3677.wHour, argv_3677.wMinute, argv_3677.wSecond);
		}
	#endif // #if defined (__WIN32_OS__)
	#if defined (__LINUX_OS__)
		argv_1055 = argv_3678 (argv_2766);
		argv_3680 = localtime (&argv_1055);
		if (_large_mode == false) {
			argv_3409 (argv_3590, MAX_PATH, "%02d/%02d-%02dh%02dm%02ds ", argv_3680->tm_mon, argv_3680->tm_mday, argv_3680->tm_hour, argv_3680->tm_min, argv_3680->tm_sec);
		}
		else {
			argv_3409 (argv_3590, MAX_PATH, "month %d the %dth at %d hour %d minutes and %d seconds", argv_3680->tm_mon, argv_3680->tm_mday, argv_3680->tm_hour, argv_3680->tm_min, argv_3680->tm_sec);
		}
	#endif // #if defined (__LINUX_OS__)
	argv_3590[MAX_PATH - 1] = '\0';
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	insert_date		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to update the argv_1043 argv_3678 and to
// @@ insert it into the argv_1806 of a new argv_2069 of the log argv_1314.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::insert_date () {
    if (argv_1396) {
        argv_3793 ();
		argv_2808.insert_date (argv_1396, argv_3590);
    }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	insert_level	
// @@
// @@ INPUT			:
// @@ _level: argv_3717: level to be displayed.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the level given as a parameter
// @@ to the argv_1806 of a new argv_2069 of the log argv_1314.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::insert_level (argv_3717 _level) {
    string level = "|???| ";
    switch (_level) {
        case argv_2763:
            level = "|NOR| ";
            break;
        case argv_3834:
            level = "|WRN| ";
            break;
        case argv_1242:
            level = "|ERR| ";
            break;
        case argv_620:
            level = "|ADM| ";
            break;
        case argv_1086:
            level = "|DBG| ";
            break;
        case argv_2762:
            level = "     ";
            break;
    }
    if (argv_1396) {
		argv_2808.insert_level (argv_1396, level.c_str());
    }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS				: argv_865
// @@
// @@ FUNCTION			: argv_872
// @@
// @@ INPUT				: none
// @@
// @@ OUTPUT			: none
// @@
// @@ IO				: none
// @@
// @@ RETURN VALUE		: none
// @@	
// @@ DISCLOSURE		: public	
// @@
// @@ DESCRIPTION:
// @@ This function just flushes the argv_1073 and argv_869 the previously
// @@ opened log argv_1314.
// @@
// @@ CONTRACT			: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_872() {
	if ((argv_2133 == true) && (argv_1396)) {
		fclose (argv_1396);
		argv_1396 = argv_2766;
	}
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS				: argv_865
// @@
// @@ FUNCTION			: reset
// @@
// @@ INPUT				: none
// @@
// @@ OUTPUT			: none
// @@
// @@ IO				: none
// @@
// @@ RETURN VALUE		: none
// @@	
// @@ DISCLOSURE		: public	
// @@
// @@ DESCRIPTION:
// @@ This function permits to set all fields of the
// @@ argv_2785 to an initial argv_3460.
// @@
// @@ CONTRACT			: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::reset () {
	argv_1364		= "";
	argv_1018		= "";
	argv_1396				= argv_2766;
	argv_1243	= argv_2766;
	argv_1052	= 1;
	argv_2133		= true;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2142		
// @@
// @@ INPUT			:
// @@ _level: argv_3717: the argv_3366 level associated with the argv_2271 to log.
// @@ _cptr: char *: the argv_2271 to log
// @@ _no_eol: bool: true if an end of argv_2069 should be appended at the end of the
// @@                argv_2271, false otherwise.
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
// @@ This function logs the argv_2271(s) given as parameter(s) and associate
// @@ with them the argv_1043 argv_3678 and a argv_3366 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_2142 (argv_3717 _level, argv_773 _cptr) {
	if (argv_2133 == true) {
		if (argv_1396) {
			insert_date ();
			insert_level (_level);
			argv_2808.insert_body (argv_1396, _cptr);
			argv_816 ();
		}
	}
#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1243 != argv_2766) && (_level == argv_1242)) {
		string total = argv_1018 + _cptr;
		argv_1243->argv_2142 (_level, total.c_str());	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_1650		
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
// @@ This function permits to retrieve the argv_2697 of the argv_1314
// @@ that is currently opened.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_865::argv_1650 () {
	return (argv_1364);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2142		
// @@
// @@ INPUT			:
// @@ _level: argv_3717  :	the argv_3366 level associated with the argv_2271 to log.
// @@ _cptr: char * :	the first argv_2271 to log
// @@ _cptr2: char *:	the second argv_2271 to log
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
// @@ This function logs the argv_2271(s) given as parameter(s) and associate
// @@ with them the argv_1043 argv_3678 and a argv_3366 level given as a parameter.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_2142 (argv_3717 _level, argv_773 _cptr, argv_773 _cptr2) {
	if (argv_2133 == true) {
		if (argv_1396) {
			insert_date ();
			insert_level (_level);
			string stmp = _cptr;
			stmp = stmp + _cptr2;
			argv_2808.insert_body (argv_1396, stmp.c_str());
			argv_816 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1243 != argv_2766) && (_level == argv_1242)) {
		string total = argv_1018 + _cptr;
		argv_1243->argv_2142 (_level, total.c_str(), _cptr2);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2142		
// @@
// @@ INPUT			:
// @@ _level: argv_3717: the argv_3366 level associated with the argv_2271 to log.
// @@ _cptr: char * : the first argv_2271 to log
// @@ _cptr2: char *: the second argv_2271 to log
// @@ _cptr3: char *: the third argv_2271 to log
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
// @@ This function logs the argv_2271(s) given as parameter(s) and associate
// @@ with them the argv_1043 argv_3678 and a argv_3366 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_2142 (argv_3717 _level, argv_773 _cptr, argv_773 _cptr2, argv_773 _cptr3) {
	if (argv_2133 == true) {
		if (argv_1396) {
			insert_date ();
			insert_level (_level);
			string stmp = _cptr;
			stmp = stmp + _cptr2;
			stmp = stmp + _cptr3;
			argv_2808.insert_body (argv_1396, stmp.c_str());
			argv_816 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1243 != argv_2766) && (_level == argv_1242)) {
		string total = argv_1018 + _cptr;
		argv_1243->argv_2142 (_level, total.c_str(), _cptr2, _cptr3);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2142	
// @@
// @@ INPUT			:
// @@ _level: argv_3717: the argv_3366 level associated with the argv_2271 to log.
// @@ _cptr: char * : the first argv_2271 to log
// @@ _cptr2: char *: the second argv_2271 to log
// @@ _cptr3: char *: the third argv_2271 to log
// @@ _cptr4: char *: the fourth argv_2271 to log
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
// @@ This function logs the argv_2271(s) given as parameter(s) and associate
// @@ with them the argv_1043 argv_3678 and a argv_3366 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_2142 (argv_3717 _level, argv_773 _cptr, argv_773 _cptr2, argv_773 _cptr3, argv_773 _cptr4) {
	if (argv_2133 == true) {
		if (argv_1396) {
			insert_date ();
			insert_level (_level);
			string stmp = _cptr;
			stmp = stmp + _cptr2;
			stmp = stmp + _cptr3;
			stmp = stmp + _cptr4;
			argv_2808.insert_body (argv_1396, stmp.c_str());
			argv_816 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1243 != argv_2766) && (_level == argv_1242)) {
		string total = argv_1018 + _cptr;
		argv_1243->argv_2142 (_level, total.c_str(), _cptr2, _cptr3, _cptr4);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2142	
// @@
// @@ INPUT			:	
// @@ _level: argv_3717: the argv_3366 level associated with the argv_2271 to log.
// @@ _cptr: char *: the argv_2271 to write to log argv_1314.
// @@ _val: argv_3379: the argv_3807 to log after the argv_2271.
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
// @@ This function logs the argv_2271(s) given as parameter(s) and associate
// @@ with them the argv_1043 argv_3678 and a argv_3366 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_2142 (argv_3717 _level, argv_773 _cptr, argv_3379 _val) {
	if (argv_2133 == true) {
		if (argv_1396) {
			insert_date ();
			insert_level (_level);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "%s %d", _cptr, _val);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2808.insert_body (argv_1396, argv_3681);
			argv_816 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1243 != argv_2766) && (_level == argv_1242)) {
		string total = argv_1018 + _cptr;
		argv_1243->argv_2142 (_level, total.c_str(), _val);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2142	
// @@
// @@ INPUT			:	
// @@ _level: argv_3717: the argv_3366 level associated with the argv_2271 to log.
// @@ _cptr: char *: the argv_2271 to write to log argv_1314.
// @@ _val: argv_3717: the argv_3807 to log after the argv_2271.
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
// @@ This function logs the argv_2271(s) given as parameter(s) and associate
// @@ with them the argv_1043 argv_3678 and a argv_3366 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_2142 (argv_3717 _level, argv_773 _cptr, argv_3717 _val) {
	if (argv_2133 == true) {
		if (argv_1396) {
			insert_date ();
			insert_level (_level);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "%s %u", _cptr, _val);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2808.insert_body (argv_1396, argv_3681);
			argv_816 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1243 != argv_2766) && (_level == argv_1242)) {
		string total = argv_1018 + _cptr;
		argv_1243->argv_2142 (_level, total.c_str(), _val);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2142	
// @@
// @@ INPUT			:	
// @@ _level: argv_3717: the argv_3366 level associated with the argv_2271 to log.
// @@ _val_zero: argv_3717: the first argv_3807 to log.
// @@ _val_un  : argv_3717: the second argv_3807 to log.
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
// @@ This function logs the argv_2271(s) given as parameter(s) and associate
// @@ with them the argv_1043 argv_3678 and a argv_3366 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_2142 (argv_3717 _level, argv_3717 _val_zero, argv_3717 _val_un) {
	if (argv_2133 == true) {
		if (argv_1396) {
			insert_date ();
			insert_level (_level);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "%u %u", _val_zero, _val_un);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2808.insert_body (argv_1396, argv_3681);
			argv_816 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1243 != argv_2766) && (_level == argv_1242)) {
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "%s%u %u", argv_1018.c_str(), _val_zero, _val_un);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1243->argv_2142 (_level, argv_3681);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2142	
// @@
// @@ INPUT			:	
// @@ _level: argv_3717: the argv_3366 level associated with the argv_2271 to log.
// @@ _cptr: argv_773: the argv_2271 to log to argv_1314.
// @@ _val: unsigned long: the argv_3807 to log to argv_1314 after the argv_2271.
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
// @@ This function logs the argv_2271(s) given as parameter(s) and associate
// @@ with them the argv_1043 argv_3678 and a argv_3366 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_2142 (argv_3717 _level, argv_773 _cptr, unsigned long _val) {
	if (argv_2133 == true) {
		if (argv_1396) {
			insert_date ();
			insert_level (_level);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "%s %u", _cptr, (argv_3717) _val);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2808.insert_body (argv_1396, argv_3681);
			argv_816 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1243 != argv_2766) && (_level == argv_1242)) {
		string total = argv_1018 + _cptr;
		argv_1243->argv_2142 (_level, total.c_str(), _val);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2143	
// @@
// @@ INPUT			:	
// @@ _level: argv_3717: the argv_3366 level associated with the argv_2271 to log.
// @@ _cptr: argv_773: the argv_2271 to log to argv_1314.
// @@ _value: argv_3717: the argv_3807 to log to argv_1314 after the argv_2271.
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
// @@ This function logs the argv_2271(s) given as parameter(s) and associate
// @@ with them the argv_1043 argv_3678 and a argv_3366 level given as a parameter.
// @@ Notice that the '_value' parameter argv_2819 logged in hexadecimal format.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_2143 (argv_3717 _level, argv_773 _msg, argv_3717 _value) {
	if (argv_2133 == true) {
		if (argv_1396) {
			insert_date ();
			insert_level (_level);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "%s %X", _msg, _value);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2808.insert_body (argv_1396, argv_3681);
			argv_816 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1243 != argv_2766) && (_level == argv_1242)) {
		string total = argv_1018 + _msg;
		argv_1243->argv_2143 (_level, total.c_str(), _value);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2128	
// @@
// @@ INPUT			:	
// @@ _level: argv_3717: the argv_3366 level associated with the argv_2271 to log.
// @@ _buffer: argv_3715 *: the argv_595 of the first byte of the argv_728 to log.
// @@ _size: argv_3717: the size of the argv_728 to log.
// @@ _comment: argv_773: the argv_944 associated with the argv_728 to log.
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
// @@ This function is for debug purpose only.
// @@ it dump the content of the argv_728 '_buffer' into the 
// @@ argv_1314 : C:\\binary.bin, the format of the argv_1314 being
// @@ a readable sequence of hexadecimal values (a argv_710).
// @@ So it can be seen as an outbound save up function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_2128 (argv_3717 _level, argv_3715 * _buffer, argv_3717 _size, argv_773 _comment) {
	if (argv_2133 == true) {
		if (argv_1396) {
			insert_date ();
			insert_level (_level);
			char argv_3681[MAX_PATH];
			char tmp2[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "=== BUFFER argv_2804 : %s ===", _comment);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2808.insert_body (argv_1396, argv_3681);
			argv_816 ();

			argv_3681[0]			= '\0';
			argv_3717 nb_byte	= 0;
			argv_3717 i			= 0;
			FILE * fpzx		= argv_2766;

			fpzx = fopen ("C:\\binary.bin", "wb");

			if (! fpzx) {
#if defined (__WIN32_OS__) 
				MessageBox (argv_2766, "failed to open bin log argv_1314 !", "", MB_ICONERROR);
#endif // #if defined (__WIN32_OS__) 
			}

			for (i=0 ; i<_size ; i++) {
				fwrite ((char *) &_buffer[i], 1, 1, fpzx);
				fflush (fpzx);
				argv_3409 (tmp2, MAX_PATH, "%02X ", _buffer[i]);
				tmp2[MAX_PATH - 1] = '\0';
				strcat (argv_3681, tmp2);
				nb_byte++;

				if (nb_byte >= 16) {
					insert_date ();
					insert_level (_level);
					argv_2808.insert_body (argv_1396, argv_3681);
					argv_3681[0] = '\0'; // reset the cumulative argv_2069
					nb_byte = 0;
				}
			}

			fclose (fpzx);

			// flush the remaining argv_739 (if any)
			if (nb_byte > 0) {
				insert_date ();
				insert_level (_level);
				argv_2808.insert_body (argv_1396, argv_3681);
			}
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_2128	
// @@
// @@ INPUT			:	
// @@ _level: argv_3717: the argv_3366 level associated with the argv_2271 to log.
// @@ _buffer: argv_3715 *: the argv_595 of the first byte of the argv_728 to log.
// @@ _comment: argv_773: the argv_944 associated with the argv_728 to log.
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
// @@ This function is for debug purpose only.
// @@ it permits to dump to the log argv_1314 the content of 
// @@ a given argv_728 containing the opcode of a given function.
// @@ Notice that this function stops to dump when it reaches
// @@ a RET (0x3C) or a NOP (0x90) instruction.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_2129 (argv_3717 _level, argv_3715 * _buffer, argv_773 _comment) {
	if (argv_2133 == true) {
		if (argv_1396) {
			insert_date ();
			insert_level (_level);
			char argv_3681[MAX_PATH];
			char tmp2[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "=== %s ===", _comment);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2808.insert_body (argv_1396, argv_3681);
			argv_816 ();

			argv_3681[0]			= '\0';
			argv_3717 nb_byte	= 0;
			argv_3717 i			= 0;

			for (i=0 ; ; i++) {
				argv_3409 (tmp2, MAX_PATH, "%02X ", _buffer[i]);
				tmp2[MAX_PATH - 1] = '\0';
				strcat (argv_3681, tmp2);
				nb_byte++;

				if (nb_byte >= 32) {
					insert_date ();
					insert_level (_level);
					argv_2808.insert_body (argv_1396, argv_3681);
					argv_3681[0] = '\0'; // reset the cumulative argv_2069
					nb_byte = 0;
				}

				// functions finish by a RET + NOP instruction
				if ((i>256) || ((i > 0) && (_buffer[i] == 0x90) && (_buffer[i-1] == 0x3C))) { 
					break;
				}

			}

			// flush the remaining argv_739 (if any)
			if (nb_byte > 0) {
				insert_date ();
				insert_level (_level);
				argv_2808.insert_body (argv_1396, argv_3681);
			}
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_1648	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ FILE * : the argv_1314 descriptor of the opened log argv_1314.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the descriptor of
// @@ the log argv_1314 (so that external functions can use this
// @@ descriptor to do their job if necessary).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
FILE * argv_865::argv_1648 () {
	return (argv_1396);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_865
// @@
// @@ FUNCTION		:	argv_1381	
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
// @@ This function permits to ensure that all the argv_1073
// @@ are flushed to the log argv_1314 by closing and reopening this
// @@ argv_1314. Notice That the performance decrease if you use this
// @@ function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_865::argv_1381 () {
	fflush (argv_1396);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_792
// @@
// @@ FUNCTION		:	argv_792		
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
// @@ Normal constructor of the argv_792 argv_2785.
// @@ This argv_2785 contains important argv_1073 that are used 
// @@ by many other functions and thus avoid having to use
// @@ global variables.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_792::argv_792 () {
#if defined (__WIN32_OS__) 
	argv_2851								= "\\";
	argv_2712					= "native_api.dll";
	argv_834					= "cypher_api.dll";
	argv_964				= "compress_api.dll";
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_2851								= "/";
	argv_2712					= "native_api.so";
	argv_834					= "cypher_api.so";
	argv_964				= "compress_api.so";
#endif // #if defined (__LINUX_OS__)

	argv_1625						= "general_plugin.plugin";
	argv_1350					= "file_type_result.plugin";
	argv_1991						= "kernel.plugin";
	argv_3023					= "plugin_list.bin";
	argv_1118								= ".dep";
	int_size								= 4;
	argv_2708						= "scan_buffer";
	argv_2704			= "get_scan_report";
	argv_2703					= "dysinfect";
	argv_2699					= "construct";
	argv_2701					= "argv_1127";

	argv_2706					= "match_type";
	argv_2700	= "create_scan_result_atom";
	argv_2702	= "destruct_scan_result_atom";
} 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2142		
// @@
// @@ INPUT			:
// @@ _log_ptr: argv_865 *: argv_595 of the argv_865 argv_2785 that is necessary
// @@                   to log events to log argv_1314.
// @@ _level: argv_3717: the argv_3366 level associated with the argv_2271 to log.
// @@ _msg: argv_773: the argv_2271 to log to argv_1314.
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
// @@ This function permits to use a previously instanciated log
// @@ argv_2785 to log a given argv_2271 to log argv_1314 associated with
// @@ it's argv_3366 level. 
// @@
// @@ CONTRACT 		:	
// @@ - '_log_ptr' parameter must not be a argv_2766 pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	void argv_2142 (argv_865 * _log_ptr, argv_3717 _level, argv_773 _msg) {
		if (_log_ptr != argv_2766) {
			_log_ptr->argv_2142 (_level, _msg);
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
