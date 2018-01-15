// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_313.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions that permits the loader cypher
// @@ argv_2785 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_313.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_774
// @@
// @@ FUNCTION		:	argv_774		
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
// @@ Normal constructor of the 'argv_774' argv_2785.
// @@ It merely prepares the argv_2785 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_774::argv_774 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_774
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
argv_3379 argv_774::reset () {
	argv_3379 argv_1892		= argv_2065;
	init_done		= false;
	argv_1065	= argv_2766;
	argv_1101	= argv_2766;

	// unload all argv_2117 libraries
	argv_1892			= argv_1063::reset ();
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_774
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
// @@ - argv_2094 the DLL containing the cipher/decipher routines.
// @@ - argv_2094 the cipher routine.
// @@ - argv_2094 the decipher routine.
// @@
// @@ CONTRACT 		: 
// @@ - 'init' must not have already been argv_1185.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_774::init (argv_792 * _glob_data_ptr, argv_773 _dll_name) {
	argv_3379 argv_1892 = argv_2065;
	if (init_done == true) {
		_glob_data_ptr->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_774::init - illegal to call init twice or more !");
		argv_1892 = argv_2060;
	}
	else {
		argv_3379 argv_1892 = argv_2055.argv_2104 (_dll_name, argv_2054);
		if (argv_1892 != argv_2065) {
			_glob_data_ptr->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_774::init - argv_2104 failed !");
		}
		else {
			argv_2157 void_ptr = argv_2766;
			init_one_function (_glob_data_ptr, "argv_1065",		(argv_2157 *) &void_ptr,	argv_1892);
			argv_1065 = (argv_1413) void_ptr;

			init_one_function (_glob_data_ptr, "argv_1101",	(argv_2157 *) &void_ptr,	argv_1892);
			argv_1101 = (argv_1414) void_ptr;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
