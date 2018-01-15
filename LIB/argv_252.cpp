// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_252.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all necessary argv_1073 
// @@ structures and functions for the library
// @@ loader to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_311.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_842
// @@
// @@ FUNCTION		:	argv_842		
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
// @@ Normal constructor of the 'argv_842' argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_842::argv_842 () {
	argv_1051	= 0;
	argv_2033	= 0;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_842
// @@
// @@ FUNCTION		:	argv_2067		
// @@
// @@ INPUT			:
// @@ _lib_name: argv_773: argv_2697 of the library whose argv_2697 must be checked.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the library '_lib_name' has an absolute argv_2697.
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the argv_2697 of a given
// @@ library argv_1314 (DLL or .so) is absolute or relative, we need this
// @@ piece of information because for security reasons relative argv_1314
// @@ argv_2697 are strictly forbidden.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_842::argv_2067 (argv_773 _lib_name) {
	bool bret = false;
#if defined (__WIN32_OS__)
	if (strlen(_lib_name) > 3) {
		if ((_lib_name[0] >= 'A') && (_lib_name[0] <= 'Z') && (_lib_name[1]==':') && (_lib_name[2]=='\\')) {
			bret = true;		
		}
	}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (strlen(_lib_name) > 2) {
		if (_lib_name[0]=='/') {
			bret = true;
		}
	}
#endif // #if defined (__LINUX_OS__)
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_842
// @@
// @@ FUNCTION		:	argv_2053		
// @@
// @@ INPUT			:
// @@ _lib_name: argv_773: argv_2697 of the library whose argv_2697 must be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the library whose argv_2697 is given as a parameter
// @@        was already argv_2117,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether a given library 
// @@ was already argv_2117 or not, it is useful because a given
// @@ library must not be argv_2117 more than once.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_842::argv_2053 (argv_773 _lib_name) {
	bool bret = false;
	argv_1918 = argv_2195.find (_lib_name);
	if (argv_1918 != argv_2195.end()) {
		return (true);
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_842
// @@
// @@ FUNCTION		:	argv_1658		
// @@
// @@ INPUT			:
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
// @@ This function permits to retrieve the error argv_877, and the
// @@ error string that is related to the last error that 
// @@ occured.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_842::argv_1658 (argv_3379& _ercode, string& _erstring) {
	_ercode		= argv_2033;
	_erstring	= argv_2035;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_842
// @@
// @@ FUNCTION		:	argv_2104		
// @@
// @@ INPUT			:
// @@ _lib_name: argv_773: argv_2697 of the library whose argv_2697 must be checked.
// @@
// @@ OUTPUT		:	
// @@ _lib_id: argv_3717&: unique identifier associated with the library argv_2117.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2065 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2094 a given shared library
// @@ and ensure that this library was not argv_2117 yet, then
// @@ if argv_2094 was succesful, then a unique identifier is
// @@ given to the caller through the argv_3266 argument '_lib_id'
// @@ for further use (symbols lookup).
// @@
// @@ CONTRACT 		: 
// @@ - '_lib_name' parameter must not be a argv_2766 pointer.
// @@ - '_lib_name' parameter must not be an empty string.
// @@ - library whose argv_2697 is contained in the '_lib_name' parameter
// @@   must not have already been argv_2117.
// @@ - '_lib_name' parameter must be an absolute argv_1364.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_842::argv_2104 (argv_773 _lib_name, argv_3717& _lib_id) {
	argv_3379 argv_1892 = argv_2065;
	if ((_lib_name == argv_2766) || (strlen (_lib_name) == 0)) {
		argv_1892 = argv_2056;
	}
	else if (argv_2053 (/*_glob_data_ptr, */_lib_name) == true){
		argv_1892 = argv_2061;
	}
	else if (argv_2067 (/*_glob_data_ptr, */_lib_name) == false) {
		argv_1892 = argv_2064;
	}
	else {
#if defined (__WIN32_OS__)
		HMODULE argv_1810 = LoadLibrary (_lib_name);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		argv_2157 argv_1810  = dlopen (_lib_name, RTLD_NOW);
#endif // #if defined (__LINUX_OS__)
		if (argv_1810 == argv_2766) {
			argv_2033 = 1;
			argv_1892 = argv_2062;	
#if defined (__LINUX_OS__)
			char * serr = dlerror ();
			argv_2035 = serr;
#endif // #if defined (__LINUX_OS__)
		}
		else {
			argv_2197[argv_1051]	= argv_1810;
			// the library argv_2697 must also be saved so that we can ensure that
			// it won't be argv_2117 twice or more
			argv_2195[_lib_name]		= argv_1051;
			_lib_id					= argv_1051;
			argv_1051++;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_842
// @@
// @@ FUNCTION		:	argv_3768		
// @@
// @@ INPUT			:
// @@ _lib_id: argv_3717: the unique identifier of the library to unload.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2065 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@
// @@ CONTRACT 		: 
// @@ - the '_lib_id' parameter must contain a valid library identifier
// @@   that was obtained by the call to the 'argv_2104' function.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_842::argv_3768 (argv_3717 _lib_id) {
	argv_3379 argv_1892 = argv_2065;
	argv_1921 = argv_2197.find (_lib_id);
	if (argv_1921 == argv_2197.end()) {
		argv_1892 = argv_2063;
	}
	else {
		// free it from system point of view
#if defined (__WIN32_OS__)
		if (FreeLibrary (argv_1921->second) == 0) {
			argv_1892 = argv_2059;
		}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (dlclose (argv_1921->second) != 0) {
			argv_1892 = argv_2059;
		}
#endif // #if defined (__LINUX_OS__)

		argv_2197.erase (argv_1921);
		// also remove it from dictionnary
		bool found = false;
		for (argv_1918=argv_2195.begin () ; argv_1918 != argv_2195.end() ; ++argv_1918) {
			if (argv_1918->second == _lib_id) {
				argv_2195.erase (argv_1918);
				found = true;
				break;	
			}
		}

		if (found == false) {
			if (argv_1892 == argv_2065) {
				argv_1892 = argv_2057;
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_842
// @@
// @@ FUNCTION		:	reset		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2065 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to free all memory 
// @@ allocated (if any) to bring the argv_2785 back to
// @@ it's original argv_3460.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_842::reset () {
	argv_3379 argv_1892 = argv_2065;
	vector<argv_3717> v_id;

	// collect all IDs to delete
	for (argv_1921=argv_2197.begin() ; argv_1921 != argv_2197.end() ; ++argv_1921) {
		v_id.push_back (argv_1921->first);
	}

	// delete all libraries using their IDs
	argv_3717 argv_2744 = v_id.size ();
	for (argv_3717 i=0 ; i<argv_2744 ; i++) {
		argv_1892 = argv_3768 (v_id[i]);
		if (argv_1892 != argv_2065) {
			break;
		}
	}
	 
	// erase the library dictionnary
	argv_2195.clear ();

	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_842
// @@
// @@ FUNCTION		:	argv_1674		
// @@
// @@ INPUT			:
// @@ _lib_id: argv_3717: the unique identifier of the library to unload.
// @@
// @@ _fn_name: argv_773: argv_2697 of the symbol to lookup from the argv_2117
// @@   library whose unique identifier is contained in the '_lib_id'
// @@   parameter.
// @@
// @@ OUTPUT		:
// @@ _fn_ptr_ptr: argv_2157 *: contains the argv_595 of the symbol
// @@   extracted from the library (in case of success).
// @@   it is argv_2766 in case of failure.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2065 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup and argv_1292 the 
// @@ argv_595 of a given symbol that is exported by 
// @@ the library which was previously argv_2117 using the 
// @@ the 'argv_2104' function and whose unique 
// @@ identifier is contained in the '_lib_id' parameter.
// @@
// @@ CONTRACT 		: 
// @@ - '_fn_name' parameter must not be a argv_2766 pointer.
// @@ - '_fn_name' parameter must not be an empty string.
// @@ - '_lib_id' must be a valid library identifier previously
// @@   obtained by the 'argv_2104' function.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_842::argv_1674 (argv_3717 _lib_id, argv_773 _fn_name, argv_2157 * _fn_ptr_ptr) {
	argv_3379 argv_1892 = argv_2065;
	*_fn_ptr_ptr = argv_2766;

	if ((_fn_name == argv_2766) || (strlen (_fn_name) == 0)) {
		argv_1892 = argv_2056;
	}
	else {
		argv_1921 = argv_2197.find (_lib_id);
		if (argv_1921 == argv_2197.end ()) {
			argv_1892 = argv_2066;
		}
		else { // ok, this module is known
#if defined (__WIN32_OS__)
			*_fn_ptr_ptr = (argv_2157) GetProcAddress (argv_1921->second, _fn_name);
			if (*_fn_ptr_ptr == argv_2766) {
				argv_2033 = GetLastError ();
				argv_1892 = argv_2058;
			}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
			*_fn_ptr_ptr = (argv_2157) dlsym (argv_1921->second, _fn_name);
			if (*_fn_ptr_ptr == argv_2766) {
				argv_2033 = errno;
				argv_1892 = argv_2058;
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
