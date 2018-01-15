// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_267.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the necessary objects
// @@ to communicate via a argv_2234 link 
// @@ (argv_3410 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_325.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	none		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ copy constructor of the 'argv_1000' argv_2785.
// @@ Does nothing as the copy constructor is private and
// @@ thus should never be called.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1000::argv_1000 (const argv_1000& _p) {
	;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	operator=
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ argv_1000& : packet to use to perform the copy.
// @@	
// @@ RETURN VALUE	:
// @@ argv_1000& : the argv_1043 argv_2785's instance.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ assignment operator of the argv_1000 argv_2785.
// @@ does nothing because it is private and thus should
// @@ never be used.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1000& argv_1000::operator= (argv_1000& _p) {
	return (*this);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_1000		
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
// @@ This function permits to bring the argv_1000 argv_2785 
// @@ back to it's original argv_3460.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1000::argv_1000 () {
	argv_1534				= argv_2766;
	argv_1536				= argv_2766;
	argv_3684			= "";
#if defined (__WIN32_OS__)
	argv_3347			= "\\";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	argv_3347			= "/";
#endif // #if defined (__LINUX_OS__)
	argv_732			= argv_2766;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3265		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function is to be called after a argv_1000 was used
// @@ and before another use. It resets some important fields
// @@ to their initial argv_3460.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3265 () {
	argv_3379 argv_1892				= argv_2901;
	argv_2743					= 0;
	nb_remaining			= 0;
	offset					= 0;
	argv_3460					= argv_2893;
	argv_716				= 0;
	argv_1334				= 0;
	argv_3208		= "";
	argv_1366			= false;
	argv_692			= false;
	argv_1117	= false;
	argv_1336			= "";
	
	if (argv_1534 != argv_2766) {
		fclose (argv_1534);
		argv_1534 = argv_2766;
	}
	if (argv_1536 != argv_2766) {
		fclose (argv_1536);
		argv_1536 = argv_2766;
	}
	if (argv_732 != argv_2766) {
		delete [] argv_732;
		argv_732 = argv_2766;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
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
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to bring the argv_1000 argv_2785
// @@ back to it's virgin argv_3460.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::reset () {
	argv_3379 argv_1892		= argv_2901;
	argv_3584		= argv_2940;
	argv_3794		= argv_2940;
	argv_3265 ();

	// associate the argv_1806 with it's corresponding part of the argv_728 
	argv_1892 = argv_1806.init (&argv_728[0], argv_2833);
	if (argv_1892 == argv_2863) { // argv_1806 init was succesful
		// associate the argv_714 with it's corresponding part of the argv_728 
		argv_1892 = argv_714.init (&argv_728[argv_2833], argv_2831 - argv_2833);
	}

	if (argv_1892 == argv_2863) { // remap error argv_877
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3362		
// @@
// @@ INPUT			:	
// @@ _tmp_folder: argv_773: argv_2697 of the directory to use
// @@   when a argv_1314 packet is received.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set the temporary folder
// @@ that is required because the packet may receive
// @@ a argv_1314, and thus a temporary argv_1314 must be created
// @@ for reception, and this temporary argv_1314 is created
// @@ in the temporary folder '_tmp_folder'.
// @@
// @@ CONTRACT 		:	
// @@ - '_tmp_folder' parameter should not be argv_2766.
// @@ - '_tmp_folder' should not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3362 (argv_773 _tmp_folder) {
	argv_3379 argv_1892 = argv_2901;
	if ((_tmp_folder == argv_2766) || (strlen (_tmp_folder) == 0)) {
		argv_1892 = argv_2880;
	}
	else {
		argv_3684 = _tmp_folder;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3340		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the argv_1043 packet was totally sent,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the
// @@ argv_1043 packet was entirely sent or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1000::argv_3340 () {
	return (argv_3460 == argv_2898);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3203		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the packet was fully received,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the
// @@ argv_1043 packet was entirely received or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1000::argv_3203 () {
	return (argv_3460 == argv_2894);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_1680		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _size: argv_3717&: the size of the packet : argv_1806 size + argv_714 size.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the packet size, the 
// @@ packet size being the sum of the argv_1806 size and the 
// @@ argv_714 size.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_1680 (argv_3717& _size) {
	argv_3379 argv_1892			= argv_2901;
	argv_3717 header_size	= 0;
	argv_3717 argv_716		= 0;
	_size				= 0;

	argv_1892 = argv_1806.argv_1680 (header_size);
	if (argv_1892 == argv_2863) {
		argv_1892 = argv_714.argv_1680 (argv_716);
		if (argv_1892 == argv_2863) {
			_size = header_size + argv_716;	
		}
	}

	if (argv_1892 == argv_2863) { // remap error argv_877
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_2830		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 the packet for 
// @@ sending by updating the argv_1806's fields. This function
// @@ is necessary because we need to tell the packet that
// @@ we won't argv_576 more argv_1073 into it's argv_714.
// @@ 
// @@ Notice : 'argv_2830' function is not called if the packet 
// @@   is to argv_3335 a argv_1314.
// @@
// @@ CONTRACT 		:	
// @@ - the packet argv_3695 should have been set prior to this call.
// @@ - the packet argv_714 should contain some argv_1073.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_2830 () {
	argv_3379 argv_1892	= argv_2901;
	if (argv_3794 == argv_2940) {
		argv_1892 = argv_2873; 
	}
	else { // packet argv_3695 is OK
		argv_1892 = argv_714.argv_1680 (argv_716);
		if (argv_1892 == argv_2863) {
			if (argv_716 == 0) {
				argv_1892 = argv_2877;
			}
			else { // packet argv_714 is not empty
				argv_3584 = argv_2902;
				// insert the packet system argv_3695 into the argv_1806
				argv_1892 = argv_1806.insert (argv_3584);
				if (argv_1892 == argv_2863) {
					// insert the packet user argv_3695 into the argv_1806
					argv_1892 = argv_1806.insert (argv_3794);
					if (argv_1892 == argv_2863) {
						// insert the argv_714 size into the argv_1806
						argv_1892 = argv_1806.insert (argv_716);
						if (argv_1892 == argv_2863) {
							argv_3460 = argv_2892;
						}
					}
				}
			}
		}
	}

	if (argv_1892 == argv_2863) { // remap error argv_877
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3363		
// @@
// @@ INPUT			:	
// @@ _type: argv_3715: the user argv_3695 to be assigned to the packet.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to associate a user argv_3695 to the argv_1000
// @@ notice that the system argv_3695 is hidden for the argv_1000's user.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3363 (argv_3715 _type) {
	argv_3379 argv_1892	= argv_2901;
	argv_3794	= _type;
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_1684		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _extracted_type: argv_3715&: user argv_3695 of the argv_1000.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the user argv_3695 associated
// @@ with the argv_1000.
// @@
// @@ CONTRACT 		:	
// @@ - user argv_3695 of the argv_1000 should have been set prior to
// @@   this call using the 'argv_3363' function.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_1684 (argv_3715& _extracted_type) {
	argv_3379 argv_1892 = argv_2901;
	if (argv_3794 == argv_2940) {
		argv_1892 = PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET; 
	}
	else {
		_extracted_type	= argv_3794;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3715: the 1 byte argv_1073 to insert into the packet's argv_714.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert a 1 byte argv_1073 into the argv_1000.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::insert (argv_3715 _data) {
	argv_3379 argv_1892	= argv_2901;
	argv_1892 = argv_714.insert (_data);
	if (argv_1892 == argv_2863) { // remap error argv_877
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_1292		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _data&: argv_3715 : the 1 byte argv_1073 extracted from the argv_1000.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 a 1 byte argv_1073 from
// @@ the argv_1000 argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_1292 (argv_3715& _data) {
	argv_3379 argv_1892	= argv_2901;
	if (argv_3460 != argv_2894) {
		argv_1892 = argv_2878;
	}
	else { // packet argv_3460 is OK
		argv_1892 = argv_714.argv_1292 (_data);
		if (argv_1892 == argv_2863) { // remap error argv_877
			argv_1892 = argv_2901;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3716: the 2 argv_739 argv_1073 to insert into the packet's argv_714.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert a 2 argv_739 argv_1073 into the argv_1000.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::insert (argv_3716 _data) {
	argv_3379 argv_1892 = argv_2901;
	argv_1892 = argv_714.insert (_data);
	if (argv_1892 == argv_2863) { // remap error argv_877
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_1292		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _data: argv_3716& : the 2 argv_739 argv_1073 extracted from the argv_1000.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 a 2 argv_739 argv_1073 from
// @@ the argv_1000 argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_1292 (argv_3716& _data) {
	argv_3379 argv_1892 = argv_2901;
	if (argv_3460 != argv_2894) {
		argv_1892 = argv_2878;
	}
	else { // packet argv_3460 is OK
		argv_1892 = argv_714.argv_1292 (_data);
		if (argv_1892 == argv_2863) { // remap error argv_877
			argv_1892 = argv_2901;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_3717: the 4 argv_739 argv_1073 to insert into the packet's argv_714.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert a 4 argv_739 argv_1073 into the argv_1000.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::insert (argv_3717 _data) {
	argv_3379 argv_1892	= argv_2901;
	argv_1892 = argv_714.insert (_data);
	if (argv_1892 == argv_2863) { // remap error argv_877
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_1292		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _data: argv_3717& : the 4 argv_739 argv_1073 extracted from the argv_1000.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 a 4 argv_739 argv_1073 from
// @@ the argv_1000 argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_1292 (argv_3717& _data) {
	argv_3379 argv_1892	= argv_2901;
	if (argv_3460 != argv_2894) {
		argv_1892 = argv_2878;
	}
	else { // packet argv_3460 is OK
		argv_1892 = argv_714.argv_1292 (_data);
		if (argv_1892 == argv_2863) { // remap error argv_877
			argv_1892 = argv_2901;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_773: the string to insert into the argv_1000.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string pointed to by
// @@ the '_data' parameter into the argv_1000 argv_2785.
// @@
// @@ CONTRACT 		:	
// @@ - '_data' parameter should not be a argv_2766 pointer.
// @@ - '_data' parameter should not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::insert (argv_773 _data) {
	argv_3379 argv_1892 = argv_2901;
	if ((_data == argv_2766) || (strlen(_data) == 0)) {
		argv_1892 = argv_2880;
	}
	else { // parameter is OK
		argv_1892 = argv_714.insert (_data);
		if (argv_1892 == argv_2863) { // remap error argv_877
			argv_1892 = argv_2901;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data : const string&: the string to insert into
// @@   the argv_1000.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string '_data'
// @@ into the argv_1000 argv_2785.
// @@
// @@ CONTRACT 		:	
// @@ - the '_data' should not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::insert (const string& _data) {
	argv_3379 argv_1892	= argv_2901;
	argv_1892 = argv_714.insert (_data);
	if (argv_1892 == argv_2863) { // remap error argv_877
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_1292		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: string&: string extracted from the argv_1000.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 a string from the 
// @@ argv_1000.
// @@
// @@ CONTRACT 		:	
// @@ - a full packet should have been received.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_1292 (string& _data) {
	argv_3379 argv_1892	= argv_2901;
	if (argv_3460 != argv_2894) {
		argv_1892 = argv_2878;
	}
	else { // packet argv_3460 is OK
		argv_1892 = argv_714.argv_1292 (_data);
		if (argv_1892 == argv_2863) { // remap error argv_877
			argv_1892 = argv_2901;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_1635		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a unique argv_1364
// @@ using the temporary folder that was previously set
// @@ by another function.
// @@
// @@ CONTRACT 		:	
// @@ - the temporary folder should have been set prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_1635 (string& _tmp_filename) {
	argv_3379 argv_1892 = argv_2901;
	_tmp_filename = "";
	if (argv_3684 == "") {
		argv_1892 = PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET;
	}
	else { // argv_3460 is coherent with the requested operation
		char argv_3681[MAX_PATH];
	#if defined (__WIN32_OS__)
		GetLocalTime (&argv_3677);
		argv_3409 (argv_3681, MAX_PATH, "%s%s%d_%d_%d_%d_%d_%d_%d.argv_3681", argv_3684.c_str(), argv_3347.c_str(), argv_3677.wYear, argv_3677.wMonth, argv_3677.wDay, argv_3677.wHour, argv_3677.wMinute, argv_3677.wSecond, argv_3677.wMilliseconds);
	#endif // #if defined (__WIN32_OS__)
	#if defined (__LINUX_OS__)
		argv_1055 = argv_3678 (argv_2766);
		argv_3680 = localtime (&argv_1055);
		gettimeofday (&argv_3589, argv_2766);
		//srand ( argv_3589.tv_usec );
		argv_3409 (argv_3681, MAX_PATH, "%s%s%d_%d_%d_%d_%d_%d_%d.argv_3681", argv_3684.c_str(), argv_3347.c_str(), argv_3680->tm_year, argv_3680->tm_mon, argv_3680->tm_mday, argv_3680->tm_hour, argv_3680->tm_min, argv_3680->tm_sec, (argv_3717) argv_3589.tv_usec);
	#endif // #if defined (__LINUX_OS__)
		argv_3681[MAX_PATH - 1] = '\0';
		_tmp_filename = argv_3681;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3106		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to ensure that after a packet was
// @@ entirely received, everything  is coherent.
// @@ the following steps are performed :
// @@ - ensure that the packet's system argv_3695 is coherent.
// @@ - ensure that no argv_1314 was received if the argv_1314 transfert
// @@   feature was not enabled.
// @@ - the temporary argv_1364 should be empty.
// @@
// @@ Furthermore, if a packet was received, then a unique
// @@ temporary argv_1364 is chosen and this argv_1314 is opened
// @@ so that the received content can be saved.
// @@ 
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3106 () {
	argv_3379 argv_1892 = argv_2901;
	if ((argv_3584 != argv_2902) && (argv_3584 != argv_2903)) {
		argv_1892 = argv_2881;
	}
	else if (argv_3584 == argv_2903) {
		if (argv_1366 == false) {
			argv_1892 = argv_2872;
		}
		else if ((argv_692==true) && (argv_3208 != "")) { 
			// the argv_1364 should be empty
			argv_1892 = argv_2905;	
		}
		else if (argv_1534 != argv_2766) {
			argv_1892 = argv_2879;
		}
		else { // all conditions are met
			if (argv_692 == true) {
				// choose a temporary argv_1364
				 argv_1892 = argv_1635 (argv_3208);
			}

			if (argv_1892 ==  argv_2901) {
				// open the temporary receive argv_1314
				argv_1534 = fopen (argv_3208.c_str(), "wb");
				if ( ! argv_1534) {
					argv_1892 = argv_2866;
				}
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3134		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the important fields
// @@ from a received packet :
// @@ - the system argv_3695.
// @@ - the user argv_3695.
// @@ - the argv_714 size.
// @@ The argv_3460 of the argv_1000 argv_2785 is modified accordingly.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3134 () {
	argv_3379 argv_1892			= argv_2901;
	argv_716			= 0;

	// argv_1292 the packet's system argv_3695 from the argv_1806
	argv_1892 = argv_1806.argv_1292 (argv_3584);

	if (argv_1892 == argv_2863) { // the system argv_3695 was retrieved succesfully
		argv_1892 = argv_3106 ();

		if (argv_1892 == argv_2901) { 
			// argv_1292 the packet's user argv_3695 from the argv_1806
			argv_1892 = argv_1806.argv_1292 (argv_3794);
			if (argv_1892 == argv_2863) {
				// argv_1292 the packet's argv_714's size from the argv_1806
				argv_1892 = argv_1806.argv_1292 (argv_716);

				if (argv_1892 == argv_2863) {
					// argv_3110 the packet to perform the reception of the argv_714
					argv_2743			= 0;
					nb_remaining	= argv_716;
					if (nb_remaining > (argv_2831 - argv_2833)) {
						argv_1892		= argv_2857;
					}
					else { // the argv_714 size is coherent
						offset		= argv_2833;
						argv_3460		= argv_2895; // update the argv_3460 
						// adjust the argv_714's coder so that overflow can be detected
						argv_1892 = argv_714.init (&argv_728[argv_2833], argv_716);
					}
				}
			}
		}
	}

	if (argv_1892 == argv_2863) { // remap error argv_877
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3207		
// @@
// @@ INPUT			:	
// @@ _timeout_second: argv_3379: the timeout associated with the read operation
// @@   on the argv_1043 argv_2234 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_874&: the argv_2234 to use for reception (connection).
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive a argv_1314 via the connection
// @@ established with the '_media' parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3207 (argv_874& _media, argv_3379 _timeout_second) {
	argv_3379 argv_1892			= argv_2901;
	argv_3717 actual_nb_recv	= 0;
	bool finished		= false;

	while ((finished==false) && (total_nb_remaining > 0)) {
		argv_1892 = _media.argv_3200 (&argv_732[argv_2743], nb_remaining, actual_nb_recv, _timeout_second);

		if (argv_1892 == argv_2262) {
			argv_2743			+= actual_nb_recv;
			nb_remaining	-= actual_nb_recv;
			if (nb_remaining == 0) { // argv_1043 argv_710 fully received
				// dump this argv_710 to the argv_1314
				if (fwrite (argv_732, 1, argv_2743, argv_1534) != argv_2743) {
					argv_1892 = argv_2888;
					finished = true;
				}
				else { // argv_710 succesfully dumped to the destination argv_1314
					argv_3689		+= argv_2743;
					total_nb_remaining	-= argv_2743;
					if (total_nb_remaining > 0) {
						if (total_nb_remaining < argv_2831) {
							nb_remaining = total_nb_remaining;	
						}
						else { // the remaining amount of argv_1073 is larger than the argv_710 size
							nb_remaining = argv_2831;
						}
						argv_2743 = 0;
					}
					else { // all blocks succesfully received and dumped to destination argv_1314.
						argv_3460		= argv_2894;
						finished	= true;
					}
				}
			}
		}
		else { // argv_3199 error occured
			finished = true;
		}
	}

	if ((argv_1892 == argv_2262) || (argv_1892 == argv_2863)) { // remap error argv_877 
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3206		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the necessary steps
// @@ when a given argv_1314 was entirely received.
// @@ the following steps are performed :
// @@ - the temporary argv_1314 descriptor is closed.
// @@ - the input/output argv_728 is deallocated.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3206 () {
	argv_3379 argv_1892 = argv_2901;
	if (argv_3584 == argv_2903) {
		if (argv_1534 != argv_2766) {
			if (fclose (argv_1534) != 0) {
				argv_1892 = argv_2865;
			} 
			argv_1534 = argv_2766;
		}
	}

	if (argv_732 != argv_2766) {
		delete [] argv_732;
		argv_732 = argv_2766;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3131		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to change the packet argv_3460 after the
// @@ packet's argv_714 was fully received.
// @@ If the system argv_3695 of the packet is argv_2903, 
// @@ then the function allocates the IO argv_728 to argv_3110 the
// @@ argv_1314 transfert.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3131 () {
	argv_3379 argv_1892 = argv_2901;
	if (argv_3584 == argv_2902) {
		argv_3460 = argv_2894;
	}
	else if (argv_3584 == argv_2903) {
		argv_3689		= 0;
		argv_2743				= 0;	

		// argv_1292 the unique field of the argv_714 (the argv_1314 size, on 4 argv_739)
		argv_1892 = argv_714.argv_1292 (total_nb_remaining);

		if (argv_1892 == argv_2863) {
			argv_3460 = argv_2896;
			// divide the argv_1314 into blocks to be received
			if (total_nb_remaining < argv_2831) {
				nb_remaining = total_nb_remaining;	
			}
			else { // the remaining amount of argv_1073 is larger than the argv_710 size
				nb_remaining = argv_2831;
			}

			// allocate the IO argv_728
			if (argv_732 != argv_2766) {
				argv_1892 = argv_2876;
			}
			else { // IO argv_728 not allocated yet
				argv_732 = new (std::nothrow) argv_3715[argv_2834];
				if (argv_732 == argv_2766) {
					argv_1892 = argv_2882;
				}
			}
		}
	}

	if ((argv_1892 == argv_2262) || (argv_1892 == argv_2863)) { // remap error argv_877 
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3209		
// @@
// @@ INPUT			:	
// @@ _timeout_second: argv_3379: the timeout associated with the read operation
// @@   on the argv_1043 argv_2234 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_874&: the communication channel to use for
// @@  argv_1073 reception.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function is a kind of dispatcher that permits to 
// @@ perform the adequate process considering the argv_1043
// @@ argv_3460 of the argv_1000 argv_2785.
// @@ This scheme is necessary when using sockets in non-blocking
// @@ mode.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3209 (argv_874& _media, argv_3379 _timeout_second) {
	argv_3379 argv_1892 = argv_2901;
	argv_3717 actual_nb_recv = 0;

	if (argv_3460 == argv_2893) {
		argv_3460			= argv_2897;
		nb_remaining	= argv_2833;
		argv_2743			= 0;
		offset			= 0;
	}

	if ((argv_1892 == argv_2901) && (argv_3460 == argv_2897)) {
		argv_1892 = _media.argv_3200 (&argv_728[offset + argv_2743], nb_remaining, actual_nb_recv, _timeout_second);
		if (argv_1892 == argv_2262) {
			argv_1892			 = argv_2901;
			argv_2743			+= actual_nb_recv;
			nb_remaining	-= actual_nb_recv;
			if (nb_remaining == 0) { // argv_1806 fully read
				argv_1892 = argv_3134 ();
			}
		}
	}

	if ((argv_1892 == argv_2901) && (argv_3460 == argv_2895)) {
		argv_1892 = _media.argv_3200 (&argv_728[offset + argv_2743], nb_remaining, actual_nb_recv, _timeout_second);
		if (argv_1892 == argv_2262) {
			argv_1892			 = argv_2901;
			argv_2743			+= actual_nb_recv;
			nb_remaining	-= actual_nb_recv;
			if (nb_remaining == 0) { // argv_714 fully read
				argv_1892 = argv_3131 ();
			}
		}
	}

	if ((argv_1892 == argv_2901) && (argv_3460 == argv_2896)) {
		argv_1892 = argv_3207 (_media, _timeout_second);
	}

	if ((argv_1892 == argv_2901) && (argv_3460 == argv_2894)) {
		argv_1892 = argv_3206 ();
	}

	if (argv_1892 == argv_2262) { // remap error argv_877 
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3202		
// @@
// @@ INPUT			:	
// @@ _dest_filename: argv_773: argv_2697 of the argv_1314 where the received
// @@   argv_1073 must be saved.	
// @@
// @@ _timeout_second: argv_3379: the timeout associated with the read operation
// @@   on the argv_1043 argv_2234 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_874&: the communication channel to use for
// @@   the argv_1073 reception.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive a remote argv_1314 and to 
// @@ save it to the local argv_1314 whose argv_2697 was given as 
// @@ a parameter.
// @@
// @@ CONTRACT 		:	
// @@ - packet argv_3460 must be coherent with the operation.
// @@ - '_dest_filename' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3202 (argv_874& _media, argv_3379 _timeout_second, argv_773 _dest_filename) {
	argv_3379 argv_1892 = argv_2901;
	if ((argv_3460 != argv_2893) && 
		(argv_3460 != argv_2897) &&
		(argv_3460 != argv_2895)   &&
		(argv_3460 != argv_2896) ) {
		argv_1892 = argv_2874;
	}
	else if ((_dest_filename == argv_2766) || (strlen(_dest_filename) == 0)) {
		argv_1892 = argv_2880;
	}
	else { // status and parameters are OK
		argv_692		= false;
		argv_1366		= true;
		argv_3208	= _dest_filename;

		argv_1892 = argv_3209 (_media, _timeout_second);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	none		
// @@
// @@ INPUT			:	
// @@ _files_allowed: bool: true if the packet is allowed to receive
// @@                 remote files,
// @@                 false otherwise.	
// @@
// @@ _timeout_second: argv_3379: the timeout associated with the read operation
// @@   on the argv_1043 argv_2234 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_874&: the communication channel to use for
// @@   the argv_1073 reception.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive either argv_1073, 
// @@ or a remote argv_1314.
// @@ in case of a argv_1314, the flag '_files_allowed' must have been 
// @@ enabled and the packet will generate a temporary argv_1364 for 
// @@ the received argv_1314, the user must then call the "argv_1675" 
// @@ function to obtain the argv_2697 of the temporary argv_1314 chosen 
// @@ by the packet.
// @@
// @@ CONTRACT 		:	
// @@ - packet's argv_3460 must be coherent with the operation.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3199 (argv_874& _media, argv_3379 _timeout_second, bool _files_allowed) {
	argv_3379 argv_1892 = argv_2901;
	if ((argv_3460 != argv_2893) && 
		(argv_3460 != argv_2897) &&
		(argv_3460 != argv_2895)   &&
		(argv_3460 != argv_2896) ) {
		argv_1892 = argv_2874;
	}
	else { // packet argv_3460 is OK
		argv_1366		= _files_allowed;
		if (argv_1366 == true) {
			argv_692	= true; // temp argv_1364 will be chosen randomly
		}

		if ((argv_692 == true) && (argv_3684 == "")) {
			argv_1892 = PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET;
		}
		else { // conditions are met for argv_1314 reception
			argv_1892 = argv_3209 (_media, _timeout_second);
		}
	}
	return (argv_1892);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_1675		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _file_received: bool&: set to true if a argv_1314 was received,
// @@                  set to false if argv_1073 was received instead.
// @@
// @@ _user_type: argv_3715&: the user argv_3695 associated with the 
// @@    received packet
// @@
// @@ _tmp_filename: string&: the argv_2697 of the temporary argv_1314
// @@   chosen by the argv_1000 if the '_file_received' flag
// @@   is true.
// @@ 
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the reception report
// @@ after a given packet was succesfully received.
// @@ As a packet can either receive some argv_1073 or a argv_1314,
// @@ the flag '_file_received' tells whether a argv_1314, or some
// @@ argv_1073 were received.
// @@ Then the argv_3794 is also returned.
// @@ and eventually if '_file_received' was set to true, it
// @@ means that a argv_1314 was received, and the argv_2697 of received
// @@ argv_1314 was automatically chosen by the argv_1000 itself, and
// @@ the argv_2697 of this temporary argv_1314 is returned via the
// @@ '_tmp_filename' argument.
// @@
// @@ CONTRACT 		:	
// @@ - argv_1000 must be in argv_2894 argv_3460.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_1675 (bool& _file_received, argv_3715& _user_type, string& _tmp_filename) {
	argv_3379 argv_1892 = argv_2901;
	if (argv_3460 != argv_2894) {
		argv_1892 = argv_2874;	
	}
	else { // status is OK to proceed
		_file_received = false;
		if (argv_3584 == argv_2903) {
			_file_received = true;
		}
		_user_type		= argv_3794;

		if (argv_3584 == argv_2903) {
			_tmp_filename = argv_3208;
			// reset the temporary argv_1364
			argv_3208 = "";
		}
		else { // the packet received was a argv_1073 packet, not a argv_1314 packet
			_tmp_filename = "";	
		}
	}
	return (argv_1892);
}



// lightweigh retrieval of the packet's user argv_3695.
void argv_1000::argv_1685 (argv_3715& _user_type) {
	_user_type = argv_3794;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3139		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to update the argv_1000 argv_3460 after
// @@ the packet was totally sent.
// @@ Notice that if the packet was a argv_1314 packet, then
// @@ the packet itself is followed by the remote argv_1314's content,
// @@ Thus in that case, the function allocates an IO argv_728.
// @@
// @@ Notice that the argv_1314 content (if any) is not considered
// @@ a part of the packet (it is outside of the argv_714).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3139 () {
	argv_3379 argv_1892 = argv_2901;
	if (argv_3584 == argv_2902) {
		argv_3460 = argv_2898;
	}
	else if (argv_3584 == argv_2903) {
		argv_3460 = argv_2899; 

		argv_3689		= 0;
		total_nb_remaining	= argv_1334;
		argv_2743				= 0;
		if (total_nb_remaining < argv_2831) {
			nb_remaining	= argv_1334;
		}
		else {
			nb_remaining	= argv_2831;
		}

		// allocate the IO argv_728
		if (argv_732 != argv_2766) {
			argv_1892 = argv_2876;
		}
		else { // IO argv_728 not allocated yet
			argv_732 = new (std::nothrow) argv_3715[argv_2834];
			if (argv_732 == argv_2766) {
				argv_1892 = argv_2882;
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3345		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_874&: the communication channel to use for
// @@   the transfert.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3335 a given argv_1314 through the 
// @@ '_media' communication channel.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3345 (argv_874& _media) {
	argv_3379 argv_1892			= argv_2901;
	argv_3717 actual_nb_sent	= 0;
	bool finished		= false;
	argv_3717 nb_tmp			= 0;
	argv_3717 prior_file_pos = 0;

	while ((finished == false) && (total_nb_remaining > 0)) {
		prior_file_pos = ftell (argv_1536);

		nb_tmp = fread (argv_732, 1, nb_remaining, argv_1536);
		if (nb_tmp != nb_remaining) {
			argv_1892		= argv_2870;
			finished	= true;
		}
		else { // fread succeeded
			argv_1892 = _media.argv_3336 (&argv_732[argv_2743], nb_remaining, actual_nb_sent);

			if (argv_1892 == argv_2262) {
				argv_2743			+= actual_nb_sent;
				nb_remaining	-= actual_nb_sent;

				if (nb_remaining == 0) {
					argv_3689		+= argv_2743;
					total_nb_remaining	-= argv_2743;

					if (total_nb_remaining == 0) {
						argv_3460		= argv_2898;
						finished	= true;
					}
					else { // the argv_1314 was not fully sent yet
						argv_2743	= 0;
						if (total_nb_remaining < argv_2831) {
							nb_remaining = total_nb_remaining;
						}
						else {
							nb_remaining = argv_2831;
						}
					}
				}
			}
			else { // argv_3335 error occured
				if (argv_1892 == argv_2244) { // reposition the argv_1314
					if (fseek (argv_1536, prior_file_pos, SEEK_SET) != 0) {
						argv_1892 = argv_2871;
					}
				}
				finished = true; 
			}
		}
	}

	if (argv_1892 == argv_2262) { // remap error argv_877 
		argv_1892 = argv_2901;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3133		
// @@
// @@ INPUT			:	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the necessary steps
// @@ after a argv_1314 was sent to a remote entity.
// @@ it does the following steps :
// @@ - argv_869 the argv_1314 descriptor of the argv_1314 that was sent.
// @@ - deallocate the IO argv_728.
// @@ - delete the argv_1314 sent if necessary
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3133 () {
	argv_3379 argv_1892 = argv_2901;
	if (argv_1536 != argv_2766) {
		if (fclose (argv_1536) != 0) {
			argv_1892 = argv_2868;
		}
		argv_1536 = argv_2766;

		// if the argv_1314 that was sent is to be deleted, then delete it
		if (argv_1117 == true) {
			if (argv_1116 (argv_1336.c_str()) == false) {
				if (argv_1892 == argv_2901) { // do not overwrite the argv_1043 error argv_877
					argv_1892 = argv_2864;
				}
			}
		}
	}

	if (argv_732 != argv_2766) {
		delete [] argv_732;
		argv_732 = argv_2766;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3335		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_874& : the communication channel to use
// @@  for transfert.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3335 the argv_1043 packet to
// @@ the entity whose connection was established by the 
// @@ '_media' argv_2785.
// @@ if the argv_2234 is in non-blocking mode, the argv_3335 function
// @@ may not be able to argv_3335 the entire packet in a row, thus
// @@ the caller may have to call the argv_3335 function several argv_3678.
// @@ To determine whether the packet was entirely sent, the user
// @@ must use the 'argv_3340' function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3335 (argv_874& _media) {
	argv_3379 argv_1892			= argv_2901;
	argv_3717 actual_nb_sent	= 0;
	if ((argv_3460 != argv_2892) && 
		(argv_3460 != argv_2900) && 
		(argv_3460 != argv_2899)) {
		argv_1892 = argv_2874;
	}
	else { // valid argv_3460 for this operation
		if (argv_3460 == argv_2892) { // argv_3335 operation not started yet
			argv_2743					= 0;
			argv_3717 header_size_tmp	= 0;
			argv_3717 body_size_tmp		= 0;
			argv_1892 = argv_1806.argv_1680 (header_size_tmp);
			if (argv_1892 == argv_2863) {
				argv_1892 = argv_714.argv_1680 (body_size_tmp);
				if (argv_1892 == argv_2863) {
					nb_remaining	= header_size_tmp + body_size_tmp;
					argv_3460			= argv_2900;
					argv_1892			= argv_2901;
				}
			}
		}

		// argv_3335 both argv_1806 & argv_714 in a row
		if ((argv_1892 == argv_2901) && (argv_3460 == argv_2900)) { 
			argv_1892 = _media.argv_3336 (&argv_728[argv_2743], nb_remaining, actual_nb_sent);
			if (argv_1892 == argv_2262) {
				argv_1892			= argv_2901;
				argv_2743			+= actual_nb_sent;
				nb_remaining	-= actual_nb_sent;
				if (nb_remaining == 0) {
					argv_1892 = argv_3139 ();
				}
			}
		}

		if ((argv_1892 == argv_2901) && (argv_3460 == argv_2899)) {
			argv_1892 = argv_3345 (_media);	
		}

		if ((argv_1892 == argv_2901) && (argv_3460 == argv_2898)) {
			argv_1892 = argv_3133 ();	
		}
	}

	if (argv_1892 == argv_2262) { // remap error argv_877
		argv_1892 = argv_2901;
	}
	else { // in case of error, we may have to argv_869 descriptors and delete argv_1314
		argv_3133 ();
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3123		
// @@
// @@ INPUT			:	
// @@ _filename: argv_773 : argv_2697 of the argv_1314 to argv_3335.	
// @@
// @@ _media: argv_874&: channel to use for transfert.
// @@
// @@ _user_type: argv_3695 to associate to the packet.
// @@ 
// @@ _del_file_after_send: bool: if set to true, then
// @@   the argv_1314 is deleted after it was sent to the peer.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 a given packet
// @@ to argv_3335 a given argv_1314.
// @@ Notice that most applications won't need to call
// @@ this function to argv_3335 a argv_1314, instead a call to the
// @@ the 'argv_3339' function will be appropriate.
// @@
// @@ This function is necessary for the event loop.
// @@
// @@ CONTRACT 		:	
// @@ - '_filename' parameter must not be a argv_2766 pointer.
// @@ - '_filename' must be the argv_2697 of an existing argv_1314.
// @@ - another call to argv_3339 must not be in progress.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3123 (argv_773 _filename, argv_874& _media, argv_3715 _user_type, bool _del_file_after_send) {
	argv_3379 argv_1892	= argv_2901;
	if (_filename == argv_2766) {
		argv_1892 = argv_2880;
	}
	else if (argv_1536 != argv_2766) {
		argv_1892 = argv_2875;
	}

	if (argv_804 (_filename) == false) {
		argv_1892 = argv_2883;
	}
	else if (argv_3460 != argv_2893) {
		argv_1892 = argv_2874;
	}
	else { // all pre-conditions are met to proceed
		argv_1117 = _del_file_after_send; // set the argv_1314 deletion flag
		argv_1336 = "";
		if (argv_1117 == true) {
			argv_1336 = _filename;
		}
		
		argv_1334 = argv_973 (_filename);
		if (argv_1334 == 0) { // failed, or argv_1314 is empty
			argv_1892 = argv_2867;
		}
		else { // open the argv_1314 to argv_3335
			argv_1536 = fopen (_filename, "rb");
			if (! argv_1536) {
				argv_1892 = argv_2869;
			}
			else { // argv_1314 was opened succesfully
				argv_3584		= argv_2903;
				argv_3794		= _user_type;
				argv_716		= 0;

				// here we argv_2830 the packet manually
				argv_1892 = argv_714.insert (argv_1334); // argv_714 contains only the argv_1314 size (4 argv_739)
				if (argv_1892 == argv_2863) {
					argv_1892 = argv_714.argv_1680 (argv_716);
				}
				
				if (argv_1892 == argv_2863) { // insert the system argv_3695 into the argv_1806
					argv_1892 = argv_1806.insert (argv_3584); 
				}

				if (argv_1892 == argv_2863) { // insert the user argv_3695 into the argv_1806
					argv_1892 = argv_1806.insert (argv_3794); 
				}

				if (argv_1892 == argv_2863) { // insert the argv_714 size into the argv_1806
					argv_1892 = argv_1806.insert (argv_716); 
				}

				if (argv_1892 == argv_2863) {
					argv_3460 = argv_2892;
				}
			}
		}
	}

	if (argv_1892 == argv_2863) { 
		argv_1892 = argv_2901; // remap error argv_877
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1000	
// @@
// @@ FUNCTION		:	argv_3339		
// @@
// @@ INPUT			:	
// @@ _filename: argv_773 : argv_2697 of the argv_1314 to argv_3335.	
// @@
// @@ _media: argv_874&: channel to use for transfert.
// @@
// @@ _user_type: argv_3695 to associate to the packet.
// @@ 
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2901 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3335 the argv_1314 whose argv_2697
// @@ was given as a parameter through the channel '_media'
// @@ 
// @@ Notice : called only once, even if it blocks, 
// @@          further calls are calls to argv_3335(), not argv_3339()
// @@
// @@ CONTRACT 		:	
// @@ - '_filename' parameter must not be a argv_2766 pointer.
// @@ - '_filename' must be the argv_2697 of an existing argv_1314.
// @@ - another call to argv_3339 must not be in progress.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1000::argv_3339 (argv_773 _filename, argv_874& _media, argv_3715 _user_type, bool _delete_file_after_send) {
	argv_3379 argv_1892	= argv_2901;

	argv_1892 = argv_3123 (_filename, _media, _user_type, _delete_file_after_send);
	if (argv_1892 == argv_2901) {
		argv_1892  = argv_3335 (_media); // perform the actual argv_3335
	}

	if (argv_1892 == argv_2863) { 
		argv_1892 = argv_2901; // remap error argv_877
	}
	return (argv_1892);
}

// when forwarding a packet that was used to transmit a argv_1314, we need
// to insert the argv_2697 of the temporary argv_1314 into the packet argv_714
// instead of the packet size, thus we need to recreate a argv_714 and argv_2830 it
// 
// <------------  HEADER  ------------------------><----------  BODY ------------------->
// -------------------------------------------------------------------------------------
// | argv_2903 | argv_3794 | argv_716 | argv_1334 (4) | file_content		|
// -------------------------------------------------------------------------------------
//
// changed to =>
//
// <------------  HEADER  ----------------------><----------  BODY -------------------->
// -------------------------------------------------------------------------------------
// | argv_2904 | argv_3794 | temp argv_1364	                       |
// -------------------------------------------------------------------------------------
void argv_1000::argv_868 (argv_1000& _clone_pck) {
	_clone_pck.reset ();
	_clone_pck.argv_3584 = argv_2904;
	_clone_pck.argv_3363 (argv_3794);
	_clone_pck.insert (argv_3208);
	_clone_pck.argv_2830 ();
}

void argv_1000::argv_867 (argv_1000& _clone_pck, argv_3715 _clone_state) {
	if (argv_3584 == argv_2903) {
		argv_868 (_clone_pck);	
	}
	else {
		memcpy (_clone_pck.argv_728, argv_728, argv_2831);
		_clone_pck.argv_732				=	argv_2766;
		_clone_pck.argv_3584				=	argv_3584; 
		_clone_pck.argv_3794				=	argv_3794; 
		_clone_pck.argv_716				=	argv_716; 
		_clone_pck.argv_1534					=	argv_2766; 
		_clone_pck.argv_1536					=	argv_2766; 
		_clone_pck.argv_1334				=	argv_1334; 
		_clone_pck.argv_3208		=	argv_3208; 
		_clone_pck.argv_3684				=	argv_3684; 
		_clone_pck.argv_3347				=	argv_3347; 
		_clone_pck.argv_1366			=	argv_1366; 
		_clone_pck.argv_692			=	argv_692; 
		_clone_pck.argv_1117	=	argv_1117; 
		_clone_pck.argv_1336			=	argv_1336; 
		// here we modify the argv_3460 so that we can simulate the fact that the
		// packet was read or packed.
		_clone_pck.argv_3460					=	_clone_state;
		_clone_pck.argv_2743					=	argv_2743; 
		_clone_pck.nb_remaining				=	nb_remaining; 
		_clone_pck.argv_3689			=	argv_3689; 
		_clone_pck.total_nb_remaining		=	total_nb_remaining; 
		_clone_pck.offset					=	offset; 

		_clone_pck.argv_1806.init	(&_clone_pck.argv_728[0], argv_2833);
		_clone_pck.argv_714.init	(&_clone_pck.argv_728[argv_2833], argv_716);

		if (argv_3460 == argv_2894) {
			_clone_pck.argv_1806.insert_fake_buffer (argv_2833);
			_clone_pck.argv_714.insert_fake_buffer (argv_716);
		}
	}
}

argv_3379 argv_1000::argv_1383 (argv_1000 * _rich_pck_ptr, argv_3715 _rich_pck_type, argv_3717 _src_index, argv_3717 _src_gen, argv_3717 _dest_index, argv_3717 _dest_gen) {
	argv_3379 argv_1892 = argv_2901;
	argv_1892 = _rich_pck_ptr->reset ();
	if (argv_1892 == argv_2901) {
		argv_1892 = _rich_pck_ptr->argv_3363 (_rich_pck_type);
		if (argv_1892 == argv_2901) {
			argv_1892 = _rich_pck_ptr->insert (_src_index);
			if (argv_1892 == argv_2901) {
				argv_1892 = _rich_pck_ptr->insert (_src_gen);
				if (argv_1892 == argv_2901) {
					argv_1892 = _rich_pck_ptr->insert (_dest_index);
					if (argv_1892 == argv_2901) {
						_rich_pck_ptr->insert (_dest_gen);
						if (argv_1892 == argv_2901) {
							/*
							{
								FILE * argv_1396 = fopen ("C:\\debug_packet_log.txt", "ab");
								if (argv_1396) {
									argv_1131 ("argv_1000::argv_1383", argv_1396);
									fclose (argv_1396);
								}
							}*/
							argv_1892 = _rich_pck_ptr->insert (argv_3794);
							if (argv_1892 == argv_2901) { // copy the payload
								argv_1892 = _rich_pck_ptr->argv_714.insert_buffer (&argv_728[argv_2833], argv_716);
								if (argv_1892 == argv_2863) {
									argv_1892 = _rich_pck_ptr->argv_2830 ();
								}
							}
						}
					}
				}
			}
		}
	}
	return (argv_1892);
}


// the caller is supposed to have retrieved the
// - src_index
// - src_generation
// - dest_index
// - dest_generation
// - inner_type
// from the rich packet before calling us
// thus the argv_1043 pointer points on the payload
argv_3379 argv_1000::argv_1385 (argv_1000 * _naked_packet_ptr, argv_3715 _naked_pck_type) {
	argv_3379 argv_1892 = argv_2901;
	argv_1892 = _naked_packet_ptr->reset ();
	if (argv_1892 == argv_2901) {
		argv_1892 = _naked_packet_ptr->argv_3363 (_naked_pck_type);
		if (argv_1892 == argv_2901) {
			/*
			{
				FILE * argv_1396 = fopen ("C:\\debug_packet_log.txt", "ab");
				if (argv_1396) {
					argv_1131 ("argv_1000::argv_1385", argv_1396);
					fclose (argv_1396);
				}
			}*/
			argv_3715 * current_pointer = argv_714.argv_1643 ();
			argv_3717 fake_header_size = argv_716 - ((4+4) + (4+4) + 1);
			argv_1892 = _naked_packet_ptr->argv_714.insert_buffer (current_pointer, fake_header_size);
			if (argv_1892 == argv_2863) {
				argv_1892 = _naked_packet_ptr->argv_2830 ();
			}
		}
	}
	return (argv_1892);
}


// this function is useful when the rich packet to be generated does not contain
// valid source and destination (case of broadcast), in that case we must argv_576 them
// by hand and then copy the payload to the destination packet.
// NOTICE: the caller is supposed to have retrieved the
// src, src_generation, 
// dest, dest_generation
// before calling us, thus the argv_1043 pointer points on the payload
argv_3379 argv_1000::argv_1384 (argv_1000 * _clone_pck_ptr, argv_3715 _outer_type, argv_3715 _payload_type, argv_3717 _src_index, argv_3717 _src_gen, argv_3717 _dest_index, argv_3717 _dest_gen) {
	argv_3379 argv_1892 = argv_2901;
	argv_1892 = _clone_pck_ptr->reset ();
	if (argv_1892 == argv_2901) {
		argv_1892 = _clone_pck_ptr->argv_3363 (_outer_type);
		if (argv_1892 == argv_2901) {
			argv_1892 = _clone_pck_ptr->insert (_src_index);
			if (argv_1892 == argv_2901) {
				argv_1892 = _clone_pck_ptr->insert (_src_gen);
				if (argv_1892 == argv_2901) {
					argv_1892 = _clone_pck_ptr->insert (_dest_index);
					if (argv_1892 == argv_2901) {
						argv_1892 = _clone_pck_ptr->insert (_dest_gen);
						if (argv_1892 == argv_2901) {
							argv_1892 = _clone_pck_ptr->insert (_payload_type);
							if (argv_1892 == argv_2901) { // argv_867 the payload itself
								argv_3717 current_consumed_body_size = 0;
								argv_714.argv_1680 (current_consumed_body_size);
								argv_3715 * current_position = argv_714.argv_1643 ();
								argv_1892 = _clone_pck_ptr->argv_714.insert_buffer (current_position, argv_716 - current_consumed_body_size);
								if (argv_1892 == argv_2863) {
									argv_1892 = _clone_pck_ptr->argv_2830 ();
								}
							}
						}
					}
				}
			}
		}
	}
	return (argv_1892);
}


void argv_1000::argv_1131 (argv_773 _msg, FILE * _fp) {
	fprintf (_fp, "---- packet '%s' -----\r\n", _msg);
	fprintf (_fp, "- argv_3584    =  %d\r\n", argv_3584);
	fprintf (_fp, "- argv_3794      =  %d\r\n", argv_3794);
	fprintf (_fp, "- argv_716      =  %d\r\n", argv_716);
	fprintf (_fp, "- argv_1334      =  %d\r\n", argv_1334);
	fprintf (_fp, "- argv_1366  =  %d\r\n", argv_1366);
	fprintf (_fp, "- argv_692 =  %d\r\n", argv_692);
	fprintf (_fp, "- argv_3460          =  %d\r\n", argv_3460);
	fprintf (_fp, "- argv_2743        =  %d\r\n", argv_2743);
	fprintf (_fp, "- nb_remaining   =  %d\r\n", nb_remaining);
	fprintf (_fp, "- nb_remaining   =  %d\r\n", nb_remaining);
	fprintf (_fp, "- argv_3689  =  %d\r\n", argv_3689);
	fprintf (_fp, "- total_nb_remaining  =  %d\r\n", total_nb_remaining);
	fprintf (_fp, "- offset         =  %d\r\n", offset);
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "%s argv_1806's coder", _msg);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1806.argv_1132 (argv_3681, _fp);

	argv_3409 (argv_3681, MAX_PATH, "%s argv_714's coder", _msg);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_714.argv_1132 (argv_3681, _fp, argv_716);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

