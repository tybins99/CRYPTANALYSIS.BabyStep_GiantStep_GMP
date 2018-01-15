// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_329.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the functions and argv_1073
// @@ structures necessary for the scan daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_329.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variables
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	extern argv_773		argv_3354;
#endif // #if defined (__WIN32_OS__) 
extern argv_865  *		argv_3353;
argv_1030 *		argv_1072	= argv_2766;


void WINAPI service_main (DWORD _argc, LPTSTR _argv[]) {
	argv_1030 * daemon_mgr_ptr_local = new (std::nothrow) argv_1030;
	if (daemon_mgr_ptr_local == argv_2766) {
		FILE * argv_1396 = fopen ("C:\\av_service_log.txt", "wb");
		if (argv_1396) {
			fprintf (argv_1396, "+++ ERROR: memory allocation failed for service argv_2785");
			fclose (argv_1396);
		}
	}
	else {
		argv_1072 = daemon_mgr_ptr_local;
		daemon_mgr_ptr_local->argv_3278 ();	
		delete daemon_mgr_ptr_local;
	}
}


argv_3379 main (argv_3379 _argc, char ** _argv) {
	argv_3379 argv_1892 = 0;

	SERVICE_TABLE_ENTRY servicetable[]=
	{
		{(char *) argv_3354, (LPSERVICE_MAIN_FUNCTION) service_main},
		{argv_2766,argv_2766}
	};

	BOOL bresult = StartServiceCtrlDispatcher (servicetable);
	if (! bresult) {
		argv_1892 = 1;
	}
	return (argv_1892);
	
}

void argv_3351 (DWORD nControlCode) {
	argv_3379 argv_1892 = argv_3303;

	switch (nControlCode) {
		case SERVICE_CONTROL_SHUTDOWN:
		case SERVICE_CONTROL_STOP:
		case SERVICE_STOP_PENDING:
			argv_1072->argv_3352 = SERVICE_STOP_PENDING;
			argv_1892 = argv_1072->argv_3792 (SERVICE_STOP_PENDING, NO_ERROR, 0, 1, 3000);
			if (argv_1892 != argv_3303) {
				argv_3353->argv_2142 (argv_1242, "+++ ERROR: argv_3351: argv_3792 failed ! (SERVICE_STOP_PENDING)");
			}
			else {
				argv_3353->argv_2142 (argv_2763, "service status set to SERVICE_STOP_PENDING...[OK]");
			}
			argv_1072->argv_2017 ();
			return;
			break;

		default:
			break;
	}
	
	argv_1892 = argv_1072->argv_3792 (argv_1072->argv_3352, NO_ERROR, 0, 0, 0);
	if (argv_1892 != argv_3303) {
		argv_3353->argv_2142 (argv_1242, "+++ ERROR: argv_3351: argv_3792 failed !");
	}
	else {
		argv_3353->argv_2142 (argv_2763, "argv_3351: argv_3792...[OK]");
	}
	Sleep (5000);
}

DWORD WINAPI argv_1180 (argv_2157 lParam) {
	argv_1031 * env_ptr = (argv_1031 *) lParam;
	argv_3379 argv_1892 = env_ptr->inner_objects.argv_924.argv_3278 (&env_ptr->log_set.argv_2130, env_ptr->data_set.argv_2209, env_ptr->argv_3799, &env_ptr->inner_objects.argv_635, &env_ptr->inner_objects.argv_648, &env_ptr->inner_objects.argv_3417);
	return (0);
}

DWORD WINAPI argv_1178 (argv_2157 lParam) {
	argv_1031 * env_ptr = (argv_1031 *) lParam;
	argv_3379 argv_1892 = env_ptr->inner_objects.argv_635.argv_3278 ("Carchive_creator", env_ptr->data_set.internal_archive_creator_port, &env_ptr->log_set.argv_2126, env_ptr->data_set.argv_626.c_str(), env_ptr->data_set.argv_625.c_str());
	return (0);
}

DWORD WINAPI argv_1179 (argv_2157 lParam) {
	argv_1031 * env_ptr = (argv_1031 *) lParam;
	argv_3379 argv_1892 = env_ptr->inner_objects.argv_648.argv_3278 ("Carchive_extractor", env_ptr->data_set.internal_archive_extractor_port, &env_ptr->log_set.argv_2127, env_ptr->data_set.argv_626.c_str(), env_ptr->data_set.argv_625.c_str());
	return (0);
}

DWORD WINAPI argv_1183 (argv_2157 lParam) {
	argv_1031 * env_ptr = (argv_1031 *) lParam;
	argv_3379 argv_1892 = env_ptr->inner_objects.argv_3417.argv_3278 ("Cspyware_manager", env_ptr->data_set.internal_spyware_manager_port, &env_ptr->log_set.argv_2139);
	return (0);
}

DWORD WINAPI argv_1182 (argv_2157 lParam) {
	argv_1031 * env_ptr = (argv_1031 *) lParam;
	argv_3379 argv_1892 = env_ptr->inner_objects.argv_3307.argv_3278 (env_ptr->data_set.argv_3273.c_str(), env_ptr->data_set.argv_1939.c_str(), "Cscan_gateway", env_ptr->data_set.internal_scan_gateway_port, &env_ptr->log_set.argv_2138);
	return (0);
}

DWORD WINAPI argv_1184 (argv_2157 lParam) {
	argv_1031 * env_ptr = (argv_1031 *) lParam;
	argv_3379 argv_1892 = env_ptr->inner_objects.argv_3774.argv_3278 (env_ptr->data_set.argv_1287.c_str(), env_ptr->data_set.internal_update_manager_port, env_ptr->data_set.argv_1288, &env_ptr->log_set.argv_2145, env_ptr->data_set.argv_3273.c_str(), env_ptr->data_set.argv_1939.c_str());
	return (0);
}

void argv_1030::argv_1150 (argv_773 _from, argv_3379 _success_iret, argv_3379 _iret) {
	char argv_3681[MAX_PATH];	
	if (_iret == _success_iret) {
		argv_3409 (argv_3681, MAX_PATH, "%s...[SUCCESS]", _from);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2146.argv_2142 (argv_1086, argv_3681);	
	}
	else {
		string serror = argv_1240 (_iret);
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: %s...[FAILED] - argv_1239 = %s", _from, serror.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2146.argv_2142 (argv_1242, argv_3681);
	}
}

// this function permits to argv_1292 the necessary settings from registry (win32)
// for now this extraction is just simulated as the product should be installed
// in order to have a valid registry tree established.
//
// NOTICE: Linux gets parameters from command argv_2069
argv_3379 argv_1030::argv_1296 () {
	argv_3379 argv_1892 = argv_3303;
#if defined (__WIN32_OS__) 
	argv_1238.data_set.internal_servname				= "127.0.0.1";
	argv_1238.data_set.argv_1287				= "INADDR_ANY";

	argv_3717 base_port								= 30000;
	argv_1238.data_set.argv_1285			= base_port + 0;
	argv_1238.data_set.argv_1286			= base_port + 1;
	argv_1238.data_set.argv_1284			= base_port + 2;
	argv_1238.data_set.argv_1288	= base_port + 3;

	argv_1238.data_set.internal_archive_creator_port	= base_port + 4;
	argv_1238.data_set.internal_archive_extractor_port= base_port + 5;	
	argv_1238.data_set.internal_spyware_manager_port	= base_port + 6;
	argv_1238.data_set.internal_scan_gateway_port		= base_port + 7;
	argv_1238.data_set.internal_update_manager_port	= base_port + 8;
	argv_1238.data_set.internal_admin_port			= base_port + 9;

	argv_1238.data_set.argv_2209					= 30;

	char argv_3681[MAX_PATH];
	strncpy (argv_3681, "C:\\new_engine\\SRC\\fake_GUI", MAX_PATH);
	argv_3681[MAX_PATH - 1] = '\0';

	argv_1238.data_set.argv_3273					= argv_3681;
	argv_1238.data_set.argv_1939				= argv_1238.data_set.argv_3273 + "\\DLL\\" + "kernel_api.dll";
	argv_1238.data_set.argv_626				= argv_1238.data_set.argv_3273 + "\\DLL";
	argv_1238.data_set.argv_625					= "vrazmain.dll";

#endif // #if defined (__WIN32_OS__) 
	argv_1155 ();
	return (argv_1892);
}

void argv_1030::argv_1155 () {
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2146.argv_2142 (argv_1086, "internal_servname               = ", argv_1238.data_set.internal_servname.c_str());	
	argv_2146.argv_2142 (argv_1086, "argv_1287               = ", argv_1238.data_set.argv_1287.c_str());
	argv_2146.argv_2142 (argv_1086, " ");
	argv_2146.argv_2142 (argv_1086, "argv_1285             = ", argv_1238.data_set.argv_1285);
	argv_2146.argv_2142 (argv_1086, "argv_1286            = ", argv_1238.data_set.argv_1286);
	argv_2146.argv_2142 (argv_1086, "argv_1284           = ", argv_1238.data_set.argv_1284);
	argv_2146.argv_2142 (argv_1086, "argv_1288    = ", argv_1238.data_set.argv_1288);
	argv_2146.argv_2142 (argv_1086, "");
	argv_2146.argv_2142 (argv_1086, "internal_archive_creator_port   = ", argv_1238.data_set.internal_archive_creator_port);
	argv_2146.argv_2142 (argv_1086, "internal_archive_extractor_port = ", argv_1238.data_set.internal_archive_extractor_port);
	argv_2146.argv_2142 (argv_1086, "internal_spyware_manager_port   = ", argv_1238.data_set.internal_spyware_manager_port);
	argv_2146.argv_2142 (argv_1086, "internal_scan_gateway_port      = ", argv_1238.data_set.internal_scan_gateway_port);
	argv_2146.argv_2142 (argv_1086, "internal_update_manager_port    = ", argv_1238.data_set.internal_update_manager_port);
	argv_2146.argv_2142 (argv_1086, "internal_admin_port             = ", argv_1238.data_set.internal_admin_port);
	argv_2146.argv_2142 (argv_1086, "");
	argv_2146.argv_2142 (argv_1086, "argv_2209                   = ", argv_1238.data_set.argv_2209);
	argv_2146.argv_2142 (argv_1086, "argv_3273                     = ", argv_1238.data_set.argv_3273.c_str());
	argv_2146.argv_2142 (argv_1086, "argv_1939                 = ", argv_1238.data_set.argv_1939.c_str());
	argv_2146.argv_2142 (argv_1086, "argv_626               = ", argv_1238.data_set.argv_626.c_str());
	argv_2146.argv_2142 (argv_1086, "argv_625                  = ", argv_1238.data_set.argv_625.c_str());
	argv_2146.argv_2142 (argv_1086, "");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
}

argv_3379 argv_1030::argv_3832 (argv_773 _name, HANDLE _handle, argv_3379 _timeout) {
	argv_3379 argv_1892		= argv_3303;
	argv_3379 ret_local = WaitForSingleObject (_handle, /*INFINITE*/_timeout);

	if (ret_local == WAIT_OBJECT_0) {
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2146.argv_2142 (argv_2763, "following thread succesfully finished : '", _name, "'");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	}
	else if (ret_local == WAIT_TIMEOUT) {
		argv_1892 = argv_3305;
		argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_1030::send_stop_packet - WAIT_TIMEOUT for following thread : '", _name, "'");
	}
	else {
		argv_1892 = argv_3304;
		argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_1030::send_stop_packet - wait failed for following thread : '", _name, "'");
	}
	return (argv_1892);
}


argv_3379 argv_1030::argv_3831 () {
	argv_3379 argv_1892		= argv_3303;
	argv_3379 ret_local	= 0;
	argv_3717 argv_2744	= argv_3805.size ();
	argv_3717 nb_success = 0;
	argv_3717 nb_error   = 0;

	for (argv_3717 i=0 ; i<argv_2744 ; i++) {
		ret_local = argv_3832 (argv_3805[i].argv_2697.c_str(), argv_3805[i].argv_3633, argv_2217);
		if (ret_local == argv_3303) {
			nb_success++;
		}
		else {
			nb_error++;
		}
	}

	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "terminated inner threads (%u argv_1185, %u success, %u failure)", argv_2744, nb_success, nb_error);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2146.argv_2142 (argv_2763, argv_3681);
	return (argv_1892);
}

// we need to argv_3335 a different argv_2271 to kill the COM manager when we are sure
// that all other parts have been succesfully killed.
argv_3379 argv_1030::argv_2016 (argv_831& _inner_client) {
	argv_3379 argv_1892 = argv_3303;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2146.argv_2142 (argv_1086, "scan_daemon: killing the COM manager");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	// forge a rich packet and argv_3335 it to the COM manager
	vector<argv_772> v_atom;
	argv_3717 unused_UI32 = 0; // because empty packets are not allowed
	argv_577 (unused_UI32, v_atom);
	argv_1892 = _inner_client.argv_1382 (argv_2939, v_atom, "argv_1030::argv_2018", argv_2913);
	if (argv_1892 != argv_1880) {
		argv_1150 ("argv_1030::argv_2016 - argv_1382", argv_1880, argv_1892);
	}
	else {
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2146.argv_2142 (argv_1086, "scan_daemon: sent the termination packet (FINALIZE) to the COM manager");
		argv_2146.argv_2142 (argv_1086, "scan_daemon: waiting for COM manager to argv_3463");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
		argv_3832 (argv_939.argv_2697.c_str(), argv_939.argv_3633, argv_2217);
	}
	return (argv_1892);
}

// to argv_3463 the service, the only thing that we need to do is to forge a rich
// packet and argv_3335 it to the com manager. Then the com manager will broadcast 
// this request to other parts.
// Notice that we argv_3335 a argv_2938 to argv_3463 the following parts :
// - archive creator
// - archive extractor
// - spyware manager
// - argv_3307
// - update manager
// Then when we are sure that all these threads have exited, we argv_3335 another
// argv_2271 argv_3695 argv_2939 in order to tell the COM manager
// to terminate itself.
argv_3379 argv_1030::argv_2018 () {
	argv_3379 argv_1892 = argv_3303;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2146.argv_2142 (argv_1086, "scan_daemon: killing the service");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	argv_831 inner_client;

	argv_1892 = inner_client.argv_3110 ("argv_1030", argv_1238.data_set.internal_admin_port, &argv_2146);
	if (argv_1892 != argv_1880) {
		argv_1150 ("argv_1030::argv_2018 - argv_3110", argv_1880, argv_1892);
	}
	else { // client connected to the admin argv_3095
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2146.argv_2142 (argv_1086, "scan_daemon: connected to the COM manager");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
		// forge a rich packet and argv_3335 it to the COM manager
		vector<argv_772> v_atom;
		argv_3717 unused_UI32 = 0; // because empty packets are not allowed
		argv_577 (unused_UI32, v_atom);
		argv_1892 = inner_client.argv_1382 (argv_2938, v_atom, "argv_1030::argv_2018", argv_2913);
		if (argv_1892 != argv_1880) {
			argv_1150 ("argv_1030::argv_2018 - argv_1382", argv_1880, argv_1892);
		}
		else {
#if defined (__DEBUG_SCAN_DAEMON__)
			argv_2146.argv_2142 (argv_1086, "scan_daemon: sent the termination packet to the COM manager");
			argv_2146.argv_2142 (argv_1086, "scan_daemon: waiting for all blocks to argv_3463");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
			argv_1892 = argv_3831 ();
			if (argv_1892 != argv_3303) {
				argv_1150 ("argv_1030::argv_2018 - argv_3831", argv_3303, argv_1892);
			}

			argv_1892 = argv_2016 (inner_client);
		}
	}

	if (argv_1892 == argv_1880) { // remap error argv_877
		argv_1892 = argv_3303;
	}
	argv_2146.argv_2142 (argv_2763, "application dependant service killed");
	return (argv_1892);
}

void argv_1030::reset () {
	;
}

argv_1030::argv_1030 () {
	reset ();
}

argv_1030::~argv_1030 () {

}

argv_3379 argv_1030::argv_2045 (argv_773 _name, argv_2157 _callback_ptr, argv_2157 _param_ptr, bool _is_com_manager) {
	argv_3379 argv_1892 = argv_3303;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2146.argv_2142 (argv_1086, "- launching thread : ", _name);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	argv_1039 thread_desc;
	thread_desc.argv_2697 = _name;

	thread_desc.argv_3633 = CreateThread (0, 0, (argv_1607) _callback_ptr, (argv_2157) _param_ptr, 0, &thread_desc.argv_3634);
	if (thread_desc.argv_3633 == argv_2766) {
		argv_2146.argv_2142 (argv_1242, "+++ ERROR: failed to launch thread : ", _name);
		argv_1892 = argv_3301;
	}
	else { // save up this new thread descriptor (useful to monitor thread termination).
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2146.argv_2142 (argv_1086, " => thread started : ", _name);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
		if (_is_com_manager == false) {
			argv_3805.push_back (thread_desc);
		}
		else { // save up the thread descriptor of the COM manager separately 
			argv_939 = thread_desc;
		}
	}
	return (argv_1892);
}


argv_3379 argv_1030::argv_2041 () {
	argv_3379 argv_1892 = argv_3303;
	argv_1892 = argv_2045 ("argv_924", argv_1180, (argv_2157) &argv_1238, true);
	if (argv_1892 != argv_3303) {
		argv_1150 ("argv_1030::argv_2041", argv_3303, argv_1892);
	}
	return (argv_1892);
}

argv_3379 argv_1030::argv_2039 () {
	argv_3379 argv_1892 = argv_3303;
	argv_1892 = argv_2045 ("argv_635", argv_1178, (argv_2157) &argv_1238);
	if (argv_1892 != argv_3303) {
		argv_1150 ("argv_1030::argv_2039", argv_3303, argv_1892);
	}
	return (argv_1892);
}

argv_3379 argv_1030::argv_2040 () {
	argv_3379 argv_1892 = argv_3303;
	argv_1892 = argv_2045 ("argv_648", argv_1179, (argv_2157) &argv_1238);
	if (argv_1892 != argv_3303) {
		argv_1150 ("argv_1030::argv_2040", argv_3303, argv_1892);
	}
	return (argv_1892);
}

argv_3379 argv_1030::argv_2043 () {
	argv_3379 argv_1892 = argv_3303;
	argv_1892 = argv_2045 ("argv_3417", argv_1183, (argv_2157) &argv_1238);
	if (argv_1892 != argv_3303) {
		argv_1150 ("argv_1030::argv_2043", argv_3303, argv_1892);
	}
	return (argv_1892);
}

argv_3379 argv_1030::argv_2042 () {
	argv_3379 argv_1892 = argv_3303;
	argv_1892 = argv_2045 ("argv_3307", argv_1182, (argv_2157) &argv_1238);
	if (argv_1892 != argv_3303) {
		argv_1150 ("argv_1030::argv_2042", argv_3303, argv_1892);
	}
	return (argv_1892);
}

argv_3379 argv_1030::argv_2046 () {
	argv_3379 argv_1892 = argv_3303;

	argv_1892 = argv_2045 ("argv_3774", argv_1184, (argv_2157) &argv_1238);
	if (argv_1892 != argv_3303) {
		argv_1150 ("argv_1030::argv_2046", argv_3303, argv_1892);
	}
	return (argv_1892);
}

// this function permits to create all necessary threads :
// - com manager thread
// - archive creator thread
// - archive extractor thread
// - spyware manager thread
// - scan gateway thread
argv_3379 argv_1030::argv_2038 () {
	argv_3379 argv_1892 = argv_3303;

#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2146.argv_2142 (argv_1086, "argv_1030: launching all inner objects");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	argv_1892 = argv_2041 ();
	if (argv_1892 != argv_3303) {
		argv_1150 ("argv_1030::argv_2038 - argv_2041", argv_3303, argv_1892);
	}

	if (argv_1892 == argv_3303) {
		argv_1892 = argv_2039 ();
		if (argv_1892 != argv_3303) {
			argv_1150 ("argv_1030::argv_2038 - argv_2039", argv_3303, argv_1892);
		}
	}

	if (argv_1892 == argv_3303) {
		argv_1892 = argv_2040 ();
		if (argv_1892 != argv_3303) {
			argv_1150 ("argv_1030::argv_2038 - argv_2040", argv_3303, argv_1892);
		}
	}

	if (argv_1892 == argv_3303) {
		argv_1892 = argv_2043 ();
		if (argv_1892 != argv_3303) {
			argv_1150 ("argv_1030::argv_2038 - argv_2043", argv_3303, argv_1892);
		}
	}

	if (argv_1892 == argv_3303) {
		argv_1892 = argv_2042 ();
		if (argv_1892 != argv_3303) {
			argv_1150 ("argv_1030::argv_2038 - argv_2042", argv_3303, argv_1892);
		}
	}

	if (argv_1892 == argv_3303) {
		argv_1892 = argv_2046 ();
		if (argv_1892 != argv_3303) {
			argv_1150 ("argv_1030::argv_2038 - argv_2046", argv_3303, argv_1892);
		}
	}
	return (argv_1892);
}

// all necessary threads are created by this function called by the base class
argv_3379 argv_1030::argv_1017 () {
	argv_3379 argv_1892 = argv_3303;

	argv_1892 = argv_1296 (); // (Linux gets parameters from command argv_2069)
	if (argv_1892 != argv_3303) {
		argv_1150 ("argv_1030::argv_1017 - argv_1296", argv_3303, argv_1892);
	}
	else { // settings extracted succesfully
		// open all log files
		argv_1892 = argv_2813 ();
		if (argv_1892 != argv_3303) {
			argv_1150 ("argv_1030::argv_1017 - argv_2813", argv_3303, argv_1892);
		}
		else { // all log files opened succesfully
			argv_1892 = argv_3111 ();
			if (argv_1892 != argv_3303) {
				argv_1150 ("argv_1030::argv_1017 - argv_3111", argv_3303, argv_1892);
			}
			else { // all listeners ready (all ports bound).
				argv_1892 = argv_2038 ();
				if (argv_1892 != argv_3303) {
					argv_1150 ("argv_1030::argv_1017 - argv_2038", argv_3303, argv_1892);
				}
				else {
					argv_3355 = true;
				}
			}
		}
	}
	return (argv_1892);
}

argv_3379 argv_1030::argv_2813 () {
	argv_3379 argv_1892 = argv_3303;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2146.argv_2142 (argv_1086, "argv_1030: opening all log files");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	string log_base		= argv_2131 + argv_3347;

	argv_2132 = log_base + "argv_2130.txt"; 
	argv_1238.log_set.argv_2130.argv_2814 (argv_2132.c_str(), argv_2766, "");

	string argv_2132 = log_base + "argv_2126.txt"; 
	argv_1238.log_set.argv_2126.argv_2814 (argv_2132.c_str(), argv_2766, "");

	argv_2132 = log_base + "argv_2127.txt"; 
	argv_1238.log_set.argv_2127.argv_2814 (argv_2132.c_str(), argv_2766, "");

	argv_2132 = log_base + "argv_2139.txt"; 
	argv_1238.log_set.argv_2139.argv_2814 (argv_2132.c_str(), argv_2766, "");

	argv_2132 = log_base + "argv_2138.txt"; 
	argv_1238.log_set.argv_2138.argv_2814 (argv_2132.c_str(), argv_2766, "");

	argv_2132 = log_base + "argv_2145.txt"; 
	argv_1238.log_set.argv_2145.argv_2814 (argv_2132.c_str(), argv_2766, "");

#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2146.argv_2142 (argv_1086, "argv_1030: opening all log files...[DONE]");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	return (argv_1892);
}

argv_3379 argv_1030::argv_3111 () {
	argv_3379 argv_1892 = argv_3303;

	argv_1892 = argv_3117		("argv_1285", argv_1238.data_set.argv_1287.c_str(), argv_1238.data_set.argv_1285, argv_859);

	if (argv_1892 == argv_3303) {
		argv_1892 = argv_3117 ("argv_1286", argv_1238.data_set.argv_1287.c_str(), argv_1238.data_set.argv_1286, argv_860);
	}
	if (argv_1892 == argv_3303) {
		argv_1892 = argv_3117 ("argv_1284", argv_1238.data_set.argv_1287.c_str(), argv_1238.data_set.argv_1284, argv_851);
	}
	/*
	if (argv_1892 == argv_3303) {
		argv_1892 = argv_3117 ("argv_1288", argv_1238.data_set.argv_1287.c_str(), argv_1238.data_set.argv_1288, argv_857);
	}*/
	if (argv_1892 == argv_3303) {
		argv_1892 = argv_3117 ("internal_archive_creator_port", argv_1238.data_set.internal_servname.c_str(), argv_1238.data_set.internal_archive_creator_port, argv_853);
	}
	if (argv_1892 == argv_3303) {
		argv_1892 = argv_3117 ("internal_archive_extractor_port", argv_1238.data_set.internal_servname.c_str(), argv_1238.data_set.internal_archive_extractor_port, argv_854);
	}
	if (argv_1892 == argv_3303) {
		argv_1892 = argv_3117 ("internal_spyware_manager_port", argv_1238.data_set.internal_servname.c_str(), argv_1238.data_set.internal_spyware_manager_port, argv_856);
	}
	if (argv_1892 == argv_3303) {
		argv_1892 = argv_3117 ("internal_scan_gateway_port", argv_1238.data_set.internal_servname.c_str(), argv_1238.data_set.internal_scan_gateway_port, argv_855);
	}
	if (argv_1892 == argv_3303) {
		argv_1892 = argv_3117 ("internal_update_manager_port", argv_1238.data_set.internal_servname.c_str(), argv_1238.data_set.internal_update_manager_port, argv_857);
	}
	if (argv_1892 == argv_3303) {
		argv_1892 = argv_3117 ("internal_admin_port", argv_1238.data_set.internal_servname.c_str(), argv_1238.data_set.internal_admin_port, argv_852);
	}
	return (argv_1892);
}

argv_3379 argv_1030::argv_3117 (argv_773 _name, argv_773 _servname, argv_3717 _port, argv_3715 _client_type) {
	argv_3379 argv_1892 = argv_3303;
	char argv_3681[MAX_PATH];

#if defined (__DEBUG_SCAN_DAEMON__)
	argv_3409 (argv_3681, MAX_PATH, "preparing listener '%s' : servname: %s, argv_3095: %u", _name, _servname, _port);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	// bind the argv_3095 and the servname
	argv_876 argv_2258;
	argv_1892 = argv_2258.argv_3118 (_servname, _port);
	if (argv_1892 != argv_2262) {
		string serror = argv_1240 (argv_1892);
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_1030::argv_3117 - argv_3118 failed ! (%s,%s,%u) - argv_1239 = ", _name, _servname, _port, serror.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2146.argv_2142 (argv_1242, argv_3681);
	}
	else { // server argv_3124 => argv_1292 it's listening argv_3410 
		argv_864 listener;
		listener.argv_849	= _client_type;
		argv_2157 void_ptr			= argv_2766;
		SOCKET * socket_ptr		= argv_2766;
		argv_1892 = argv_2258.argv_1660 ((argv_2157&) void_ptr);

		if (argv_1892 != argv_2262) {
			argv_1150 ("argv_1030::argv_3117 - argv_1660", argv_2262, argv_1892);
		}
		else { // argv_576 the listening argv_3410 to the vector for the event loop of COM manager
			socket_ptr = (SOCKET *) void_ptr;
			listener.argv_3410 = (*socket_ptr);
#if defined (__DEBUG_SCAN_DAEMON__)
			argv_3409 (argv_3681, MAX_PATH, "extracted listening argv_3410 of '%s' : %d", _name, listener.argv_3410);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
			argv_1238.argv_3799.push_back (listener);
		}
	}

	if (argv_1892 == argv_2262) { // remap error argv_877
		argv_1892 = argv_3303;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
