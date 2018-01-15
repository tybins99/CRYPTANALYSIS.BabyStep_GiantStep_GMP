// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_250.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the argv_1073 structures
// @@ and objects that permit to use the 
// @@ platform independant kernel
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_309.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:		
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
// @@ normal constructor of the argv_838 argv_2785.
// @@ it sets all fields to their initial argv_3807.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_838::argv_838 () {
	argv_1810 = argv_2766;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	reset		
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
// @@ this function permits to set all fields of the 
// @@ 'argv_838' to their initial argv_3807.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_838::reset () {
	argv_1994							= argv_2766;
	argv_1936							= argv_2766;
	argv_3317						= argv_2766;
	argv_2135								= argv_2766;
	argv_3460								= argv_1979;
	
	argv_2033							= 0;
	argv_3273							= "";
	argv_982						= "";
	argv_2131						= "";
	argv_1171						= "";
	argv_3012					= "";
	argv_3682					= "";
	argv_3290					= "kernel_scan_buffer";
	argv_1195					= "kernel_dysinfect";		
	argv_1937	= "kernel_deallocate_all_atoms";	
	argv_1676				= "kernel_get_scan_report";
	argv_1982			= "kernel_NATIVE_free";

#if defined (__LINUX_OS__)
	argv_3347						= "/";
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	argv_3347						= "\\";
#endif // #if defined (__WIN32_OS__) 

	argv_1543			= argv_2766;
	argv_1546			= argv_2766;
	argv_1540				= argv_2766;
	argv_1606			= argv_2766;
	argv_1550			= argv_2766;
	argv_1549	= argv_2766;
	argv_1551			= argv_2766;

	argv_1559			= argv_2766;
	argv_1556			= argv_2766;
	argv_1557		= argv_2766;
	argv_1558			= argv_2766;
	argv_1555= argv_2766;

	if (argv_1810 != argv_2766) {
		argv_3768 (); // ok if it fails
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:	
// @@ _dll_name: argv_773 : argv_2697 of the DLL of the kernel.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create a copy of the kernel DLL
// @@ the copy having a unique argv_2697, then to argv_2094 this copy
// @@ so that lookup of exported functions can be performed.
// @@ The reason why we can't work on the actuall DLL argv_1314 is
// @@ because we must permit the update of this DLL (argv_1185 by
// @@ another part) without having to argv_3463 the service offered
// @@ by the currently running kernel.
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should not have already been argv_2117.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::argv_2104 (argv_773 _dll_name) {
	argv_3379 argv_1892 = argv_1981; 

	if (argv_1810 != argv_2766) {
		argv_1892 = argv_1969;
	}
	else { // library not argv_2117 yet
		if (_dll_name == argv_2766) {
			argv_1892 = argv_1971;
		}
		else if (argv_804 (_dll_name) == false) {
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: kernel_manager dll argv_1314 can not be found : ", _dll_name);
			argv_1892 = argv_1976;
		}
		else { // parameters are OK
			// copy the kernel dll to temporary
			if (argv_3682 != "") {
				argv_1892 = argv_1967;
			}
			else { 
				string suffix;
#if defined (__WIN32_OS__) 
				suffix = "dll.delme";
#endif
#if defined (__LINUX_OS__)
				suffix = "so.delme";
#endif //#if defined (__LINUX_OS__)

				argv_1892 = argv_1634 (argv_1171.c_str(), _dll_name, "kernel_api", suffix.c_str(), argv_3682); 

				if (argv_1892 != 0) {
					argv_1892 = argv_1965;
				}
				else { // dll succesfully copied to temporary
					argv_1892 = argv_1981;
#if defined (__DEBUG_KERNEL_MANAGER__)
					argv_2135->argv_2142 (argv_2763, "kernel manager - argv_2104 : copied DLL to temporary : ", argv_3682.c_str());
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)

					#if defined (__WIN32_OS__) 
						argv_1810 = LoadLibrary (argv_3682.c_str());
					#endif // #if defined (__WIN32_OS__) 
					#if defined (__LINUX_OS__)
						argv_1810 = dlopen (argv_3682.c_str(), RTLD_NOW);
					#endif // #if defined (__LINUX_OS__)

					if (argv_1810 == argv_2766) {
#if defined (__LINUX_OS__)
						char * strerror = dlerror ();
						argv_2135->argv_2142 (argv_1242, "+++ ERROR: dlopen failed : ", strerror);
#endif // #if defined (__LINUX_OS__)
						argv_1892 = argv_1973;
					}
				}
			}
		}
	}

	argv_1139 ("argv_2104", argv_1892);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	argv_3768			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to unload the kernel
// @@ library that was previously argv_2117, then as
// @@ the argv_2117 library was a copy of the original
// @@ argv_1314, the copy is deleted from argv_1314 system.
// @@
// @@ CONTRACT 		:
// @@ - the kernel library 	should have been argv_2117 prior 
// @@   to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::argv_3768 () {
	argv_3379 argv_1892 = argv_1981; 
	if (argv_1810 == argv_2766) {
		argv_1892 = argv_1970;
	}
	else { // the library seems to have been argv_2117 before this call
#if defined (__WIN32_OS__) 
			if (FreeLibrary (argv_1810) == 0) {
				argv_1892 = argv_1974;	
			}
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
			if (dlclose (argv_1810) != 0) {
				argv_1892 = argv_1974;
			}
#endif // #if defined (__LINUX_OS__)

			argv_1810 = argv_2766;

			// delete the temporary dll argv_1314
			if (argv_1116 (argv_3682.c_str()) == false) {
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_838::argv_3768 - failed to delete temporary argv_1314 : ", argv_3682.c_str());
				argv_1892 = argv_1964;			
			}
			argv_3682 = "";
	}
	argv_1139 ("argv_3768", argv_1892);	
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	argv_2150			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to perform the lookup of symbols 
// @@ (functions) that are resolved, argv_2117 and linked by 
// @@ the kernel itself. For that, we use the "argv_1674" 
// @@ function exported by the kernel API (DLL).
// @@ the necessary functions are :
// @@ - a argv_728 scan function
// @@ - a dysinfection function
// @@ - a scan report retrieval function
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should have been succesfully argv_2117
// @@   using the 'argv_2104' prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::argv_2150 () {
	argv_3379 argv_1892 = argv_1981;
	if (argv_1551 == argv_2766) {
		argv_1892 = argv_1968;
	}
	else { // pre-conditions are OK
		argv_2157 fn_addr = argv_2766;
		// argv_2094 the 'scanning' function argv_2117 & linked by the kernel
		argv_1892 = argv_1551 (argv_1994, argv_3290.c_str(), &fn_addr);
		if (argv_1892 == argv_2001) {
			argv_1559 = (argv_1448) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
			argv_2135->argv_2142 (argv_2763, "- argv_2117 inner function : ", argv_3290.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
		}
		else {
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: failed to argv_2094 inner function : ", argv_3290.c_str());	
		}

		// argv_2094 the 'argv_1937' function argv_2117 & linked by the kernel 
		if (argv_1892 == argv_2001) {
			argv_1892 = argv_1551 (argv_1994, argv_1937.c_str(), &fn_addr);
			if (argv_1892 == argv_2001) {
				argv_1555 = (argv_1444) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2135->argv_2142 (argv_2763, "- argv_2117 inner function : ", argv_1937.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: failed to argv_2094 inner function : ", argv_1937.c_str());	
			}
		}

		// argv_2094 the 'dysinfect' function argv_2117 & linked by the kernel
		if (argv_1892 == argv_2001) {
			argv_1892 = argv_1551 (argv_1994, argv_1195.c_str(), &fn_addr);
			if (argv_1892 == argv_2001) {
				argv_1556 = (argv_1445) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2135->argv_2142 (argv_2763, "- argv_2117 inner function : ", argv_1195.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: failed to argv_2094 inner function : ", argv_1195.c_str());	
			}
		}

		// argv_2094 the 'get_scan_report' function argv_2117 & linked by the kernel
		if (argv_1892 == argv_2001) {
			argv_1892 = argv_1551 (argv_1994, argv_1676.c_str(), &fn_addr);
			if (argv_1892 == argv_2001) {
				argv_1557 = (argv_1446) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2135->argv_2142 (argv_2763, "- argv_2117 inner function : ", argv_1676.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: failed to argv_2094 inner function : ", argv_1676.c_str());	
			}
		}

		// argv_2094 the 'kernel_NATIVE_free' function argv_2117 & linked by the kernel
		if (argv_1892 == argv_2001) {
			argv_1892 = argv_1551 (argv_1994, argv_1982.c_str(), &fn_addr);
			if (argv_1892 == argv_2001) {
				argv_1558 = (argv_1447) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2135->argv_2142 (argv_2763, "- argv_2117 inner function : ", argv_1982.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: failed to argv_2094 inner function : ", argv_1982.c_str());	
			}
		}

	}

////////////////////////////////////////////////////
		{
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "argv_838::argv_2150 - argv_2117 the 'scanning' function : 0x%X\r\n", argv_1559);
			argv_3681[MAX_PATH - 1] = '\0';	argv_3283 (argv_3681);

			argv_3409 (argv_3681, MAX_PATH, "argv_838::argv_2150 - argv_2117 the 'dysinfect' function : 0x%X\r\n", argv_1556);
			argv_3681[MAX_PATH - 1] = '\0';	argv_3283 (argv_3681);

			argv_3409 (argv_3681, MAX_PATH, "argv_838::argv_2150 - argv_2117 the 'get_scan_report' function : 0x%X\r\n", argv_1557);
			argv_3681[MAX_PATH - 1] = '\0';	argv_3283 (argv_3681);

			argv_3409 (argv_3681, MAX_PATH, "argv_838::argv_2150 - argv_2117 the 'kernel_NATIVE_free' function : 0x%X\r\n", argv_1558);
			argv_3681[MAX_PATH - 1] = '\0';	argv_3283 (argv_3681);
		}
////////////////////////////////////////////////////


	if (argv_1892 == argv_2001) {
		argv_1892 = argv_1981;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	argv_2149			
// @@
// @@ INPUT			:
// @@ _fn_name: argv_773: argv_2697 of the function whose argv_595 is to
// @@   be extracted from kernel library.
// @@
// @@ OUTPUT		:	none
// @@ _fn_addr: argv_2157&: argv_595 of the function that was looked up.
// @@    it is set to argv_2766 if lookup failed.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the argv_595 of the function
// @@ whose argv_2697 is given as the '_fn_name' parameter from the
// @@ kernel library which was previously argv_2117 by a call to 
// @@ the 'argv_2104' function.
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should have been succesfully argv_2117
// @@   using the 'argv_2104' prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::argv_2149 (argv_773 _fn_name, argv_2157& _fn_addr) {
	argv_3379 argv_1892 = argv_1981; 
	_fn_addr = argv_2766;

	if (argv_1810 == argv_2766) {
		argv_1892 = argv_1970;
	}
	else if ((_fn_name == argv_2766) || (strlen (_fn_name) == 0)) {
		argv_1892 = argv_1971;
	}
	else { // all pre-conditions are met, ok to proceed
			#if defined (__LINUX_OS__)
				_fn_addr = (argv_2157) dlsym (argv_1810, _fn_name);
			#endif // #if defined (__LINUX_OS__)		
			#if defined (__WIN32_OS__) 
				_fn_addr = (argv_2157) GetProcAddress (argv_1810, _fn_name);
			#endif // #if defined (__WIN32_OS__) 
			
		if (_fn_addr == argv_2766) {
			#if defined (__WIN32_OS__) 
				argv_2033 = GetLastError ();
			#endif // #if defined (__WIN32_OS__) 
			#if defined (__LINUX_OS__)
				argv_2033 = errno;
			#endif // #if defined (__LINUX_OS__)
			argv_1892 = argv_1975;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	argv_1658			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _last_error: argv_3379&: the error argv_877 of the last error that
// @@   has occured.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the last error that occured.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::argv_1658 (argv_3379& _last_error) {
	argv_3379 argv_1892 = argv_1981;
	_last_error = argv_2033;
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	argv_1138			
// @@
// @@ INPUT			:	
// @@ _iret: argv_3379 : the return argv_877 of the function whose argv_3266
// @@   is to be displayed.
// @@
// @@ _fn_name: argv_773: argv_2697 of the function whose argv_3266 is to 
// @@   be displayed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1130 the argv_3266 of the argv_2094 
// @@ operation for the function whose argv_2697 is given as the 
// @@ '_fn_name' parameter, to argv_1130 the argv_3266, the '_iret'
// @@ parameter is used to determine whether the argv_2094 of this
// @@ function has failed or not.
// @@ 
// @@ Notice that in case of success, no argv_2271 is displayed
// @@ if the kernel manager is not in debug mode.
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::argv_1138 (argv_3379 _iret, argv_773 _fn_name) {
	argv_3379 argv_1892 = argv_1981;
	if (argv_2135 != argv_2766) {
		if (_iret !=  argv_1981) {
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_838::init - failed to argv_2094 function : ", _fn_name);	
		}
#if defined (__DEBUG_KERNEL_MANAGER__)
		else {
			argv_2135->argv_2142 (argv_1242, "- argv_2117 function : ", _fn_name);	
		}
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	argv_1139			
// @@
// @@ INPUT			:
// @@ _iret: argv_3379 : the return argv_877 of the function whose argv_3266
// @@   is to be displayed.
// @@
// @@ _fn_name: argv_773: argv_2697 of the function whose argv_3266 is to 
// @@   be displayed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to argv_1130 the argv_3266 of the function
// @@ whose argv_2697 is given as the '_fn_name' parameter using the
// @@ '_iret' parameter which is the argv_3807 returned by the function 
// @@ '_fn_name'.
// @@
// @@ Notice that in case of success, no argv_2271 is displayed
// @@ if the kernel manager is not in debug mode.
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_838::argv_1139 (argv_773 _fn_name, argv_3379 _iret) {
	if (argv_2135 != argv_2766) {
		char argv_3681[MAX_PATH];
		if (_iret !=  argv_1981) {
			string serror = argv_1240 (_iret);
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: kernel_manager - function '%s' failed ! (%s)", _fn_name, serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1242, argv_3681);	
		}
		else {
#if defined (__DEBUG_KERNEL_MANAGER__)
			argv_3409 (argv_3681, MAX_PATH, "kernel_manager - function '%s'...[SUCCESS]", _fn_name);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_2763, argv_3681);	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	argv_3115			
// @@
// @@ INPUT			:	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set up the names of :
// @@ - the kernel's configuration argv_1364
// @@ - the kernel's log directory.
// @@ - the kernel's plugin directory
// @@ - the kernel's dll directory
// @@ The actual scheme being :
// @@ argv_3273/PLUGIN
// @@ argv_3273/DLL
// @@ argv_3273/LOG
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::argv_3115 () {
	argv_3379 argv_1892 = argv_1981;

	argv_982		= argv_3273	+ argv_3347 + "conf_kernel.txt";
	argv_2131		= argv_3273	+ argv_3347 + "LOG";
	cerr << "@@1: argv_3273 = " << argv_3273 << endl;
	cerr << "@@1: argv_1171 = " << argv_1171 << endl;
	cerr << "@@1: argv_3347 = " << argv_3347 << endl;
	argv_1171		= argv_3273	+ argv_3347 + "DLL";
	cerr << "@@2: argv_1171 = " << argv_1171 << endl;
	argv_3012	= argv_3273	+ argv_3347 + "PLUGIN";

	argv_1139 ("argv_3115", argv_1892);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	argv_2148			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup argv_595 of all necessary
// @@ functions that are exported by the kernel library.
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should have succesfully been argv_2117
// @@   prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::argv_2148 () {
	argv_3379	argv_1892		= argv_1981;
	argv_2157	generic_ptr	= argv_2766;
	if (argv_1810 == argv_2766) {
		argv_1892 = argv_1970;
	}
	
	if (argv_1892 == argv_1981) { 
		argv_1892 = argv_2149 ("construct_kernel", generic_ptr);
		argv_1543 = (argv_1409) generic_ptr; 	
		argv_1138 (argv_1892, "construct_kernel");
	}

	if (argv_1892 == argv_1981) {
		argv_1892 = argv_2149 ("argv_1129", generic_ptr);
		argv_1546 = (argv_1418) generic_ptr;
		argv_1138 (argv_1892, "argv_1129");
	}

	if (argv_1892 == argv_1981) {
		argv_1892 = argv_2149 ("argv_721", generic_ptr);
		argv_1540 = (argv_1399) generic_ptr;
		argv_1138 (argv_1892, "argv_721");
	}
	
	if (argv_1892 == argv_1981) {
		argv_1892 = argv_2149 ("argv_3375", generic_ptr);
		argv_1606 = (argv_1537) generic_ptr;
		argv_1138 (argv_1892, "argv_3375");
	}
	
	if (argv_1892 == argv_1981) {
		argv_1892 = argv_2149 ("get_kernel_version", generic_ptr);
		argv_1550 = (argv_1433) generic_ptr;
		argv_1138 (argv_1892, "get_kernel_version");
	}
	
	if (argv_1892 == argv_1981) {
		argv_1892 = argv_2149 ("argv_1657", generic_ptr);
		argv_1549 = (argv_1432) generic_ptr;
		argv_1138 (argv_1892, "argv_1657");
	}
	
	if (argv_1892 == argv_1981) {
		argv_1892 = argv_2149 ("argv_1674", generic_ptr);
		argv_1551 = (argv_1434) generic_ptr;
		argv_1138 (argv_1892, "argv_1674");
	}

	argv_1139 ("argv_2148", argv_1892);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	construct_kernel			
// @@
// @@ INPUT			:	
// @@ _root_folder: argv_773: base folder of the kernel.
// @@ 
// @@ _dll_name: argv_773: argv_2697 of the kernel library argv_1314.
// @@	
// @@ _log_ptr: argv_865 *: argv_595 of the log argv_2785 to use.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the construct operation.
// @@ It performs the following steps :
// @@ - argv_3110 the necessary directories.
// @@ - argv_2094 the kernel's DLL. 
// @@ - argv_2094 all external symbols exported by the DLL.
// @@ - construct the kernel.
// @@
// @@ CONTRACT 		:	
// @@ - '_dll_name'		parameter should not be a argv_2766 pointer.
// @@ - '_root_folder'	parameter should not be a argv_2766 pointer.
// @@ - '_log_ptr'		parameter should not be a argv_2766 pointer.
// @@ - kernel should not have been constructed yet.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::construct_kernel (argv_773 _root_folder, argv_773 _dll_name, argv_865 * _log_ptr) {
	argv_3379 argv_1892 = argv_1981;
	if (argv_3460 != argv_1979) {
		argv_1892 = argv_1966;
	}
	else if ((_dll_name == argv_2766) || (_root_folder == argv_2766) || (_log_ptr == argv_2766)) {
		argv_1892 = argv_1971;
	}
	else { // parameters are OK
		argv_2135		= _log_ptr;
		argv_3273	= _root_folder;

		// argv_3110 the necessary directories
		argv_1892 = argv_3115 ();

		if (argv_1892 == argv_1981) {
			// argv_2094 the kernel's DLL 
			argv_1892 = argv_2104 (_dll_name);
		}

		if (argv_1892 == argv_1981) {
			// argv_2094 all external symbols exported by the DLL.
			argv_1892 = argv_2148 ();
		}

		// construct the kernel itself (create argv_2806 instance of the kernel)
		if (argv_1892 == argv_1981) {
			argv_1994 = argv_1543 ();
			if (argv_1994 == argv_2766) {
				argv_1892 = argv_1972;
			}
			else { // operation fully succeeded, change the argv_3460
				argv_3460 = argv_1978;
			}
			argv_1139 ("argv_1543", argv_1892);
		}
	}

	if (argv_1892 == argv_2001) { // remap error argv_877
		argv_1892 = argv_1981; 
	}
	argv_1139 ("construct_kernel", argv_1892);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	argv_721			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the argv_717 operation.
// @@ It performs the following steps :
// @@ - argv_717 the kernel
// @@ - argv_2094 the inner functions argv_2117 and linked by the kernel.
// @@ 	- argv_2094 inner function : "scan".
// @@ 	- argv_2094 inner function : "get_scan_result".
// @@ 	- argv_2094 inner function : "dysinfect".
// @@
// @@ CONTRACT 		:	
// @@ - kernel should have been succesfully constructed
// @@   prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_838::argv_3283 (argv_773 _msg) {
#if defined (__STRONG_DEBUG_KERNEL__)
	fprintf (argv_1398, "%s\r\n", _msg);
	fclose (argv_1398); 
	argv_1398 = fopen ("C:\\Ckernel_manager_log.txt", "ab");
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
}


argv_3379 argv_838::argv_721 () {

#if defined (__STRONG_DEBUG_KERNEL__)	
	argv_1398 = fopen ("C:\\Ckernel_manager_log.txt", "wb");
	MessageBox (argv_2766, "open blackbox log : C:\\Ckernel_manager_log.txt", "", MB_OK);
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	/////////////////////////////////////

	argv_3379 argv_1892 = argv_1981;
	if (argv_3460 != argv_1978) {
		argv_1892 = argv_1966;
	}
	else { // valid argv_3460 for this operation
		argv_1892 = argv_1540 (argv_1994, argv_982.c_str(), argv_2131.c_str(), argv_1171.c_str(), argv_3012.c_str(), argv_1936);
	}

	if (argv_1892 == argv_2001) { // remap error argv_877
		argv_1892 = argv_1981;
	}
	argv_1139 ("argv_1540", argv_1892);

	if (argv_1892 == argv_1981) {
		argv_1892 = argv_2150 ();
		if (argv_1892 == argv_1981) {
			argv_3460 = argv_1977;
		}
		argv_1139 ("argv_2150", argv_1892);
	}

	argv_1139 ("argv_721", argv_1892);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	argv_3375			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the argv_3374 operation.
// @@ It performs the following steps :
// @@ - argv_3374 the kernel using the "argv_3374" exported function.
// @@
// @@ CONTRACT 		:
// @@ - kernel should have been constructed and booted
// @@   succesfully prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::argv_3375 () {
	argv_3379 argv_1892 = argv_1981;
	if (argv_3460 != argv_1977) {
		argv_1892 = argv_1966;
	}
	else { // valid argv_3460 for this operation
		argv_1892 = argv_1606 (argv_1994);
	}

	if (argv_1892 == argv_2001) { // remap error argv_877
		argv_3460	= argv_1980;
		argv_1892	= argv_1981;
	}
	argv_1139 ("argv_3375", argv_1892);

#if defined (__STRONG_DEBUG_KERNEL__)
	fclose (argv_1398);
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the argv_1127 operation.
// @@ It performs the following steps :
// @@ - argv_1127 the kernel.
// @@ - unload the kernel's DLL.
// @@
// @@ CONTRACT 		:	
// @@ - the kernel should have been succesfully constructed,
// @@   booted, and argv_3374 prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::argv_1129 () {
	argv_3379 argv_1892 = argv_1981;
	if (argv_3460 != argv_1980) {
		argv_1892 = argv_1966;
	}
	else { // valid argv_3460 for this operation
		argv_1892 = argv_1546 (argv_1994);
		if (argv_1892 == argv_2001) {
			argv_1892 = argv_1981;
		}

		argv_1139 ("argv_1129", argv_1892);

		if (argv_1892 == argv_1981) {
			argv_1892 = argv_3768 ();
			if (argv_1892 == argv_1981) {
				argv_3460 = argv_1979;
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838	
// @@
// @@ FUNCTION		:	argv_3306		
// @@
// @@ INPUT			:
// @@ _filename: argv_773: argv_2697 of the argv_1314 to scan.
// @@
// @@ _dysinfect: true if a dysinfection must be performed in case
// @@   the argv_1314 to scan is infected.
// @@
// @@ OUTPUT		:
// @@ _infected: bool&: set to true if the argv_1314 scanned was infected,
// @@                   false otherwise.
// @@
// @@ _dysinfect_possible: bool&: set to true if the dysinfection of
// @@   the scanned argv_1314 is possible,
// @@   false otherwise.
// @@
// @@ _virus_name: argv_1004&: argv_2697 of the virus in case of infection. 
// @@   Notice that the necessary memory to contain the virus argv_2697
// @@   is allocated by the kernel.
// @@ 
// @@ _dysinfect_done: bool& : set to true if dysinfection step was 
// @@   performed, false otherwise.
// @@    
// @@ _dysinfect_success: bool&: set to true if dysinfection step was
// @@   performed and succeeded. set to false otherwise.   
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1981 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permit to scan the argv_1314 whose argv_2697 is given
// @@ as the '_filename' parameter. Notice that this argv_1314 must be
// @@ located on the argv_1314 system.
// @@ If the argv_1314 is infected, and if the '_dysinfect' flag was
// @@ set to true, a dysinfection is performed.
// @@
// @@ Notice : in case of infection, the kernel allocates enough
// @@   memory and save this memory argv_595 into the argv_3266 
// @@   argument '_virus_name'.
// @@
// @@ CONTRACT 		:	
// @@ - kernel must have been succesfully constructed and booted
// @@   prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_838::argv_3306 (argv_773 _filename, bool _dysinfect, bool& _infected, bool& _dysinfect_possible, argv_1004& _virus_name, bool& _dysinfect_done, bool& _dysinfect_success, argv_3379& _dysinfect_success_code) {
	argv_3379 argv_1892			= argv_1981;
	_infected			= false;
	_dysinfect_done		= false;
	_dysinfect_success	= false;
	_virus_name			= argv_2766;
	_dysinfect_possible	= false;
	argv_3317		= argv_2766;

#if defined (__DEBUG_KERNEL_MANAGER__)
	argv_2135->argv_2142 (argv_1086, "kernel manager - scan argv_1314 : '", _filename, "'");
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)

	////////////////////////////////////////////////
	////////////////////////////////////////////////
	////////////////////////////////////////////////
//	MessageBox (argv_2766, "argv_838::argv_3306 - scan disabled (DEBUG PURPOSE)", "", MB_ICONWARNING);
//	return (argv_1981);
	////////////////////////////////////////////////
	////////////////////////////////////////////////
	////////////////////////////////////////////////

	if (argv_3460 != argv_1977) {
		argv_1892 = argv_1966;
	}
	else { // valid argv_3460 for this operation
		// scan the argv_1314 
#if defined (__STRONG_DEBUG_KERNEL__)
		{ fprintf (argv_1398, "argv_838::argv_3306 - @1\r\n"); fclose (argv_1398);  argv_1398 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
		argv_1892 = argv_1559 (argv_1936, (argv_1004) _filename, _infected, argv_3317);
#if defined (__STRONG_DEBUG_KERNEL__)
		{ fprintf (argv_1398, "argv_838::argv_3306 - @2\r\n"); fclose (argv_1398);  argv_1398 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)

		if (argv_1892 != argv_2001) {
			argv_1139 ("argv_1559", argv_1892);
		}
		else { // scan succeeded
			if (_infected == false) { // argv_1314 is not infected
#if defined (__STRONG_DEBUG_KERNEL__)
			{ fprintf (argv_1398, "argv_838::argv_3306 - @3\r\n"); fclose (argv_1398);  argv_1398 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)

#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2135->argv_2142 (argv_2763, "kernel manager - scan argv_1314 : argv_1314 is not infected");	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else { // argv_1314 is infected, let's retrieve the virus' argv_2697
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2135->argv_2142 (argv_2763, "kernel manager - scan argv_1314 : argv_1314 is infected");	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
				argv_3717 dysinfection_flag = DYSINFECT_UNDEFINED_VALUE;
				argv_1892 = argv_1557 (argv_1936, argv_3317, _virus_name, dysinfection_flag);
				if (argv_1892 == argv_2001) {
					if (dysinfection_flag == DYSINFECT_POSSIBLE) {
						_dysinfect_possible = true;
					}

					if ((_dysinfect == true) && (dysinfection_flag == DYSINFECT_POSSIBLE)) {
						_dysinfect_done		= true;
						_dysinfect_success	= true;
						argv_1892 = argv_1556 (argv_1936, argv_3317, (argv_1004) _filename, _dysinfect_success_code);
						if (argv_1892 != argv_2001) {
							_dysinfect_success = false;
						}
					}
				}
			}
		}
	}

	// deallocate the scan argv_1073 that were allocated by the plugin (if necessary)
#if defined (__STRONG_DEBUG_KERNEL__)
	{ fprintf (argv_1398, "argv_838::argv_3306 - @4\r\n"); fclose (argv_1398);  argv_1398 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
	{ fprintf (argv_1398, "argv_838::argv_3306 - argv_1555 = 0x%X\r\n", argv_1555); fclose (argv_1398);  argv_1398 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	argv_1892 = argv_1555 (argv_1936);
#if defined (__STRONG_DEBUG_KERNEL__)
	{ fprintf (argv_1398, "argv_838::argv_3306 - @5\r\n"); fclose (argv_1398);  argv_1398 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	if (argv_1892 != argv_2001) {
		string serror = argv_1240 (argv_1892);
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: kernel manager - kernel_deallocate_all_atoms failed ! (argv_1239=%s)", serror.c_str());
		argv_2135->argv_2142 (argv_2763, argv_3681);	
	}
#if defined (__DEBUG_KERNEL_MANAGER__)
	else {
		argv_2135->argv_2142 (argv_2763, "kernel manager - kernel_deallocate_all_atoms...[SUCCESS]");
	}
#endif

	if (argv_1892 == argv_2001) { // remap error argv_877
		argv_1892 = argv_1981;
#if defined (__DEBUG_KERNEL_MANAGER__)
		argv_2135->argv_2142 (argv_2763, "kernel manager - scan argv_1314...[SUCCESS]");	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
