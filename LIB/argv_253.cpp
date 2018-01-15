// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_253.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions that permits the loader argv_962
// @@ argv_2785 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_312.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_767
// @@
// @@ FUNCTION		:	argv_767		
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
// @@ Normal constructor of the 'argv_767' argv_2785.
// @@ It merely prepares the argv_2785 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_767::argv_767 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_767
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
// @@ This function permits to reset the 'argv_767'
// @@ argv_2785 to it's initial argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_767::reset () {
	argv_3379 argv_1892			= argv_2065;
	init_done			= false;
	argv_965		= argv_2766;
	argv_3746	= argv_2766;

	// unload all argv_2117 libraries
	argv_1892				= argv_1063::reset ();
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_767
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_792 *: pointer on the argv_2785 containing
// @@     all the global argv_1073.
// @@
// @@ _dll_name: argv_773: argv_2697 of the DLL containing the argv_962/argv_3744
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
// @@ - argv_2094 the DLL containing the argv_962/argv_3744 routines.
// @@ - argv_2094 the argv_962 routine.
// @@ - argv_2094 the argv_3744 routine.
// @@
// @@ CONTRACT 		: 
// @@ - 'init' must not have already been argv_1185.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_767::init (argv_792 * _glob_data_ptr, const char * _dll_name) {
	argv_3379 argv_1892 = argv_2065;
	if (init_done == true) {
		_glob_data_ptr->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_767::init - illegal to call init twice or more !");
		argv_1892 = argv_2060;
	}
	else {
		argv_3379 argv_1892 = argv_2055.argv_2104 (_dll_name, argv_2054);
		if (argv_1892 != argv_2065) {
#if defined (__LINUX_OS__)
			string load_er_str;
			argv_3379   load_er_SI32;
			argv_2055.argv_1658 (load_er_SI32, load_er_str);
#endif // #if defined (__LINUX_OS__)
			string serror = argv_1240 (argv_1892);
			_glob_data_ptr->argv_2146.argv_2142 (argv_1242, "+++ ERROR: while loading dll : ", _dll_name);
			_glob_data_ptr->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_767::init - argv_2104 failed ! - ", serror.c_str());
#if defined (__LINUX_OS__)
			_glob_data_ptr->argv_2146.argv_2142 (argv_1242, "+++ ERROR: ", load_er_str.c_str());
#endif // #if defined (__LINUX_OS__)
		}
		else {
			argv_2157 void_ptr = argv_2766;
			init_one_function (_glob_data_ptr, "argv_965",	(argv_2157 *) &void_ptr,		argv_1892);
			argv_965 = (argv_1407) void_ptr;
			
			init_one_function (_glob_data_ptr, "argv_3746",	(argv_2157 *) &void_ptr,		argv_1892);
			argv_3746 = (argv_1539) void_ptr;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
