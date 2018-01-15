// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_256.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions that permits the general loader
// @@ argv_2785 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_315.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1063
// @@
// @@ FUNCTION		:	argv_1063		
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
// @@ Normal constructor of the 'argv_1063' argv_2785.
// @@ It merely prepares the argv_2785 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1063::argv_1063 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1063
// @@
// @@ FUNCTION		:	reset		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2065 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to reset the 'argv_1063'
// @@ argv_2785 to it's initial argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1063::reset () {
	argv_3379 argv_1892 = argv_2065;
	argv_1892 = argv_2055.reset ();
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1063
// @@
// @@ FUNCTION		:	init_one_function		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_792 *: pointer on the argv_2785 containing
// @@     all the global argv_1073.
// @@
// @@ _fn_name: argv_773: argv_2697 of the function whose argv_595 is to be
// @@     retrieved.
// @@
// @@ OUTPUT		:
// @@ _fn_ptr_ptr: argv_2157 *: contains the argv_595 of the function whose
// @@     argv_2697 was passed as a parameter,
// @@     argv_2766 in case of failure.
// @@
// @@ IO			:	
// @@ _iret: argv_3379&: the argv_3807/argv_3266 argument that comes from the previous
// @@     call to this function, and that may be update by the argv_1043 call
// @@     to this function.	
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the argv_595 of the the function
// @@ '_fn_name' from the currently argv_2117 DLL, and to return it's
// @@ argv_595 into '_fn_ptr_ptr' argv_3266 parameter.
// @@ Notice that if a previous call to this function has failed, 
// @@ in other words if the '_iret' parameter is different of
// @@ argv_2065, then nothing is argv_1185.
// @@ If the '_iret' parameter is equal to argv_2065, then
// @@ the function '_fn_name' is lookup up and the argv_3266 (success or
// @@ failure is saved by updating the argv_3807 of the argv_3807/argv_3266
// @@ '_iret' parameter.
// @@
// @@ CONTRACT 		:	
// @@ - the '_iret' parameter must be equal to argv_2065.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1063::init_one_function (argv_792 * _glob_data_ptr, argv_773 _fn_name, argv_2157 * _fn_ptr_ptr, argv_3379& _iret) {
	if (_iret == argv_2065) {
		_iret = argv_2055.argv_1674 (argv_2054, _fn_name, _fn_ptr_ptr);
		if (_iret != argv_2065) {
			string serror = argv_1240 (_iret);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_1036::init_one_function - failed for function : %s (%s)", _fn_name, serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			_glob_data_ptr->argv_2146.argv_2142 (argv_1242, argv_3681);
		}
		else {
#if defined (DEBUG_SYSTEM_LOADER)
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "retrieved argv_595 of function : %s : %X", _fn_name, *_fn_ptr_ptr);
			argv_3681[MAX_PATH - 1] = '\0';
			_glob_data_ptr->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_SYSTEM_LOADER)
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
