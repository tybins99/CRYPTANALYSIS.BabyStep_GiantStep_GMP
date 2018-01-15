#include "../LIB/argv_333.hpp"


Ccallback_set::Ccallback_set () {
	argv_1408					= argv_2766;
	argv_1416						= argv_2766;	
	argv_1412		= argv_2766;
	argv_1420	= argv_2766;
	argv_1465					= argv_2766;
	argv_1535					= argv_2766;
	argv_1435				= argv_2766;
	argv_1421					= argv_2766;
}

void Ccallback_set::argv_808 (argv_865 * _log_ptr, argv_2157 _fn_ptr, argv_773 _name, bool& _bret) {
	if (_fn_ptr == argv_2766) {
		_log_ptr->argv_2142 (argv_1242, "+++ ERROR: function pointer is argv_2766 for callback : ", _name);
		_bret = false;
	}
}

bool Ccallback_set::argv_802 (argv_865 * _log_ptr) {
	bool bret = true;
	argv_808 (_log_ptr, argv_1408,					"argv_1408", bret);
	argv_808 (_log_ptr, argv_1416,						"argv_1416", bret);
	argv_808 (_log_ptr, argv_1412,		"argv_1412", bret);
	argv_808 (_log_ptr, argv_1420,	"argv_1420", bret);
	argv_808 (_log_ptr, argv_1465,					"argv_1465", bret);
	argv_808 (_log_ptr, argv_1535,					"argv_1535", bret);
	argv_808 (_log_ptr, argv_1435,				"argv_1435",bret);
	argv_808 (_log_ptr, argv_1421,					"argv_1421", bret);
	return (bret);
}

argv_1042::argv_1042 () {
	init_done = false;
}

bool argv_1042::init (argv_773 _native_dll_file, argv_773 _log_filename, argv_2157& _kernel_data) {
	bool bret = true;
	if (init_done == true) {
		fprintf (stderr, "+++ ERROR: illegal to call init twice or more !\n");
		bret = false;
	}
	else { // open the log argv_1314
		if (argv_1688.argv_2146.argv_2814 (_log_filename, argv_2766, "") == false) {
			fprintf (stderr, "+++ ERROR: failed to open log argv_1314 : '%s'\n", _log_filename);
			bret = false;
		}
		else {
			argv_3379 argv_1892 = argv_3582.init (&argv_1688, _native_dll_file);
			if (argv_1892 != argv_2065) {
				string serror = argv_1240 (argv_1892);
				fprintf (stderr, "native API init failed ! (%s)\n", serror.c_str());
				bret = false;
			}
			else {
				bret = argv_3120 ();
				if (bret == false) {
					fprintf (stderr, "+++ ERROR: argv_3120...[FAILED]\n");	
				}
				else {
					init_done = true;	
					fprintf (stderr, "(see log argv_1314 : %s)\n", _log_filename);
					argv_1688.argv_2146.argv_2142 (argv_1086, "native API argv_2117 : ", _native_dll_file);
				}
			}
		}
	}
	return (bret);
}

bool argv_1042::argv_3120 () {
	bool bret = true;
	argv_1936.argv_3583			= &argv_3582.toolset;
	argv_1936.argv_3711	= argv_2766;

	argv_3379 argv_1892 = type_matcher_create (&argv_1936.argv_3711, argv_1936.argv_3583);
	if (argv_1892 != argv_3710) {
		string serror = argv_1240 (argv_1892);
		argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: type_matcher_create failed ! - argv_1239 = ", serror.c_str());
		bret = false;
	}
	else {
		argv_1688.argv_2146.argv_2142 (argv_1086, "type_matcher_create...[OK]");
	}
	return (bret);
}

argv_1042::~argv_1042 () {
	if (init_done == true) {
		argv_1688.argv_2146.argv_872 ();
		init_done = false;
	}
}

void argv_1042::init_callback__construct (argv_1542 _fp_construct) {
	callback_set.argv_1408 = _fp_construct;
}

void argv_1042::init_callback__destruct (argv_1545 _fp_destruct) {
	callback_set.argv_1416 = _fp_destruct;	
}

void argv_1042::init_callback__create_scan_result_atom (argv_1544 _fp_create_scan_result_atom) {
	callback_set.argv_1412 = _fp_create_scan_result_atom;
}

void argv_1042::init_callback__destruct_scan_result_atom (argv_1547 _fp_destruct_scan_result_atom) {
	callback_set.argv_1420 = _fp_destruct_scan_result_atom;
}

void argv_1042::init_callback__match_type (argv_1560 _fp_match_type) {
	callback_set.argv_1465 = _fp_match_type;
}

void argv_1042::init_callback__scan_buffer (argv_1605 _fp_scan_buffer) {
	callback_set.argv_1535 = _fp_scan_buffer;
}

void argv_1042::init_callback__get_scan_report (argv_1552 _fp_get_scan_report) {
	callback_set.argv_1435 = _fp_get_scan_report;
}

void argv_1042::init_callback__dysinfect (argv_1548 _fp_dysinfect) {
	callback_set.argv_1421 = _fp_dysinfect;
}

bool argv_1042::argv_3122 (argv_773 _signature_db_path, argv_773 _filename, argv_773 _plugin_log_filename) {
	bool bret = true;
	bret = callback_set.argv_802 (&argv_1688.argv_2146);
	if (bret == false) {
		fprintf (stderr, "+++ ERROR: Callbacks incoherency detected !\n");
	}
	else if (argv_804 (_filename) == false) {
		argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_1314 to scan does not exists !");
		fprintf (stderr, "+++ ERROR: argv_1314 to scan not found !\n");
		bret = false;
	}
	else {
		argv_1936.argv_3583->argv_2022 (&argv_1936.argv_1960, _plugin_log_filename);
		argv_1688.argv_2146.argv_2142 (argv_1086, "plugin log argv_1314 : ", _plugin_log_filename);

		argv_1936.argv_3316 = argv_1936.argv_3583->argv_2730 (argv_1352 * sizeof(argv_3428));
		argv_2157 mapper_addr						= argv_2766;
		argv_3428 * argv_3316	= argv_2766;
		argv_3428 * data_ptr			= argv_2766;

		for (argv_3717 i=argv_1353 ; i<argv_1352 ; i++) {
			mapper_addr = argv_2766;
			argv_1936.argv_3583->argv_2202 (&mapper_addr, (argv_2157) argv_1936.argv_3583->argv_2730, (argv_2157) argv_1936.argv_3583->argv_2722);
			argv_3316						= (argv_3428 *) argv_1936.argv_3316;
			data_ptr								= &argv_3316[i];
			data_ptr->argv_1318					= mapper_addr;
		}

		argv_1936.argv_1056 = argv_1357;
		argv_3379 argv_1892 = callback_set.argv_1408 ((argv_2157) &argv_1936, _signature_db_path);
		if (argv_1892 != argv_1331) {
			string serror = argv_1240 (argv_1892);
			argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: 'construct' callback failed ! - argv_1239 = ", serror.c_str());
			bret = false;
		}
		else {
			if (argv_1936.argv_1056 == argv_1357) {
				argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: 'construct' function did not fill his argv_3695 !");	
				bret = false;
			}
			else {
				argv_1688.argv_2146.argv_2142 (argv_1086, "construct...[SUCCESS]");
			}
		}
	}
	return (bret);
}

bool argv_1042::argv_3102 () {
	bool bret = true;
	argv_1688.argv_2146.argv_2142 (argv_1086, "calling 'argv_1127' callback");
	argv_3379 argv_1892 = callback_set.argv_1416 ((argv_2157) &argv_1936);
	if (argv_1892 != argv_1331) {
		string serror = argv_1240 (argv_1892);
		argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: 'argv_1127' callback failed ! - argv_1239 = ", serror.c_str());
		bret = false;
	}
	else {
		argv_1688.argv_2146.argv_2142 (argv_1086, "argv_1127...[SUCCESS]");
	}
	return (bret);
}

bool argv_1042::argv_2963 (argv_773 _filename, argv_2157& _atom_ptr, bool _do_dysinfect) {
	bool bret = true;
	char argv_3681[MAX_PATH];
	bool infection_flag	= false;
	argv_1688.argv_2146.argv_2142 (argv_2763, "argv_1314 matches the argv_1043 argv_3695");
	argv_1936.argv_1056 = argv_1357;
	argv_3379 argv_1892 = callback_set.argv_1535 ((argv_2157) &argv_1936, argv_1319, argv_1334, infection_flag, _atom_ptr);
	if (argv_1892 != argv_1331) {
		string serror = argv_1240 (argv_1892);
		argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_1535 failed ! - argv_1239 = ", serror.c_str());
	}
	else if (argv_1936.argv_1056 == argv_1357) {
		argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: 'scan_buffer' function did not fill his argv_3695 !");
		bret = false;
	}
	else if (infection_flag == false) {
		argv_3409 (argv_3681, MAX_PATH, "[not_infected|argv_1314=%s]", _filename);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1688.argv_2146.argv_2142 (argv_2763, argv_3681);
	}
	else { // argv_1314 is infected, let's get a scan report
		char * virus_name_ptr = argv_2766;
		argv_3717 dysinfection_flag;
		argv_1936.argv_1056 = argv_1357;
		argv_1892 = callback_set.argv_1435 ((argv_2157) &argv_1936, _atom_ptr, (char *&) virus_name_ptr, dysinfection_flag);
		if (argv_1892 != argv_1331) {
			string serror = argv_1240 (argv_1892);
			argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_1435 failed ! - argv_1239 = ", serror.c_str());
		}
		else if (argv_1936.argv_1056 == argv_1357) {
			bret = false;
			argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: 'get_scan_report' function did not fill it's argv_3695 !");	
		}
		else { // scan report was retrieved succesfully
			string flag_str = dysinfection_possibility_2_string (dysinfection_flag);
			if (virus_name_ptr != argv_2766) {
				argv_3409 (argv_3681, MAX_PATH, "[infected|dysinfection_flag=%s|argv_3827=%s|argv_1314=%s]", flag_str.c_str(), virus_name_ptr, _filename);
			}
			else {
				argv_3409 (argv_3681, MAX_PATH, "[infected|dysinfection_flag=%s|argv_3827=<null>|argv_1314=%s]", flag_str.c_str(), _filename);
			}
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1688.argv_2146.argv_2142 (argv_1086, argv_3681);
			if (_do_dysinfect == false) {
				argv_1688.argv_2146.argv_2142 (argv_1086, "*** skip dysinfection (dysinfection is disabled by the caller)");
			}
			else { // the caller wants us to try a dysinfection
				argv_1688.argv_2146.argv_2142 (argv_1086, "performing a desynfection");
				argv_3379 dys_success_code;
				argv_1936.argv_1056 = argv_1357;
				argv_3717 saved_file_size = argv_1334;
				argv_1892 = callback_set.argv_1421 ((argv_2157) &argv_1936, argv_1319, argv_1334, _atom_ptr, dys_success_code);
				if (argv_1892 != argv_1331) {
					string serror = argv_1240 (argv_1892);
					argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_1421 failed ! - argv_1239 = ", serror.c_str());
				}
				else if (argv_1936.argv_1056 == argv_1357) {
					argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: 'dysinfect' function did not fill his argv_3695 !");
					bret = false;
				}
				else {
					argv_1318.argv_873 ();

					string dys_str = dysinfect_success_2_string (dys_success_code);	
					argv_1688.argv_2146.argv_2142 (argv_2763, "dysinfection argv_1185 - argv_3266 : ", dys_str.c_str());
					if (argv_1334 != saved_file_size) {
						if (argv_1334 == 0) {
							argv_1688.argv_2146.argv_2142 (argv_3834, "*** WARNING: 'dysinfect' function asked for argv_1314 deletion (delete not performed for test purpose)");	
						}
						else {
							argv_1892 = argv_1936.argv_3583->argv_2733 (_filename, argv_1334);
							if (argv_1892 != 0) {
								argv_3409 (argv_3681, MAX_PATH, "*** ERROR: failed to modified argv_1314 size : old size = %u, new_size = %u", saved_file_size, argv_1334);
								argv_3681[MAX_PATH - 1] = '\0';
								argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
							}
							else {
								argv_3409 (argv_3681, MAX_PATH, "modified argv_1314 size : old size = %u, new_size = %u", saved_file_size, argv_1334);
								argv_3681[MAX_PATH - 1] = '\0';
								argv_1688.argv_2146.argv_2142 (argv_1086, argv_3681);
							}
						}
					}
				}
			}
		}
	}
	return (bret);
}

bool argv_1042::argv_3306 (argv_773 _signature_db_path, argv_773 _filename, argv_773 _plugin_log_filename, bool _do_dysinfect) {
	bool bret = true;
	char argv_3681[MAX_PATH];
	strncpy (argv_1936.argv_1048, _filename, MAX_PATH);
	argv_1936.argv_1048[MAX_PATH - 1] = '\0';

	argv_1688.argv_2146.argv_2142 (argv_1086, "argv_1314 to scan : ", _filename);

	bret = argv_3122 (_signature_db_path, _filename, _plugin_log_filename);
	if (bret == false) {
		argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: scan preparation...[FAILED]");
	}
	else {
		if (argv_1317 (_filename) == true) {
			bret = argv_3213 (_filename);
			if (bret == false) {
				argv_1688.argv_2146.argv_2142 (argv_3834, "*** WARNING: failed to remove READ-ONLY flag for argv_1314");
				bret = true;
			}
			else {
				argv_1688.argv_2146.argv_2142 (argv_2763, "removed read-only protection for argv_1314 : ", _filename);
			}
		}

		// mmap the argv_1314 to scan
		bret = argv_1318.argv_2346 (_filename, argv_2349, argv_1319, argv_1334);
		if (bret == false) {
			argv_3717 argv_1239, argv_1247;
			argv_1318.argv_1659 (argv_1239, argv_1247);
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: failed to mmap argv_1314 : '%s' (argv_1239=%u,argv_1247=%u)", _filename, argv_1239, argv_1247);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
		}
		else {
			argv_1688.argv_2146.argv_2142 (argv_1086, "mmapped the argv_1314 : argv_1314 size = ", argv_1334);	
			bool	match_flag = false;
			argv_2157	argv_686;
			// check whether the argv_1314 matches argv_1043 argv_3695 or not
			argv_3379 argv_1892 = callback_set.argv_1465 ((argv_2157) &argv_1936, argv_1319, argv_1334, match_flag, argv_686);
			if (argv_1892 != argv_3710) {
				string serror = argv_1240 (argv_1892);
				argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_1465 failed ! - argv_1239 = ", serror.c_str());
			}
			else if (match_flag == false) { 
				argv_1688.argv_2146.argv_2142 (argv_2763, "argv_1314 does not match the argv_1043 argv_3695");
			}
			else { // argv_1314 matches the argv_1043 argv_3695
				argv_1892 = type_matcher_link_atom (argv_1936.argv_3711, argv_1359, argv_686);
				if (argv_1892 != argv_3710) {
					string serror = argv_1240 (argv_1892);
					argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: type_matcher_link_atom failed ! - argv_1239 = ", serror.c_str());
				}
				else { // perform a scan of the argv_1314
					bret = argv_2963 (_filename, argv_686, _do_dysinfect);
				}
			}
		}
	}

	if (bret == true) {
		argv_3102 ();
	}
	return (bret);
}

