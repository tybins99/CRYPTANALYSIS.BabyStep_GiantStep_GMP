// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_326.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions necessary for a packet to be filled
// @@ in using argv_3695 independant functions.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_326.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	argv_1001		
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
// @@ normal destructor of the 'argv_1001' argv_2785.
// @@ it prepares the fields for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1001::argv_1001 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
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
// @@ This function permits to bring the argv_2785
// @@ back to it's original argv_3460.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1001::reset () {
	argv_3823 = true;	
	argv_733	= argv_2766;
	argv_730	= argv_2766;
	argv_731		= argv_2766;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	init	
// @@
// @@ INPUT			:	
// @@ _buffer: argv_3715 *: argv_728 to associate with the argv_1001.
// @@ 
// @@ _size: argv_3717: the size of the argv_728.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2863 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to associate a argv_728 with 
// @@ the argv_1001 argv_2785 so that argv_1073 insertion/extraction
// @@ can be argv_1185.
// @@
// @@ CONTRACT 		:	
// @@ - '_buffer' parameter must not be a argv_2766 pointer.
// @@ - '_size' must not be zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1001::init (argv_3715 * _buffer, argv_3717 _size) {
	argv_3379 argv_1892 = argv_2863;
	if ((_buffer == argv_2766) || (_size == 0)) {
		argv_1892 = argv_2860;
	}
	else { // parameters are OK
		argv_733	= _buffer;
		argv_731		= _buffer + _size;
		argv_730	= argv_733; // packet is empty
		argv_3823		= false;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	argv_1680		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _retrieved_size: argv_3717&: argv_1043 size of the argv_2785.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2863 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the argv_1043 size of
// @@ 'argv_1001' argv_2785.
// @@
// @@ CONTRACT 		:
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1001::argv_1680 (argv_3717& _retrieved_size) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else { // status is OK
		_retrieved_size = argv_730 - argv_733;	
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3715: the 1 byte argv_1073 to insert into the argv_728
// @@   associated with the 'argv_1001' argv_2785.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2863 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the 1 byte argv_1073
// @@ given by the parameter '_data' into the argv_728
// @@ associated with the 'argv_1001' argv_2785.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1001::insert (argv_3715 _data) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else if ((argv_730 + 1) > argv_731) {
		argv_1892 = argv_2862;
	}
	else { // ok to proceed, no overflow will occur
		argv_730[0] = _data;
		argv_730 += 1;
#if defined (DEBUG_COM)
		{
			argv_3717 size;
			argv_1680 (size);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "argv_1001::insert(argv_3715 : %u) - size = %u", _data, size);
			argv_3681[MAX_PATH - 1] = '\0';
			MessageBox (argv_2766, argv_3681, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	argv_1292		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: argv_3715& : the 1 byte argv_1073 extracted from the argv_728
// @@    associated with the 'argv_1001' argv_2785.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2863 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the 1 byte argv_1073 from
// @@ from the argv_728 associated with the 'argv_1001' argv_2785.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1001::argv_1292 (argv_3715& _data) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else if ((argv_730 + 1) > argv_731) {
		argv_1892 = argv_2862;
	}
	else { // ok to proceed, no overflow will occur
		_data = argv_730[0];
		argv_730 += 1;
#if defined (DEBUG_COM)
		{
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "argv_1001::argv_1292(argv_3715 : %u)", _data);
			argv_3681[MAX_PATH - 1] = '\0';
			MessageBox (argv_2766, argv_3681, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3716: the 2 argv_739 argv_1073 to insert into the argv_728
// @@   associated with the 'argv_1001' argv_2785.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2863 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the 2 argv_739 argv_1073
// @@ given by the parameter '_data' into the argv_728
// @@ associated with the 'argv_1001' argv_2785.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1001::insert (argv_3716 _data) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else if ((argv_730 + 2) > argv_731) {
		argv_1892 = argv_2862;
	}
	else { // ok to proceed, no overflow will occur
		argv_3703.argv_690 = _data;
		memcpy (argv_730, &argv_3703.argv_685[0], 2);
		argv_730 += 2;
#if defined (DEBUG_COM)
		{
			argv_3717 size;
			argv_1680 (size);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "argv_1001::insert(argv_3716 : %u) - size=%u", _data, size);
			argv_3681[MAX_PATH - 1] = '\0';
			MessageBox (argv_2766, argv_3681, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	argv_1292		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: argv_3716 : the 2 argv_739 argv_1073 extracted from the argv_728
// @@    associated with the 'argv_1001' argv_2785.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2863 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the 2 argv_739 argv_1073 from
// @@ from the argv_728 associated with the 'argv_1001' argv_2785.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1001::argv_1292 (argv_3716& _data) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else if ((argv_730 + 2) > argv_731) {
		argv_1892 = argv_2862;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (&argv_3703.argv_685[0], argv_730, 2);
		_data = argv_3703.argv_690;
		argv_730 += 2;
#if defined (DEBUG_COM)
		{
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "argv_1001::argv_1292(argv_3716 : %u)", _data);
			argv_3681[MAX_PATH - 1] = '\0';
			MessageBox (argv_2766, argv_3681, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3717: the 4 argv_739 argv_1073 to insert into the argv_728
// @@   associated with the 'argv_1001' argv_2785.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2863 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the 4 argv_739 argv_1073
// @@ given by the parameter '_data' into the argv_728
// @@ associated with the 'argv_1001' argv_2785.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1001::insert (argv_3717 _data) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else if ((argv_730 + 4) > argv_731) {
		argv_1892 = argv_2862;
	}
	else { // ok to proceed, no overflow will occur
		argv_3703.argv_691 = _data;
		memcpy (argv_730, &argv_3703.argv_685[0], 4);
		argv_730 += 4;
#if defined (DEBUG_COM)
		{
			argv_3717 size;
			argv_1680 (size);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "argv_1001::insert(argv_3717 : %u) - size=%u", _data, size);
			argv_3681[MAX_PATH - 1] = '\0';
			MessageBox (argv_2766, argv_3681, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	argv_1292		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: argv_3717 : the 4 argv_739 argv_1073 extracted from the argv_728
// @@    associated with the 'argv_1001' argv_2785.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2863 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the 4 argv_739 argv_1073 from
// @@ from the argv_728 associated with the 'argv_1001' argv_2785.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1001::argv_1292 (argv_3717& _data) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else if ((argv_730 + 4) > argv_731) {
		argv_1892 = argv_2862;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (&argv_3703.argv_685[0], argv_730, 4);
		_data = argv_3703.argv_691;
		argv_730 += 4;
#if defined (DEBUG_COM)
		{
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "argv_1001::argv_1292(argv_3717 : %u)", _data);
			argv_3681[MAX_PATH - 1] = '\0';
			MessageBox (argv_2766, argv_3681, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _c_string: argv_773: the string to insert into the argv_728
// @@   associated with the 'argv_1001' argv_2785.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2863 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string pointed to by
// @@ the parameter '_data' into the argv_728 associated with the 
// @@ 'argv_1001' argv_2785.
// @@
// @@ Notice that for a string, the following argv_1073 is inserted 
// @@ into the argv_728 :
// @@ - the string size (2 argv_739)
// @@ - the string itself (not zero terminated).
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.
// @@ - '_c_string' parameter must not be a argv_2766 pointer.
// @@ - '_c_string' parameter must not be an empty string.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1001::insert (argv_773 _c_string) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else if (_c_string == argv_2766) {
		argv_1892 = argv_2860;
	}
	else if (strlen (_c_string) == 0) {
		argv_1892 = argv_2860;
	}
	else {
		argv_3716 his_size = (argv_3716) strlen(_c_string);
		if ((argv_730 + 2 + his_size) > argv_731) {
			argv_1892 = argv_2862;
		}
		else { // ok to proceed, no overflow will occur
			// insert the string's size (2 argv_739)
			argv_1892 = insert (his_size);
			if (argv_1892 == argv_2863) {
				// insert the string itself (not zero terminated)
				memcpy (argv_730, _c_string, his_size);
				argv_730 += his_size;
			}
		}
	}
	return (argv_1892);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _string: const string&: the string to insert into the argv_728
// @@   associated with the 'argv_1001' argv_2785.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2863 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string given by 
// @@ the parameter '_data' into the argv_728 associated with the 
// @@ 'argv_1001' argv_2785.
// @@
// @@ Notice that for a string, the following argv_1073 is inserted 
// @@ into the argv_728 :
// @@ - the string size (2 argv_739)
// @@ - the string itself (not zero terminated).
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.
// @@ - '_string' parameter must not be an empty string.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1001::insert (const string& _string) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else if (_string == "") {
		argv_1892 = argv_2860;
	}
	else {
		argv_3716 his_size = (argv_3716) _string.size ();
		if ((argv_730 + 2 + his_size) > argv_731) {
			argv_1892 = argv_2862;
		}
		else { // ok to proceed, no overflow will occur
			// insert the string's size (2 argv_739)
			argv_1892 = insert (his_size);
			if (argv_1892 == argv_2863) {
				// insert the string itself (not zero terminated)
				memcpy (argv_730, _string.c_str(), his_size);
				argv_730 += his_size;
			}
		}
	}
	return (argv_1892);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	
// @@
// @@ FUNCTION		:	argv_1292		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: string& : the string extracted from the argv_728
// @@    associated with the 'argv_1001' argv_2785.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_2863 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 a string from
// @@ from the argv_728 associated with the 'argv_1001' argv_2785.
// @@ 
// @@ Notice that for a string, the following argv_1073 is extracted 
// @@ from the argv_728 :
// @@ - the string size (2 argv_739)
// @@ - the string itself (not zero terminated).
// @@ the argv_3266 is then stored into the '_data' argument.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1001::argv_1292 (string& _data) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else { // conditions are met to proceed
		// argv_1292 the string size 
		argv_3716 his_size = 0;
		argv_1892 = argv_1292 (his_size);
		if (argv_1892 == argv_2863) { // string size extraction success
			if ((argv_730 + his_size) > argv_731) {
				argv_1892 = argv_2862;
			}		
			else { // no overflow will occur => OK to proceed
				argv_3715 * temp_buffer = new (std::nothrow) argv_3715[his_size+1];
				if (temp_buffer == argv_2766) {
					argv_1892 = argv_2861;
				}
				else { // memory allocation was succesful
					// argv_1292 the string itself (not zero terminated) 
					memcpy (temp_buffer, argv_730, his_size);
					temp_buffer[his_size] = '\0';
					argv_730 += his_size;
					// copy the temporary argv_728 to the string
					_data = (char *) temp_buffer;
					// free the temporary argv_728 as copy was argv_1185
					delete [] temp_buffer;
				}
			}
		}
	}
	return (argv_1892);	
}

argv_3379 argv_1001::insert_buffer (argv_3715 * _buf, argv_3717 _size) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else if ((argv_730 + _size) > argv_731) {
		argv_1892 = argv_2862;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (argv_730, _buf, _size);
		argv_730 += _size;
	}
	return (argv_1892);
}

// useful when cloning a given packet after reception
argv_3379 argv_1001::insert_fake_buffer (argv_3717 _size) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else if ((argv_730 + _size) > argv_731) {
		argv_1892 = argv_2862;
	}
	else { // ok to proceed, no overflow will occur
		argv_730 += _size;
	}
	return (argv_1892);
}

argv_3379 argv_1001::argv_1293 (argv_3715 * _buf, argv_3717 _size) {
	argv_3379 argv_1892 = argv_2863;
	if (argv_3823 == true) {
		argv_1892 = argv_2859;
	}
	else if ((argv_730 + _size) > argv_731) {
		argv_1892 = argv_2862;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (_buf, argv_730, _size);
		argv_730 += _size;
	}
	return (argv_1892);
}


// adjust pointers of the mirror using the delta of the argv_1043 coder
void argv_1001::argv_1014 (argv_1001& _mirror) {
	_mirror.argv_3823		= argv_3823;
	argv_3717 delta				= argv_730 - argv_733; 
	_mirror.argv_730	= _mirror.argv_733 + delta;
}

argv_3715 *	argv_1001::argv_1643 () {
	return (argv_730);
}


void argv_1001::argv_1132 (argv_773 _msg, FILE * _fp) {
	fprintf (_fp, "'%s': argv_3823=%d, argv_733=0x%X, argv_730=0x%X, argv_731=0x%X", _msg, argv_3823,argv_733, argv_730, argv_731);
	argv_3715 * cptr = argv_733;
	fprintf (_fp, ", content = [");
	while (cptr < argv_730) {
		fprintf (_fp, "0x%02X,", (*cptr));
		cptr++;
	}
	fprintf (_fp, "]\r\n");
}

// the coder may contain argv_1073 even if pointers are not set correctly
// thus we use the size to argv_1130 (found from packet argv_2785 as 'argv_716')
void argv_1001::argv_1132 (argv_773 _msg, FILE * _fp, argv_3717 _buf_size) {
	fprintf (_fp, "'%s': argv_3823=%d, argv_733=0x%X, argv_730=0x%X, argv_731=0x%X", _msg, argv_3823,argv_733, argv_730, argv_731);
	argv_3715 * cptr = argv_733;
	fprintf (_fp, ", content = [");
	for (argv_3717 i=0 ; i<_buf_size ; i++) {
		fprintf (_fp, "0x%02X,", (*cptr));
		cptr++;
	}
	fprintf (_fp, "]\r\n");
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@





