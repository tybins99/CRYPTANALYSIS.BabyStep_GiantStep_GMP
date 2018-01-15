// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_230.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the functions that permit
// @@ to communicate with the service update.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_289.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_904	
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
// @@ to argv_3110 the admin API to use the TCP/IP stack.
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
	bool argv_904 () {
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
// @@ FUNCTION		:	argv_905	
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
// @@ no other call to the admin api is necessary.
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
	bool argv_905 () {
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
// @@ FUNCTION		:	internal_com_admin_client_create
// @@
// @@ INPUT			:	
// @@ _cli_ptr_ptr: argv_2157 *: contains the argv_595 of the new instance
// @@   of the admin client.
// @@
// @@ OUTPUT		:	
// @@ _result: bool& : true if operation was succesful,
// @@          false otherwise.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_619 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create a new instance of the admin
// @@ client argv_2785 and argv_3110 it for use.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_3379 internal_com_admin_client_create (argv_2157 * _cli_ptr_ptr, bool& _result) {
		_result = true;
		argv_3320 ** cli_ptr_ptr = (argv_3320 **) _cli_ptr_ptr;
		argv_3379 argv_1892 = argv_619;
		if (cli_ptr_ptr == argv_2766) {
			argv_1892 = argv_614;
		}
		else if (*cli_ptr_ptr != argv_2766) {
			argv_1892 = argv_612;
		}
		else { // allocate the client structure
			*cli_ptr_ptr = new (std::nothrow) argv_3320; 
			if (*cli_ptr_ptr == argv_2766) {
				argv_1892 = argv_616;
			}
			else { // memory allocation was succesful for the client structure
				(*cli_ptr_ptr)->argv_2033 = argv_619;

				// allocate the argv_2258 argv_2785
				(*cli_ptr_ptr)->argv_2251 = new (std::nothrow) argv_876;
				if ((*cli_ptr_ptr)->argv_2251 == argv_2766) {
					argv_1892 = argv_616;
				}
				else { // argv_2234 sock argv_2785 succesfully allocated
					// allocate the packet argv_2785
					(*cli_ptr_ptr)->argv_2884 = new (std::nothrow) argv_1000;
					if ((*cli_ptr_ptr)->argv_2884 == argv_2766) {
						argv_1892 = argv_616;
					}
				}
			}
		}

		if (argv_1892 != argv_619) {
			_result = false;
		}
		return (argv_1892);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_destruct	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2157: argv_595 of the admin argv_2785 obtained
// @@   by a previous call to the function 'internal_com_admin_client_create'.
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
// @@ This function permits to argv_1127 the admin argv_2785 after use
// @@ and to release all memory used by this argv_2785 and other related
// @@ objects as well.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_destruct (argv_2157 _cli_ptr) {
		bool bret = true;
		argv_3320 * cli_ptr = (argv_3320 *) _cli_ptr;
		argv_3379 argv_1892 = argv_619;
		if (cli_ptr == argv_2766) {
			argv_1892 = argv_614;
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
// @@ FUNCTION		:	internal_com_admin_client_connect
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2157: argv_595 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
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
// @@ This function permits to connect the admin argv_2785 to the server
// @@ whose IP (or argv_2697) and argv_3095 were given as parameters.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2766 pointer.
// @@ - '_servname' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_connect (argv_2157 _cli_ptr, argv_773 _servname, argv_3717 _servport) {
		bool bret = true;
		argv_3379 argv_1892 = argv_619;
		argv_3320 * cli_ptr = (argv_3320 *) _cli_ptr;
		if ((cli_ptr == argv_2766) || (_servname == argv_2766)) { // parameters are OK
			argv_1892 = argv_614;
		}
		else { // parameters are OK
			argv_1892 = cli_ptr->argv_2251->argv_3112 (_servname, _servport);
			if (argv_1892 == argv_2262) { // remap error argv_877
				argv_1892 = argv_619;
			}
			else {
				char argv_3681[MAX_PATH];
				string serror = argv_1240 (argv_1892);
				argv_3409 (argv_3681, MAX_PATH, "internal_com_admin_client_connect - argv_3112(%s,%d) failed ! (argv_1239=%s)", _servname, _servport, serror.c_str());
				argv_3681[MAX_PATH - 1] = '\0';
				MessageBox (argv_2766, argv_3681, "", MB_ICONERROR);
			}
		}

		if (cli_ptr != argv_2766) {
			cli_ptr->argv_2033	= argv_1892;
		}
		if (argv_1892 != argv_619) {
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_disconnect
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2157: argv_595 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
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
// @@ This function permits to disconnect the admin client from the
// @@ scanning server.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_disconnect (argv_2157 _cli_ptr) {
		bool bret = true;
		argv_3379 argv_1892 = argv_619;
		argv_3320 * cli_ptr = (argv_3320 *) _cli_ptr;
		if (cli_ptr == argv_2766) { // parameters are OK
			argv_1892 = argv_614;
		}
		else { // parameters are OK
			argv_1892 = cli_ptr->argv_2251->argv_870 ();
		}

		if (argv_1892 == argv_2262) { // remap error argv_877
			argv_1892 = argv_619; 
		}

		if (cli_ptr != argv_2766) {
			cli_ptr->argv_2033 = argv_1892;
		}

		if (argv_1892 != argv_619) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_read_answer
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2157: argv_595 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ _timeout_second: argv_3379: the timeout associated with the read operation
// @@   on the argv_1043 argv_2234 (choose -1 for infinite).
// @@
// @@ _expected_type: argv_3715: the argv_3695 expected for the answer from the server.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_619 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to read the update argv_3266 coming from
// @@ the server. Notice that the server is supposed to argv_3335 a 
// @@ specific answer argv_3695, so the caller must provide the expected
// @@ argv_3695. If the received argv_3695 does not match the '_expected_type'
// @@ parameter, a protocol violation error occurs.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 internal_com_admin_client_read_answer (argv_3320 * _cli_ptr, argv_3379 _timeout_second, argv_3715 _expected_type) {
	argv_3379 argv_1892				= argv_619;
	argv_3715 extracted_type		= argv_2940;
	argv_3715 extracted_result	= 0;

	argv_1892 = _cli_ptr->argv_2884->reset ();

	if (argv_1892 == argv_2901) {
		argv_1892 = _cli_ptr->argv_2884->argv_3199 (*(_cli_ptr->argv_2251), _timeout_second, false);
	}

	if (argv_1892 == argv_2901) { // packet received succesfully
		// argv_1292 the received packet argv_3695
		argv_1892 = _cli_ptr->argv_2884->argv_1684 (extracted_type);
	}

	if (argv_1892 == argv_2901) { // argv_3695 extraction succeeded
		if (extracted_type != _expected_type) {
			argv_1892 = argv_618;
		}
		else { // the received argv_3695 matches the expected argv_3695
			// argv_1292 the argv_3266 of the operation sent by the server
			argv_1892 = _cli_ptr->argv_2884->argv_1292 (extracted_result);
			if (argv_1892 == argv_2901) {
				if (extracted_result == 1) {
					argv_1892 = argv_617;
				}
				else if ((extracted_result == 0) && (extracted_result == 1)) {
					argv_1892 = argv_615;
				}
			}
		}
	}

	if (argv_1892 == argv_2901) {
		argv_1892 = argv_619; // remap error argv_877
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_send_request
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2157: argv_595 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ _pck_type: argv_3715: the argv_3695 of request to be sent to the server.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_619 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3335 a given request to the 
// @@ admin server. The request argv_3695 being given by the caller
// @@ via the '_pck_type' parameter.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 internal_com_admin_client_send_request (argv_3320 * _cli_ptr, argv_3715 _pck_type) {
	argv_3379 argv_1892 = argv_619;
	if (_cli_ptr == argv_2766) { // parameters are OK
		argv_1892 = argv_614;
	}
	else { // parameters are OK
		argv_1892 = _cli_ptr->argv_2884->reset ();
		if (argv_1892 == argv_2901) { // packet was reseted succesfully
			argv_1892 = _cli_ptr->argv_2884->argv_3363 (_pck_type);
		}

		if (argv_1892 == argv_2901) { // packet argv_3695 was set succesfully
			argv_3717 unused_data = 0; // empty packets are not allowed
			argv_1892 = _cli_ptr->argv_2884->insert (unused_data);
		}

		if (argv_1892 == argv_2901) { // argv_2830 the packet so that it can be ready
			argv_1892 = _cli_ptr->argv_2884->argv_2830 ();
		}

		if (argv_1892 == argv_2901) { // argv_3335 the packet to the server
			argv_1892 = _cli_ptr->argv_2884->argv_3335 (*(_cli_ptr->argv_2251));
		}
	}

	if (argv_1892 == argv_2901) {
		argv_1892 = argv_619; // remap error argv_877
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_update
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2157: argv_595 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ _timeout_second: argv_3379: the timeout associated with the read operation
// @@   on the argv_1043 argv_2234 (choose -1 for infinite).
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
// @@ This function permits to argv_3335 the update request to the
// @@ scan server, then the answer from the server is read.
// @@ 
// @@ Notice that the admin client is supposed to have been 
// @@ connected to the server prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_update (argv_2157 _cli_ptr, argv_3379 _timeout_second) {
		bool bret = true;
		argv_3379 argv_1892 = argv_619;
		argv_3320 * cli_ptr = (argv_3320 *) _cli_ptr;
		if (cli_ptr == argv_2766) { // parameters are OK
			argv_1892 = argv_614;
		}
		else { // parameters are OK
			argv_1892 = internal_com_admin_client_send_request (cli_ptr, argv_2941);
			if (argv_1892 == argv_619) {
				argv_1892 = internal_com_admin_client_read_answer (cli_ptr, _timeout_second, argv_2942);
			}
		}

		if (argv_1892 != argv_619) { 
			MessageBox (argv_2766, "internal_com_admin_client_update - internal_com_admin_client_send_request failed !", "", MB_ICONERROR);
			bret = false;
		}

		if (cli_ptr != argv_2766) {
			cli_ptr->argv_2033 = argv_1892;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_903	
// @@
// @@ INPUT			:	
// @@ _servname: argv_773: argv_2697 or IP of the server to connect to.
// @@
// @@ _servport: argv_3717: argv_3095 of the server to connect to.
// @@
// @@ _timeout_second: argv_3379: the timeout associated with the read operation
// @@   on the argv_1043 argv_2234 (choose -1 for infinite).
// @@
// @@ OUTPUT		:
// @@ _ret_code: argv_3379&: return argv_877 for the operation.
// @@
// @@ _serror: argv_1004: the string error argv_2271 of the operation.	
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
// @@ This function permits to perform the update by connecting to
// @@ the server whose argv_2697 or IP is given as the '_servname' parameter
// @@ and whose argv_3095 is given by the '_servport' parameter.
// @@ The argv_3266 of the operation can be determined by the argv_3266
// @@ parameters '_ret_code' and '_serror'.
// @@
// @@ Notice that the caller is supposed to have allocated the 
// @@ '_serror' argv_728 (to MAX_PATH size) prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_servname' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool argv_903 (argv_773 _servname, argv_3717 _servport, argv_3379 _timeout_second, argv_3379& _ret_code, argv_1004 _serror) {
		bool bret = true;
		MessageBox (argv_2766, "argv_903 - @1", "", MB_OK);
		argv_3379 argv_1892 = argv_619;
		if (_servname == argv_2766) { // parameters are OK
			argv_1892 = argv_614;
		}
		else { // parameters are OK
			argv_2157 admin_data_ptr = argv_2766;
			// create the client
			argv_1892 = internal_com_admin_client_create (&admin_data_ptr, bret);
			if (bret ==  true) { // connect the client
				MessageBox (argv_2766, "admin client created", "", MB_OK);
				bret = internal_com_admin_client_connect (admin_data_ptr, _servname, _servport);

				if (bret == true) { // perform the update
					bret = internal_com_admin_client_update (admin_data_ptr, _timeout_second);
				}

				if (bret == true) { // argv_869 the connection (closed by the server anyway)
					bret = internal_com_admin_client_disconnect (admin_data_ptr);
				}

				if (admin_data_ptr != argv_2766) {
					_ret_code = internal_com_admin_get_last_error (admin_data_ptr, _serror);
					internal_com_admin_client_destruct (admin_data_ptr);
				}
			}
			else {
				MessageBox (argv_2766, "argv_903 - internal_com_admin_client_create failed !", "", MB_ICONERROR);
			}
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_get_last_error
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2157: argv_595 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
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
// @@ admin client as a string.
// @@ 
// @@ Notice that the caller is supposed to have allocated the 
// @@ '_serror' argv_728 (to MAX_PATH size) prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_servname' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_3379 internal_com_admin_get_last_error (argv_2157 _cli_ptr, argv_1004 _serror) {
		argv_3379 retrieved_last_error = argv_619;	
		_serror[0] = '\0';
		if (_cli_ptr == argv_2766) {
			retrieved_last_error = argv_613;
		}
		else {
			argv_3320 * cli_ptr	= (argv_3320 *) _cli_ptr;
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



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


