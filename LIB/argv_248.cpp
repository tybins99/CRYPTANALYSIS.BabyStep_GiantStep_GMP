// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_307.hpp"


argv_837::argv_837 () {
	reset ();
}

void argv_837::reset () {
	argv_2713		= false;
	argv_3745	= false;
	argv_1064		= false;
	argv_720					= false;
	argv_3498			= false;
	argv_3189			= false;
	argv_1733				= false;

	argv_2711	= "";
	argv_963	= "";
	argv_833	= "";
	argv_3015		= "";

	argv_3588		= argv_2766;

	argv_3582.reset ();
	argv_966.reset ();
	argv_1069.reset ();
	argv_3846.reset ();

//	m_resolve_query.clear ();
//	m_unique_resolve_query.clear ();
	argv_3804.clear ();
	vector<string>().swap (argv_3804); // force vector to free it's memory	
	argv_3803.clear ();
	vector<string>().swap (argv_3803); // force vector to free it's memory	

	argv_2196.clear ();
	argv_3257.reset ();
	argv_1773.reset ();
	argv_3275.reset ();
	// the public argv_2007 can't be reseted as simply, see 'argv_3734'
}

// @@===========================================@@
argv_836::argv_836 () {
	reset ();
}

void argv_836::reset () {
	argv_1813.reset ();
}

argv_836::~argv_836 () {
	;
}
/*
void argv_836::remove_remaining_tmp_files (argv_773 _dll_directory, argv_773 _plugin_root_dir, argv_773 _log_directory) {
*/
argv_3379 argv_836::argv_719 (argv_773 _conf_filename, argv_773 _log_directory, argv_773 _dll_directory, argv_773 _plugin_root_dir, argv_2157& _kernel_data_ptr) {
	argv_3379 argv_1892 = argv_2001;

	argv_1139 ("argv_836::argv_719 - STARTING", argv_2001, argv_1892);

	remove_remaining_tmp_files (_dll_directory, _plugin_root_dir, _log_directory);
	argv_1892 = argv_2812 (_conf_filename, _log_directory);

	if (argv_1892 == argv_2001) { 
		argv_1139 ("log files open", argv_2001, argv_1892);
		argv_1892 = argv_1636 (_dll_directory, _plugin_root_dir);
		argv_1139 ("temporary files argv_1637", argv_2001, argv_1892);
	}
	
	if (argv_1892 == argv_2001) {
		argv_1892 = argv_2105 (_dll_directory);
		argv_1139 ("native API argv_2094", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) {
		argv_1892 = argv_1813.argv_3846.init (argv_1813.argv_3588, &argv_1813.argv_1688);
		argv_1139 ("xmem manager init", argv_3852, argv_1892);
	}

	if (argv_1892 == argv_3852) {
		argv_1892 = argv_2116 (_dll_directory);
		argv_1139 ("argv_962 API argv_2094", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) {
		argv_1892 = argv_2096 (_dll_directory);
		argv_1139 ("cipher API argv_2094", argv_2001, argv_1892);
	}
	
	if (argv_1892 == argv_2001) {
		argv_1892 = argv_2100 (_dll_directory);
		argv_1139 ("GMP library argv_2094", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) {
		argv_1892 = argv_2113 (_dll_directory);
		argv_1139 ("public argv_2007 argv_2094", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_2763, "all APIs argv_2117...[SUCCESS]");	
		argv_1892 = argv_2112 (_plugin_root_dir);
		argv_1139 ("plugin list argv_2094", argv_2001, argv_1892);
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3725 () {
	argv_3379 argv_1892 = argv_2001;

	argv_1892 = argv_3724 ();
	argv_1139 ("argv_3724", argv_2001, argv_1892);

	if (argv_1892 == argv_2001) {
		argv_1892 = argv_3738 ();
		argv_1139 ("argv_3738", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) {
		argv_1892 = argv_3742 ();
		argv_1139 ("argv_3742", argv_2001, argv_1892);
	}
/*
	if (argv_1892 == argv_2001) {
		argv_1892 =  un_prepare_symbols_2_resolve ();
		argv_1139 ("un_prepare_symbols_2_resolve", argv_2001, argv_1892);
	}
*/
	if (argv_1892 == argv_2001) {
		argv_1892 =  argv_3739 ();
		argv_1139 ("argv_3739", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) {
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_722 (argv_773 _conf_filename, argv_773 _log_directory, argv_773 _dll_directory, argv_773 _plugin_root_dir, argv_2157& _kernel_data_ptr) {
	argv_3379 argv_1892 = argv_2001;

	argv_1892 = argv_2095 ();
	argv_1139 ("argv_2094 all plugins", argv_2001, argv_1892);

	if (argv_1892 == argv_2001) {
		argv_1892 = argv_3114 ();
		argv_1139 ("argv_3110 dependancies", argv_2001, argv_1892);
	}
/*
	if (argv_1892 == argv_2001) { // argv_3110 symbols that require resolution
		argv_1892 = prepare_symbols_2_resolve ();
		argv_1139 ("preparation of symbols to argv_3249", argv_2001, argv_1892);
	}
*/
	if (argv_1892 == argv_2001) { // for each plugin argv_3695, argv_3249 all their symbols
		argv_1892 = argv_3256 ();
		argv_1139 ("symbols resolution", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) { // for each plugin argv_3695, argv_3249 all their symbols
		argv_1892 = argv_3105 ();
		argv_1139 ("post process symbols resolution", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) { // argv_717 the application dependant kernel
		argv_1892 = argv_718 (_conf_filename, _log_directory, _dll_directory, _plugin_root_dir, _kernel_data_ptr);
		argv_1139 ("argv_717 derivated kernel", argv_2001, argv_1892);
	}


	if (argv_1892 == argv_2092) {
		argv_1892 = argv_2001; // remap error argv_877 
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3726 () {
	argv_3379 argv_1892 = argv_2001;

	argv_1892 = argv_3728 ();
	argv_1139 ("un_load all plugins", argv_2001, argv_1892);

	if (argv_1892 == argv_2001) { 
		argv_1892 = argv_3733 ();
		argv_1139 ("argv_3733", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) { 
		argv_1892 = argv_3734 ();
		argv_1139 ("argv_3734", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) { 
		argv_1892 = argv_3730 ();
		argv_1139 ("argv_3730", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) { 
		argv_1892 = argv_3729 ();
		argv_1139 ("argv_3729", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) { 
		argv_1892 = argv_3735 ();
		argv_1139 ("argv_3735", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) {
		argv_1813.argv_3846.reset ();
		argv_1139 ("xmem manager", argv_2001, argv_1892);
	} 

	if (argv_1892 == argv_2001) {
		argv_1892 = argv_3731 ();
		argv_1139 ("argv_3731", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) {
		argv_1892 = argv_3727 ();
		argv_1139 ("argv_3727", argv_2001, argv_1892);
	}

	if (argv_1892 == argv_2001) {
		argv_1892 = argv_3736 ();
		argv_1139 ("argv_3736", argv_2001, argv_1892);
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_717 (argv_773 _conf_filename, argv_773 _log_directory, argv_773 _dll_directory, argv_773 _plugin_root_dir, argv_2157& _kernel_data_ptr) {
	argv_3379 argv_1892 = argv_2001;

	if (argv_1813.argv_720 == true) {
		argv_1892 = argv_1949;		
	}
	else { // argv_3460 is OK for the operation
		argv_1892 = argv_719 (_conf_filename, _log_directory, _dll_directory, _plugin_root_dir, _kernel_data_ptr);
		argv_1139 ("argv_717 (first half)", argv_2001, argv_1892);

		if (argv_1892 == argv_2001) {
			argv_1892 = argv_722 (_conf_filename, _log_directory, _dll_directory, _plugin_root_dir, _kernel_data_ptr);
			argv_1139 ("argv_717 (second half)", argv_2001, argv_1892);
		}
	} 
	argv_1139 ("argv_717", argv_2001, argv_1892);

	if (argv_1892 == argv_2001) {
		argv_1813.argv_720 = true;
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3374 () {
	argv_3379 argv_1892 = argv_2001;
	if (argv_1813.argv_720 == false) {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_3374 : argv_1951");
		argv_1892 = argv_1951;
	}
	else { // argv_3460 is OK for the operation
		argv_1892 = argv_3725 ();
		argv_1139 ("argv_3374 (first half)", argv_2001, argv_1892);

		if (argv_1892 == argv_2001) {
			argv_1892 = argv_3726 ();
			argv_1139 ("argv_3374 (second half)", argv_2001, argv_1892);
		}
	}
	argv_1139 ("argv_3374", argv_2001, argv_1892);
	return (argv_1892);
}

argv_3379 argv_836::argv_1686 (argv_3717& _major, argv_3717& _minor) {
	argv_3379 argv_1892 = argv_2001;
	if (argv_1813.argv_720 == true) {
		_major = 20;
		_minor = 12;
	}
	else {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_1686 : argv_1951");
		argv_1892 = argv_1951;
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_1657 (argv_3717&, argv_3717&) {
	argv_3379 argv_1892 = argv_2001;
	if (argv_1813.argv_720 == true) {

	}
	else {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_1657 : argv_1951");
		argv_1892 = argv_1951;
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_1674 (argv_773 _symbol_name, argv_2157& _retrieved_address) {
	argv_3379 argv_1892 = argv_2001;
	argv_1892 = argv_1813.argv_3257.argv_2151 (argv_3047, _symbol_name, _retrieved_address);
	if (argv_1892 != argv_3264) {
		char argv_3681[MAX_PATH];
		string serror = argv_1240 (argv_1892);
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::argv_1674 - argv_2151 failed for symbol '%s' (argv_1239=%s)", _symbol_name, serror.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
	}

	if (argv_1892 == argv_3264) {
		argv_1892 = argv_2001; // remap error argv_877
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_2105 (argv_773 _dll_directory) {
	argv_3379 argv_1892 = argv_2001;
#if defined (__DEBUG_KERNEL__)
	argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "argv_836::argv_2105 - dll argv_2697 : ", argv_1813.argv_2711.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

	if (argv_1813.argv_2713 == false) {
		argv_1892 = argv_1813.argv_3582.init (&argv_1813.argv_1688, argv_1813.argv_2711.c_str());
		if (argv_1892 != argv_2065) {
			string serror = argv_1240 (argv_1892);
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2105 - argv_3582::init failed ! - errno = ", serror.c_str());
		}
		else {
			argv_1813.argv_3588 = &argv_1813.argv_3582.toolset;
		}
	}
	else {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2105 - argv_1955");
		argv_1892 = argv_1955;
	}

	// remap error argv_877
	if (argv_1892 == argv_2065) {
		argv_1892						= argv_2001;
		argv_1813.argv_2713	= true;
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3731 () {
	argv_3379 argv_1892	= argv_2001;
	argv_1892		= argv_1813.argv_3582.reset ();
	if (argv_1892 == argv_2065) {
		argv_1892 = argv_2001; // remap error argv_877
	}
	argv_1813.argv_2713 = false;
	return (argv_1892);
}

argv_3379 argv_836::argv_2116 (argv_773 _dll_directory) {
	argv_3379 argv_1892 = argv_2001;
#if defined (__DEBUG_KERNEL__)
	argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "argv_836::argv_2116 - dll argv_2697 : ", argv_1813.argv_963.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

	if (argv_1813.argv_3745 == false) {
		argv_1892 = argv_1813.argv_966.init (&argv_1813.argv_1688, argv_1813.argv_963.c_str());
		if (argv_1892 != argv_2065) {
			string serror = argv_1240 (argv_1892);
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2116 - argv_966::init failed ! - errno = ", serror.c_str());
		}
		else {
			argv_1892							= argv_2001;
			argv_1813.argv_3745	= true;	
		}
	}
	else {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2116 - argv_1955");
		argv_1892 = argv_1955;
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3735 () {
	argv_3379 argv_1892	= argv_2001;
	argv_1892		= argv_1813.argv_966.reset ();
	if (argv_1892 == argv_2065) {
		argv_1892 = argv_2001; // remap error argv_877
	}
	argv_1813.argv_3745 = false;
	return (argv_1892);
}

argv_3379 argv_836::argv_2096 (argv_773 _dll_directory) {
	argv_3379 argv_1892 = argv_2001;
#if defined (__DEBUG_KERNEL__)
	argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "argv_836::argv_2105 - dll argv_2697 : ", argv_1813.argv_833.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

	if (argv_1813.argv_1064 == false) {
		argv_1892 = argv_1813.argv_1069.init (&argv_1813.argv_1688, argv_1813.argv_833.c_str());
		if (argv_1892 != argv_2065) {
			string serror = argv_1240 (argv_1892);
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2096 - argv_1069::init failed ! - errno=", serror.c_str());
		}
		else {
			argv_1892						= argv_2001;
			argv_1813.argv_1064	= true;
		}
	}
	else {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2096 - argv_1955");
		argv_1892 = argv_1955;
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3729 () {
	argv_3379 argv_1892	= argv_2001;
	argv_1892		= argv_1813.argv_1069.reset ();
	if (argv_1892 == argv_2065) {
		argv_1892 = argv_2001; // remap error argv_877
	}
	argv_1813.argv_1064 = false;
	return (argv_1892);
}

argv_3379 argv_836::argv_2100 (argv_773 _dll_directory) {
	argv_3379 argv_1892 = argv_2001;

	if (argv_1813.argv_1733 == false) {
		string gmp_dll_name = _dll_directory;
#if defined (__WIN32_OS__)
		gmp_dll_name		= gmp_dll_name + argv_1813.argv_1688.argv_2851 + "gmp.dll";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		gmp_dll_name		= gmp_dll_name + argv_1813.argv_1688.argv_2851 + "libgmp.so";
#endif // #if defined (__LINUX_OS__)
		argv_1892 = argv_1813.argv_1773.argv_2104 (gmp_dll_name.c_str());

		if (argv_1892 == argv_1747) { // remap error argv_877
			argv_1813.argv_3275.init (&argv_1813.argv_1773);
			argv_1813.argv_1733	= true;
			argv_1892					= argv_2001;	
		}
		else {
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: failed to argv_2094 dll : ", gmp_dll_name.c_str());
		}
	}
	else {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2100 - argv_1955");
		argv_1892 = argv_1955;
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3730 () {
	argv_3379 argv_1892 = argv_2001;
	argv_1813.argv_1773.argv_3768 ();
	return (argv_1892);
}

argv_3379 argv_836::argv_2113 (argv_773 _dll_directory) {
	argv_3379 argv_1892 = argv_2001;

	if (argv_1813.argv_3189 == false) {
		string pub_key_filename = _dll_directory;
		pub_key_filename = pub_key_filename + argv_1813.argv_1688.argv_2851 + "rsa_pub_key.txt";
		argv_1813.argv_3188.construct (argv_1813.argv_1773);

		// generate the symmetric argv_2007
		string symetric_key = argv_1633 ();

		// argv_2094 the public argv_2007 using the symmetric argv_2007
		argv_1892 = argv_1813.argv_3275.argv_2103 (pub_key_filename.c_str(), symetric_key.c_str(), argv_1813.argv_3188);

		// erase the symmetric argv_2007
		symetric_key = "AABBCCDDEEFF";

		argv_1813.argv_3189 = true;
	}
	else {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2113 - argv_1955");
		argv_1892 = argv_1955;
	}

	if (argv_1892 == argv_1747) { // remap error argv_877
		argv_1892 = argv_2001;	
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3734 () {
	argv_3379 argv_1892 = argv_2001;
	if (argv_1813.argv_3189 == false) {
		argv_1892 = argv_1956;
	}
	else {
		argv_1813.argv_3188.argv_1127 (argv_1813.argv_1773);
		argv_1813.argv_3189 = false;
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_2112 (argv_773 _plugin_directory) {
	argv_3379 argv_1892 = argv_2001;
	string full_filename = _plugin_directory + argv_1813.argv_1688.argv_2851 + argv_1813.argv_1688.argv_3023;
	if (argv_1316 (&argv_1813.argv_1688, argv_1813.argv_3588, full_filename.c_str()) == false) {

		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: could not find plugin list argv_1314 ! - argv_1314 was : ", full_filename.c_str());
		argv_1892 = argv_1986;		
	}
	else { // the plugin list argv_1314 exists
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "loading plugin list argv_1314 : ", full_filename.c_str());

		// mmap the plugin list argv_1314
		argv_789 mapper_tmp;
		argv_3715 * ciphered_ptr		= argv_2766;
		argv_3717 deciphered_ptr		= (argv_3717) argv_2766;
		argv_3717 ciphered_size		= 0;
		argv_3717 deciphered_size	= 0;

		bool bret = mapper_tmp.argv_2346 (full_filename.c_str(), argv_2348, ciphered_ptr, ciphered_size);
		if (bret == false) {
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2112 - mmap failed for argv_1314 : ", full_filename.c_str());
			argv_1892 = argv_1989;
		}
		else { // plugin list argv_1314 mmapped succesfully
			// decipher the plugin list argv_1314 using the public argv_2007
			argv_1892 = argv_1813.argv_1069.argv_1101 (argv_1813.argv_3588, &argv_1813.argv_1773, argv_1813.argv_3188, (argv_3717) ciphered_ptr, ciphered_size, deciphered_ptr, deciphered_size);
			if (argv_1892 != argv_1068) {
				char argv_3681[MAX_PATH];
				string serror = argv_1240 (argv_1892);
				argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::argv_2112: decypher_file failed for argv_1314 : %s (errno: %s)", full_filename.c_str(), serror.c_str());
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
			}
			else { // argv_1314 deciphered succesfully
				// parse the deciphered plugin list
				argv_1892 = argv_2847 ((argv_3715 *) deciphered_ptr, deciphered_size, _plugin_directory);

				// free the argv_728 associated with the deciphered plugin list argv_1314
				argv_1813.argv_3588->argv_2723 ((argv_2157) deciphered_ptr, deciphered_size);
			}

			// argv_869 the mmapped ciphered plugin list argv_1314.
			mapper_tmp.argv_873 ();
		}
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3733 () {
	argv_3379 argv_1892	= argv_2001;
	
	argv_1813.argv_3803.clear ();
	vector<string>().swap (argv_1813.argv_3803);

	argv_1813.argv_3804.clear ();
	vector<string>().swap (argv_1813.argv_3804);
	return (argv_1892);
}
/*
argv_3379 argv_836::argv_3255 (map<string, argv_979 *>::iterator& _iter_loaded, argv_773 _symbol_name, bool _duplicate_allowed) {
	argv_3379 argv_1892 = argv_2001;
	if (strlen(_symbol_name) == 0) {
		argv_1892 = argv_1934;
	}
	else { // parameters are ok
		argv_3717 plugin_type = _iter_loaded->second->argv_3695;
		argv_3717 argv_3592 = _iter_loaded->second->argv_3592;
		argv_763 *	loader_ptr		= argv_2766;
		argv_3715 *			solved_address	= argv_2766;

		// retrieve the COFF loader associated with the argv_1043 plugin
		loader_ptr = _iter_loaded->second->argv_1640 ();
		// argv_3249 this symbol using the argv_2691 (dependancy list)
		map<string, argv_763 *> dependancy_list_ptr = _iter_loaded->second->argv_2691;
		argv_1892 = loader_ptr->argv_3249 (_iter_loaded->first.c_str(), _iter_loaded->first.c_str(), _symbol_name, dependancy_list_ptr, solved_address);
		if (argv_1892 != argv_894) {
			char argv_3681[MAX_PATH];
			string serror = argv_1240 (argv_1892);
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::argv_3255 - argv_3249 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_3592=%u] (argv_1239=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_3592, serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
		}
		else { // symbol resolved succesfully
			// argv_576 this resolved symbol to the shelf
#if defined (__DEBUG_KERNEL__)
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "argv_586: plugin_type=%d, argv_3592=%d, _symbol_name=%s, solved_address=0x%X, duplicate_allowed=%d", plugin_type, argv_3592, _symbol_name, solved_address, _duplicate_allowed);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_KERNEL__)
			argv_1892 = argv_1813.argv_3257.argv_586 (&argv_1813.argv_1688, plugin_type, argv_3592, _symbol_name, solved_address, _duplicate_allowed);
			if (argv_1892 != argv_3264) {
				char argv_3681[MAX_PATH];
				string serror = argv_1240 (argv_1892);
				argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::argv_3255 - argv_586 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_3592=%u] (argv_1239=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_3592, serror.c_str());
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
			}
		}
	}

	if ((argv_1892 == argv_894) || (argv_1892 == argv_3264)) {
		argv_1892 = argv_2001; // remap error argv_877
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3741 () {
	argv_3379 argv_1892 = argv_2001;
	return (argv_1892);
}
*/

/*
argv_3379 argv_836::resolve_all_symbols_of_profile (map<string, argv_979 *>::iterator& _iter_loaded, argv_1019& _resolve_query) {
	argv_3379 argv_1892 = argv_2001;
	bool duplicate_allowed;
	argv_3717 unused;	
	_resolve_query.argv_1681 (unused, duplicate_allowed);
	// iterate through all symbols that are to be resolved for this plugin
	string symbol_2_resolve;
	bool bret = _resolve_query.argv_1655 (symbol_2_resolve);
	while (bret == true) { // argv_3249 argv_2806 symbol for this plugin
		argv_1892 = argv_3255 (_iter_loaded, symbol_2_resolve.c_str(), duplicate_allowed);
		if (argv_1892 != argv_2001) {
			char argv_3681[MAX_PATH];
			string serror = argv_1240 (argv_1892);
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::resolve_all_symbols_of_profile - argv_3255 failed for plugin '%s' and symbol '%s' [plugin_type=%u|argv_3592=%u] (argv_1239=%s)", _iter_loaded->first.c_str(), symbol_2_resolve.c_str(), _iter_loaded->second->argv_3695, _iter_loaded->second->argv_3592, serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
			break;
		}
#if defined (__DEBUG_KERNEL__)
		else {
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "resolved symbol '%s' for plugin '%s'", symbol_2_resolve.c_str(), _iter_loaded->first.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "");
		}
#endif // #if defined (__DEBUG_KERNEL__)
		bret = _resolve_query.argv_1673 (symbol_2_resolve);
	}
	return (argv_1892);
}*/

// NOTICE: we lookup the profile "by argv_2697" for unique plugins.
/*
argv_3379 argv_836::resolve_one_unique_plugin_symbols (map<string, argv_979 *>::iterator& _iter_loaded) {
	argv_3379 argv_1892 = argv_2001;
	map<string, argv_1019>::iterator query_iter;
	query_iter = argv_1813.m_unique_resolve_query.find (_iter_loaded->first); // lookup by argv_2697
	if (query_iter == argv_1813.m_unique_resolve_query.end()) {
		char argv_3681[MAX_PATH]; 
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::resolve_one_unique_plugin_symbols - lookup argv_3249 profile failed for plugin '%s' (plugin argv_3695: %u, argv_3592: %u)", _iter_loaded->first.c_str(), _iter_loaded->second->argv_3695, _iter_loaded->second->argv_3592);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
		argv_1892 = argv_1995;
	}
	else {
		argv_1892 = resolve_all_symbols_of_profile (_iter_loaded, query_iter->second);
	}
	return (argv_1892);
}*/

/*
argv_3379 argv_836::resolve_one_multiple_plugin_symbols (map<string, argv_979 *>::iterator& _iter_loaded) {
	argv_3379 argv_1892 = argv_2001;
	map<argv_3717, argv_1019>::iterator query_iter;
	// lookup the argv_3249 profile associated with this plugin argv_3695
	query_iter = argv_1813.m_resolve_query.find (_iter_loaded->second->argv_3695); // lookup by argv_3695
	if (query_iter == argv_1813.m_resolve_query.end()) {
		char argv_3681[MAX_PATH]; 
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::resolve_one_multiple_plugin_symbols - lookup argv_3249 profile failed for plugin '%s' (plugin argv_3695: %u, argv_3592: %u)", _iter_loaded->first.c_str(), _iter_loaded->second->argv_3695, _iter_loaded->second->argv_3592);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
		argv_1892 = argv_1995;
	} 
	else { // found the corresponding argv_3249 profile
		argv_1892 = resolve_all_symbols_of_profile (_iter_loaded, query_iter->second);
	}
	return (argv_1892);
}*/

// we use 2 different structures :
// - argv_2806 used only when loading : it is a structure that permits to locate rapidly
//   the plugin by target argv_3695 because the argv_2094 needs to fill in different fields
//   asynchronously.
// - argv_2806 used by the kernel plugin : it is a simple linked list that is generated
//   after all symbols are resolved.
/*
	argv_3047=0,
	argv_3049,
	argv_3046,	
	argv_3045,
	argv_3048, // just to know how many plugin types we have	
	argv_3050, 
*/
/*
argv_3379 argv_836::argv_3254 (map<string, argv_979 *>::iterator& _iter_loaded) {
	argv_3379 argv_1892 = argv_2001;
	argv_3717 argv_3695 = _iter_loaded->second->argv_3695;
	if ((argv_3695==argv_3046) || 
		(argv_3695==argv_3045)) { 
		argv_1892 = resolve_one_multiple_plugin_symbols (_iter_loaded);
	}
	else {
		argv_1892 = resolve_one_unique_plugin_symbols (_iter_loaded);
	}
	return (argv_1892);
}*/

argv_3379 argv_836::argv_3255 (map<string, argv_979 *>::iterator& _iter_loaded, argv_773 _symbol_name, bool _duplicate_allowed) {
	argv_3379 argv_1892 = argv_2001;
	if (strlen(_symbol_name) == 0) {
		argv_1892 = argv_1934;
	}
	else { // parameters are ok
		argv_3717 plugin_type = _iter_loaded->second->argv_3695;
		argv_3717 argv_3592 = _iter_loaded->second->argv_3592;
		argv_763 *	loader_ptr		= argv_2766;
		argv_3715 *			solved_address	= argv_2766;

		// retrieve the COFF loader associated with the argv_1043 plugin
		loader_ptr = _iter_loaded->second->argv_1640 ();
		// argv_3249 this symbol using the argv_2691 (dependancy list)
		map<string, argv_763 *> dependancy_list_ptr = _iter_loaded->second->argv_2691;
		argv_1892 = loader_ptr->argv_3249 (_iter_loaded->first.c_str(), _iter_loaded->first.c_str(), _symbol_name, dependancy_list_ptr, solved_address);
		if (argv_1892 != argv_894) {
			char argv_3681[MAX_PATH];
			string serror = argv_1240 (argv_1892);
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::argv_3255 - argv_3249 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_3592=%u] (argv_1239=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_3592, serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
		}
		else { // symbol resolved succesfully
			// argv_576 this resolved symbol to the shelf
#if defined (__DEBUG_KERNEL__)
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "argv_586: plugin_type=%d, argv_3592=%d, _symbol_name=%s, solved_address=0x%X, duplicate_allowed=%d", plugin_type, argv_3592, _symbol_name, solved_address, _duplicate_allowed);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_KERNEL__)
			argv_1892 = argv_1813.argv_3257.argv_586 (&argv_1813.argv_1688, plugin_type, argv_3592, _symbol_name, solved_address, _duplicate_allowed);
			if (argv_1892 != argv_3264) {
				char argv_3681[MAX_PATH];
				string serror = argv_1240 (argv_1892);
				argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::argv_3255 - argv_586 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_3592=%u] (argv_1239=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_3592, serror.c_str());
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
			}
		}
	}

	if ((argv_1892 == argv_894) || (argv_1892 == argv_3264)) {
		argv_1892 = argv_2001; // remap error argv_877
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3741 () {
	argv_3379 argv_1892 = argv_2001;
	return (argv_1892);
}

argv_3379 argv_836::argv_3254 (map<string, argv_979 *>::iterator& _iter_loaded) {
	argv_3379 argv_1892 = argv_2001;
	string exported_symbol;
	argv_3717 argv_3695 = _iter_loaded->second->argv_3695;
	bool duplicate_allowed	= false;
	if ((argv_3695 == argv_3046) || (argv_3695 == argv_3045)) {
		duplicate_allowed = true;
	}

	bool bret = _iter_loaded->second->argv_1652 (exported_symbol);
	while (bret == true) {
		argv_1892 = argv_3255 (_iter_loaded, exported_symbol.c_str(), duplicate_allowed);
		if (argv_1892 != argv_2001) {
			string serror = argv_1240 (argv_1892);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: failed to argv_3249 symbol '%s' for plugin '%s' ! - argv_1239 = %s", exported_symbol.c_str(), _iter_loaded->first.c_str(), serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
			break;
		}
		bret = _iter_loaded->second->argv_1670 (exported_symbol);
	}
	return (argv_1892);
}

// iterate through all exported symbols for argv_1043 plugin and argv_3249 them
argv_3379 argv_836::argv_3740 () {
	argv_3379 argv_1892 = argv_2001;
	return (argv_1892);
}

argv_3379 argv_836::argv_3256 () {
	argv_3379 argv_1892 = argv_2001;
	map<string, argv_979 *>::iterator iter_loaded;
#if defined (__DEBUG_KERNEL__)
	argv_1813.argv_1688.argv_2146.argv_2142 (argv_2763, "resolving symbols : number of argv_2117 plugins : ", argv_1813.argv_2196.size ());
#endif // #if defined (__DEBUG_KERNEL__)

	// iterate through all possible plugins and solve their respective symbols
	for (iter_loaded=argv_1813.argv_2196.begin() ; iter_loaded != argv_1813.argv_2196.end() ; ++iter_loaded) {
#if defined (__DEBUG_KERNEL__)
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_2763, "resolving symbols for plugin : ", iter_loaded->first.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

		argv_1892 = argv_3254 (iter_loaded);
		if (argv_1892 != argv_2001) {
			char argv_3681[MAX_PATH];
			string serror = argv_1240 (argv_1892);
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::argv_3256 - argv_3254 failed for plugin '%s' (argv_1239=%s)", iter_loaded->first.c_str(), serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
			break;
		}
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3742 () {
	argv_3379 argv_1892 = argv_2001;
	return (argv_1892);
}

/*
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ Plugin list example
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
general_plugin.plugin
argv_1936.plugin
fake_detect.plugin
fake_detect_2.plugin
fake_scan.plugin
fake_scan_2.plugin
file_type_result.plugin
*/
argv_3379 argv_836::argv_2847 (argv_3715 * _buf_ptr, argv_3717 _size, argv_773 _plugin_directory) {
	argv_3379 argv_1892 = argv_2001;
	if ((_buf_ptr == argv_2766) || (_size == 0) || (_plugin_directory == argv_2766)) {
		argv_1892 = argv_1958;
	}
	else { // parameters are OK
		string argv_1364;
		argv_3717 i			= 0;
		bool commented	= false;

		while (i < _size) {
			commented = false;

			// argv_986 white spaces
			while ((i< _size) && ((_buf_ptr[i]==' ') || (_buf_ptr[i]=='\n') || (_buf_ptr[i]=='\t') || (_buf_ptr[i]=='\r') || (_buf_ptr[i]=='\n'))) {
				i++;
			}

			if (i >=_size) {
				break;
			}

			// check whether the argv_2069 was commented
			if (((i+1) < _size) && (_buf_ptr[i]=='/') && (_buf_ptr[i+1]=='/')) {
				commented = true;
			}

			argv_1364 = "";
			// argv_986 the rest of the argv_2069
			while ((i< _size) && (_buf_ptr[i] != '\r') && (_buf_ptr[i] != '\n')) {
				argv_1364 += _buf_ptr[i];
				i++;
			}

			if (argv_1364.size() > 0) {
				if (commented == true) {
					argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "ignoring commented plugin : ", argv_1364.c_str());	
				}
				else {
					argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "==>", argv_1364.c_str(), "<==");
					// build and save the absolute argv_1364 from relative argv_1364
					string full_filename = _plugin_directory;
					full_filename = full_filename + argv_1813.argv_1688.argv_2851 + argv_1364;
					argv_1813.argv_3803.push_back (full_filename);

					// also save the relative argv_2697 as it is necessary for further use
					argv_1813.argv_3804.push_back (argv_1364);
				}
			}
		}
	}
	return (argv_1892);
}

argv_3379 argv_3737 () {
	argv_3379 argv_1892 = argv_2001;
	return (argv_1892);
}

argv_3379 argv_836::argv_2110 (argv_773 _relat_name, argv_773 _abs_name, argv_979 * _plugin_ptr) {
	argv_3379 argv_1892 = argv_2001;
	char argv_3681[MAX_PATH];

	// ensure that this plugin was not already argv_2117
	map<string, argv_979 *>::iterator iter_local;
	iter_local = argv_1813.argv_2196.find (_relat_name);
	if (iter_local != argv_1813.argv_2196.end()) {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2110: plugin already argv_2117 ! - argv_2697 : ", _relat_name);
		argv_1892 = argv_1992;
	}
	else { // the plugin was not argv_2117 yet
		argv_1892 = _plugin_ptr->init (&argv_1813.argv_1688, argv_1813.argv_3588, &argv_1813.argv_966, &argv_1813.argv_1069, &argv_1813.argv_3846);
		if (argv_1892 != argv_3042) {
			string erstring = argv_1240 (argv_1892);
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::argv_2110 - plugin init failed for plugin '%s' - argv_1239=%s", _relat_name, erstring.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
			argv_1892 = argv_1990;
		}
		else { // plugin was succesfully initialized
			argv_1892 = _plugin_ptr->argv_2098 (&argv_1813.argv_1773, argv_1813.argv_3188, _abs_name);
			if (argv_1892 != argv_3042) {
				string erstring = argv_1240 (argv_1892);
				argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_836::argv_2110 - plugin argv_2094 from argv_1314 failed for plugin '%s' - argv_1239=%s", _relat_name, erstring.c_str());
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
				argv_1892 = argv_1990;
			}
			else { // plugin was succesfully argv_2117 from it's corresponding argv_1314
				argv_1892 = argv_2001;
#if defined (__DEBUG_KERNEL__)
				argv_1813.argv_1688.argv_2146.argv_2142 (argv_2763, "plugin argv_2117 successfully : ", _abs_name);
#endif // #if defined (__DEBUG_KERNEL__)
				// save up the coff loader into the map for the "argv_3249 symbol" step
				argv_1813.argv_2196[_relat_name] = _plugin_ptr;
			}
		}
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3732 () {
	argv_3379 argv_1892 = argv_2001;
	return (argv_1892);
}

argv_3379 argv_836::argv_2095 () {
	argv_3379 argv_1892 = argv_2001;
	argv_3717 nb_plugin = argv_1813.argv_3803.size ();
	argv_979 * plugin_ptr = argv_2766;

	for (argv_3717 i=0 ; i<nb_plugin ; i++) {
		// allocate a new plugin
		plugin_ptr = new (std::nothrow) argv_979;
		if (plugin_ptr == argv_2766) {
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2095 - memory allocation failed !");
			argv_1892 = argv_1963;
			break;
		}

		argv_1892 = argv_2110 (argv_1813.argv_3804[i].c_str(), argv_1813.argv_3803[i].c_str(), plugin_ptr);
		if (argv_1892 != argv_2001) {
			string serror = argv_1240 (argv_1892);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "argv_836::argv_2095 - failed to argv_2094 plugin '%s' - errno = %s", argv_1813.argv_3803[i].c_str(), serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
			break;
		}
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3728 () {
	argv_3379 argv_1892 = argv_2001;
	return (argv_1892);
}

void argv_836::argv_1139 (argv_773 _msg, argv_3379 _success_code, argv_3379 _actual_code) {
	if (_actual_code != _success_code) {
		char argv_3681[MAX_PATH];
		string serror = argv_1240 (_actual_code);
		argv_3409 (argv_3681, MAX_PATH, "%s...[FAILED] - errno = %s", _msg, serror.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
		//log_stat (argv_3681, argv_1813.nb_kb_debug, argv_1813.nb_handle_debug);
	}
	else { // operation succeeded 
#if defined (__DEBUG_KERNEL__)
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, _msg, "...[SUCCESS]");
		{
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "%s...[SUCCESS]", _msg);
			argv_3681[MAX_PATH - 1] = '\0';
			//log_stat (argv_3681, argv_1813.nb_kb_debug, argv_1813.nb_handle_debug);
		}
#endif // #if defined (__DEBUG_KERNEL__)
	}
}


argv_3379 argv_836::argv_2812 (argv_773 _conf_filename, argv_773 _log_directory) {
	argv_3379 argv_1892 = argv_2001;

	if (argv_1813.argv_720 == false) {
		// open the log argv_1314 that contains general messages
		string full_filename;
		argv_1634 (_log_directory, "", "log", "txt", full_filename, false);
		#if defined (__LINUX_OS__)
		cerr << "opening log : " << full_filename.c_str() << endl;
		#endif // #if defined (__LINUX_OS__)
		argv_1813.argv_1688.argv_2146.argv_2814 (full_filename.c_str(), &argv_1813.argv_1688.argv_2146, "[log] ");
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_2763, "booting kernel");
	}
	else {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_2812 : argv_1949");
		argv_1892 = argv_1949;
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3736 () {
	argv_3379 argv_1892	= argv_2001;
#if defined (__DEBUG_KERNEL__)
	argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "closing all log files");
#endif // #if defined (__DEBUG_KERNEL__)
	argv_1813.argv_1688.argv_2146.argv_2142			(argv_620, "<<< SHUTDOWN KERNEL >>>");

	// delete all log files (DEBUG PURPOSE ONLY)
	string file_2_delete;
	file_2_delete = argv_1813.argv_1688.argv_2146.argv_1650 ();
	argv_1813.argv_1688.argv_2146.argv_872 ();
	argv_1116 (file_2_delete.c_str());

	return (argv_1892);
}


void argv_836::remove_remaining_tmp_files (argv_773 _dll_directory, argv_773 _plugin_root_dir, argv_773 _log_directory) {
	argv_1115 (_dll_directory,		"*.delme");
	argv_1115 (_plugin_root_dir,	"*.delme");
	argv_1115 (_log_directory,		"*.txt");
} 


// because we are not allowed to use original files (hot update)
argv_3379 argv_836::argv_1636 (argv_773 _dll_directory, argv_773 _plugin_root_dir) {
	argv_3379 argv_1892							= argv_2001;
	string dll_name						= _dll_directory;
	string argv_1171				= _dll_directory;
	string native_api_dll_orig_name		= argv_1171 + argv_1813.argv_1688.argv_2851 + argv_1813.argv_1688.argv_2712;
	string compress_api_dll_orig_name	= argv_1171 + argv_1813.argv_1688.argv_2851 + argv_1813.argv_1688.argv_964;
	string cipher_api_dll_orig_name		= argv_1171 + argv_1813.argv_1688.argv_2851 + argv_1813.argv_1688.argv_834;
#if defined (__WIN32_OS__)
	string suffix						= "dll.delme";
#endif
#if defined (__LINUX_OS__)
	string suffix						= "so.delme";
#endif // #if defined (__LINUX_OS__)

	// generate the NATIVE API's temp DLL argv_2697
	argv_1892 = argv_1634 (_dll_directory, native_api_dll_orig_name.c_str(), "native_api", suffix.c_str(), argv_1813.argv_2711);
	if (argv_1892 != 0) {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_1636 - failed to generate NATIVE API DLL argv_3681 argv_1314 : ", native_api_dll_orig_name.c_str());
		argv_1892 = argv_1945;
	}
	else {
		argv_1892 = argv_2001;
#if defined (__DEBUG_KERNEL__)
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "native_api_dll_orig_name = ", native_api_dll_orig_name.c_str());
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "argv_2711 = ", argv_1813.argv_2711.c_str());
#endif // #if defined (__DEBUG_KERNEL__)
		if (argv_804 (argv_1813.argv_2711.c_str()) == false) {
			argv_1892 = argv_1946;
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_1636 - native API argv_1314 not found after creation !");
		}
	}

	// generate the COMPRESS API's temp DLL argv_2697
	if (argv_1892 == argv_2001) {
		argv_1892 = argv_1634 (_dll_directory, compress_api_dll_orig_name.c_str(), "compress_api", suffix.c_str(), argv_1813.argv_963);
		if (argv_1892 != 0) {
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_1636 - failed to generate COMPRESS API DLL argv_3681 argv_1314 : ", compress_api_dll_orig_name.c_str());
			argv_1892 = argv_1945;
		}
		else {
			argv_1892 = argv_2001;
#if defined (__DEBUG_KERNEL__)
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "compress_api_dll_orig_name = ", compress_api_dll_orig_name.c_str());
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "argv_963 = ", argv_1813.argv_963.c_str());
#endif // #if defined (__DEBUG_KERNEL__)
			if (argv_804 (argv_1813.argv_963.c_str()) == false) {
				argv_1892 = argv_1946;
				argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_1636 - argv_962 API argv_1314 not found after creation !");
			}
		}
	}

	// generate the CIPHER API's temp DLL argv_2697
	if (argv_1892 == argv_2001) {
		argv_1892 = argv_1634 (_dll_directory, cipher_api_dll_orig_name.c_str(), "cipher_api", suffix.c_str(), argv_1813.argv_833);
		if (argv_1892 != 0) {
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_1636 - failed to generate CIPHER API DLL argv_3681 argv_1314 : ", cipher_api_dll_orig_name.c_str());
			argv_1892 = argv_1945;
		}
		else {
			argv_1892 = argv_2001;
#if defined (__DEBUG_KERNEL__)
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "cipher_api_dll_orig_name = ", cipher_api_dll_orig_name.c_str());
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "argv_833 = ", argv_1813.argv_833.c_str());
#endif // #if defined (__DEBUG_KERNEL__)
			if (argv_804 (argv_1813.argv_833.c_str()) == false) {
				argv_1892 = argv_1946;
				argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_1636 - cipher API argv_1314 not found after creation !");
			}
		}
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3727 () {
	argv_3379 argv_1892	= argv_2001;
#if defined (__DEBUG_KERNEL__)
	argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "deleting temp files");
#endif // #if defined (__DEBUG_KERNEL__)

	bool bret1 = argv_1116 (argv_1813.argv_2711.c_str());
	if (bret1 == true) {
#if defined (__DEBUG_KERNEL__)
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "deletion of temp argv_1314 : ", argv_1813.argv_2711.c_str(), "...[SUCCESS]");
#endif // #if defined (__DEBUG_KERNEL__)
	}
	else {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: deletion of temp argv_1314 : ", argv_1813.argv_2711.c_str(), "...[FAILED]");
	}

	bool bret2 = argv_1116 (argv_1813.argv_963.c_str());
	if (bret2 == true) {
#if defined (__DEBUG_KERNEL__)
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "deletion of temp argv_1314 : ", argv_1813.argv_963.c_str(), "...[SUCCESS]");
#endif // #if defined (__DEBUG_KERNEL__)
	}
	else {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: deletion of temp argv_1314 : ", argv_1813.argv_963.c_str(), "...[FAILED]");
	}
	
	bool bret3 = argv_1116 (argv_1813.argv_833.c_str());
	if (bret3 == true) {
#if defined (__DEBUG_KERNEL__)
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1086, "deletion of temp argv_1314 : ", argv_1813.argv_833.c_str(), "...[SUCCESS]");
#endif // #if defined (__DEBUG_KERNEL__)
	}
	else {
		argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: deletion of temp argv_1314 : ", argv_1813.argv_833.c_str(), "...[FAILED]");
	}

	if ((bret1 == false) || (bret2 == false) || (bret3 == false)) {
		argv_1892 = argv_2003;
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3114 () {
	argv_3379 argv_1892 = argv_2001;
	map<string, argv_979 *>::iterator it_loc;

	for (it_loc=argv_1813.argv_2196.begin() ; it_loc != argv_1813.argv_2196.end() ; ++it_loc) {
		argv_1892 = it_loc->second->argv_1626 (argv_1813.argv_2196);
		if (argv_1892 != argv_3042) {
			argv_1813.argv_1688.argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_836::argv_3114 failed with plugin : ", it_loc->first.c_str());
			break;
		}
	}

	if (argv_1892 == argv_3042) {
		argv_1892 = argv_2001;
	}
	return (argv_1892);
}

argv_3379 argv_836::argv_3739 () {
	argv_3379 argv_1892 = argv_2001;
	return (argv_1892);
}
/*
argv_3379 argv_836::prepare_symbols_2_resolve () {
	// should never be called (base class function is meaningless)
	argv_3379 argv_1892 = argv_1954;
	return (argv_1892);	
}

argv_3379 argv_836::un_prepare_symbols_2_resolve () {
	// should never be called (base class function is meaningless)
	argv_3379 argv_1892 = argv_1954;
	return (argv_1892);	
}*/

argv_3379 argv_836::argv_3105 () {
	// should never be called (base class function is meaningless)
	argv_3379 argv_1892 = argv_1954;
	return (argv_1892);	
}

argv_3379 argv_836::argv_3738 () {
	// should never be called (base class function is meaningless)
	argv_3379 argv_1892 = argv_1954;
	return (argv_1892);	
}

argv_3379 argv_836::argv_718 (argv_773 _conf_filename, argv_773 _log_directory, argv_773 _dll_directory, argv_773 _plugin_root_dir, argv_2157& _kernel_data_ptr) {
	// should never be called (base class function is meaningless)
	argv_3379 argv_1892 = argv_1954;
	return (argv_1892);	
}

argv_3379 argv_836::argv_3724 () {
	// should never be called (base class function is meaningless)
	argv_3379 argv_1892 = argv_1954;
	return (argv_1892);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
