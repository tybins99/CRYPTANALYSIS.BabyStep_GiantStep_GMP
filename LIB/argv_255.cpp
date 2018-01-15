// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_255.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions that permits the loader system
// @@ argv_2785 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_314.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1036
// @@
// @@ FUNCTION		:	argv_1036		
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
// @@ Normal constructor of the 'argv_1036' argv_2785.
// @@ It merely prepares the argv_2785 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1036::argv_1036 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1036
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
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to reset the 'argv_774'
// @@ argv_2785 to it's initial argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1036::reset () {
	argv_3379 argv_1892 = argv_2065;

	init_done								= false;
	toolset.argv_2728		= argv_2766;
	toolset.argv_2720					= argv_2766;
	toolset.argv_2717					= argv_2766;	
	toolset.argv_2724					= argv_2766;
	toolset.argv_2725					= argv_2766;
	toolset.argv_2721					= argv_2766;
	toolset.argv_2726					= argv_2766;
	toolset.argv_2734					= argv_2766;
	toolset.argv_2710		= argv_2766;
	toolset.argv_2723			= argv_2766;
	toolset.argv_2719				= argv_2766;
	toolset.argv_2718					= argv_2766;	
	toolset.argv_2738					= argv_2766;	
	toolset.argv_2736					= argv_2766;
	toolset.argv_2732					= argv_2766;
	toolset.NATIVE_memset					= argv_2766;
	toolset.argv_2731					= argv_2766;
	toolset.argv_2730					= argv_2766;
	toolset.argv_2722						= argv_2766;
	toolset.argv_2737					= argv_2766;
	toolset.argv_2735					= argv_2766;
	toolset.argv_2729					= argv_2766;
	toolset.argv_2714		= argv_2766;
	toolset.argv_2715				= argv_2766;
	toolset.argv_2727		= argv_2766;
	toolset.argv_2716				= argv_2766;
	toolset.argv_2733			= argv_2766;

	toolset.argv_2202					= argv_2766;	
	toolset.argv_2203					= argv_2766;
	toolset.argv_2205				= argv_2766;
	toolset.argv_2201		= argv_2766;	
	toolset.argv_2204		= argv_2766;

	toolset.argv_2022						= argv_2766;
	toolset.argv_2025						= argv_2766;
	toolset.argv_2020							= argv_2766;
	toolset.argv_2021							= argv_2766;
	toolset.argv_2024						= argv_2766;
	toolset.argv_2023					= argv_2766;			

	toolset.argv_2080					= argv_2766;
	toolset.argv_2082					= argv_2766;
	toolset.list_reset						= argv_2766;
	toolset.argv_2086					= argv_2766;	
	toolset.argv_2079						= argv_2766;
	toolset.argv_2084					= argv_2766;
	toolset.argv_2085					= argv_2766;

	toolset.kdbg_reset						= argv_2766;
	toolset.argv_1927					= argv_2766;
	toolset.argv_1926					= argv_2766;
	toolset.argv_1928					= argv_2766;
	
	toolset.argv_1013				= argv_2766;
	toolset.argv_1128			= argv_2766;
	toolset.argv_961	= argv_2766;
	toolset.argv_951			= argv_2766;	
	toolset.argv_950	= argv_2766;
	toolset.argv_949	= argv_2766;
	toolset.argv_952		= argv_2766;
	toolset.argv_948				= argv_2766;
	toolset.argv_947		= argv_2766;

	// unload all argv_2117 libraries
	argv_1892 = argv_1063::reset ();
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1036
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_792 *: pointer on the argv_2785 containing
// @@     all the global argv_1073.
// @@
// @@ _dll_name: argv_773: argv_2697 of the DLL containing the system dependant
// @@     routines.
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
// @@ This function permits to :
// @@ - argv_2094 the DLL containing the system dependant routines.
// @@ - argv_2094 all the system dependant routines exported by
// @@   the DLL.
// @@
// @@ CONTRACT 		: 
// @@ - 'init' must not have already been argv_1185.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1036::init (argv_792 * _glob_data_ptr, const char * _dll_name) {
	argv_3379 argv_1892 = argv_2065;
	if (init_done == true) {
		_glob_data_ptr->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_1036::init - illegal to call init twice or more !");
		argv_1892 = argv_2060;
	}
	else {
		argv_1892 = argv_2055.argv_2104 (_dll_name, argv_2054);
		if (argv_1892 != argv_2065) {
			_glob_data_ptr->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_1036::init - argv_2104 failed !");
		}
		else {
			argv_2157 void_ptr = argv_2766;

			// registry related functions
			init_one_function (_glob_data_ptr, "argv_2728",		(argv_2157 *) &void_ptr,	argv_1892);
			toolset.argv_2728 = (argv_1521) void_ptr;

			init_one_function (_glob_data_ptr, "argv_2720",					(argv_2157 *) &void_ptr,	argv_1892);
			toolset.argv_2720 = (argv_1513) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2717",					(argv_2157 *) &void_ptr,	argv_1892);
			toolset.argv_2717 = (argv_1510) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2724",					(argv_2157 *) &void_ptr,	argv_1892);
			toolset.argv_2724 = (argv_1517) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2725",					(argv_2157 *) &void_ptr,	argv_1892);
			toolset.argv_2725 = (argv_1518) void_ptr; 
			init_one_function (_glob_data_ptr, "argv_2721",					(argv_2157 *) &void_ptr,	argv_1892);
			toolset.argv_2721 = (argv_1514) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2726",					(argv_2157 *) &void_ptr,  argv_1892);
			toolset.argv_2726 = (argv_1519) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2734",					(argv_2157 *) &void_ptr,	argv_1892);
			toolset.argv_2734 = (argv_1527) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2710",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2710 = (argv_1506) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2723",		(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2723 = (argv_1516) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2719",			(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2719 = (argv_1512) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2718",					(argv_2157 *) &void_ptr,   argv_1892);
			toolset.argv_2718 = (argv_1511) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2738",					(argv_2157 *) &void_ptr,  argv_1892);
			toolset.argv_2738 = (argv_1531) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2736",				(argv_2157 *) &void_ptr,  argv_1892);
			toolset.argv_2736 = (argv_1529) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2732",					(argv_2157 *) &void_ptr,  argv_1892);
			toolset.argv_2732 = (argv_1525) void_ptr;
			init_one_function (_glob_data_ptr, "NATIVE_memset",					(argv_2157 *) &void_ptr,  argv_1892);
			toolset.NATIVE_memset = (fp_NATIVE_memset) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2731",					(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2731 = (argv_1524) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2730",					(argv_2157 *) &void_ptr,  argv_1892);
			toolset.argv_2730 = (argv_1523) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2722",					(argv_2157 *) &void_ptr,    argv_1892);
			toolset.argv_2722 = (argv_1515) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2737",				(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2737 = (argv_1530) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2735",				(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2735 = (argv_1528) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2729",				(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2729 = (argv_1522) void_ptr;

			init_one_function (_glob_data_ptr, "argv_2714",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2714 = (argv_1507) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2715",				(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2715 = (argv_1508) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2727",		(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2727 = (argv_1520) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2716",		(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2716 = (argv_1509) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2733",		(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2733 = (argv_1526) void_ptr;

			init_one_function (_glob_data_ptr, "argv_2202",					(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2202 = (argv_1427) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2203",				(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2203 = (argv_1428) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2205",				(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2205 = (argv_1430) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2201",		(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2201 = (argv_1426) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2204",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2204 = (argv_1429) void_ptr;

			init_one_function (_glob_data_ptr, "argv_2022",					(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2022 = (argv_1452) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2023",					(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2023 = (argv_1453) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2025",						(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2025 = (argv_1455) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2020",						(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2020 = (argv_1450) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2021",						(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2021 = (argv_1451) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2024",						(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2024 = (argv_1454) void_ptr;

			// plugin debug facility
			init_one_function (_glob_data_ptr, "kdbg_reset",					(argv_2157 *) &void_ptr, argv_1892);
			toolset.kdbg_reset = (fp_kdbg_reset) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1927",					(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_1927 = (argv_1441) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1926",					(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_1926 = (argv_1440) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1928",					(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_1928 = (argv_1442) void_ptr;

			// simple list
			init_one_function (_glob_data_ptr, "argv_2080",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2080 = (argv_1457) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2082",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2082 = (argv_1458) void_ptr;
			init_one_function (_glob_data_ptr, "list_reset",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.list_reset = (fp_list_reset) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2086",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2086 = (argv_1461) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2079",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2079 = (argv_1456) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2084",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2084 = (argv_1459) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2085",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_2085 = (argv_1460) void_ptr;

			// complex list
			init_one_function (_glob_data_ptr, "argv_1013",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_1013 = (argv_1411) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1128",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_1128 = (argv_1417) void_ptr;
			init_one_function (_glob_data_ptr, "argv_961",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_961 = (argv_1406) void_ptr;
			init_one_function (_glob_data_ptr, "argv_951",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_951 = (argv_1404) void_ptr;
			init_one_function (_glob_data_ptr, "argv_950",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_950 = (argv_1403) void_ptr;
			init_one_function (_glob_data_ptr, "argv_949",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_949 = (argv_1402) void_ptr;
			init_one_function (_glob_data_ptr, "argv_952",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_952 = (argv_1405) void_ptr;
			init_one_function (_glob_data_ptr, "argv_948",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_948 = (argv_1401) void_ptr;
			init_one_function (_glob_data_ptr, "argv_947",	(argv_2157 *) &void_ptr, argv_1892);
			toolset.argv_947 = (argv_1400) void_ptr;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
