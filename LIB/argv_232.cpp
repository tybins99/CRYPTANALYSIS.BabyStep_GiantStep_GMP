// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_232.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the functions that permit
// @@ to communicate with the service scanner either
// @@ from remote, or from a local client 
// @@ independantly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_291.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;


/*
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_941	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if operation was succesful,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function is to be called prior to any other in order
// @@ to argv_3110 the com API to use the TCP/IP stack.
// @@ Notice that it does nothing under Linux platforms.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_941 () {
		bool bret = true;
#if defined (__WIN32_OS__) 
		bret = argv_3121 ();
#endif // #if defined (__WIN32_OS__) 
		return (bret);

	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_942	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if operation was succesful,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function is to be called before exiting and when
// @@ no other call to the com api is necessary.
// @@ Notice that it does nothing on Linux platforms.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_942 () {
		bool bret = true;
#if defined (__WIN32_OS__) 
		bret = argv_3594 ();
#endif // #if defined (__WIN32_OS__) 
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_910
// @@
// @@ INPUT			:	
// @@ _cli_ptr_ptr: argv_2157 *: contains the argv_595 of the new instance
// @@   of the com client.
// @@
// @@ OUTPUT		:	
// @@ _result: bool& : true if operation was succesful,
// @@          false otherwise.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_922 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create a new instance of the com
// @@ client argv_2785 and argv_3110 it for use.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr_ptr' must not be a argv_2766 pointer.
// @@ - '*_cli_ptr_ptr' must be argv_2766, i.e must not contain a valid 
// @@   argv_595. 	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_910 (argv_2157 * _cli_ptr_ptr, bool& _result) {
		_result = true;
		argv_3321 ** cli_ptr_ptr = (argv_3321 **) _cli_ptr_ptr;
		argv_3379 argv_1892 = argv_922;
		if (cli_ptr_ptr == argv_2766) {
			argv_1892 = argv_916;
		}
		else if (*cli_ptr_ptr != argv_2766) {
			argv_1892 = argv_914;
		}
		else { // allocate the client structure
			*cli_ptr_ptr = new (std::nothrow) argv_3321; 
			if (*cli_ptr_ptr == argv_2766) {
				argv_1892 = argv_917;
			}
			else { // memory allocation was succesful for the client structure
				// allocate the argv_2258 argv_2785
				(*cli_ptr_ptr)->argv_2251 = new (std::nothrow) argv_876;
				if ((*cli_ptr_ptr)->argv_2251 == argv_2766) {
					argv_1892 = argv_917;
				}
				else { // argv_2234 sock argv_2785 succesfully allocated
					(*cli_ptr_ptr)->argv_2033 = argv_922;

					// allocate the packet argv_2785
					(*cli_ptr_ptr)->argv_2884 = new (std::nothrow) argv_1000;
					if ((*cli_ptr_ptr)->argv_2884 == argv_2766) {
						argv_1892 = argv_917;
					}
				}
			}
		}

		if (argv_1892 != argv_922) {
			_result = false;
		}
		return (argv_1892);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_911	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2157: argv_595 of the com argv_2785 obtained
// @@   by a previous call to the function 'argv_910'.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if operation was succesful,
// @@        false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1127 the com argv_2785 after use
// @@ and to release all memory used by this argv_2785 and other related
// @@ objects as well.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_911 (argv_2157 _cli_ptr) {
		bool bret = true;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		argv_3379 argv_1892 = argv_922;
		if (cli_ptr == argv_2766) {
			argv_1892 = argv_916;
			bret = false;
		}
		else { // parameters are OK
			delete cli_ptr;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_909
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2157: argv_595 of the com client obtained by a previous
// @@ call to the 'argv_910' function.
// @@
// @@ _servname: argv_773: argv_2697 or IP argv_595 of the server to connect to.
// @@
// @@ _servport: argv_3717: argv_3095 to connect to.
// @@ 
// @@ OUTPUT		:	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if operation was succesful,
// @@        false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to connect the com argv_2785 to the server
// @@ whose IP (or argv_2697) and argv_3095 were given as parameters.
// @@ Notice that this function disables the TCP/IP nagle algorithm
// @@ as well for the connected argv_3410.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2766 pointer.
// @@ - '_servname' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_909 (argv_2157 _cli_ptr, argv_773 _servname, argv_3717 _servport) {
		bool bret = true;
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if ((cli_ptr == argv_2766) || (_servname == argv_2766)) { // parameters are OK
			argv_1892 = argv_916;
		}
		else { // parameters are OK
			argv_1892 = cli_ptr->argv_2251->argv_3112 (_servname, _servport);
			if (argv_1892 == argv_2262) {
				SOCKET * sock_ptr = argv_2766;

				argv_1892 = 	cli_ptr->argv_2251->argv_1644 ((argv_2157&) sock_ptr);

				// disable the Nagle's algorithm
				argv_1892 = disable_nagle_algorithm (*sock_ptr);

				if (argv_1892 == argv_2262) {
					argv_1892 = argv_922;
				}
			}
		}

		if (cli_ptr != argv_2766) {
			cli_ptr->argv_2033	= argv_1892;
		}
		if (argv_1892 != argv_922) {
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_919
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2157: argv_595 of the com client obtained by a previous
// @@ call to the 'argv_910' function.
// @@
// @@ _filename: argv_773 : argv_2697 of the local argv_1314 to scan for viruses.
// @@
// @@ _dysinfect: bool: set to true if dysinfection is to be argv_1185.
// @@                   set to false otherwise.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to scan the local argv_1314 whose argv_2697 is
// @@ given as a parameter for viruses.
// @@ The caller can choose to attempt a dysinfection if necessary
// @@ via the '_dysinfect' parameter.
// @@ The argv_3266 of the scan may be obtained by a call to the 
// @@ 'com_client_get_local_result' function.
// @@
// @@ Notice that the caller is suposed to have connected the com
// @@ argv_2785 using the 'argv_909' prior to this call.
// @@
// @@ CONTRACT		:
// @@ - '_cli_ptr'  parameter must not be a argv_2766 pointer.
// @@ - '_filename' parameter must not be a argv_2766 pointer.		
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_919 (argv_2157 _cli_ptr, argv_773 _filename, bool _dysinfect) {
		bool bret = true;
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if ((cli_ptr == argv_2766) || (_filename == argv_2766)) { // parameters are OK
			argv_1892 = argv_916;
		}
		else { // parameters are OK
			argv_1892 = cli_ptr->argv_2884->reset ();
			if (argv_1892 == argv_2901) { // packet was reseted succesfully
				argv_3715 his_type		= argv_2928;

				if (_dysinfect == true) {
					his_type		= argv_2924;
				}
				argv_1892 = cli_ptr->argv_2884->argv_3363 (his_type);

				if (argv_1892 == argv_2901) { // packet argv_3695 was set succesfully
					argv_1892 = cli_ptr->argv_2884->insert (_filename);
				}

				if (argv_1892 == argv_2901) { // argv_2830 the packet so that it can be ready
					argv_1892 = cli_ptr->argv_2884->argv_2830 ();
				}

				if (argv_1892 == argv_2901) { // argv_3335 the packet to the server
					argv_1892 = cli_ptr->argv_2884->argv_3335 (*(cli_ptr->argv_2251));
				}
			}
		}

		if (argv_1892 == argv_2901) { // remap error argv_877
			argv_1892 = argv_922; 
		}

		if (cli_ptr != argv_2766) {
			cli_ptr->argv_2033 = argv_1892;
		}

		if (argv_1892 != argv_922) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_920
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2157: argv_595 of the com client obtained by a previous
// @@ call to the 'argv_910' function.
// @@
// @@ _filename: argv_773 : argv_2697 of the remote argv_1314 to scan for viruses.
// @@
// @@ _dysinfect: bool: set to true if dysinfection is to be argv_1185.
// @@                   set to false otherwise.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the scan of a local argv_1314
// @@ when the scan server is located on another host, thus in
// @@ order to perform the scan, this function sends the entire
// @@ argv_1314 content to the remote scan server.
// @@ The caller can choose to attempt a dysinfection if necessary
// @@ via the '_dysinfect' parameter.
// @@ the argv_3266 of the scan may be obtained by a call to the
// @@ 'com_client_get_remote_result' function.
// @@
// @@ WARNING: this function is much slower than the 
// @@ 'argv_919' function (because it sends the argv_1314
// @@  content to the scan server) and thus should not be used when 
// @@ the scan client and scan server are located on the same host. 
// @@
// @@ Notice that the caller is suposed to have connected the com
// @@ argv_2785 using the 'argv_909' prior to this call.
// @@
// @@ CONTRACT		:
// @@ - '_cli_ptr'  parameter must not be a argv_2766 pointer.
// @@ - '_filename' parameter must not be a argv_2766 pointer.		
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_920 (argv_2157 _cli_ptr, argv_773 _filename, bool _dysinfect) {
		bool bret = true;
		
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if ((cli_ptr == argv_2766) || (_filename == argv_2766)) { // parameters are OK
			argv_1892 = argv_916;
		}
		else if (argv_804 (_filename) == false) {
			argv_1892 = argv_918;
		}
		else { // parameters are OK
			argv_1892 = cli_ptr->argv_2884->reset ();
			if (argv_1892 == argv_2901) { // packet was reseted succesfully
				argv_3715 his_type		= argv_2930;

				if (_dysinfect == true) {
					his_type		= argv_2926;
				}

				argv_1892 = cli_ptr->argv_2884->argv_3339 (_filename, *(cli_ptr->argv_2251), his_type, false);
			}
		}

		if (argv_1892 == argv_2901) { // remap error argv_877
			argv_1892 = argv_922; 
		}

		if (cli_ptr != argv_2766) {
			cli_ptr->argv_2033 = argv_1892;
		}

		if (argv_1892 != argv_922) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	com_client_get_local_result	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2157: argv_595 of the com client obtained by a previous
// @@ call to the 'argv_910' function.
// @@
// @@ _socket_timeout: argv_3379: the maximum argv_3410 inactivity duration expressed
// @@    in second (set to -1 for INFINITE).
// @@
// @@ OUTPUT		:
// @@ _scan_success: bool&: true of the scanning operation was succesful,
// @@                       false otherwise.	
// @@
// @@ _infected: bool&: true if a virus was found during scanning,
// @@                   false otherwise (notice that this field is meaningful
// @@                   only when '_scan_success' is true).
// @@
// @@ _dysinfect_possible: true if the infected argv_1314 can be dysinfected,
// @@                      false otherwise (notice that this field is meaningful
// @@                      only when '_infected' is true).
// @@ 
// @@ _virus_name: argv_1004: argv_2697 of the virus found (notice that this field is 
// @@                    meaningful only  when '_infected' is true).
// @@                    Notice that this field should have been allocated by the
// @@                    caller to a size of MAX_PATH.
// @@ 
// @@ _dysinfect_done: bool& : true if dysinfection was performed,
// @@                          false otherwise (notice that this field is meaningful
// @@                          only if '_infected' and '_dysinfect_possible' are true).
// @@
// @@ _dysinfect_success: bool&: true if the dysinfection succeeded, 
// @@                            false otherwise (notice that this field is meaningful
// @@                            only if '_infected' and '_dysinfect_possible' and 
// @@                            '_dysinfect_done' are true).
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if operation was succesful, 
// @@       false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to obtain the argv_3266 of the 'argv_919'
// @@ function.
// @@ Notice that the argv_3266 fields have dependancies (see parameters description).
// @@ For information, the detailed description of the scanning server
// @@ answer is as follows :
// @@ BODY DESCRIPTION:
// @@ - scan success				(1)  : 0= success, 1=failed
// @@ - infection flag				(1)	 : 0= not infected, 1=infected
// @@ - dysinfection possible		(1)  : 0= not possible, 1=possible
// @@ - dysinfection argv_1185 flag		(1)	 : 0=not argv_1185, 1=argv_1185
// @@ - dysinfection report flag	(1)	 : 0=failed, 1=success
// @@ - {virus argv_2697}				(??) : empty if infected_flag=0
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_local_result (argv_2157 _cli_ptr, argv_3379 _socket_timeout, bool& _scan_success, bool& _infected, bool& _dysinfect_possible, argv_1004 _virus_name, bool& _dysinfect_done, bool& _dysinfect_success) {
		bool bret			= true;

		_scan_success		= false;
		_infected			= false;
		_dysinfect_possible	= false;
		_dysinfect_done		= false;
		_dysinfect_success	= false;

		argv_3379 argv_1892 = argv_922;
		_virus_name[0] = '\0';

		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if (cli_ptr == argv_2766) { // parameters are OK
			argv_1892 = argv_916;
		}
		else { // parameters are OK
			argv_1892 = cli_ptr->argv_2884->reset ();

			if (argv_1892 == argv_2901) { // packet was reseted succesfully
				argv_1892 = cli_ptr->argv_2884->argv_3199 (*(cli_ptr->argv_2251), _socket_timeout, false);

				if (argv_1892 == argv_2901) { // packet received succesfully
					// argv_1292 the received packet argv_3695
					argv_3715 his_type = argv_2940;
					argv_1892 = cli_ptr->argv_2884->argv_1684 (his_type);
					if (argv_1892 == argv_2901) { // argv_3695 extraction succeeded
						argv_3715 scan_success_UI08				= 0;
						argv_3715 infection_flag_UI08			= 0;
						argv_3715 dysinfect_possible_flag_UI08	= 0;
						argv_3715 dysinf_done_flag_UI08			= 0;
						argv_3715 dysinf_report_flag_UI08		= 0;

						if (argv_1892 == argv_2901) {
							argv_1892 = cli_ptr->argv_2884->argv_1292 (scan_success_UI08);
						}
						if (argv_1892 == argv_2901) {
							argv_1892 = cli_ptr->argv_2884->argv_1292 (infection_flag_UI08);
						}
						if (argv_1892 == argv_2901) {
							argv_1892 = cli_ptr->argv_2884->argv_1292 (dysinfect_possible_flag_UI08);
						}
						if (argv_1892 == argv_2901) {
							argv_1892 = cli_ptr->argv_2884->argv_1292 (dysinf_done_flag_UI08);
						}
						if (argv_1892 == argv_2901) {
							argv_1892 = cli_ptr->argv_2884->argv_1292 (dysinf_report_flag_UI08);
						}

						if ((argv_1892 == argv_2901) && (infection_flag_UI08 == 1)) {
							string argv_3827;
							argv_1892 = cli_ptr->argv_2884->argv_1292 (argv_3827);
							if (argv_1892 == argv_2901) {
								argv_3717 nb_todo = argv_3827.size();
								if (nb_todo > MAX_PATH) {
									nb_todo = MAX_PATH;
								}
								strncpy (_virus_name, argv_3827.c_str(), nb_todo);
								_virus_name[nb_todo - 1] = '\0';
							}
						}

						if (argv_1892 == argv_2901) { // all argv_1073 retrieved succesfully
							if (scan_success_UI08 == 1) {
								_scan_success		= true;
							}
							if (infection_flag_UI08 == 1) {
								_infected			= true;
							}
							if (dysinfect_possible_flag_UI08 == 1) {
								_dysinfect_possible	= true;	
							}
							if (dysinf_done_flag_UI08 == 1) {
								_dysinfect_done		= true;
							}
							if (dysinf_report_flag_UI08 == 1) {
								_dysinfect_success	= true;
							}
						}
					}
				}
			}
		}

		if (argv_1892 == argv_2901) { // remap error argv_877
			argv_1892 = argv_922; 
		}

		if (cli_ptr != argv_2766) {
			cli_ptr->argv_2033 = argv_1892;
		}

		if (argv_1892 != argv_922) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	com_client_get_remote_result	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2157: argv_595 of the com client obtained by a previous
// @@ call to the 'argv_910' function.
// @@
// @@ _socket_timeout: argv_3379: the maximum argv_3410 inactivity duration expressed
// @@    in second (set to -1 for INFINITE).
// @@
// @@ _dest_filename: argv_2697 of the local argv_1314 that must contain the argv_3266
// @@   of the dysinfection (in case of infection).
// @@
// @@ OUTPUT		:
// @@ _scan_success: bool&: true of the scanning operation was succesful,
// @@                       false otherwise.	
// @@
// @@ _infected: bool&: true if a virus was found during scanning,
// @@                   false otherwise (notice that this field is meaningful
// @@                   only when '_scan_success' is true).
// @@
// @@ _dysinfect_possible: true if the infected argv_1314 can be dysinfected,
// @@                      false otherwise (notice that this field is meaningful
// @@                      only when '_infected' is true).
// @@ 
// @@ _virus_name: argv_1004: argv_2697 of the virus found (notice that this field is 
// @@                    meaningful only  when '_infected' is true).
// @@                    Notice that this field should have been allocated by the
// @@                    caller to a size of MAX_PATH.
// @@ 
// @@ _dysinfect_done: bool& : true if dysinfection was performed,
// @@                          false otherwise (notice that this field is meaningful
// @@                          only if '_infected' and '_dysinfect_possible' are true).
// @@
// @@ _dysinfect_success: bool&: true if the dysinfection succeeded, 
// @@                            false otherwise (notice that this field is meaningful
// @@                            only if '_infected' and '_dysinfect_possible' and 
// @@                            '_dysinfect_done' are true).
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if operation was succesful, 
// @@       false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to obtain the argv_3266 of the 'argv_920'
// @@ function.
// @@ Notice that the argv_3266 fields have dependancies (see parameters description).
// @@ For information, the detailed description of the scanning server
// @@ answer is as follows :
// @@ BODY DESCRIPTION:
// @@ - scan success				(1)  : 0= success, 1=failed
// @@ - infection flag				(1)	 : 0= not infected, 1=infected
// @@ - dysinfection possible		(1)  : 0= not possible, 1=possible
// @@ - dysinfection argv_1185 flag		(1)	 : 0=not argv_1185, 1=argv_1185
// @@ - dysinfection report flag	(1)	 : 0=failed, 1=success
// @@ - {virus argv_2697}				(??) : empty if infected_flag=0
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_remote_result (argv_2157 _cli_ptr, argv_3379 _timeout_second, argv_773 _dest_filename, bool& _scan_success, bool& _infected, bool& _dysinfect_possible, argv_1004 _virus_name, bool& _dysinfect_done, bool& _dysinfect_success) {
		bool bret = true;
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if ((cli_ptr == argv_2766) || (_dest_filename == argv_2766)) { // parameters are OK
			argv_1892 = argv_916;
		}
		else { // parameters are OK
			argv_1892 = cli_ptr->argv_2884->reset ();
			if (argv_1892 == argv_2901) { // packet was reseted succesfully
				bret = com_client_get_local_result (_cli_ptr, _timeout_second, _scan_success, _infected, _dysinfect_possible, _virus_name, _dysinfect_done, _dysinfect_success);

				if (bret == true) { // scan report received succesfully
					argv_1892 = cli_ptr->argv_2884->reset ();

					// read the dysinfected argv_1314 if necessary
					if ((argv_1892 == argv_2901) && (_infected==true) && (_dysinfect_done==true) && (_dysinfect_success == true))  { 
						argv_1892 = cli_ptr->argv_2884->argv_3202 (*(cli_ptr->argv_2251), _timeout_second, _dest_filename);
					}
				}
			}
		}

		if (argv_1892 == argv_2901) { // remap error argv_877
			argv_1892 = argv_922; 
		}

		if (cli_ptr != argv_2766) {
			cli_ptr->argv_2033 = argv_1892;
		}

		if (argv_1892 != argv_922) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_912
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2157: argv_595 of the com client obtained by a previous
// @@ call to the 'argv_910' function.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to disconnect the com client from the
// @@ scanning server.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_912 (argv_2157 _cli_ptr) {
		bool bret = true;
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if (cli_ptr == argv_2766) { // parameters are OK
			argv_1892 = argv_916;
		}
		else { // parameters are OK
			argv_1892 = cli_ptr->argv_2251->argv_870 ();
		}

		if (argv_1892 == argv_2262) { // remap error argv_877
			argv_1892 = argv_922; 
		}

		if (cli_ptr != argv_2766) {
			cli_ptr->argv_2033 = argv_1892;
		}

		if (argv_1892 != argv_922) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	com_client_get_last_error
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2157: argv_595 of the com client obtained by a previous
// @@ call to the 'argv_910' function.
// @@
// @@ OUTPUT		:	
// @@ _serror: argv_1004: error string retrieved, this parameter is supposed
// @@          to have been allocated by the caller prior to this call.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : the error argv_877 of the last error as a numeric argv_3807.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last error of the
// @@ com client as a string.
// @@ 
// @@ Notice that the caller is supposed to have allocated the 
// @@ '_serror' argv_728 (to MAX_PATH size) prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 com_client_get_last_error (argv_2157 _cli_ptr, argv_1004 _serror) {
		argv_3379 retrieved_last_error = argv_922;	
		_serror[0] = '\0';
		if (_cli_ptr == argv_2766) {
			retrieved_last_error = argv_915;
		}
		else {
			argv_3321 * cli_ptr	= (argv_3321 *) _cli_ptr;
			retrieved_last_error	= cli_ptr->argv_2033;
			string serror = argv_1240 (retrieved_last_error);

			argv_3717 nb_todo = MAX_PATH - 1;
			if (serror.size() < MAX_PATH) {
				nb_todo = serror.size();
			}
			strncpy (_serror, serror.c_str(), nb_todo);
			_serror[nb_todo] = '\0';		
		}
		return (retrieved_last_error);
	}
}
*/

// ============================================================================
// ============================================================================
// ============================================================================
// ============================================================================
// ============================================================================
// ============================================================================
// WARNING: this function is not exported by the DLL (internal use only).
argv_3379 internal_connect_unit (argv_3323& _unit,  argv_773 _servname, argv_3717 _servport) {
	argv_3379 argv_1892 = argv_922;
	_unit.argv_2234.reset ();
	argv_1892 = _unit.argv_2234.argv_3112 (_servname, _servport);
	if (argv_1892 == argv_2262) { // remap error argv_877
		argv_1892 = argv_922;
	}
	return (argv_1892);
}

argv_3379 internal_prepare_packet (argv_1000& _pck, vector<argv_772>& _v_atom, argv_3715 _type) {
	argv_3379 argv_1892 = argv_922;
	argv_1892 = _pck.reset ();
	if (argv_1892 == argv_2901) { // packet was reseted succesfully
		argv_1892 = _pck.argv_3363 (_type);

		if (argv_1892 == argv_2901) {
			argv_3717 argv_2744 = _v_atom.size ();
			for (argv_3717 i=0 ; i<argv_2744 ; i++) {
				switch (_v_atom[i].argv_3695) {
					case argv_990:
						argv_1892 = _pck.insert (_v_atom[i].argv_3810);
						break;

					case argv_991:
						argv_1892 = _pck.insert (_v_atom[i].argv_3811);
						break;

					case argv_989:
						argv_1892 = _pck.insert (_v_atom[i].argv_3809);
						break;

					default:
						argv_1892 = argv_923;
						break;
				}

				if (argv_1892 != argv_2901) {
					break;
				}
			}
		}

		if (argv_1892 == argv_2901) { // argv_2830 the packet so that it can be ready
			argv_1892 = _pck.argv_2830 ();
		}
	}

	if (argv_1892 == argv_2901) {
		argv_1892 = argv_922;
	}
	return (argv_1892);
}

// used by the function that retrieves a remote dysinfected argv_1314.
void internal_generate_unique_tmp_filename (argv_773 _tmp_folder, argv_3717& _generation, argv_1004 _dest_filename) {
	SYSTEMTIME		argv_3677;
	GetLocalTime (&argv_3677);
	argv_3409 (_dest_filename, MAX_PATH, "%s\\com_%u_%u_%u_%u_%u_%u_%u_%u.argv_3681", _tmp_folder, argv_3677.wYear, argv_3677.wMonth, argv_3677.wDay, argv_3677.wHour, argv_3677.wMinute, argv_3677.wSecond, argv_3677.wMilliseconds, _generation);
	_generation++;
	_dest_filename[MAX_PATH - 1] = '\0';
}

void internal_reset_result (argv_3322& _result) {
	_result.argv_1125[0]		= '\0';
	_result.argv_1198		= false;
	_result.argv_1199	= false;
	_result.argv_1200	= false;
	_result.infected				= false;
	_result.argv_2747		= 0;
	_result.argv_3318			= false;
	_result.argv_3695					= argv_2940;
	_result.argv_3827[0]			= '\0';
}

// -------------------------------------------------------

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_941 () {
		argv_3379 argv_1892 = argv_922;
#if defined (__WIN32_OS__) 
		argv_3121 ();
#endif // #if defined (__WIN32_OS__) 
		return (argv_1892);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_942 () {
		argv_3379 argv_1892 = argv_922;
#if defined (__WIN32_OS__) 
		argv_3594 ();
#endif // #if defined (__WIN32_OS__) 
		return (argv_1892);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_910 (argv_2157 * _cli_ptr_ptr, argv_773 _tmp_folder) {
		argv_3321 ** cli_ptr_ptr = (argv_3321 **) _cli_ptr_ptr;
		argv_3379 argv_1892 = argv_922;
		if ((cli_ptr_ptr == argv_2766) || (_tmp_folder == argv_2766)) {
			argv_1892 = argv_916;
		}
		else if (*cli_ptr_ptr != argv_2766) {
			argv_1892 = argv_914;
		}
		else { // allocate the client structure
			*cli_ptr_ptr = new (std::nothrow) argv_3321; 
			if ((*cli_ptr_ptr) == argv_2766) {
				argv_1892 = argv_917;
			}
			else { // memory allocation was succesful for the client structure
				(*cli_ptr_ptr)->argv_3684			= _tmp_folder; 
				(*cli_ptr_ptr)->argv_3685		= 0;
			}
		} 
		return (argv_1892);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_911 (argv_2157 _cli_ptr) {
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if (cli_ptr == argv_2766) {
			argv_1892 = argv_916;
		}
		else { // parameters are OK
			delete cli_ptr;
		}
		return (argv_1892);
	}
}

argv_3379 internal_update_maxfd (argv_2157 _cli_ptr) {
	argv_3379 argv_1892 = argv_922;
	argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
	SOCKET * sock_ptr_1 = argv_2766;
	SOCKET * sock_ptr_2 = argv_2766;

	argv_1892 = cli_ptr->argv_678.argv_2234.argv_1644 ((argv_2157&) sock_ptr_1);
	if (argv_1892 == argv_2262) {
		argv_1892 = cli_ptr->argv_3319.argv_2234.argv_1644 ((argv_2157&) sock_ptr_2);
		if (argv_1892 == argv_2262) { // all descriptors retrieved succesfully

			cli_ptr->argv_678.argv_3410	= (*sock_ptr_1);
			cli_ptr->argv_3319.argv_3410		= (*sock_ptr_2);

			cli_ptr->argv_3333.argv_2221		= cli_ptr->argv_678.argv_3410;
			if (cli_ptr->argv_3319.argv_3410 > cli_ptr->argv_3333.argv_2221) {
				cli_ptr->argv_3333.argv_2221	= cli_ptr->argv_3319.argv_3410;
			}
/*
			{
				char argv_3681[MAX_PATH];
				argv_3409 (argv_3681, MAX_PATH, "archive_socket=%d, scan_unit_socket=%d => argv_2221=%d", cli_ptr->argv_678.argv_3410, cli_ptr->argv_3319.argv_3410, cli_ptr->argv_3333.argv_2221);
				argv_3681[MAX_PATH - 1] = '\0';
				MessageBox (argv_2766, argv_3681, "", MB_OK);
			}*/
			// argv_3110 the select argv_1073
			FD_ZERO (&cli_ptr->argv_3333.readfds);
			FD_ZERO (&cli_ptr->argv_3333.readfds_dirty);

			FD_SET (cli_ptr->argv_678.argv_3410,	&cli_ptr->argv_3333.readfds);
			FD_SET (cli_ptr->argv_3319.argv_3410,		&cli_ptr->argv_3333.readfds);
			cli_ptr->argv_3333.argv_2221 = 0;
		}
	}

	if (argv_1892 == argv_2262) {
		argv_1892 = argv_922;
	}
	return (argv_1892);
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_909 (argv_2157 _cli_ptr, argv_773 _servname, argv_3717 _archive_port, argv_3717 _scan_port) {
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if ((cli_ptr == argv_2766) || (_servname == argv_2766)) { // parameters are OK
			argv_1892 = argv_916;
		}
		else { // parameters are OK
			argv_1892 = internal_connect_unit (cli_ptr->argv_678, _servname, _archive_port);
			if (argv_1892 == argv_922) {
				argv_1892 = internal_connect_unit (cli_ptr->argv_3319, _servname, _scan_port);
				if (argv_1892 == argv_922) {
					// update argv_2221 for select using the 2 descriptors.
					argv_1892 = internal_update_maxfd (_cli_ptr);
				}
			}
		}
		return (argv_1892);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_912 (argv_2157 _cli_ptr) {
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if (cli_ptr == argv_2766) { // parameters are OK
			argv_1892 = argv_916;
		}
		else { // parameters are OK
			argv_3379 iret_1 = cli_ptr->argv_678.argv_2234.argv_870 ();
			argv_3379 iret_2 = cli_ptr->argv_3319.argv_2234.argv_870 ();

			// gather only argv_2806 error out of all possible errors
			if (iret_1 != argv_2262) {
				argv_1892 = iret_1;
			}
			else if (iret_2 != argv_2262) {
				argv_1892 = iret_2;
			}
		}

		if (argv_1892 == argv_2262) { // remap error argv_877
			argv_1892 = argv_922; 
		}
		return (argv_1892);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_919 (argv_2157 _cli_ptr, argv_773 _filename, bool _dysinfect) {
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if ((cli_ptr == argv_2766) || (_filename == argv_2766)) { // parameters are OK
			argv_1892 = argv_916;
		}
		else { // parameters are OK
			argv_3715 his_type		= argv_2928;

			if (_dysinfect == true) {
				his_type		= argv_2924;
			}
			vector<argv_772> v_atom;
			argv_577 (_filename, v_atom);

			argv_1892 = internal_prepare_packet (cli_ptr->argv_3319.argv_2889, v_atom, his_type);
			if (argv_1892 == argv_922) { // argv_3335 the packet to the server
				argv_1892 = cli_ptr->argv_3319.argv_2889.argv_3335 (cli_ptr->argv_3319.argv_2234);
			}
		}

		if (argv_1892 == argv_2901) { // remap error argv_877
			argv_1892 = argv_922; 
		}
		return (argv_1892);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_920 (argv_2157 _cli_ptr, argv_773 _filename, bool _dysinfect) {
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if ((cli_ptr == argv_2766) || (_filename == argv_2766)) { // parameters are OK
			argv_1892 = argv_916;
		}
		else if (argv_804 (_filename) == false) {
			argv_1892 = argv_918;
		}
		else { // parameters are OK
			argv_1892 = cli_ptr->argv_3319.argv_2889.reset ();
			if (argv_1892 == argv_2901) { // packet was reseted succesfully
				argv_3715 opa_type	= argv_2930;

				if (_dysinfect == true) {
					opa_type	= argv_2926;
				}

				argv_1892 = cli_ptr->argv_3319.argv_2889.argv_3339 (_filename, cli_ptr->argv_3319.argv_2234, opa_type, false);
			}
		}

		if (argv_1892 == argv_2901) { // remap error argv_877
			argv_1892 = argv_922; 
		}
		return (argv_1892);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_913 (argv_2157 _cli_ptr, argv_773 _archive_file, argv_773 _dest_root_folder) {
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if ((cli_ptr == argv_2766) || (_archive_file == argv_2766) || (_dest_root_folder == argv_2766)) {
			argv_1892 = argv_916;
		}
		else { // parameters correctness succesfuly checked
			argv_3715 opa_type = argv_2911;
			vector<argv_772> v_atom;
			argv_577 (_archive_file, v_atom);
			argv_577 (_dest_root_folder, v_atom);

			argv_1892 = internal_prepare_packet (cli_ptr->argv_678.argv_2889, v_atom, opa_type);
			if (argv_1892 == argv_922) { // argv_3335 the packet to the server
				argv_1892 = cli_ptr->argv_678.argv_2889.argv_3335 (cli_ptr->argv_678.argv_2234);
			}
		}

		if (argv_1892 == argv_2901) { // remap error argv_877
			argv_1892 = argv_922; 
		}
		return (argv_1892);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_908 (argv_2157 _cli_ptr, argv_773 _folder_2_compress, argv_773 _result_filename) {
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		if ((cli_ptr == argv_2766) || (_folder_2_compress == argv_2766) || (_result_filename == argv_2766)) {
			argv_1892 = argv_916;
		}
		else { // parameters correctness succesfuly checked
			argv_3715 opa_type = argv_2908;
			vector<argv_772> v_atom;
			argv_577 (_folder_2_compress, v_atom);
			argv_577 (_result_filename, v_atom);

			argv_1892 = internal_prepare_packet (cli_ptr->argv_678.argv_2889, v_atom, opa_type);
			if (argv_1892 == argv_922) { // argv_3335 the packet to the server
				argv_1892 = cli_ptr->argv_678.argv_2889.argv_3335 (cli_ptr->argv_678.argv_2234);
			}
		}

		if (argv_1892 == argv_2901) { // remap error argv_877
			argv_1892 = argv_922; 
		}
		return (argv_1892);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_907 (argv_2157 _cli_ptr) {
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;

		argv_3715 opa_type = argv_2907;
		vector<argv_772> v_atom;
		argv_3717 unused_UI32 = 0; // because empty packets are not allowed
		argv_577 (unused_UI32, v_atom);

		argv_1892 = internal_prepare_packet (cli_ptr->argv_678.argv_2889, v_atom, opa_type);
		if (argv_1892 == argv_922) { // argv_3335 the packet to the server
			argv_1892 = cli_ptr->argv_678.argv_2889.argv_3335 (cli_ptr->argv_678.argv_2234);
		}

		if (argv_1892 == argv_2901) { // remap error argv_877
			argv_1892 = argv_922; 
		}
		return (argv_1892);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_3379 argv_906 (argv_2157 _cli_ptr) {
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;

		argv_3715 opa_type = argv_2906;
		vector<argv_772> v_atom;
		argv_3717 unused_UI32 = 0; // because empty packets are not allowed
		argv_577 (unused_UI32, v_atom);

		argv_1892 = internal_prepare_packet (cli_ptr->argv_678.argv_2889, v_atom, opa_type);
		if (argv_1892 == argv_922) { // argv_3335 the packet to the server
			argv_1892 = cli_ptr->argv_678.argv_2889.argv_3335 (cli_ptr->argv_678.argv_2234);
		}

		if (argv_1892 == argv_2901) { // remap error argv_877
			argv_1892 = argv_922; 
		}
		return (argv_1892);
	}
}

argv_3379 internal_check_select_return_code (argv_3379 _nb_ready, bool& _must_continue) {
	argv_3379 argv_1892		= argv_922;
	_must_continue	= false;
#if defined (__WIN32_OS__)
	if (_nb_ready == SOCKET_ERROR) {
		{
			argv_3379 argv_1239	= WSAGetLastError ();
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "select failed (errno=%d)", argv_1239);
			argv_3681[MAX_PATH - 1] = '\0';
			MessageBox (argv_2766, argv_3681, "", MB_OK);
		}
		argv_1892 = argv_921;
	}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (nb_ready < 0) {
		if (errno == EINTR) {
			_must_continue = true;
		}
		else {
			argv_1892 = argv_921; // real select error occured
		}
	}
#endif // #if defined (__LINUX_OS__)
	return (argv_1892);
}


void internal_affiche_UI08 (argv_773 _name, argv_3715 _value) {
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "%s : %d", _name, _value);
	argv_3681[MAX_PATH - 1] = '\0';
	MessageBox (argv_2766, argv_3681, "", MB_OK);
}

// argv_1292 the fields from the received packet
// @@ BODY DESCRIPTION:
// @@ - argv_2697 of the concerned argv_1314 (string)
// @@ - scan success				(1)  : 0= success, 1=failed
// @@ - infection flag				(1)	 : 0= not infected, 1=infected
// @@ - dysinfection possible		(1)  : 0= not possible, 1=possible
// @@ - dysinfection argv_1185 flag		(1)	 : 0=not argv_1185, 1=argv_1185
// @@ - dysinfection report flag	(1)	 : 0=failed, 1=success
// @@ - argv_1201	(4)  (see "general_avx.hpp")
// @@ - {virus argv_2697}				(??) : empty if infected_flag=0
argv_3379 internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT (argv_2157 _cli_ptr, argv_3323& _com_unit, argv_3322 * _result_ptr) {
	argv_3379 argv_1892 = argv_922;
	argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;

	argv_3715	scan_success_UI08				= 0;
	argv_3715	infection_flag_UI08				= 0;
	argv_3715	dysinfect_possible_flag_UI08	= 0;
	argv_3715	dysinf_done_flag_UI08			= 0;
	argv_3715	dysinf_report_flag_UI08			= 0;
	string	argv_1049;

	argv_1892 = _com_unit.argv_2885.argv_1292 (argv_1049);

	if (argv_1892 == argv_2901) {
		argv_1892 = _com_unit.argv_2885.argv_1292 (scan_success_UI08);
		//internal_affiche_UI08 ("argv_3318", scan_success_UI08);
	}

	if (argv_1892 == argv_2901) {
		argv_1892 = _com_unit.argv_2885.argv_1292 (infection_flag_UI08);
		//internal_affiche_UI08 ("infection_flag", infection_flag_UI08);
	}
	if (argv_1892 == argv_2901) {
		argv_1892 = _com_unit.argv_2885.argv_1292 (dysinfect_possible_flag_UI08);
		//internal_affiche_UI08 ("argv_1196", dysinfect_possible_flag_UI08);
	}
	if (argv_1892 == argv_2901) {
		argv_1892 = _com_unit.argv_2885.argv_1292 (dysinf_done_flag_UI08);
		//internal_affiche_UI08 ("dysinf_done_flag", dysinf_done_flag_UI08);
	}
	if (argv_1892 == argv_2901) {
		argv_1892 = _com_unit.argv_2885.argv_1292 (dysinf_report_flag_UI08);
		//internal_affiche_UI08 ("dysinf_result_flag", dysinf_report_flag_UI08);
	}

	if (argv_1892 == argv_2901) { // argv_3379
		argv_3717 retcode_tmp = DYSINFECT_UNDEFINED_VALUE;
		argv_1892 = _com_unit.argv_2885.argv_1292 (retcode_tmp);
		_result_ptr->argv_1201 = (argv_3379) retcode_tmp;
	}

	if ((argv_1892 == argv_2901) && (infection_flag_UI08 == 1)) {
		string argv_3827;
		argv_1892 = _com_unit.argv_2885.argv_1292 (argv_3827);
		if (argv_1892 == argv_2901) {
			argv_3717 virus_name_length = argv_3827.size();
			
			if (virus_name_length > MAX_PATH) {
				strncpy (_result_ptr->argv_3827, argv_3827.c_str(), MAX_PATH);
				_result_ptr->argv_3827[MAX_PATH - 1] = '\0';
			}
			else {
				strncpy (_result_ptr->argv_3827, argv_3827.c_str(), virus_name_length);
				_result_ptr->argv_3827[virus_name_length] = '\0';
			}
		}
	}

	if (argv_1892 == argv_2901) { // all argv_1073 retrieved succesfully
		strncpy (_result_ptr->argv_1049, argv_1049.c_str(), MAX_PATH);
		_result_ptr->argv_1049[MAX_PATH - 1] = '\0';

		if (scan_success_UI08 == 1) {
			_result_ptr->argv_3318			= true;
		}
		if (infection_flag_UI08 == 1) {
			_result_ptr->infected				= true;
		}
		if (dysinfect_possible_flag_UI08 == 1) {
			_result_ptr->argv_1199	= true;	
		}
		if (dysinf_done_flag_UI08 == 1) {
			_result_ptr->argv_1198		= true;
		}
		if (dysinf_report_flag_UI08 == 1) {
			_result_ptr->argv_1200	= true;
		}
	}

	if (argv_1892 == argv_2901) { // remap error argv_877
		argv_1892 = argv_922;
	}
	return (argv_1892);
}

argv_3379 internal_process_packet_PCK_TYPE_SCAN_REMOTE_RESULT (argv_2157 _cli_ptr, argv_3323& _com_unit, argv_3322 * _result_ptr) {
	argv_3379 argv_1892 = argv_922;
	argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;

	argv_1892 = internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT (_cli_ptr, _com_unit, _result_ptr);
	if (argv_1892 == argv_922) {
		argv_1892 = _com_unit.argv_2885.reset ();

		// read the dysinfected argv_1314 if necessary
		if ((argv_1892 == argv_2901) && (_result_ptr->infected==true) && (_result_ptr->argv_1198==true) && (_result_ptr->argv_1200 == true))  {
			// generate a unique temporary argv_1364
			internal_generate_unique_tmp_filename (cli_ptr->argv_3684.c_str(), cli_ptr->argv_3685, _result_ptr->argv_1125);
			// receive the dysinfected argv_1314.
			argv_1892 = _com_unit.argv_2885.argv_3202 (_com_unit.argv_2234, cli_ptr->argv_3411, _result_ptr->argv_1125);
		}
	}
	return (argv_1892);
}


// - argv_3715: argv_3266: 0= success, 1=failed
// - argv_3717: number of files in the archive (non-recursively)
//   (not relevant if argv_3266 is "failed")
argv_3379 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_LIST_RESULT (argv_2157 _cli_ptr, argv_3323& _com_unit, argv_3322 * _result_ptr) {
	argv_3379 argv_1892 = argv_922;
	argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;

	argv_1892 = _com_unit.argv_2885.argv_1292 (_result_ptr->argv_2810);
	if (argv_1892 == argv_2901) {
		argv_1892 = _com_unit.argv_2885.argv_1292 (_result_ptr->argv_2747);
	}

	if (argv_1892 == argv_2901) {
		argv_1892 = argv_922;
	}
	return (argv_1892);
}

// a single argv_1364 that was extracted is sent to us (relative path)
// so it is up to the caller to rebuild a full pathname using the temporary root
// he sent to the COM manager when sending it's request.
argv_3379 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_RESULT (argv_2157 _cli_ptr, argv_3323& _com_unit, argv_3322 * _result_ptr) {
	argv_3379 argv_1892 = argv_922;
	argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
	// retrieve the number of elements of this archive
	argv_1892 = _com_unit.argv_2885.argv_1292 (_result_ptr->argv_2744);
	if (argv_1892 == argv_2901) {
		// retrieve the argv_1043 element's argv_1814
		argv_1892 = _com_unit.argv_2885.argv_1292 (_result_ptr->argv_1047);
		if (argv_1892 == argv_2901) {
			// retrieve the argv_1043 element's argv_2697
			argv_1892 = _com_unit.argv_2885.argv_1292 (_result_ptr->argv_1301);
		}
	}

	if (argv_1892 == argv_2901) {
		argv_1892 = argv_922;
	}
	return (argv_1892);
}

argv_3379 internal_process_packet_PCK_TYPE_ARCHIVE_CREATE_RESULT (argv_2157 _cli_ptr, argv_3323& _com_unit, argv_3322 * _result_ptr) {
	argv_3379 argv_1892 = argv_922;
	argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;

	argv_1892 = _com_unit.argv_2885.argv_1292 (_result_ptr->argv_2810);

	if (argv_1892 == argv_2901) {
		argv_1892 = argv_922;
	}
	return (argv_1892);
}

argv_3379 internal_process_received_packet (argv_2157 _cli_ptr, argv_3323& _com_unit, argv_3322 * _result_ptr) {
	argv_3379 argv_1892 = argv_922;
	argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
	
	argv_1892 = _com_unit.argv_2885.argv_1684 (_result_ptr->argv_3695);
	if (argv_1892 == argv_2901) { // argv_3695 extraction succeeded
		switch (_result_ptr->argv_3695) {
			case argv_2929:
			case argv_2925:
				argv_1892 = internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_2931:
				argv_1892 = internal_process_packet_PCK_TYPE_SCAN_REMOTE_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_2910:
				argv_1892 = internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_LIST_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_2912:
				argv_1892 = internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_2909:
				argv_1892 = internal_process_packet_PCK_TYPE_ARCHIVE_CREATE_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;
		}
	}	

	if (argv_1892 == argv_2901) {
		argv_1892 = argv_922;
	}
	return (argv_1892);
}

// process only argv_2806 ready descriptor (user must call it in a loop if necessary).
// we have 3 different sockets :
// - archive extractor argv_3410
// - archive creator argv_3410
// - scan argv_3410 (virus & spyware).
argv_3379 internal_process_ready_descriptors (argv_2157 _cli_ptr, argv_3379 _nb_ready, argv_3322 * _result_ptr) {
	argv_3379 argv_1892 = argv_922;
	argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;

	internal_reset_result (*_result_ptr);

	if (FD_ISSET (cli_ptr->argv_678.argv_3410, &cli_ptr->argv_3333.readfds_dirty)) {
		argv_1892 = cli_ptr->argv_678.argv_2885.reset ();
		if (argv_1892 == argv_2901) {
			argv_1892 = cli_ptr->argv_678.argv_2885.argv_3199 (cli_ptr->argv_678.argv_2234, cli_ptr->argv_3411, false);
			if (argv_1892 == argv_2901) { // packet received succesfully
				argv_1892 = internal_process_received_packet (_cli_ptr, cli_ptr->argv_678, _result_ptr);
			}
		}
	}
	else if (FD_ISSET (cli_ptr->argv_3319.argv_3410, &cli_ptr->argv_3333.readfds_dirty)) {
		argv_1892 = cli_ptr->argv_3319.argv_2885.reset ();
		if (argv_1892 == argv_2901) {
			argv_1892 = cli_ptr->argv_3319.argv_2885.argv_3199 (cli_ptr->argv_3319.argv_2234, cli_ptr->argv_3411, false);
			if (argv_1892 == argv_2901) { // packet received succesfully
				argv_1892 = internal_process_received_packet (_cli_ptr, cli_ptr->argv_3319, _result_ptr);
			}
		}
	}
	return (argv_1892);	
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	// pump a argv_2271 from any of the 3 possible sockets
	argv_3379 argv_3190 (argv_2157 _cli_ptr, argv_3322 * _result_ptr) {
		argv_3379 argv_1892 = argv_922;
		argv_3321 * cli_ptr = (argv_3321 *) _cli_ptr;
		
		argv_3379 nb_ready		= 0;
		bool must_continue	= true;
		while ((argv_1892 == argv_922) && (must_continue == true)) {
			cli_ptr->argv_3333.readfds_dirty = cli_ptr->argv_3333.readfds;	// because Linux modify the sets
			nb_ready = select ((cli_ptr->argv_3333.argv_2221)+1, &cli_ptr->argv_3333.readfds_dirty, argv_2766, argv_2766, argv_2766);
			/*
			{
				char argv_3681[MAX_PATH];
				argv_3409 (argv_3681, MAX_PATH, "select returned %d", nb_ready);
				argv_3681[MAX_PATH - 1] = '\0';
				MessageBox (argv_2766, argv_3681, "", MB_OK);
			}*/
			argv_1892 = internal_check_select_return_code (nb_ready, must_continue);

			if (argv_1892 == argv_922) {
				if (must_continue == true) { // when interrupted by a signal (linux).
					continue;
				}
				else { // select returned without any error
					// here we process the first argv_3410 ready, and the others are not 
					// processed, the user must call 'argv_3190' several times
					// if he wants to retrieve all available messages.
					argv_1892 = internal_process_ready_descriptors (_cli_ptr, nb_ready, _result_ptr);
				}
			}
		}
		return (argv_1892);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


