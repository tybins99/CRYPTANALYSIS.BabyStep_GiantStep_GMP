// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ conf_punknet.cpp
// @@ punknet project's configuration argv_1314 parsing facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "stdafx.h"
#include "..\\Lib\\argv_294.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_769 argv_981;
extern argv_792 argv_1688;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_769 
// @@
// @@ FUNCTION: argv_2964
// @@
// @@ INPUT: none
// @@
// @@ OUTPUT: none
// @@
// @@ IO: none
// @@
// @@ RETURN VALUE: 
// @@ - bool: true if initialization succeeded.
// @@ -       false otherwise.  
// @@
// @@ DESCRIPTION:
// @@ This function permits to parse and retrieve all 
// @@ necessary configuration veriables from the configuration
// @@ argv_1314 of a punknet Linux scanner.
// @@
// @@ CONTRACT: 
// @@ - the argv_981 argv_1314 must contains no syntax error.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
[DATABASE]
server_name = 197.12.4545.23
login		= tybins99
password	= 123456

[NETWORK]
argv_3095 = 587

[FOLDER]
update_folder   = UPDATE
argv_3684	    = TEMP
sample_folder   = SAMPLE
tool_folder		= TOOL

[WEB]
tool		= wget.exe
param		=

[ZIP]
tool		= 7z.exe 
param		= x 

[SAMPLE]
temporary_sample_suffix = .in_progress
actual_sample_suffix    = .sample

[TIMEOUT]  
batch_processor_period  = 2
abort_scan_if_too_long  = 1
avx_max_scan_duration   = 60
update_period			= 10

[MD5]
enable_md5				= 1

[THREAD_QUEUE]
load_result_queue_size  = 10
avx_runner_queue_size   = 10
scan_result_queue_size  = 10
batch_result_queue_size = 10

[AVX]
argv_1314 = hauri.txt
argv_1314 = ahnlab.txt
*/
bool argv_769::argv_2964 () {
	bool bret = true;
	string svalue;
	argv_3717   argv_3807;
	argv_3361 ("DATABASE", "server_name",				argv_984.argv_1682 (argv_1364, "DATABASE", "server_name"));	
	argv_3361 ("DATABASE", "db_identifier",				argv_984.argv_1682 (argv_1364, "DATABASE", "db_identifier"));	
	argv_3361 ("DATABASE", "packet_rule_db_name",		argv_984.argv_1682 (argv_1364, "DATABASE", "packet_rule_db_name"));	
	argv_3360   ("DATABASE", "db_filename_max_length",		argv_984.argv_1678   (argv_1364, "DATABASE", "db_filename_max_length", 1, MAX_PATH));
	argv_3360   ("DATABASE", "max_filesize",				argv_984.argv_1678   (argv_1364, "DATABASE", "max_filesize", 1, 31457280)); // 30 Mb
	argv_3361 ("DATABASE", "login",						argv_984.argv_1682 (argv_1364, "DATABASE", "login"));	
	argv_3360   ("DATABASE", "max_query_answer",			argv_984.argv_1678   (argv_1364, "DATABASE", "max_query_answer", 1, INT_MAX));	
	argv_3360   ("DATABASE", "ancilate_default_max_delta",	argv_984.argv_1678   (argv_1364, "DATABASE", "ancilate_default_max_delta", 0, 8760)); // hours (max 365 days)

	argv_3361 ("DATABASE", "password",					argv_984.argv_1682 (argv_1364, "DATABASE", "password"));
	argv_3361 ("DATABASE", "accident_table_name",		argv_984.argv_1682 (argv_1364, "DATABASE", "accident_table_name"));	

	argv_3361 ("DATABASE", "accident_image_name",		argv_984.argv_1682 (argv_1364, "DATABASE", "accident_image_name"));
	argv_3361 ("DATABASE", "pe_string_table_name",		argv_984.argv_1682 (argv_1364, "DATABASE", "pe_string_table_name"));
	argv_3361 ("DATABASE", "avx_result_table_name",		argv_984.argv_1682 (argv_1364, "DATABASE", "avx_result_table_name"));
	argv_3361 ("DATABASE", "ancilate_table_name",		argv_984.argv_1682 (argv_1364, "DATABASE", "ancilate_table_name"));
	argv_3361 ("DATABASE", "db_config_table_name",		argv_984.argv_1682 (argv_1364, "DATABASE", "db_config_table_name"));
	argv_3361 ("DATABASE", "maillist_table_name",		argv_984.argv_1682 (argv_1364, "DATABASE", "maillist_table_name"));

	argv_3361 ("DATABASE", "pck_rule_server_name",		argv_984.argv_1682 (argv_1364, "DATABASE", "pck_rule_server_name"));
	argv_3361 ("DATABASE", "pck_rule_login",				argv_984.argv_1682 (argv_1364, "DATABASE", "pck_rule_login"));
	argv_3361 ("DATABASE", "pck_rule_password",			argv_984.argv_1682 (argv_1364, "DATABASE", "pck_rule_password"));
	argv_3361 ("DATABASE", "pck_rule_db_identifier",		argv_984.argv_1682 (argv_1364, "DATABASE", "pck_rule_db_identifier"));
	argv_3360	 ("DATABASE", "save_test_sample_enabled",	argv_984.argv_1678 (argv_1364, "DATABASE", "save_test_sample_enabled", 0, 1)); 

	argv_3360 ("NETWORK",   "argv_3095",						argv_984.argv_1678 (argv_1364, "NETWORK", "argv_3095",0, 65536));
	argv_3360 ("NETWORK",   "observer_port",				argv_984.argv_1678 (argv_1364, "NETWORK", "observer_port",0, 65536));
	argv_3360 ("NETWORK",   "reporter_port",				argv_984.argv_1678 (argv_1364, "NETWORK", "reporter_port",0, 65536));

	argv_3361 ("FOLDER", "update_folder",				argv_984.argv_1682 (argv_1364, "FOLDER", "update_folder"));	
	argv_3361 ("FOLDER", "argv_3684",					argv_984.argv_1682 (argv_1364, "FOLDER", "argv_3684"));	
	argv_3361 ("FOLDER", "tmp_folder_1",					argv_984.argv_1682 (argv_1364, "FOLDER", "tmp_folder_1"));	
	argv_3361 ("FOLDER", "tmp_folder_2",					argv_984.argv_1682 (argv_1364, "FOLDER", "tmp_folder_2"));	
	argv_3361 ("FOLDER", "tmp_folder_3",					argv_984.argv_1682 (argv_1364, "FOLDER", "tmp_folder_3"));	
	argv_3361 ("FOLDER", "tmp_folder_4",					argv_984.argv_1682 (argv_1364, "FOLDER", "tmp_folder_4"));	

	argv_3361 ("FOLDER", "sample_folder",				argv_984.argv_1682 (argv_1364, "FOLDER", "sample_folder"));	
	argv_3361 ("FOLDER", "extracted_sample_folder",		argv_984.argv_1682 (argv_1364, "FOLDER", "extracted_sample_folder"));
	argv_3361 ("FOLDER", "tool_folder",					argv_984.argv_1682 (argv_1364, "FOLDER", "tool_folder"));	
	svalue = argv_1683 ("FOLDER", "tool_folder");
	argv_1688.dns.set_tool_folder (svalue.c_str());

	argv_3361 ("SAMPLE", "temporary_sample_suffix",		argv_984.argv_1682 (argv_1364, "SAMPLE", "temporary_sample_suffix"));	
	argv_3361 ("SAMPLE", "actual_sample_suffix",			argv_984.argv_1682 (argv_1364, "SAMPLE", "actual_sample_suffix"));	
	argv_3361 ("SAMPLE", "zip_sample_suffix",			argv_984.argv_1682 (argv_1364, "SAMPLE", "zip_sample_suffix"));	
	argv_3360   ("SAMPLE",   "received_file_max_size",		argv_984.argv_1678 (argv_1364, "SAMPLE", "received_file_max_size", 1, 30)); // 30 Mega max
	argv_3360   ("SAMPLE",   "max_nb_string",				argv_984.argv_1678 (argv_1364, "SAMPLE", "max_nb_string",	1, 255)); // 30 Mega max
	argv_3360   ("SAMPLE",   "max_string_size",			argv_984.argv_1678 (argv_1364, "SAMPLE", "max_string_size",	1, 255));

	argv_3807 = argv_1679 ("SAMPLE",   "received_file_max_size");
	argv_1688.dns.set_received_file_max_size (argv_3807);

	argv_3361 ("WEB", "tool",							argv_984.argv_1682 (argv_1364, "WEB", "tool"));	
	argv_3361 ("WEB", "param",							argv_984.argv_1682 (argv_1364, "WEB", "param"));	

	argv_3360 ("ZIP", "verbose_zip",						argv_984.argv_1678 (argv_1364,   "ZIP", "verbose_zip", 0, 1));
	argv_3360 ("ZIP", "max_nb_file_in_archive",			argv_984.argv_1678 (argv_1364,   "ZIP", "max_nb_file_in_archive", 1, 60));

	argv_3361 ("ZIP", "tool",							argv_984.argv_1682 (argv_1364, "ZIP", "tool"));	
	argv_3361 ("ZIP", "param",							argv_984.argv_1682 (argv_1364, "ZIP", "param"));	
	svalue = argv_1683("WEB", "tool"); 
	argv_1688.dns.set_web_tool	(svalue.c_str());
	svalue = argv_1683("WEB", "param");
	argv_1688.dns.set_web_param (svalue.c_str());
	svalue = argv_1683("ZIP", "tool");
	argv_1688.dns.set_zip_tool	(svalue.c_str());
	svalue = argv_1683("ZIP", "param");
	argv_1688.dns.set_zip_param (svalue.c_str());

	argv_3360 ("TIMEOUT",   "update_period",				argv_984.argv_1678 (argv_1364, "TIMEOUT", "update_period", 0, 172800)); // 48h00 max
	argv_3807 = argv_1679 ("TIMEOUT",   "update_period");
	argv_1688.dns.set_update_period (argv_3807);

	argv_3360 ("TIMEOUT",   "ancilate_default_period",		argv_984.argv_1678 (argv_1364, "TIMEOUT", "ancilate_default_period", 0, 240)); // 240 hours max (10 days)
	argv_3807 = argv_1679 ("TIMEOUT",   "ancilate_default_period");
	argv_1688.dns.set_ancilate_default_period (argv_3807);

	argv_3360 ("TIMEOUT",   "ancilate_fast_mode_enabled",	argv_984.argv_1678 (argv_1364, "TIMEOUT", "ancilate_fast_mode_enabled", 0, 1)); 
	argv_3807 = argv_1679 ("TIMEOUT",   "ancilate_fast_mode_enabled");
	argv_1688.dns.set_ancilate_fast_mode_enabled(false);
	if (argv_3807 == 1) {
		argv_1688.dns.set_ancilate_fast_mode_enabled(true);
	}

	argv_3360 ("TIMEOUT",   "socket_max_inactivity_time",				argv_984.argv_1678 (argv_1364, "TIMEOUT", "socket_max_inactivity_time", 1, 36000)); // seconds
	argv_3807 = argv_1679 ("TIMEOUT",   "socket_max_inactivity_time");
	argv_1688.dns.set_socket_max_inactivity_time (argv_3807);

	argv_3360 ("TIMEOUT",   "observer_refresh_period",				argv_984.argv_1678 (argv_1364, "TIMEOUT", "observer_refresh_period", 1, 7200)); // max: 2 hours
	argv_3807 = argv_1679 ("TIMEOUT",   "observer_refresh_period");
	argv_1688.dns.set_observer_refresh_period (argv_3807);

	argv_3360 ("TIMEOUT",   "batch_processor_period",		argv_984.argv_1678 (argv_1364, "TIMEOUT", "batch_processor_period", 0, 864000)); // 240h00 max
	argv_3807 = argv_984.argv_1678 (argv_1364, "TIMEOUT", "abort_scan_if_too_long", 0, 1);
	bool bval = true;
	if (argv_3807 == 0) {
		bval = false;
	}

	argv_3360 ("TIMEOUT",   "batch_processor_enabled",	argv_984.argv_1678 (argv_1364, "TIMEOUT", "batch_processor_enabled", 0, 1)); 
	argv_3807 = argv_1679 ("TIMEOUT",   "batch_processor_enabled");
	argv_1688.dns.set_batch_processor_enabled(false);
	if (argv_3807 == 1) {
		argv_1688.dns.set_batch_processor_enabled(true);
	}

	argv_3360 ("TIMEOUT",   "ancilate_enabled",	argv_984.argv_1678 (argv_1364, "TIMEOUT", "ancilate_enabled", 0, 1)); 
	argv_3807 = argv_1679 ("TIMEOUT",   "ancilate_enabled");
	argv_1688.dns.set_ancilate_enabled(false);
	if (argv_3807 == 1) {
		argv_1688.dns.set_ancilate_enabled(true);
	}

	argv_3807 = argv_984.argv_1678 (argv_1364, "TIMEOUT", "nb_retry_log_file", 0, 9999999);
	argv_3360 ("TIMEOUT", "nb_retry_log_file", argv_3807);

	argv_3807 = argv_984.argv_1678 (argv_1364, "TIMEOUT", "sleep_time_before_retry_log", 0, 120000); // 2 minutes max
	argv_3360 ("TIMEOUT", "sleep_time_before_retry_log", argv_3807);

	argv_3807 = argv_984.argv_1678 (argv_1364, "TIMEOUT", "nb_retry_scan", 0, 9999999);
	argv_3360 ("TIMEOUT", "nb_retry_scan", argv_3807);

	argv_3807 = argv_984.argv_1678 (argv_1364, "TIMEOUT", "sleep_time_before_retry_scan", 0, 24000000); // 400 minutes max
	argv_3360 ("TIMEOUT", "sleep_time_before_retry_scan", argv_3807);

	argv_3807 = argv_984.argv_1678 (argv_1364, "TIMEOUT", "symantec_max_log_wait_timeout", 0, 7200); // in seconds
	argv_3360 ("TIMEOUT", "symantec_max_log_wait_timeout", argv_3807);
	
	argv_1688.dns.set_abort_scan_if_too_long (bval);
	argv_3360 ("TIMEOUT",   "abort_scan_if_too_long",		bval); 
	argv_3807 = argv_984.argv_1678 (argv_1364, "TIMEOUT", "avx_max_scan_duration", 2, 86400);
	argv_1688.dns.set_avx_max_scan_duration (argv_3807);
	argv_3360 ("TIMEOUT",   "avx_max_scan_duration",		argv_3807); // 24h00 max

	argv_3807 = argv_984.argv_1678 (argv_1364, "TIMEOUT", "unzip_maximum_duration", 1, 3600); // 1 second to 1 hour
	argv_3360 ("TIMEOUT",   "unzip_maximum_duration",		argv_3807); // 1 hour max
	argv_1688.dns.set_unzip_maximum_duration (argv_3807);
	
	argv_3807 = argv_984.argv_1678 (argv_1364, "TIMEOUT", "maximum_update_duration", 1, 3600); // 1 second to 1 hour
	argv_3360 ("TIMEOUT",   "maximum_update_duration",		argv_3807); // 1 hour max
	argv_1688.dns.set_max_update_duration (argv_3807);

	argv_3360 ("MD5",   "enable_md5",   argv_984.argv_1678 (argv_1364, "MD5", "enable_md5",0,1));

	argv_3360 ("THREAD_QUEUE",   "load_result_queue_size",	argv_984.argv_1678 (argv_1364, "THREAD_QUEUE", "load_result_queue_size", 1, 655360));
	argv_3360 ("THREAD_QUEUE",   "avx_runner_queue_size",  argv_984.argv_1678 (argv_1364, "THREAD_QUEUE", "avx_runner_queue_size",  1, 655360));
	argv_3360 ("THREAD_QUEUE",   "scan_result_queue_size", argv_984.argv_1678 (argv_1364, "THREAD_QUEUE", "scan_result_queue_size", 1, 655360));
	argv_3360 ("THREAD_QUEUE",   "batch_result_queue_size",argv_984.argv_1678 (argv_1364, "THREAD_QUEUE", "batch_result_queue_size",1, 655360));
	argv_3360 ("THREAD_QUEUE",   "zip_queue_size",         argv_984.argv_1678 (argv_1364, "THREAD_QUEUE", "zip_queue_size",         1, 655360));

	argv_3360   ("AVX", "nb_instance_per_avx",		argv_984.argv_1678 (argv_1364, "AVX", "nb_instance_per_avx", 1 ,1)); // feature disabled.
	argv_3360	 ("AVX", "view_dos_window",			argv_984.argv_1678 (argv_1364, "AVX", "view_dos_window", 0,1));	
	argv_3361 ("AVX", "kill_command",			argv_984.argv_1682 (argv_1364, "AVX", "kill_command"));
	argv_3361 ("AVX", "ps_command",				argv_984.argv_1682 (argv_1364, "AVX", "ps_command"));
	argv_3360	 ("AVX", "synchronous_mode",		argv_984.argv_1678 (argv_1364, "AVX", "synchronous_mode", 0,1));	
	
	// retrieve the AVX runners list
	vector<string> v_values;
	v_values = argv_984.argv_1663 (argv_1364, "AVX", "argv_1314");
	argv_3359 ("AVX", "argv_1314", v_values);
	argv_3717 i = 0;
	argv_3717 nb_avx = v_values.size ();
	// argv_3110 to parse avx runners configuration files
	Cconf_avx_runner conf_avx_runner;
	argv_1688.dns.set_nb_avx (nb_avx); // set the number of scanners into DNS
	argv_1688.dns.set_nb_instance_per_avx (argv_1679 ("AVX", "nb_instance_per_avx"));

	for (i=0 ; i<nb_avx ; i++) {
		argv_3798.push_back (conf_avx_runner);
	}

	string full_conf_filename;
	string base_dir = argv_1688.dns.get_base_folder (); 
	for (i=0 ; i<nb_avx ; i++) { // now perform parse
		full_conf_filename = base_dir + "\\" + v_values[i];
		// MessageBox (argv_2766, full_conf_filename.c_str(), "", MB_OK);
		bret = argv_3798[i].argv_2094 (full_conf_filename);
		if (bret == false) {
			argv_1688.argv_2146.argv_2142 (argv_1242, "+++ failed to parse argv_981 argv_1314 : ", full_conf_filename.c_str());
			break;
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
