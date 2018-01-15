// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: list.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions necessary for the simple linked
// @@ list argv_2785 to work properly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_323.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_828			
// @@
// @@ FUNCTION		:	argv_828			
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
// @@ Normal constructor of the 'argv_828' argv_2785.
// @@ It prepares the 'argv_828' argv_2785 before it's
// @@ first use.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_828::argv_828 () {
	reset ();	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_828			
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
// @@ This function permits to restore the 'argv_828' 
// @@ argv_2785 to it's initial argv_3460.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_828::reset () {
	argv_2186.clear ();
	vector<argv_2157>().swap (argv_2186);
	argv_2179	= 0;
	argv_2159	= 0;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_828			
// @@
// @@ FUNCTION		:	argv_1680			
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
// @@ This function permits to argv_1292 the argv_1043 size of the 
// @@ 'argv_828' argv_2785.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3717 argv_828::argv_1680 () {
	return (argv_2186.size ());
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_828			
// @@
// @@ FUNCTION		:	argv_576			
// @@
// @@ INPUT			:	
// @@ _data: argv_2157: the argv_1073 to argv_576 to the list
// @@
// @@ _duplicate_forbidden: bool: true if the user want the function
// @@   to fail if the argv_2785 was already added to the list.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2092 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_576 the argv_1073 given as the '_data'
// @@ parameter into the list. If the '_duplicate_forbidden' parameter
// @@ was set to true, then if the argv_1073 is already present, the function
// @@ will fail.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_828::argv_576 (argv_2157 _data, bool _duplicate_forbidden) {
	argv_3379 argv_1892 = argv_2092;
	argv_2186.push_back (_data);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_828			
// @@
// @@ FUNCTION		:	argv_1651			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _data_ptr: argv_2157 *: pointer on the argv_595 of the retrieved
// @@   argv_1073.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2092 if operation was succesful,
// @@        argv_2083 if end of list was reached,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the first element of the
// @@ list. The retrieved argv_1073 being saved into the '_data_ptr' 
// @@ argv_3266 parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_828::argv_1651 (argv_2157 * _data_ptr) {
	argv_3379 argv_1892	= argv_2092;
	
	argv_2179	= argv_2186.size ();
	argv_2159	= 0;

	if (argv_2159 >= argv_2179) {
		argv_1892 = argv_2083; 
	}
	else {
		*_data_ptr = argv_2186[argv_2159];
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_828			
// @@
// @@ FUNCTION		:	argv_1668			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _data_ptr: argv_2157 *: pointer on the argv_595 of the retrieved
// @@   argv_1073.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2092 if operation was succesful,
// @@        argv_2083 if end of list was reached,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the next element of the
// @@ list. The retrieved argv_1073 being saved into the '_data_ptr' 
// @@ argv_3266 parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_828::argv_1668  (argv_2157 * _data_ptr) {
	argv_3379 argv_1892 = argv_2092;

	++argv_2159;

	if (argv_2159 >= argv_2179) {
		argv_1892 = argv_2083; 
	}
	else {
		*_data_ptr = argv_2186[argv_2159];
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
