// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_269.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the argv_1073 structures
// @@ and functions to argv_2094 or create a given
// @@ plugin. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_327.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_980
// @@
// @@ FUNCTION		:	argv_980		
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
// @@ normal constructor of the 'argv_980' argv_2785.
// @@ it prepares the 'argv_980' argv_2785 for first use.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_980::argv_980 () {
	// avoid having these fields deleted by the reset function
	argv_3747		= (argv_3717) argv_2766;
	argv_3748		= 0;
	argv_3587				= argv_2766;	
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_980
// @@
// @@ FUNCTION		:	argv_980		
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
// @@ destructor of the 'argv_980' argv_2785.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_980::~argv_980 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_980
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
// @@ This function permits to bring the 'argv_980'
// @@ argv_2785 to it's initial argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_980::reset () {
	init_done						= false;
	argv_1123				= false;
	argv_2161.clear ();
	argv_2163.clear ();
	argv_967				= argv_2766;
	argv_1070					= argv_2766;
	argv_1689					= argv_2766;
	argv_3847				= argv_2766;
	argv_878.reset ();
	argv_3426					= 0;
	argv_1188					= 0;
	argv_3425					= argv_2766;

	if (argv_3587 != argv_2766) {
		argv_3587->argv_2723 ((argv_2157) argv_3747, argv_3748);
		argv_3747			= (argv_3717) argv_2766;
		argv_3748			= 0;
	}
	argv_3587						= argv_2766;

	argv_1102					= (argv_3717) argv_2766;
	argv_1239							= 0;
	argv_1247						= 0;
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_979		
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
// @@ normal constructor of the 'argv_979' argv_2785.
// @@ it prepares the 'argv_979' argv_2785 for first use.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_979::argv_979 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	~argv_979		
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
// @@ destructor of the 'argv_979' argv_2785.
// @@ it prepares the 'argv_979' argv_2785 for first use.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_979::~argv_979 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
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
// @@ This function permits to bring the 'argv_979'
// @@ argv_2785 to it's initial argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_979::reset () {
	dset.reset ();
	argv_715						= argv_2766;
	argv_2742					= 0;
	argv_716						= 0;

	argv_2697							= "";
	argv_1638					= 0;
	argv_3819					= 0;
	argv_3820					= 0;
	argv_3695							= argv_3050;
	argv_3592						= 0;
	argv_2050		= 0;
	argv_1010			= "";
	argv_2049			= 0;
	argv_1009			= "";
	argv_2691.clear ();
	argv_2746				= 0;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_792 *: pointer on the argv_2785 containing
// @@     all the global argv_1073.
// @@
// @@ _systool_ptr: argv_3449 *: pointer on an argv_2785 that contains
// @@    all the system dependant routines.
// @@
// @@ _compress_tool_ptr: argv_767 *: pointer on an argv_2785 that
// @@    contains the routines that permit to argv_962/argv_3744
// @@    a given argv_728.
// @@
// @@ _cypher_tool_ptr: argv_774 *: pointer on an argv_2785 that
// @@    contains the routines that permit to cipher/decipher
// @@    a given argv_728.
// @@
// @@ _xmem_manager_ptr: argv_1061 *: pointer on an argv_2785 that
// @@ contains the routines to obtain aligned blocks of virtual memory.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 the argv_979
// @@ argv_2785 by giving it the argv_595 of all necessary
// @@ objects.
// @@ Notice that this function must be called only once
// @@ prior to first use.
// @@
// @@ CONTRACT 		: 
// @@ - '_systool_ptr' parameter must not be a argv_2766 pointer.
// @@ - '_glob_data_ptr' parameter must not be a argv_2766 pointer.
// @@ - '_compress_tool_ptr' parameter must not be a argv_2766 pointer.
// @@ - '_cypher_tool_ptr' parameter must not be a argv_2766 pointer.
// @@ - '_xmem_mgr_ptr' parameter must not be a argv_2766 pointer.
// @@ - init must not have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::init (argv_792 * _glob_data_ptr, argv_3449 * _systool_ptr, argv_767 * _compress_tool_ptr, argv_774 * _cypher_tool_ptr, argv_1061 * _xmem_manager_ptr) {
	argv_3379 argv_1892 = argv_3042;
	if ((_systool_ptr==argv_2766) || (_compress_tool_ptr==argv_2766) || (_cypher_tool_ptr==argv_2766) || (_glob_data_ptr == argv_2766) || (_xmem_manager_ptr==argv_2766)) {
		argv_1892 = argv_3022;
	}
	else if (dset.init_done == true) {
		argv_1892 = argv_3019;
	}
	else {
		dset.argv_1689			= _glob_data_ptr;
		dset.argv_3587			= _systool_ptr;
		dset.argv_967		= _compress_tool_ptr;
		dset.argv_1070		= _cypher_tool_ptr;
		dset.argv_3847		= _xmem_manager_ptr;	
		dset.init_done				= true;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_3284		
// @@
// @@ INPUT			:
// @@ _value: argv_3717: the integer argv_3807 to save to plugin argv_1314.
// @@
// @@ _fp_dest: FILE *: argv_1314 pointer of the destination argv_1314
// @@   containing the generated plugin.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function save a given integer into the plugin
// @@ argv_1314 that was opened and accessible via the '_fp_dest'
// @@ parameter.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_3284 (argv_3717 _value, FILE * _fp_dest) {
	argv_3379 argv_1892 = argv_3042;
	argv_688 atyp;
	atyp.argv_691	= _value;
	argv_3717 argv_2743 = fwrite (&atyp.argv_685[0], 1, dset.argv_1689->int_size, _fp_dest);
	if (argv_2743 != dset.argv_1689->int_size) {
		argv_1892 = argv_3039;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_3285		
// @@
// @@ INPUT			:
// @@ _str: argv_773: the string to save to the plugin argv_1314.
// @@
// @@ _fp_dest: FILE *: argv_1314 pointer of the destination argv_1314
// @@   containing the generated plugin.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to save a given string to
// @@ the plugin argv_1314.
// @@ Notice that the string is saved along with it's size
// @@ for a fastest retrieval and also without the trailing '\0'
// @@ character. So the actual steps are :
// @@ - save the string's length
// @@ - save the string itself (without the \0)
// @@
// @@ CONTRACT 		:	
// @@ - '_str' parameter must not be an empty string.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_3285 (argv_773 _str, FILE * _fp_dest) {
	argv_3379 argv_1892 = argv_3042;
	argv_3717 his_size = strlen(_str);
	if (his_size == 0) {
		argv_1892 = argv_3041;
	}
	else {
		argv_1892 = argv_3284 (his_size, _fp_dest);
		if (argv_1892 == argv_3042) {
			argv_3717 argv_2743 = fwrite (&_str[0], 1, his_size, _fp_dest);
			if (argv_2743 != his_size) {
				argv_1892 = argv_3017;
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_987		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_3717: 32 bit pointer on the mmaped argv_1314 where to
// @@   find argv_1073.
// @@
// @@ _file_size: argv_3717: size of the mmaped argv_1314 where to find argv_1073.
// @@
// @@ _msg: argv_773: argv_2271 that must be displayed to log argv_1314 in 
// @@   of error.
// @@
// @@ OUTPUT		:	
// @@ _extracted_value: argv_3717&: the integer argv_3807 extracted from
// @@   mmapped argv_1314 whose first byte is denoted by the '_file_ptr'
// @@   parameter.
// @@
// @@ IO			:	
// @@ _current_offset: argv_3717&: argv_3807/argv_3266 argument that permits to
// @@   use the argv_1043 offset of the argv_1314 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function just consumes 4 argv_739 from the mmaped argv_1314 
// @@ whose first byte is denoted by the parameter '_file_ptr'
// @@ and then maps these 4 argv_739 into an integer argv_3807 that
// @@ is returned to the caller via the '_extracted_value' 
// @@ parameter.
// @@
// @@ CONTRACT 		: 
// @@ - the sum of _current_offset + int size must not exceed
// @@   the limit of the mmapped argv_1314 '_file_size'.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_987 (argv_3717 _file_ptr, argv_3717 _file_size, argv_3717& _current_offset, argv_773 _msg, argv_3717& _extracted_value) {
	argv_3379 argv_1892 = argv_3042;
	if ((_current_offset + dset.argv_1689->int_size) >= _file_size) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: overflow while parsing integer");
		argv_1892 = argv_3032;	
	}
	else {
		argv_688 atyp;
		argv_3715 * cptr = (argv_3715 *) _file_ptr;
		memcpy (&atyp.argv_685[0], (argv_3715 *) &cptr[_current_offset], dset.argv_1689->int_size);
		_current_offset += dset.argv_1689->int_size;
		_extracted_value = atyp.argv_691;
	}

	if (argv_1892 != argv_3042) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: parse error while consuming '", _msg, "'");
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_988		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_3717: 32 bit pointer on the mmaped argv_1314 where to
// @@   find argv_1073.
// @@
// @@ _file_size: argv_3717: size of the mmaped argv_1314 where to find argv_1073.
// @@
// @@ _msg: argv_773: argv_2271 that must be displayed to log argv_1314 in 
// @@   of error.
// @@
// @@ OUTPUT		:	
// @@ _extracted_str: string&: string extracted from the plugin argv_1314.	
// @@
// @@ IO			:
// @@ _current_offset: argv_3717&: argv_3807/argv_3266 argument that permits to
// @@   use the argv_1043 offset of the argv_1314 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 a string from the plugin
// @@ argv_1314, the argv_1043 offset in the plugin argv_1314 '_current_offset'
// @@ is used and then changed accordingly.
// @@ Notice that a string is not like a C string : it is 
// @@ composed of 2 fields :
// @@ - the string's length (4 argv_739, i.e an integer)
// @@ - the string itself, not terminated by '\0' character.
// @@ thus to argv_2094 a string, the steps are :
// @@ - argv_986 an integer (the string's length)
// @@ - argv_986 the string itself
// @@
// @@ CONTRACT 		: 
// @@ - the sum of _current_offset + int size + string size 
// @@   must not exceed the limit of the mmapped argv_1314 '_file_size'.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_988  (argv_3717 _file_ptr, argv_3717 _file_size, argv_3717& _current_offset, argv_773 _msg, string& _extracted_str) {
	argv_3379 argv_1892 = argv_3042;
	// parse the string's length
	argv_3717 string_size;
	_extracted_str = "";
	argv_1892 = argv_987 (_file_ptr, _file_size, _current_offset, "string's length field", string_size);
	if (argv_1892 != argv_3042) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: parse error while consuming string's length");
	}
	else if (string_size >= argv_2213) { 
		argv_1892 = argv_3040;
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: parse error : string length is too long : ", string_size);
	}
	else if (string_size == 0) {
		argv_1892 = argv_3041;
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: parse error : string length is too short : ", string_size);
	}
	else if ((_current_offset + string_size) >= _file_size) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: parsing string would overflow the argv_1314 !");
		argv_1892 = argv_3032;
	}
	else { // ok to argv_986 the string
		char tabtmp[argv_2213 + 1];
		argv_3715 * cptr = (argv_3715 *) _file_ptr;
		memcpy (&tabtmp[0], &cptr[_current_offset], string_size);
		tabtmp[string_size] = '\0';
		_current_offset += string_size; 
		_extracted_str = tabtmp;
	}

	if (argv_1892 != argv_3042) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: parse error while consuming '", _msg, "'");
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_2842		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_3717: 32 bit pointer on the mmaped argv_1314 where to
// @@   find argv_1073.
// @@
// @@ _file_size: argv_3717: size of the mmaped argv_1314 where to find argv_1073.
// @@
// @@ _filename: argv_773: argv_2697 of the plugin argv_1314 being parsed.
// @@
// @@
// @@ OUTPUT		:	
// @@
// @@ IO			:	
// @@ _current_offset: argv_3717&: argv_3807/argv_3266 argument that permits to
// @@   use the argv_1043 offset of the argv_1314 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse the argv_1806 of a given plugin
// @@ argv_1314. the argv_1806's fields are :
// @@ - the plugin argv_2697 (string)
// @@ - the argv_1637 date (argv_3717)
// @@ - the plugin major version (argv_3717)
// @@ - the plugin minor version (argv_3717)
// @@ - the plugin argv_3695 (argv_3717).
// @@ - the plugin target argv_3695 (argv_3717)
// @@ - the length before uncompressing the argv_714 (argv_3717)
// @@ - the crc of the argv_714 before argv_3744 (string)
// @@ - the length after argv_3744 the argv_714 (argv_3717)
// @@ - the crc of the argv_714 after argv_3744 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_2697 (a plugin argv_2697 as a string)
// @@ }
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_2842 (argv_3717 _file_ptr, argv_3717 _file_size, argv_773 _filename, argv_3717& _current_offset) {
	argv_3379 argv_1892 = argv_3042;
	// argv_2697
	argv_1892 = argv_988 (_file_ptr, _file_size, _current_offset, "plugin argv_2697", argv_2697);
	if (argv_1892 == argv_3042) { // argv_1637 date
		argv_1892 = argv_987 (_file_ptr, _file_size, _current_offset, "argv_1637 date", argv_1638);
	}
	if (argv_1892 == argv_3042) { // version Major
		argv_1892 = argv_987 (_file_ptr, _file_size, _current_offset, "version Major", argv_3819);
	}
	if (argv_1892 == argv_3042) { // version Minor
		argv_1892 = argv_987 (_file_ptr, _file_size, _current_offset, "version Minor", argv_3820);
	}
	if (argv_1892 == argv_3042) { // plugin argv_3695 
		argv_1892 = argv_987 (_file_ptr, _file_size, _current_offset, "plugin argv_3695", argv_3695);
	}
	if (argv_1892 == argv_3042) { // plugin target argv_3695
		argv_1892 = argv_987 (_file_ptr, _file_size, _current_offset, "plugin target argv_3695", argv_3592);
	}
	if (argv_1892 == argv_3042) { // length before argv_3744 
		argv_1892 = argv_987 (_file_ptr, _file_size, _current_offset, "length before argv_3744", argv_2050);
	}
	if (argv_1892 == argv_3042) { // crc before argv_3744
		argv_1892 = argv_988 (_file_ptr, _file_size, _current_offset, "CRC before argv_3744", argv_1010);
	}
	if (argv_1892 == argv_3042) { // length after argv_3744
		argv_1892 = argv_987 (_file_ptr, _file_size, _current_offset, "length after argv_3744", argv_2049);
	}
	if (argv_1892 == argv_3042) { // crc after argv_3744
		argv_1892 = argv_988 (_file_ptr, _file_size, _current_offset, "CRC after argv_3744", argv_1009);
	}
	if (argv_1892 == argv_3042) { // number of dependancy
		argv_1892 = argv_987 (_file_ptr, _file_size, _current_offset, "number of dependancy", argv_2742);
	} 
	if (argv_1892 == argv_3042) {
		if (argv_2742 >= argv_2212) {
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: too many dependancies : ", argv_2742);
			argv_1892 = argv_3043;
		}
		else {
			// argv_2094 all dependancies
			string nametmp;
			for (argv_3717 i=0 ; i<argv_2742 ; i++) {
				argv_1892 = argv_988 (_file_ptr, _file_size, _current_offset, "nth dependancy", nametmp);
				if (argv_1892 != argv_3042) {
					dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: failed to parse dependancy ", i);
					break;
				}
				else {
					dset.argv_1918 = dset.argv_2161.find (nametmp);
					if (dset.argv_1918 != dset.argv_2161.end()) {
						argv_1892 = argv_3011;
						dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: dependancy already defined : ", nametmp.c_str());
						break;
					}
					else { // ok to argv_576 this new dependancy
						dset.argv_2161[nametmp] = true;
					}
				}
			}
		}
	}

	if (argv_1892 == argv_3042) { /// argv_2094 the list of exported symbols
		// argv_986 the list size (as a argv_3717)
		argv_1892 = argv_987 (_file_ptr, _file_size, _current_offset, "number of exported symbol", argv_2746);
		if (argv_1892 == argv_3042) { // argv_986 the list itself
			string exported_symbol_name;
			for (argv_3717 i=0 ; i<argv_2746 ; i++) {
				argv_1892 = argv_988 (_file_ptr, _file_size, _current_offset, "exported symbol argv_2697", exported_symbol_name);
				if (argv_1892 != argv_3042) {
					break;
				}
				else { 
					dset.argv_1919 = dset.argv_2163.find (exported_symbol_name);
					if (dset.argv_1919 != dset.argv_2163.end()) {
						dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: exported symbol already defined : ", exported_symbol_name.c_str());
						argv_1892 = argv_3013;	
						break;
					}
					else {
						dset.argv_2163[exported_symbol_name] = true;
					}
				}
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_1140		
// @@
// @@ INPUT			:
// @@ _filename: argv_773: argv_2697 of the plugin argv_1314 whose argv_1806
// @@   is to be displayed.
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
// @@ This function permits to argv_1130 to log argv_1314
// @@ the informations contained in the argv_1806 of
// @@ the argv_2117 plugin.
// @@ This function is for debug purpose only.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_979::argv_1140 (argv_773 _filename) {
#if defined (DEBUG_PLUGIN_LOADER)
	string type_str;
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "===== plugin argv_1806 of argv_1314 : ", _filename, " ========");
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "argv_2697                       : ", argv_2697.c_str());
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "argv_1637 date            : ", argv_1638);
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "version Major              : ", argv_3819);
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "version Minor              : ", argv_3820);
	type_str = argv_3044 (argv_3695);
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "argv_3695                       : ", type_str.c_str());
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "target argv_3695                : ", argv_3592);
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "length before argv_3744   : ", argv_2050);
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "CRC before argv_3744      : ", argv_1010.c_str());
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "length after argv_3744    : ", argv_2049);
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "CRC after argv_3744       : ", argv_1009.c_str());
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "number of dependancies     : ", argv_2742);
	
	for (dset.argv_1918=dset.argv_2161.begin() ; dset.argv_1918 != dset.argv_2161.end() ; ++dset.argv_1918) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1086, "   - ", dset.argv_1918->first.c_str());
	}

	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "number of exported symbols : ", dset.argv_2163.size());
	for (dset.argv_1919 = dset.argv_2163.begin() ; dset.argv_1919 != dset.argv_2163.end() ; ++dset.argv_1919) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1086, "   - ", dset.argv_1919->first.c_str());
	}
#endif // #if defined (DEBUG_PLUGIN_LOADER)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_2839		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_3717: 32 bit pointer on the mmaped argv_1314 where to
// @@   find argv_1073.
// @@
// @@ _file_size: argv_3717: size of the mmaped argv_1314 where to find argv_1073.
// @@
// @@ _filename: argv_773: argv_2697 of the plugin argv_1314 being parsed.
// @@
// @@ OUTPUT		:	
// @@
// @@ IO			:	
// @@ _current_offset: argv_3717&: argv_3807/argv_3266 argument that permits to
// @@   use the argv_1043 offset of the argv_1314 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2094 a given COFF argv_1314 which can
// @@ be found right after the argv_1806 of the plugin.
// @@ The COFF argv_1314 itself is the argv_714 of the plugin.
// @@
// @@ CONTRACT 		: 
// @@ - '_current_offset' + argv_716 must be lower 
// @@   or equal to '_file_size'
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_2839 (argv_3717 _file_ptr, argv_3717 _file_size, argv_773 _filename, argv_3717& _current_offset) {
	argv_3379 argv_1892   = argv_3042;
	argv_715	= (argv_3715 *) _file_ptr;
	argv_716	= argv_2049;

	if ((_current_offset + argv_716) >= _file_size) {
		argv_1892 = argv_3032; 
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: overflow while parsing argv_714 of plugin : ", argv_2697.c_str());	
	}
	else {
		argv_3715 * true_file_ptr   = (argv_3715 *) _file_ptr;
		argv_3715 * body_start_addr = &true_file_ptr[_current_offset];
		argv_3715 * argv_1235     = &true_file_ptr[_file_size];	
		argv_3717   argv_716       = (argv_3717) argv_1235 - (argv_3717) body_start_addr; 

		argv_1892 = dset.argv_878.init (dset.argv_1689, dset.argv_3587, dset.argv_967, dset.argv_1070, body_start_addr, argv_716, dset.argv_3847);
		if (argv_1892 != argv_894) {
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_2839 - argv_763::init failed ! - plugin was : ", argv_2697.c_str());
		}
		else {
			argv_1892 = dset.argv_878.argv_2094 ();
			if (argv_1892 == argv_894) {
				argv_1892 = argv_3042;
			}
			else {
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_2839 - failed to argv_2094 COFF argv_1314, plugin was : ", argv_2697.c_str());
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_2846		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_3717: 32 bit pointer on the mmaped argv_1314 where to
// @@   find argv_1073.
// @@
// @@ _file_size: argv_3717: size of the mmaped argv_1314 where to find argv_1073.
// @@
// @@ _filename: argv_773: argv_2697 of the plugin argv_1314 being parsed.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse a given plugin argv_1314.
// @@ a plugin argv_1314 is composed of two parts :
// @@ - a argv_1806
// @@ - a argv_714
// @@ The argv_1806 contains several fields :
// @@ - the plugin argv_2697 (string)
// @@ - the argv_1637 date (argv_3717)
// @@ - the plugin major version (argv_3717)
// @@ - the plugin minor version (argv_3717)
// @@ - the plugin argv_3695 (argv_3717).
// @@ - the length before uncompressing the argv_714 (argv_3717)
// @@ - the crc of the argv_714 before argv_3744 (string)
// @@ - the length after argv_3744 the argv_714 (argv_3717)
// @@ - the crc of the argv_714 after argv_3744 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_2697 (a plugin argv_2697 as a string)
// @@ }
// @@
// @@ The argv_714 can be found right after the argv_1806.
// @@ The argv_714 is actually a COFF argv_1314 appended to the argv_714.
// @@ (see www.microsoft.com/whdc/system/platform/firmware/PECOFF.mspx)
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_2846 (argv_3717 _file_ptr, argv_3717 _file_size, argv_773 _filename) {
	argv_3379 argv_1892 = argv_3042;

	argv_3717 body_offset = 0;
	argv_1892 = argv_2842 (_file_ptr, _file_size, _filename, body_offset);
	if (argv_1892 != argv_3042) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: failed to parse argv_1806 of plugin : ", _filename);
	}
	else {
#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1689->argv_2146.argv_2142 (argv_1086, "parsed argv_1806 succesfully");
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		argv_1140 (_filename);

#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1689->argv_2146.argv_2142 (argv_1086, "parsing COFF argv_714 of argv_1314 : ", _filename);
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		argv_1892 = argv_2839 (_file_ptr, _file_size, _filename, body_offset);
		if (argv_1892 != argv_3042) {
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: failed to parse argv_714 of plugin : ", _filename);
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_2959		
// @@
// @@ INPUT			:
// @@ _filename: argv_773: argv_2697 of the plugin argv_1314 to argv_2094.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2094 the plugin argv_1314 whose argv_2697
// @@ is stored into the parameter '_filename'.
// @@ Notice that as plugins are encrypted and compressed, the
// @@ following steps are performed :
// @@ - decipher the plugin argv_1314 into memory
// @@ - argv_3744 the deciphered argv_1314 into memory as well
// @@ - parse the plugin argv_1314 :
// @@   - argv_2094 the argv_1806
// @@   - argv_2094 and parse the argv_714
// @@
// @@ Notice that the argv_1314 to argv_2094 is supposed to have been
// @@ mapped into memory by another function prior to this call.
// @@
// @@ CONTRACT 		:	none 
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_2959 (argv_794 * _gmp_ptr, argv_1026& _public_key, argv_773 _filename) {
	argv_3379 argv_1892 = argv_3042;

	// 2. decypher the argv_1314 into virtual memory
	{ 
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "argv_2959: argv_3587=0x%X, argv_3425=0x%X, argv_3426=%u, argv_1102=0x%X, argv_1188=%u", (argv_3717)dset.argv_3587, (argv_3717)dset.argv_3425, dset.argv_3426, (argv_3717) dset.argv_1102, dset.argv_1188);
		argv_3681[MAX_PATH - 1] = '\0';
		dset.argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);	
	}

	argv_1892 = dset.argv_1070->argv_1101 (dset.argv_3587, _gmp_ptr, _public_key, (argv_3717) dset.argv_3425, dset.argv_3426, dset.argv_1102, dset.argv_1188);
	if (argv_1892 != argv_1068) {
		string serror = argv_1240 (argv_1892);
		argv_3409 (dset.argv_3681, MAX_PATH, "+++ ERROR: argv_979::argv_2959: decypher_file failed for argv_1314 : %s (errno: %s)", _filename, serror.c_str());
		dset.argv_3681[MAX_PATH - 1] = '\0';
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, dset.argv_3681);
	}
	else {
#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1689->argv_2146.argv_2142 (argv_1086, "plugin deciphered succesfully");
#endif // #if defined (DEBUG_PLUGIN_LOADER)

		// 3. argv_3744 the argv_1314 into virtual memory
		argv_1892 = dset.argv_967->argv_3746 (dset.argv_3587, (argv_3717) dset.argv_1102, dset.argv_3426, dset.argv_3747, dset.argv_3748);
		if (argv_1892 != argv_2029) {
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_2959: uncompress_file failed for argv_1314 : ", _filename);	
		}
		else {
#if defined (DEBUG_PLUGIN_LOADER)
			dset.argv_1689->argv_2146.argv_2142 (argv_1086, "plugin uncompressed succesfully");
#endif // #if defined (DEBUG_PLUGIN_LOADER)
			// 4. parse and argv_2094 the argv_1073 into a container
			argv_1892 = argv_2846 (dset.argv_3747, dset.argv_3748, _filename);
			if (argv_1892 != argv_3042) {
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_2959: argv_2846 failed for argv_1314 : ", _filename);
			}
			dset.argv_3587->argv_2719 ();
			//argv_715				= (argv_3715 *) dset.argv_1102;
			argv_2049 = dset.argv_3748;
			// dset.argv_3587->argv_2723 ((argv_2157) dset.argv_3747);
		}

#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1689->argv_2146.argv_2142 (argv_1086, "freeing the decyphered argv_1314 from virtual memory...");
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_3587->argv_2723 ((argv_2157) dset.argv_1102, dset.argv_1188);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_2960		
// @@
// @@ INPUT			:
// @@ _fp_dest: FILE *: descriptor on a argv_1314 opened
// @@   with write access to save the plugin.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a given plugin
// @@ using the argv_1073 contained in the argv_979 itself.
// @@ a plugin argv_1314 is composed of two parts :
// @@ - a argv_1806
// @@ - a argv_714
// @@ The argv_1806 contains several fields :
// @@ - the plugin argv_2697 (string)
// @@ - the argv_1637 date (argv_3717)
// @@ - the plugin major version (argv_3717)
// @@ - the plugin minor version (argv_3717)
// @@ - the plugin argv_3695 (argv_3717).
// @@ - the plugin target argv_3695 (argv_3717) , i.e: PE, TXT, BIN
// @@ - the length before uncompressing the argv_714 (argv_3717)
// @@ - the crc of the argv_714 before argv_3744 (string)
// @@ - the length after argv_3744 the argv_714 (argv_3717)
// @@ - the crc of the argv_714 after argv_3744 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_2697 (a plugin argv_2697 as a string)
// @@ }
// @@ - the number of exported symbols (argv_3717)
// @@ {
// @@	- the exported symbol argv_2697 (as a string)
// @@ }
// @@
// @@ The argv_714 must be appended right after the argv_1806.
// @@ The argv_714 is actually a COFF argv_1314 appended to the argv_714.
// @@ (see www.microsoft.com/whdc/system/platform/firmware/PECOFF.mspx)
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_2960 (FILE * _fp_dest) {
	argv_3379 argv_1892 = argv_3042;

	// === save the argv_1806 =====
	// argv_2697 (string)
	argv_1892 = argv_3285 (argv_2697.c_str(), _fp_dest); 	
	if (argv_1892 == argv_3042) { // argv_1637 date (int)
		argv_1892 = argv_3284 (argv_1638, _fp_dest);
	}
	if (argv_1892 == argv_3042) { // version Major (int)
		argv_1892 = argv_3284 (argv_3819, _fp_dest);
	}
	if (argv_1892 == argv_3042) { // version Minor (int)
		argv_1892 = argv_3284 (argv_3820, _fp_dest);
	}
	if (argv_1892 == argv_3042) { // plugin argv_3695 (int)
		argv_1892 = argv_3284 (argv_3695, _fp_dest);
	}
	if (argv_1892 == argv_3042) { // plugin target argv_3695 (int)	 
		argv_1892 = argv_3284 (argv_3592, _fp_dest);
	}
	if (argv_1892 == argv_3042) { // argv_2050 (int)
		argv_1892 = argv_3284 (argv_2050, _fp_dest);
	}
	if (argv_1892 == argv_3042) { // argv_1010 (string)
		argv_1892 = argv_3285 (argv_1010.c_str(), _fp_dest);
	}
	if (argv_1892 == argv_3042) { // argv_2049 (int)
		argv_1892 = argv_3284 (argv_2049, _fp_dest);
	}
	if (argv_1892 == argv_3042) { // argv_1009 (string)
		argv_1892 = argv_3285 (argv_1009.c_str(), _fp_dest);
	}
	if (argv_1892 == argv_3042) { // number of dependancy (int)
		argv_1892 = argv_3284 (dset.argv_2161.size(), _fp_dest);
	}
	if (argv_1892 == argv_3042) { // all dependancies (string)
		map<string, bool>::iterator iter_local;
		for (iter_local=dset.argv_2161.begin() ; iter_local != dset.argv_2161.end() ; ++iter_local) {
			argv_1892 = argv_3285 (iter_local->first.c_str(), _fp_dest);
			if (argv_1892 != argv_3042) {
				break;	
			}
		}
	}

	if (argv_1892 == argv_3042) { // all exported symbols
		argv_3717 argv_2744 = dset.argv_2163.size ();
		argv_1892 = argv_3284 (argv_2744, _fp_dest);
		if (argv_1892 == argv_3042) {
			for (dset.argv_1919 = dset.argv_2163.begin() ; dset.argv_1919 != dset.argv_2163.end() ; ++dset.argv_1919) {
				argv_1892 = argv_3285 (dset.argv_1919->first.c_str(), _fp_dest);
				if (argv_1892 != argv_3042) {
					break;	
				}
			}
		}
	}

	// === save the argv_714 ===
	if (argv_1892 != argv_3042) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_2960 - failed to save plugin argv_1806 !");
	}
	else {
		argv_3717 argv_2743 = fwrite (dset.argv_3425, 1, dset.argv_3426, _fp_dest);
		if (argv_2743 != dset.argv_3426) {
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_2960 - failed to write argv_714 to argv_1314 !");
			argv_1892 = argv_3010;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_1626		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:
// @@ - map<string, argv_979 *>&: _map_plugin_name: each plugin, with 
// @@   it's associated argv_2697
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a map that associates 
// @@ plugin names with their associated argv_763 using 
// @@ as an input a plugin dependancy list, that is stored
// @@ into a map.
// @@ The container that associates each plugin argv_2697 with
// @@ their coff loader is called the argv_2691 map.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_1626 (map<string, argv_979 *>&	_map_plugin_name) {
	argv_3379 argv_1892 = argv_3042;
	map<string, bool>::iterator				iter_depend;
	map<string, argv_979 *>::iterator	iter_name;

	argv_2691.clear ();
	// lookup the argv_763 associated with each dependancy of the argv_1043 plugin and argv_576 them
	// into the argv_2691 map for symbol resolution.
	for (iter_depend=dset.argv_2161.begin() ; iter_depend != dset.argv_2161.end() ; ++iter_depend) {
		iter_name = _map_plugin_name.find (iter_depend->first);	
		if (iter_name == _map_plugin_name.end()) {
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_1626 -  plugin not found ! - argv_2697 was : ", iter_depend->first.c_str());
			argv_1892 = argv_3051;
			break;
		}
		else {
			// associate the plugin argv_2697 and it's argv_763
			argv_2691[iter_depend->first] = iter_name->second->argv_1640 ();
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_2098		
// @@
// @@ INPUT			:
// @@ _filename: argv_773: argv_2697 of the plugin argv_1314 to argv_2094.
// @@
// @@ _gmp_ptr: argv_794 * : pointer on an argv_2785 containing
// @@   all necessary functions to work with the GMP.
// @@ 
// @@ _public_key: argv_1026&: the public argv_2007 to use for
// @@   plugin decipher.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2094 a given plugin argv_1314.
// @@ This plugin argv_1314's argv_2697 is contained in the '_filename'
// @@ parameter.
// @@ Notice that as plugins are encrypted and compressed, the
// @@ to argv_2094 a plugin argv_1314, the following steps are argv_1185 :
// @@ - mmap the plugin argv_1314
// @@ - decipher the plugin argv_1314 into memory
// @@ - argv_3744 the deciphered argv_1314 into memory as well
// @@ - parse the plugin argv_1314 :
// @@   - argv_2094 the argv_1806
// @@   - argv_2094 and parse the argv_714
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a argv_2766 pointer
// @@ - '_filename' parameter must not be an empty string
// @@ - '_filename' parameter must contains the argv_2697 of an
// @@   existing and accessible argv_1314 (read access).
// @@ - the 'init' function must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_2098 (argv_794 * _gmp_ptr, argv_1026& _public_key, argv_773 _filename) {
	argv_3379 argv_1892 = argv_3042;
#if defined (DEBUG_PLUGIN_LOADER)
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "processing plugin : ", _filename);
#endif // #if defined (DEBUG_PLUGIN_LOADER)

	if (dset.init_done == false) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_2098 - illegal call before init !");
		argv_1892 = argv_3021;
	}
	else { // argv_3460 is OK for the operation
		if ((_filename == argv_2766) || (strlen(_filename)==0) || (_gmp_ptr==argv_2766)) {
			dset.argv_1689->argv_2146.argv_2142 (argv_1086, "argv_979::argv_2098 - @4");
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_2098 - invalid parameter !");
			argv_1892 = argv_3022;		
		}
		else if (argv_1316 (dset.argv_1689, dset.argv_3587, _filename) == false) {
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_2098 - no such plugin : ", _filename);
			argv_1892 = argv_3031;
		}
		else { // parameters are ok, and the argv_1314 to argv_2094 exists
			argv_789	mmap_src;

			// 1. mmap the argv_1314 to argv_2094 to memory
			bool bret = mmap_src.argv_2346 (_filename, argv_2348, dset.argv_3425, dset.argv_3426);
			if (bret == false) {
				mmap_src.argv_1659 (dset.argv_1239, dset.argv_1247);
				argv_3409 (dset.argv_3681, MAX_PATH, "argv_979::argv_2098(%s) failed ! - dset.argv_1247=%d, dset.argv_1239=%d", _filename, dset.argv_1247, dset.argv_1239);
				dset.argv_3681[MAX_PATH - 1] = '\0';
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, dset.argv_3681);
				argv_1892 = argv_3030;
			}
			else {
#if defined (DEBUG_PLUGIN_LOADER)
				argv_3409 (dset.argv_3681, MAX_PATH, "plugin mmapped succesfully @0x%X (argv_1314 size : %d)", dset.argv_3425, dset.argv_3426);
				dset.argv_1689->argv_2146.argv_2142 (argv_1086, dset.argv_3681);
#endif // #if defined (DEBUG_PLUGIN_LOADER)
				argv_1892 = argv_2959 (_gmp_ptr, _public_key, _filename);
				mmap_src.argv_873 ();
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_3286		
// @@
// @@ INPUT			:
// @@ _coff_filename: argv_773: argv_2697 of the COFF argv_1314 use
// @@   when generating the plugin.
// @@
// @@ _dst_filename: argv_773: argv_2697 of the destination argv_1314
// @@   where the generated plugin is to be saved.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a plugin argv_1314 
// @@ and save the argv_3266 into the argv_1314 whose argv_2697 is
// @@ into the '_dst_filename' parameter.
// @@ To generate a plugin, a plugin description argv_1314
// @@ must have been given and argv_2117 prior to this call. 
// @@
// @@ a plugin argv_1314 is composed of two parts :
// @@ - a argv_1806
// @@ - a argv_714
// @@ The argv_1806 contains several fields :
// @@ - the plugin argv_2697 (string)
// @@ - the argv_1637 date (argv_3717)
// @@ - the plugin major version (argv_3717)
// @@ - the plugin minor version (argv_3717)
// @@ - the plugin argv_3695 (argv_3717).
// @@ - the plugin target argv_3695 (argv_3717), i.e: PE, TXT,...
// @@ - the length before uncompressing the argv_714 (argv_3717)
// @@ - the crc of the argv_714 before argv_3744 (string)
// @@ - the length after argv_3744 the argv_714 (argv_3717)
// @@ - the crc of the argv_714 after argv_3744 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_2697 (a plugin argv_2697 as a string)
// @@ }
// @@ - the number of exported symbols (argv_3717)
// @@ {
// @@	- the exported symbol argv_2697 (as a string)
// @@ }
// @@
// @@ The argv_714 must be appended right after the argv_1806.
// @@ The argv_714 is actually a COFF argv_1314 appended to the argv_714.
// @@ (see www.microsoft.com/whdc/system/platform/firmware/PECOFF.mspx)
// @@
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - the plugin description argv_1314 must have been argv_2117 prior 
// @@   to this call.
// @@ - '_coff_filename' parameter must not be a argv_2766 pointer.
// @@ - '_coff_filename' parameter must not be an empty string.
// @@ - '_coff_filename' must be an existing and accessible
// @@   argv_1314 (read access).
// @@ - '_dst_filename' parameter must not be a argv_2766 pointer.
// @@ - '_dst_filename' parameter must not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_3286 (argv_773 _coff_filename, argv_773 _dst_filename) {
	argv_3379 argv_1892 = argv_3042;
	if (dset.init_done == false) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3286 - illegal call before init !");
		argv_1892 = argv_3021;
	}
	else if (dset.argv_1123 == false) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3286 - illegal call before loading description argv_1314 !");
		argv_1892 = argv_3020;
	}
	else if ((_coff_filename == argv_2766) || (strlen(_coff_filename)==0) || (_dst_filename==0) || (strlen(_dst_filename)==0)) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3286 - invalid parameter !");
		argv_1892 = argv_3022;		
	}
	else if (argv_1316 (dset.argv_1689, dset.argv_3587, _coff_filename) == false) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3286 - no such argv_1314 : ", _coff_filename);
		argv_1892 = argv_3031;
	}
	else {
#if defined (DEBUG_PLUGIN_LOADER)
		{
			argv_3409 (dset.argv_3681, MAX_PATH, "argv_979::argv_3286 - coff argv_1314 : %s, destination argv_1314 : %s", _coff_filename, _dst_filename);
			dset.argv_3681[MAX_PATH - 1] = '\0';
			dset.argv_1689->argv_2146.argv_2142 (argv_1086, dset.argv_3681);
		}
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		FILE * argv_1415 = fopen (_dst_filename, "wb");
		if (! argv_1415) {
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3286 - fopen failed for destination argv_1314 : ", _dst_filename);
			argv_1892 = argv_3016;
		}
		else {
			argv_789	mmap_src;

			// 1. mmap the coff argv_1314 (the argv_714 actually)
			bool bret = mmap_src.argv_2346 (_coff_filename, argv_2348, dset.argv_3425, dset.argv_3426);
			if (bret == false) {
				mmap_src.argv_1659 (dset.argv_1239, dset.argv_1247);
				argv_3409 (dset.argv_3681, MAX_PATH, "argv_979::argv_2098(%s) failed ! - dset.argv_1247=%d, dset.argv_1239=%d", _coff_filename, dset.argv_1247, dset.argv_1239);
				dset.argv_3681[MAX_PATH - 1] = '\0';
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, dset.argv_3681);
				argv_1892 = argv_3030;
			}
			else {
#if defined (DEBUG_PLUGIN_LOADER)
				argv_3409 (dset.argv_3681, MAX_PATH, "plugin mmapped succesfully @0x%X (argv_1314 size : %d)", dset.argv_3425, dset.argv_3426);
				dset.argv_1689->argv_2146.argv_2142 (argv_1086, dset.argv_3681);
#endif // #if defined (DEBUG_PLUGIN_LOADER)
				argv_1892 = argv_2960 (argv_1415);
				mmap_src.argv_873 ();
			}

			if (fclose (argv_1415) != 0) {
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: fclose failed ! - argv_1314 was : ", _dst_filename);
				argv_1892 = argv_3014;
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@	
// @@ FUNCTION		:	argv_583		
// @@
// @@ INPUT			:
// @@ _dep_name: argv_773: argv_2697 of the plugin to be added as a 
// @@   dependancy of the argv_1043 plugin.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Each plugin may depend on zero or more other plugins
// @@ where necessary symbols are defined.
// @@ This function permits to argv_576 the argv_2697 of another plugin
// @@ into a container to create a list of dependancies.
// @@ The list of dependancies is very important when
// @@ performing the symbol resolution step.
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - '_dep_name' parameter must not be a argv_2766 pointer.
// @@ - '_dep_name' parameter must not be an empty string.
// @@ - '_dep_name' must not be the argv_2697 of a dependancy already added
// @@   to the argv_1043 plugin.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_583 (argv_773 _dep_name) {
	argv_3379 argv_1892 = argv_3042;
	if (dset.init_done == false) {
		argv_1892 = argv_3021;
	}
	else if (_dep_name == argv_2766) {
		argv_1892 = argv_3022;
	}
	else if (strlen(_dep_name) == 0) {
		argv_1892 = argv_3022;
	}
	else {
		dset.argv_1918 = dset.argv_2161.find (_dep_name);
		if (dset.argv_1918 != dset.argv_2161.end()) {
			argv_1892 = argv_3011;
		}
		else { // dependancy not already defined => ok to argv_576 it
			dset.argv_2161[_dep_name] = true;	
		}
	}
	return (argv_1892);
}


argv_3379 argv_979::argv_584 (argv_773 _symbol_name) {
	argv_3379 argv_1892 = argv_3042;
	if (dset.init_done == false) {
		argv_1892 = argv_3021;
	}
	else if (_symbol_name == argv_2766) {
		argv_1892 = argv_3022;
	}
	else if (strlen(_symbol_name) == 0) {
		argv_1892 = argv_3022;
	}
	else {
		dset.argv_1919 = dset.argv_2163.find (_symbol_name);
		if (dset.argv_1919 != dset.argv_2163.end()) {
			argv_1892 = argv_3013;
		}
		else { // exported symbol not added yet => ok to argv_576 it
			dset.argv_2163[_symbol_name] = true;
		}
	}
	return (argv_1892);
}

bool argv_979::argv_1652 (string& _exported_symbol) {
	bool bret = true;
	dset.argv_1920 = dset.argv_2163.begin ();
	if (dset.argv_1920 == dset.argv_2163.end()) {
		bret = false;
	}
	else {
		_exported_symbol = dset.argv_1920->first;	
	}
	return (bret);
}

bool argv_979::argv_1670 (string& _exported_symbol) {
	bool bret = true;
	++dset.argv_1920;
	if (dset.argv_1920 == dset.argv_2163.end()) {
		bret = false;
	}
	else {
		_exported_symbol = dset.argv_1920->first;	
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_2844		
// @@
// @@ INPUT			:
// @@ _buf: char *: argv_728 containing the argv_2069 to parse.
// @@
// @@ OUTPUT		:
// @@ _var: string&: argv_2697 of the variable returned to the caller.
// @@
// @@ _val: string&: argv_3807 of the variable returned to the caller.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse argv_2806 argv_2069 of the plugin 
// @@ description argv_1314 that is used when generating a new plugin.
// @@ The plugin description argv_1314 is a serie of lines.
// @@ Each argv_2069 as a <variable> = <argv_3807> scheme.
// @@ The fields to be present are :
// @@ argv_3695			= <integer>
// @@ argv_3592	= <integer> , i.e: PE, TXT, BIN...
// @@ argv_2697			= <plugin argv_2697>
// @@ argv_3819 = <integer>
// @@ argv_3820 = <integer>
// @@ dependancy	= <first plugin argv_2697>
// @@ dependancy	= <second plugin argv_2697>
// @@ 
// @@ Notice that the 'dependancy' field is optional and can
// @@ be absent if the plugin is fully cohesive.
// @@
// @@ NOTICE that argv_2806 or more argv_2069 may be commented using 
// @@ the C++ syntax (double slash).
// @@ Also notice that the lines are free form, which means that
// @@ you can argv_576 spaces and tabs as necessary.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_2844 (char * _buf, string& _var, string& _val) {
	argv_3379 argv_1892 = argv_3042;

	_var = "";
	_val = "";
	argv_3717 size = strlen (_buf);
	argv_3717 i=0;

	// eat first white spaces
	while ((i < size) && ((_buf[i]==' ') || (_buf[i]=='\t') || (_buf[i]=='\r') || (_buf[i]=='\n'))) {
		i++;
	}

	if (i < size) {
		if ((_buf[i]=='/') && ((i+1) < size) && (_buf[i+1]=='/')) {
			;
		}
		else { // argv_986 variable
			while ((i < size) && (_buf[i]!=' ') && (_buf[i]!='\t') && (_buf[i]!='\r') && (_buf[i]!='\n') && (_buf[i]!='=')) {
				_var += _buf[i];
				i++;
			}

			if (i >= size) {
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: parse error while consuming variable's argv_2697");
				argv_1892 = argv_3036;
			}
			else {
				// argv_986 the space before the '='
				while ((i < size) && ((_buf[i]==' ') || (_buf[i]=='\t') || (_buf[i]=='\r') || (_buf[i]=='\n'))) {
					i++;
				}

				if (i >= size) { 
					dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: parse error while consuming spaces before '='"); 
					argv_1892 = argv_3036;
				}
				else { // comsume the '='
					if (_buf[i] != '=') {
						dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: parse error: '=' expected");
						argv_1892 = argv_3035;
					}
					else { // argv_986 the spaces after the '='
						i++;
						
						while ((i < size) && ((_buf[i]==' ') || (_buf[i]=='\t') || (_buf[i]=='\r') || (_buf[i]=='\n'))) {
							i++;
						}

						if (i >= size) { 
							dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: parse error: unexpected end of argv_2069 while parsing spaces before variable's argv_3807");
							argv_1892 = argv_3036;
						}
						else { // argv_986 the argv_3807
							while ((i < size) && (_buf[i]!=' ') && (_buf[i]!='\t') && (_buf[i]!='\r') && (_buf[i]!='\n')) {
								_val += _buf[i];
								i++;
							}

							if (_val == "") {
								argv_1892 = argv_3036;
								dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: parse error: empty argv_3807 !");
							}
						}
					}
				}
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_3104		
// @@
// @@ INPUT			:
// @@ _desc_filename: argv_773: argv_2697 of the plugin description argv_1314.
// @@
// @@ _v_couple: vector<argv_780>&: a vector containing
// @@   all the <variable,argv_3807> couples resulting from the parsing
// @@   of the plugin description argv_1314.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform a deep checking of the
// @@ semantic of the plugin description argv_1314 after this argv_1314
// @@ was parsed succesfully :
// @@ - ensure that no variable are missing.
// @@ - ensure that variables have coherent values.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_3104 (argv_773 _desc_filename, vector<argv_780>& _v_couple) {
	argv_3379 argv_1892   = argv_3042;
	argv_3717 nb_var = _v_couple.size ();
	dset.argv_2161.clear ();
	bool name_defined			= false;
	bool type_defined			= false;
	bool target_type_defined	= false;
	bool version_minor_defined	= false;	
	bool version_major_defined	= false;
	argv_3717 argv_2742 = 0;
	argv_3717 nb_exported   = 0;

	for (argv_3717 i=0 ; i<nb_var ; i++) {
		if (_v_couple[i].argv_3812 == "argv_3819") {
			if (version_major_defined == true) {
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3104 - multiple definition of variable : ", _v_couple[i].argv_3812.c_str());
				argv_1892 = argv_3038;
				break;
			}
			else {
				argv_3819			= atoi (_v_couple[i].argv_3806.c_str());
				version_major_defined	= true;
			}
		}
		else if (_v_couple[i].argv_3812 == "argv_3820") {
			if (version_minor_defined == true) {
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3104 - multiple definition of variable : ", _v_couple[i].argv_3812.c_str());
				argv_1892 = argv_3038;
				break;
			}
			else {
				argv_3820			= atoi (_v_couple[i].argv_3806.c_str());
				version_minor_defined	= true;
			}
		}
		else if (_v_couple[i].argv_3812 == "argv_3695") {
			if (type_defined == true) {
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3104 - multiple definition of variable : ", _v_couple[i].argv_3812.c_str());
				argv_1892 = argv_3038;
				break;
			}
			else { // no coherency check for this field (avoid dependancy of kernel to changes)
				argv_3695 = atoi (_v_couple[i].argv_3806.c_str());
				type_defined = true;
			}
		}
		else if (_v_couple[i].argv_3812 == "argv_3592") {
			if (target_type_defined == true) {
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3104 - multiple definition of variable : ", _v_couple[i].argv_3812.c_str());
				argv_1892 = argv_3038;
				break;
			}
			else { // no coherency check for this field (avoid dependancy of kernel to changes)
				argv_3592 = atoi (_v_couple[i].argv_3806.c_str());
				target_type_defined = true;
			}
		}
		else if (_v_couple[i].argv_3812 == "argv_2697") {
			if (name_defined == true) {
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3104 - multiple definition of variable : ", _v_couple[i].argv_3812.c_str());
				argv_1892 = argv_3038;
				break;
			}
			else {
				argv_2697			= _v_couple[i].argv_3806;
				name_defined	= true;
			}
		} 
		else if (_v_couple[i].argv_3812 == "dependancy") {
			argv_1892 = argv_583 (_v_couple[i].argv_3806.c_str());
			if (argv_1892 != argv_3042) {
				string serror = argv_1240 (argv_1892);
				argv_3409 (dset.argv_3681, MAX_PATH, "+++ ERROR: argv_979::argv_3104 - failed to argv_576 dependancy : '%s' (errno=%s)", _v_couple[i].argv_3806.c_str(), serror.c_str());
				dset.argv_3681[MAX_PATH - 1] = '\0';
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, dset.argv_3681);
				break;
			}
			else {
				argv_2742++;
			}
		} 
		else if (_v_couple[i].argv_3812 == "exported") {
			argv_1892 = argv_584 (_v_couple[i].argv_3806.c_str());
			if (argv_1892 != argv_3042) {
				string serror = argv_1240 (argv_1892);
				argv_3409 (dset.argv_3681, MAX_PATH, "+++ ERROR: argv_979::argv_3104 - failed to argv_576 exported symbol : '%s' (errno=%s)", _v_couple[i].argv_3806.c_str(), serror.c_str());
				dset.argv_3681[MAX_PATH - 1] = '\0';
				dset.argv_1689->argv_2146.argv_2142 (argv_1242, dset.argv_3681);
				break;
			}
			else {
				nb_exported++;
			}
		}
	}

	// now ensure that all necessary variables have been argv_2117
	if (argv_1892 == argv_3042) {
		if (name_defined == false) {
			argv_1892 = argv_3037;
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3104 - missing variable 'argv_2697'");
		}
		if (type_defined == false) {
			argv_1892 = argv_3037;
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3104 - missing variable 'argv_3695'");
		}
		if (target_type_defined == false) {
			argv_1892 = argv_3037;
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3104 - missing variable 'argv_3592'");
		}
		if (version_minor_defined == false) {
			argv_1892 = argv_3037;
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3104 - missing variable 'version_minor_defined'");
		}
		if (version_major_defined == false) {
			argv_1892 = argv_3037;
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3104 - missing variable 'version_major_defined'");
		}
		if (nb_exported == 0) {
			argv_1892 = argv_3037;
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3104 - missing variable 'exported'");
		}
		if (argv_2742 == 0) {
			dset.argv_1689->argv_2146.argv_2142 (argv_3834, "*** WARNING: the plugin have no dependancy defined !");
		}
	}

	// set default values for unused sizes and CRCs
	argv_2050 = 0;
	argv_1010    = "no_crc";
	argv_2049  = 0;
	argv_1009     = "no_crc";
	argv_1638			 = 0;
	argv_2742			 = dset.argv_2161.size ();
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_1136		
// @@
// @@ INPUT			:
// @@ _v_couple: vector<argv_780>&: a vector containing
// @@   all the <variable,argv_3807> couples resulting from the parsing
// @@   of the plugin description argv_1314.
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
// @@ This function permits to argv_1130 to log argv_1314
// @@ the argv_3266 of the parsing of the plugin
// @@ description argv_1314.
// @@ 
// @@ This function is here for debug purpose only.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_979::argv_1136 (vector<argv_780>& _v_couple) {
#if defined (DEBUG_PLUGIN_LOADER)
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "=========== parse argv_3266 ================");
	argv_3717 argv_2744 = _v_couple.size ();
	for (argv_3717 i=0 ; i<argv_2744 ; i++) {
		argv_3409 (dset.argv_3681, MAX_PATH, "%s = %s", _v_couple[i].argv_3812.c_str(), _v_couple[i].argv_3806.c_str());
		dset.argv_3681[MAX_PATH - 1] = '\0';
		dset.argv_1689->argv_2146.argv_2142 (argv_1086, dset.argv_3681);
	}
#endif // #if defined (DEBUG_PLUGIN_LOADER)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_3197		
// @@
// @@ INPUT			:
// @@ _desc_filename: argv_773: argv_2697 of the plugin description argv_1314
// @@   to be parsed.
// @@
// @@ _fp_desc: FILE *: descriptor on the plugin description argv_1314
// @@   to be parsed, notice that it must have been opened with
// @@   read access by another function prior to this call. 
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function uses the opened FILE pointer given as the
// @@ '_fp_desc' parameter to argv_2094 and parse each argv_2069 of the
// @@ plugin description argv_1314 whose argv_2697 is contained into the
// @@ '_desc_filename' parameter.
// @@
// @@ The plugin description argv_1314 is a serie of lines.
// @@ Each argv_2069 as a <variable> = <argv_3807> scheme.
// @@ The fields to be present are :
// @@ argv_3695				= <integer>
// @@ argv_3592		= <integer>
// @@ argv_2697				= <plugin argv_2697>
// @@ argv_3819		= <integer>
// @@ argv_3820		= <integer>
// @@ dependancy		= <first plugin argv_2697>
// @@ dependancy		= <second plugin argv_2697>
// @@ exported			= <first exported symbol>
// @@ exported			= <second exported symbol>
// @@ 
// @@ Notice that the 'dependancy' field is optional and can
// @@ be absent if the plugin is fully cohesive.
// @@
// @@ NOTICE that argv_2806 or more argv_2069 may be commented using 
// @@ the C++ syntax (double slash).
// @@ Also notice that the lines are free form, which means that
// @@ you can argv_576 spaces and tabs as necessary.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_3197 (argv_773 _desc_filename, FILE * _fp_desc) {
	argv_3379 argv_1892 = argv_3042;
	char argv_728[MAX_PATH];
	argv_780 couple;
	vector<argv_780> v_couple;
	argv_3717 argv_1052 = 1;
	dset.argv_1689->argv_2146.argv_2142 (argv_1086, "parsing plugin description argv_1314 : ", _desc_filename);

	char * cptr = fgets (argv_728, MAX_PATH, _fp_desc);

	while (cptr != argv_2766) {
		argv_1892 = argv_2844 (argv_728, couple.argv_3812, couple.argv_3806);
#if defined (DEBUG_PLUGIN_LOADER)
		{
			argv_3409 (dset.argv_3681, MAX_PATH, "argv_2844 => argv_3812='%s', argv_3806='%s'", couple.argv_3812.c_str(), couple.argv_3806.c_str());
			dset.argv_3681[MAX_PATH - 1] = '\0';
			dset.argv_1689->argv_2146.argv_2142 (argv_1086, dset.argv_3681);
		}
#endif

		if (argv_1892 != argv_3042) {
			string serror = argv_1240 (argv_1892);
			argv_3409 (dset.argv_3681, MAX_PATH, "+++ ERROR: parse error at argv_2069 %d : %s", argv_1052, serror.c_str());
			dset.argv_3681[MAX_PATH - 1] = '\0';
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, dset.argv_3681);
			argv_1892 = argv_3034;
			break;
		}
		else if ((couple.argv_3806 != "") && (couple.argv_3812 == "")) {
			argv_3409 (dset.argv_3681, MAX_PATH, "+++ ERROR: parse error at argv_2069 %d : empty variable !", argv_1052);
			dset.argv_3681[MAX_PATH - 1] = '\0';
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, dset.argv_3681);
			argv_1892 = argv_3034;
			break;
		}
		else if ((couple.argv_3812 != "") && (couple.argv_3806 == "")) {
			argv_3409 (dset.argv_3681, MAX_PATH, "+++ ERROR: parse error at argv_2069 %d : empty argv_3807 !", argv_1052);
			dset.argv_3681[MAX_PATH - 1] = '\0';
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, dset.argv_3681);
			argv_1892 = argv_3034;
			break;
		}
		else if ((couple.argv_3812 != "") && (couple.argv_3806 != "")) {
			v_couple.push_back (couple);
		}
		cptr = fgets (argv_728, MAX_PATH, _fp_desc);
		argv_1052++;
	}

	argv_1136 (v_couple);

	if (argv_1892 == argv_3042) {
		argv_1892 = argv_3104 (_desc_filename, v_couple);
		if (argv_1892 != argv_3042) {
			dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: plugin description argv_1314 post process failed ! - argv_1314 was : ", _desc_filename);
		}
	}
	else {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_3197 - parse failed !");
	}
	return (argv_1892);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_2841		
// @@
// @@ INPUT			:
// @@ _desc_filename: argv_773: argv_2697 of the plugin description argv_1314
// @@   to be argv_2117 and parsed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3042 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - no plugin description argv_1314 must have been argv_2117 yet.
// @@ - '_desc_filename' parameter must not be a argv_2766 pointer.
// @@ - '_desc_filename' parameter must not be an empty string.
// @@ - '_desc_filename' parameter must be the argv_2697 of an existing
// @@   and accessible argv_1314 (read access).
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_979::argv_2841 (argv_773 _desc_filename) {
	argv_3379 argv_1892 = argv_3042;

	if (dset.init_done == false) {
		argv_1892 = argv_3021;
	}
	else if (dset.argv_1123 == true) {
		argv_1892 = argv_3018;
	}
	else if ((_desc_filename == argv_2766) || (strlen(_desc_filename)==0)) {
		argv_1892 = argv_3022;
	}
	else if (argv_1316 (dset.argv_1689, dset.argv_3587, _desc_filename) == false) {
		dset.argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_979::argv_2841 - argv_1314 not found ! - argv_1314:", _desc_filename);
		argv_1892 = argv_3031;
	}
	else { // now try and open the argv_1314
#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1689->argv_2146.argv_2142 (argv_1086, "about to parse plugin description argv_1314 : ", _desc_filename);
#endif // #if defined (DEBUG_PLUGIN_LOADER)

		FILE * fp_desc = fopen (_desc_filename, "rb");
		if (! fp_desc) {
			argv_1892 = argv_3016;
		}
		else {
			argv_1892 = argv_3197 (_desc_filename, fp_desc);
			fclose (fp_desc);

			if (argv_1892 == argv_3042) {
				dset.argv_1123 = true;
			}
		}
	}

	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_979
// @@
// @@ FUNCTION		:	argv_1640		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_763 *: the argv_595 of the argv_763
// @@ argv_2785 associated with the argv_1043 argv_979 argv_2785.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ A plugin is composed of a argv_1806 and a argv_714.
// @@ the argv_714 is a COFF argv_1314 that is argv_2117 and parsed
// @@ by a argv_763 that is embedded into the argv_979
// @@ argv_2785.	
// @@	
// @@ This function permits to retrieve the argv_595 of the 
// @@ argv_763 argv_2785 associated with the argv_1043 argv_979
// @@ argv_2785.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_763 * argv_979::argv_1640 () {
	return (&dset.argv_878);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
