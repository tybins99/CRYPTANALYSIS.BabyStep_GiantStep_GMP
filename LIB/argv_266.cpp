// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_266.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all argv_1073 structure and
// @@ functions necessary for the coff loader
// @@ argv_2785 to work properly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/obj_loader_OLD.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_777
// @@
// @@ FUNCTION		:	argv_777		
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
// @@ Normal constructor of the 'argv_777' argv_2785.
// @@ It resets the argv_777 argv_2785 to it's original argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_777::argv_777 () {
	reset ();
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_777
// @@
// @@ FUNCTION		:	~argv_777		
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
// @@ destructor of the 'argv_777' argv_2785.
// @@ It resets the argv_777 argv_2785 to it's original argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_777::~argv_777 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_777
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
// @@ This function permits to bring the argv_777
// @@ argv_2785 back to it's original argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_777::reset () {
	section_index			= 0;
	argv_3400			= 0;
	argv_3092		= 0;
	argv_3093	= 0;
	argv_2775		= 0;
	real_start_addr			= 0;
	argv_3695					= 0;
	argv_3807					= 0;
	storage_class			= 0;

	v_relocation.clear ();
	// force the vector to free it's memory
	vector<Crich_reloc_unit>().swap (v_relocation);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_764		
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
// @@ Normal constructor of the 'argv_764' argv_2785.
// @@ It resets the argv_764 argv_2785 to it's original argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_764::argv_764 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	~argv_764		
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
// @@ destructor of the 'argv_764' argv_2785.
// @@ It resets the argv_764 argv_2785 to it's original argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_764::~argv_764 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
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
// @@ This function permits to bring the argv_764
// @@ argv_2785 back to it's original argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_764::reset () {
	init_done				= false;
	argv_2117					= false;
	argv_3587				= argv_2766;
	argv_967		= argv_2766;
	argv_1070			= argv_2766;
	argv_1689			= argv_2766;
	argv_1335			= argv_2766;
	argv_3326	= argv_2766;
	argv_3328		= argv_2766;
	argv_3472		= argv_2766;
	argv_3489		= argv_2766;
	argv_1334				= 0;
	argv_1235				= argv_2766;
	argv_3848			= argv_2766;

	map<string, argv_777>::iterator iter_local;
	for (iter_local=m_name_data.begin() ; iter_local != m_name_data.end() ; ++iter_local) {
		iter_local->second.reset ();	
	}
	m_name_data.clear ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_1143		
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
// @@ This function permits to argv_1130 to log argv_1314 all the 
// @@ important argv_1073 contained into the argv_764 argv_2785.
// @@ It is useful for debug purpose only.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_764::argv_1143 () {
#if defined (DEBUG_COFF_LOADER)
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "argv_1335 = %X", argv_1335);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);

	argv_3409 (argv_3681, MAX_PATH, "argv_3326 = %X (%X)", argv_3326, argv_3326 - argv_1335);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);

	argv_3409 (argv_3681, MAX_PATH, "argv_3328 = %X (%X)", argv_3328, argv_3328 - argv_1335);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);

	argv_3409 (argv_3681, MAX_PATH, "argv_3472 = %X (%X)", argv_3472, argv_3472 - argv_1335);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);

	argv_3409 (argv_3681, MAX_PATH, "argv_3489 = %X (%X)", argv_3489, argv_3489 - argv_1335);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
	
	argv_3409 (argv_3681, MAX_PATH, "argv_1235 = %X (%X)", argv_1235, argv_1235 - argv_1335);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_1147		
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
// @@ This function permits to argv_1130 to log argv_1314 all
// @@ the symbols that are defined into the argv_1043 module. 
// @@ It is useful for debug purpose only.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_764::argv_1147 () {
	map<string, argv_777>::iterator iter_local;	
	argv_1689->argv_2146.argv_2142 (argv_1086, "=== symbols defined in this argv_2691 module ===");
	for (iter_local=m_name_data.begin() ; iter_local != m_name_data.end() ; ++iter_local) {
		argv_1689->argv_2146.argv_2142 (argv_1086, "=> ", iter_local->first.c_str());
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
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
// @@ _file_start_addr: argv_3715 *: argv_595 of the first byte in 
// @@    virtual memory of the COFF argv_1314 that was mmapped for loading.
// @@
// @@ _file_size: argv_3717: size of the mmapped COFF argv_1314 in virtual memory.
// @@
// @@ _xmem_mgr_ptr: argv_1061 *:  pointer on an argv_2785 that permits
// @@ to obtain an aligned argv_710 of virtual memory and release it.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_894 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 the argv_764
// @@ argv_2785 by giving it the argv_595 of all necessary
// @@ objects.
// @@
// @@ CONTRACT 		: 
// @@ - '_systool_ptr' parameter must not be a argv_2766 pointer.
// @@ - '_glob_data_ptr' parameter must not be a argv_2766 pointer.
// @@ - '_compress_tool_ptr' parameter must not be a argv_2766 pointer.
// @@ - '_cypher_tool_ptr' parameter must not be a argv_2766 pointer.
// @@ - '_file_start_addr' parameter must not be a argv_2766 pointer.
// @@ - '_xmem_mgr_ptr' parameter must not be a argv_2766 pointer.
// @@ - init must not have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::init (argv_792 * _glob_data_ptr, argv_3449 * _systool_ptr, argv_767 * _compress_tool_ptr, argv_774 * _cypher_tool_ptr, argv_3715 * _file_start_addr, argv_3717 _file_size, argv_1061 * _xmem_mgr_ptr) {
	argv_3379 argv_1892 = argv_894;

	if ((_systool_ptr==argv_2766) || (_compress_tool_ptr==argv_2766) || (_cypher_tool_ptr==argv_2766) || (_glob_data_ptr == argv_2766) || (_file_start_addr == argv_2766) || (_xmem_mgr_ptr == argv_2766)) {
		argv_1892 = argv_887;
	}
	else if (init_done == true) {
		argv_1892 = argv_883;
	}
	else {
		argv_1689			= _glob_data_ptr;
		argv_3587				= _systool_ptr;
		argv_967		= _compress_tool_ptr;
		argv_1070			= _cypher_tool_ptr;
		argv_1335			= _file_start_addr;
		argv_1334				= _file_size;
		argv_1235				= argv_1335 + argv_1334;
		argv_3848			= _xmem_mgr_ptr;		
		init_done				= true;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_2705		
// @@
// @@ INPUT			:
// @@ _cptr: argv_3715 *: pointer on the 'argv_2697' field of a given entry
// @@   of the symbol table of the argv_1043 COFF argv_1314.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the argv_2697 of this entry of the symbol table
// @@   is a short argv_2697 (0..8 characters),
// @@   false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ In the COFF format, an important part is the symbol table.
// @@ Each entry of this symbol table has a 'argv_2697' field
// @@ This field has a fixed size of 8 argv_739 and may
// @@ contain either a argv_2697 (if it can be contained within 8 argv_739)
// @@ or it contains an offset in the string table.
// @@ To determine whether the argv_2697 is a short argv_2697, or an offset,
// @@ we must consider the first 4 argv_739 of the 'argv_2697' field :
// @@ - if the 4 first argv_739 are zero, then we have an offset,
// @@ - otherwise we have a short argv_2697.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_764::argv_2705 (argv_3715 * _cptr) {
	bool bret = false;
	if ((_cptr[0] != 0) || (_cptr[1] != 0) || (_cptr[2] != 0) || (_cptr[3] != 0)) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_630		
// @@
// @@ INPUT			:
// @@ _cptr: argv_3715 *: argv_595 of the 'argv_2697' field of the
// @@   argv_1043 entry of the symbol table of the argv_1043 COFF
// @@   argv_1314.
// @@
// @@ OUTPUT		:	
// @@ _offset: argv_3717&: if the 'argv_2697' field is actually a long argv_2697, 
// @@   this field contains the offset where the actual argv_2697 of the 
// @@   symbol can be found from the string table of the COFF argv_1314.
// @@    Notice that in that case, the parameter '_name' is undefined.
// @@ 
// @@ _name: string&: if the 'argv_2697' field is actually a short argv_2697,
// @@    this field contains the extracted argv_2697 of the symbol.
// @@    Notice that in that case, the parameter '_offset' is undefined.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379: SYMBOL_OFFSET_IN_STRING_TABLE if the 'argv_2697' field does
// @@   not contain a argv_2697, but contains an offset in the string table
// @@   instead.
// @@       SYMBOL_SHORT_NAME if the 'argv_2697' field contains directly a 
// @@       argv_2697, not an offset. 
// @@       SYMBOL_UNKNOWN_NAME_TYPE in case of failure.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ In the COFF format, an important part is the symbol table.
// @@ Each entry of this symbol table has a 'argv_2697' field
// @@ This field has a fixed size of 8 argv_739 and may
// @@ contain either a argv_2697 (if it can be contained within 8 argv_739)
// @@ or it contains an offset in the string table.
// @@ To determine whether the argv_2697 is a short argv_2697, or an offset,
// @@ we must consider the first 4 argv_739 of the 'argv_2697' field :
// @@ - if the 4 first argv_739 are zero, then we have an offset,
// @@ - otherwise we have a short argv_2697.
// @@ This function permits to determine the argv_2697 argv_3695 
// @@ (either short argv_2697, or offset) :
// @@ - if argv_2697 is a short argv_2697, then the argv_2697 is returned 
// @@   to the caller via the '_name' parameter, in that case
// @@   the '_offset' parameter is undefined.
// @@ - if the argv_2697 is an offset in the string table, then
// @@   this offset is returned to the caller via the '_offset'
// @@   parameter, and the '_name' parameter is undefined. 
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_630 (argv_3715 * _cptr, argv_3717& _offset, string& _name) {
	argv_3379 argv_1892 = SYMBOL_UNKNOWN_NAME_TYPE;
	if ((_cptr[0]==0) && (_cptr[1]==0) && (_cptr[2]==0) && (_cptr[3]==0)) { // long argv_2697 => index in the string table
		argv_1892 = SYMBOL_OFFSET_IN_STRING_TABLE;
		argv_688 atyp;
		atyp.argv_685[0]	= _cptr[4];
		atyp.argv_685[1]	= _cptr[5];
		atyp.argv_685[2]	= _cptr[6];
		atyp.argv_685[3]	= _cptr[7];
		_offset			= atyp.argv_691;
	}
	else { // short argv_2697
		argv_1892			= SYMBOL_SHORT_NAME;
		_name			= "";
		for (argv_3717 i=0 ; i<8 ; i++) {
			if (_cptr[i] != 0) {
				_name += _cptr[i];	
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	internal_2_real_name		
// @@
// @@ INPUT			:
// @@ _internal_name_ptr: argv_3715 *: pointer on the argv_2697 to convert
// @@   from it's internal shape to it's real shape.
// @@
// @@ OUTPUT		:	
// @@ _real_name: string&: the real argv_2697 associated with the
// @@   '_internal_name_ptr' parameter obtained after lookup.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_894 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the real argv_2697 of a given
// @@ entry of the symbol table of the argv_1043 COFF argv_1314.
// @@ 
// @@ In the COFF format, an important part is the symbol table.
// @@ Each entry of this symbol table has a 'argv_2697' field
// @@ This field has a fixed size of 8 argv_739 and may
// @@ contain either a argv_2697 (if it can be contained within 8 argv_739)
// @@ or it contains an offset in the string table.
// @@
// @@ This function retrieves the symbol argv_2697, whatever it is a short
// @@ easily retrieveable from the 'argv_2697' field itself, or whether
// @@ it is a argv_2697 that can be found using the offset contained in the
// @@ 'argv_2697' field.
// @@ 
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::internal_2_real_name (argv_3715 * _internal_name_ptr, string& _real_name) {
	argv_3379 argv_1892	= argv_894;
	_real_name	= "";
	argv_3717 his_offset;

	argv_3379 name_type = argv_630 (&_internal_name_ptr[0], his_offset, _real_name);

	if (name_type == SYMBOL_UNKNOWN_NAME_TYPE) {
		argv_1892 = argv_895;
	}
	else if (name_type == SYMBOL_OFFSET_IN_STRING_TABLE) {
		his_offset = his_offset + (argv_3717) argv_3472;
		argv_3715 * cptr = (argv_3715 *) his_offset;

		his_offset = 0;
		while (cptr[his_offset] != '\0') {
			_real_name += cptr[his_offset];
			his_offset++;	
		}	

#if defined (DEBUG_COFF_LOADER)
		argv_1689->argv_2146.argv_2142 (argv_1086, "long argv_2697 extracted : ", _real_name.c_str());	
#endif // #if defined (DEBUG_COFF_LOADER)
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_3484		
// @@
// @@ INPUT			:
// @@ _s: argv_773: symbol argv_2697 to analyze.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the symbol contained in the '_s' parameter
// @@   is actually a string,
// @@   false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to know if a given mangled 
// @@ symbol is actually a string or not.
// @@ C++, in order to be able to have multiple functions
// @@ with the same argv_2697 but behaving differently only by
// @@ using parameter differences, need to use a mechanism
// @@ called mangling to avoid ambiguities.
// @@
// @@ Notice that this function mimic the behaviour of the
// @@ win32 'UnDecorateSymbolName' function to some extent.
// @@ but the function 'UnDecorateSymbolName' can not be used
// @@ because of portability issued (Linux).
// @@
// @@ Here follows an example of the non portable win32 version :
// @@ 
// @@ bool argv_764::argv_3484 (argv_773 _symb) {
// @@ bool bret = false;
// @@ 	char und[MAX_PATH]; 
// @@ 
// @@ 	if (UnDecorateSymbolName(_symb,und,sizeof(undec),argv_3750)) 
// @@   {
// @@ 		if (strncmp (und, "`string'", 8) == 0) {
// @@ 			bret = true;
// @@ 		}
// @@ 	}
// @@ 	return (bret);
// @@ }
// @@ 
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_764::argv_3484 (argv_773 _s) {
	argv_3717 size = strlen (_s);
	argv_3717 i=0;
	bool bret = false;
	bool eaten_digit = false;
	// smallest size is 9, so let's ensure that the supposed string is not too short
	if (size >= 9) {
		// ??_C@_
		if ((_s[0]=='?') && (_s[1]=='?') && (_s[2]=='_') && (_s[3]=='C') && (_s[4]=='@') && (_s[5]=='_')) {
			i=6;
			// eat the next character whatever it is (except if we reached the argv_3595)
			if (_s[i] != '@') {
				i++;
			}
			
			// eat possible digit
			if ((_s[i] >= '0') && (_s[i] <= '9')) {
				eaten_digit = true;
				i++;
			}
			// eat all possible upper characters between [A..P]
			while ((i < size) && (_s[i] >= 'A') && (_s[i]<='P')) {
				i++;
			}

			if ((i < size) && (_s[i]=='@')) {
				// jump the '@'
				i++;
				// eat all except '@'
				argv_3717 k=0;
				while ((i < size) && (_s[i] != '@')) {
					k++;
					i++;
				}

				// if second digit consumed => argv_714 may be empty
				if (i < size) {
					if (eaten_digit == false) {
						if ((k>0) && (_s[i] == '@')) {
							bret = true; // succesfully determined that is a string
						}
					}
					else { 
						if (_s[i] == '@') {
							bret = true; // succesfully determined that is a string
						}
					}
				}
			}
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_1631		
// @@
// @@ INPUT			:	
// @@ _name: argv_773: argv_2697 to convert to simple argv_2697.
// @@
// @@ OUTPUT		:	
// @@ _simple_name: string&: generated simplified argv_2697
// @@    using the '_name' parameter.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if the simple argv_2697 was generated succesfully,
// @@       false otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a mangled argv_2697 to a simpler
// @@ argv_2697.
// @@ There may be two different argv_2697 scheme :
// @@ shape argv_2806 : ?symbol@.....
// @@ shape two : _symbol
// @@
// @@ CONTRACT 		: 
// @@ - '_name' parameter must not be an empty string.
// @@ - '_name' parameter must contain a argv_2697 in either in
// @@   shape argv_2806, or shape two.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_764::argv_1631 (argv_773 _name, string& _simple_name) {
	bool bret = false;
	_simple_name = "";
	if (argv_3484 (_name) == false) {
		argv_3717 size = strlen (_name);
		if ((size > 0) && (_name[0] == '?')) { // first scheme
			for (argv_3717 i=0 ; i<size ; i++) {
				if (_name[i] == '@') {
					break;
				}

				if (_name[i] != '?') {
					_simple_name += _name[i];
				}
			}
		}
		else if ((size > 0) && (_name[0] == '_')) { // second scheme
			for (argv_3717 i=1 ; i<size ; i++) {
				_simple_name += _name[i];
			}
		}
	}

	if (_simple_name != "") {
#if defined (DEBUG_COFF_LOADER)
		{
			char argv_3681[65536];
			argv_3409 (argv_3681, 65536, "generated simple argv_2697 from '%s' => '%s'", _name, _simple_name.c_str());
			argv_3681[65536 - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
		}
#endif // #if defined (DEBUG_COFF_LOADER)
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	insert_symbol_in_map		
// @@
// @@ INPUT			:
// @@ _name: string: argv_2697 of the symbol to insert into the map.
// @@ 
// @@ _data: argv_777: argv_1073 to be associated with the symbol whose
// @@   argv_2697 is contained into the '_name' parameter. 
// @@
// @@ _index: argv_3717: the order of the symbol in the symbol table.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_894 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to save up the association between
// @@ a given symbol argv_2697 and it's associated argv_1073 into a map
// @@ that has a log(n) retrieval speed.
// @@
// @@ Notice that the symbol argv_2697 is converted into a simple
// @@ argv_2697 (if the symbol is not a string argv_2785) and it is
// @@ this simple symbol argv_2697 that is saved and associated to
// @@ the argv_1073 contained in the '_data' parameter.
// @@
// @@ There exists 2 different symbol mangling scheme :
// @@ ?argv_3488@@.....
// @@ _symbol_name
// @@ that would be both transformed into :
// @@ argv_3488
// @@
// @@ The reason why the mangled named are not used is that 
// @@ it would then be too complicated, and also the plugins
// @@ are not allowed to export C++ symbols, thus we don't
// @@ need to deal with the mangled names in general. 
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::insert_symbol_in_map (string& _name, argv_777& _data, argv_3717 _index) {
	argv_3379 argv_1892 = argv_894;

	if (_name.size () > 0) {
		map<string, argv_777>::iterator local_iter;
		local_iter = m_name_data.find (_name);
		if (local_iter == m_name_data.end()) {
			m_name_data[_name] = _data;

			string second_name;
			bool bret = argv_1631 (_name.c_str(), second_name);
			if (bret == true) {
				m_name_data[second_name] = _data;	
			}
#if defined (DEBUG_COFF_LOADER)
			/*
			// log the demangled argv_2697 (just for info)
			{
				char argv_3681[argv_1812];
				char szUndName[argv_1812];
				if (UnDecorateSymbolName (_name.c_str(), szUndName, 
					sizeof(szUndName), argv_3750))
				{
					// UnDecorateSymbolName returned success
					argv_3409 (argv_3681, argv_1812, "mangled argv_2697: '%s', demangled argv_2697 : '%s'", _name.c_str(), szUndName);
				}
				else {// failed to demangle the argv_2697
					argv_3409 (argv_3681, argv_1812, "mangled argv_2697: '%s', demangled argv_2697 : (FAILED)", _name.c_str());
				}
				argv_3681[argv_1812 - 1] = '\0';
				argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
			}*/
#endif // #if defined (DEBUG_COFF_LOADER)
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_2115		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to go to the symbol table of the
// @@ argv_1043 COFF argv_1314 and to argv_2094 all symbols of this table.
// @@ By loading we mean argv_1292 all relevant argv_1073 so that
// @@ all argv_1073 concerning a given symbol can be accessed in 
// @@ O(1) argv_3678 complexity.
// @@
// @@ An association between the simple version of the symbol
// @@ argv_2697 and it's associated argv_1073 is created.
// @@
// @@ The reason why the mangled named are not used is that 
// @@ it would then be too complicated, and also the plugins
// @@ are not allowed to export C++ symbols, thus we don't
// @@ need to deal with the mangled names in general. 
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_2115 () {
	argv_3379 argv_1892 =			argv_894;
	argv_3490	entry;
	argv_3717				local_offset = 0;
	string				his_name;
	argv_3715 *				his_start;
	argv_777				argv_1073;

	for (argv_3717 i=0 ; i<argv_1819.argv_2779 ; ) {
		argv_1073.reset ();
#if defined (DEBUG_COFF_LOADER)
		argv_1689->argv_2146.argv_2142 (argv_1086, "--> loading symbol : ", i);
#endif // #if defined (DEBUG_COFF_LOADER)

		if ((&argv_3489[local_offset + argv_3491]) >= argv_1235) {
			argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_764::argv_2115 - overflow @1");
			argv_1892 = argv_891;
			break;
		}

		memcpy (&entry, &argv_3489[local_offset], argv_3491);

#if defined (DEBUG_COFF_LOADER)
		{
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "argv_593=%X, entry.argv_2767=%d, entry.argv_3330=%d", &argv_3489[local_offset], entry.argv_2767, entry.argv_3330, entry);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
		}
#endif // #if defined (DEBUG_COFF_LOADER)

		argv_1892 = internal_2_real_name (&entry.argv_2698[0], his_name);
		
		if (argv_1892 != argv_894) {
			break;
		}
	
		// retrieve the meaningful fields for this symbol
		if (entry.argv_3330 > 0) {
			his_start = argv_3326 + ((entry.argv_3330 - 1) * sizeof(argv_1829));	
			argv_1829 section_hdr;

			if ((his_start + sizeof(argv_1829)) >= argv_1235) {
				argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_764::argv_2115 - overflow @2");
				argv_1892 = argv_891;
				break;
			}

			
			memcpy (&section_hdr, his_start, sizeof(argv_1829));

			argv_1073.argv_3092		= section_hdr.argv_3092 + (argv_3717) argv_1335;
			argv_1073.argv_3400			= section_hdr.argv_3400;
			argv_1073.argv_2775	= section_hdr.argv_2775;
			argv_1073.argv_3093	= section_hdr.argv_3093 + (argv_3717) argv_1335;

			if ((argv_1073.argv_3695 != argv_1190) && (argv_1073.argv_3695 != argv_1189)) {
				argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_764::argv_2115 - unknown symbol argv_3695 : ", (argv_3717) argv_1073.argv_3695);
				argv_1892 = argv_898;
				break;
			}
		}

		argv_1073.section_index			= entry.argv_3330;
		argv_1073.argv_3695					= entry.argv_3696; // to know whether it's a function or not
		argv_1073.argv_3807					= entry.argv_3808;
		argv_1073.storage_class			= entry.argv_3468; // for the LABEL argv_3695 (switch)
		// if it is a label, then the relocations are the parent's relocations, thus
		// they must be ignored (the label is not an actual argv_710)
		if (argv_1073.storage_class == argv_1832) {
#if defined (DEBUG_COFF_LOADER)
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "symbol '%s' is a label (reset it's number of relocations to zero)", his_name.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_1073.argv_2775 = 0;		
		}

		// try to argv_576 this new symbol and it's associated argv_1073
		insert_symbol_in_map (his_name, argv_1073, i);

		// always argv_986 what we have read
		local_offset += argv_3491;
		i++;

		// then we may have to argv_986 auxiliaries as well
		if (entry.argv_2767 > 0) {
			i += entry.argv_2767;
			local_offset += (entry.argv_2767 * argv_3491);
#if defined (DEBUG_COFF_LOADER)
			argv_1689->argv_2146.argv_2142 (argv_1086, "jumping n entries : ", entry.argv_2767);
#endif // #if defined (DEBUG_COFF_LOADER)
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_2101		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function seek toward the COFF argv_1806 and retrieve
// @@ the important and relevant argv_1073 about it and save it into
// @@ argv_764 argv_2785 for further use. 
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' should have been called prior to this call
// @@ - the function 'argv_2101' should not have already been called.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_2101 () {
	argv_3379 argv_1892 = argv_894;
	if (init_done == false) {
		argv_1892 = argv_884;
	}
	else if (argv_2117 == true) {
		argv_1892 = argv_885;
	}
	else {
		memcpy (&argv_1819, &argv_1335[0], sizeof(argv_1820));
		// patch some fields to be able to have a direct access 
		argv_3489		= argv_1335 + argv_1819.argv_3094;
		argv_3326	= argv_1335 + sizeof(argv_1820);
/*		{
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "number of sections = %X (%u)", argv_1819.argv_2777, argv_1819.argv_2777);
			MessageBox (argv_2766, argv_3681, "", MB_OK);
		}*/
		argv_3328		= argv_3326;
		argv_3328		= argv_3328 + (argv_1819.argv_2777 * sizeof(argv_1829));
		argv_3472		= argv_1335 + argv_1819.argv_3094 + (argv_1819.argv_2779 * argv_3491);

		if ((argv_3489 >= argv_1235)) {
			argv_1892 = argv_891;
		}
		else if (argv_3326 >= argv_1235) {
			argv_1892 = argv_891;
		}
		else if (argv_3328 >= argv_1235) {
			argv_1892 = argv_891;
		}
		else if (argv_3472 >= argv_1235) {
			argv_1892 = argv_891;
		}
		else {
			argv_2117	= true;
		}
	}
	return (argv_1892);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_2111		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_777>::iterator&: the iterator
// @@   containing both the argv_1043 symbol and it's associated argv_1073.
// @@
// @@ _index: argv_3717: the index of the argv_1043 relocation, if we are 
// @@   processing the nth relocation, then '_index' will be equal to n.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2094 argv_2806 relocation associated with 
// @@ the argv_1043 symbol, the argv_1043 symbol's argv_2697 and associated
// @@ argv_1073 being available via the '_iter' parameter.
// @@ the steps performed are then :
// @@ - goto the relocation whose index is given by the '_index'
// @@   parameter.
// @@ - argv_2094 this relocation (a fixed size argv_1073 structure)
// @@ - convert the table index into an offset
// @@ - argv_2094 the associated symbol table entry
// @@ - argv_1292 the argv_2697 associated with this symbol table entry
// @@ - ensure that this symbol exists (all symbols have been
// @@   collected by another function prior to this call).
// @@ - argv_576 this argv_2697 to the relocation list for this symbol
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_2111 (map<string, argv_777>::iterator& _iter, argv_3717 _index) {
	argv_3379 argv_1892 = argv_894;

	// goto this relocation
	argv_3715 * his_start = (argv_3715 *) _iter->second.argv_3093 + (_index * argv_1822);
	if ((his_start + argv_1822) >= argv_1235) {
		argv_1892 = argv_891;
	}
	else {
		// argv_2094 this relocation
		Crich_reloc_unit rich_reloc_unit;
		memcpy (&rich_reloc_unit.reloc, his_start, argv_1822);
		
		// convert the table index into an offset
		his_start = argv_3489 + (rich_reloc_unit.reloc.argv_3499 * argv_3491);

		// argv_2094 the associated symbol table entry
		argv_3490	entry;
		if ((his_start + argv_3491) >= argv_1235) {
			argv_1892 = argv_891;
		}
		else {
			memcpy (&entry, his_start, argv_3491);

			// argv_1292 the argv_2697 associated with this symbol table entry
			argv_1892 = internal_2_real_name (&entry.argv_2698[0], rich_reloc_unit.argv_2697);
			if (argv_1892 == argv_894) {
				// ensure that this symbol exists
				map<string, argv_777>::iterator iter_2;
				iter_2 = m_name_data.find (rich_reloc_unit.argv_2697);
				if (iter_2 == m_name_data.end()) {
					argv_1892 = argv_886;
				}
				else {
					// argv_576 this argv_2697 to the relocation list for this symbol
					_iter->second.v_relocation.push_back (rich_reloc_unit);
#if defined (DEBUG_COFF_LOADER)
					{
						char argv_3681[65536];
						argv_3409 (argv_3681, 65536, "   argv_576 reloc '%s'", rich_reloc_unit.argv_2697.c_str());
						argv_3681[65536 - 1] = '\0';
						argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
					}
#endif
				}
			}
		}
	}
	return (argv_1892);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_2114		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function is called after all symbols are argv_2117 and
// @@ contained into a map that associates each symbol's names
// @@ with it's argv_1073.
// @@ This function considers all possible symbol and loads 
// @@ all relocations for each of these symbols.
// @@ Notice that by loading we mean that each relocation
// @@ is actually a symbol, whose argv_2697 is retrieved, and saved
// @@ into a list of symbols that are related to the argv_1043 symbol.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_2114 () {
	argv_3379 argv_1892 = argv_894;
	map<string, argv_777>::iterator argv_1918; 
	argv_3717 nb_reloc;

#if defined (DEBUG_COFF_LOADER)
	argv_1689->argv_2146.argv_2142 (argv_1086, "--------- LOADING RELOCATIONS -----------");
#endif // #if defined (DEBUG_COFF_LOADER)
	for (argv_1918=m_name_data.begin() ; argv_1918 != m_name_data.end() ; ++argv_1918) {
		nb_reloc = argv_1918->second.argv_2775;
#if defined (DEBUG_COFF_LOADER)
		{
			char argv_3681[65536];
			argv_3409 (argv_3681, 65536, "%d relocations for symbol '%s'", nb_reloc, argv_1918->first.c_str());
			argv_3681[65536 - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
		}
#endif // #if defined (DEBUG_COFF_LOADER)
		for (argv_3717 i=0 ; i<nb_reloc ; i++) {
			argv_2111 (argv_1918, i);
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_2094		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2094 a given COFF argv_1314.
// @@ The necessary steps are then :
// @@ - argv_2094 the COFF argv_1806
// @@ - argv_2094 the symbol table of this COFF argv_1314.
// @@ - argv_2094 the relocations for all symbols.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must have been called prior to this call.
// @@ - the 'argv_2094' function must not have been called yet.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_2094 () {
	argv_3379 argv_1892 = argv_894;
	if (init_done == false) {
		argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_764::argv_2094 - argv_884");
		argv_1892 = argv_884;
	}
	else if (argv_2117 == true) {
		argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_764::argv_2094 - argv_885");
		argv_1892 = argv_885;
	}
	else {
#if defined (DEBUG_COFF_LOADER)
		argv_1689->argv_2146.argv_2142 (argv_1086, "loading COFF argv_1806...");
#endif // #if defined (DEBUG_COFF_LOADER)
		argv_1892 = argv_2101 ();
		if (argv_1892 != argv_894) {
			string serror = argv_1240 (argv_1892);
			argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_764::argv_2094 - error while loading argv_1806 : ", serror.c_str());
		}
		else {
#if defined (DEBUG_COFF_LOADER)
			argv_1689->argv_2146.argv_2142 (argv_1086, "COFF argv_1806 argv_2117 succesfully");
			argv_1689->argv_2146.argv_2142 (argv_1086, "loading COFF symbol table...");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_1892 = argv_2115 ();

			if (argv_1892 != argv_894) {
				string serror = argv_1240 (argv_1892);
				argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_764::argv_2094 - error while loading symbol table : ", serror.c_str());
			}
			else {
#if defined (DEBUG_COFF_LOADER)
				argv_1689->argv_2146.argv_2142 (argv_1086, "COFF symbol table argv_2117 succesfully");
#endif // #if defined (DEBUG_COFF_LOADER)
				argv_1892 = argv_2114 ();
				if (argv_1892 != argv_894) {
					string serror = argv_1240 (argv_1892);
					argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_764::argv_2094 - error while loading relocations : ", serror.c_str());
				}
				else {
#if defined (DEBUG_COFF_LOADER)
					argv_1689->argv_2146.argv_2142 (argv_1086,  "COFF relocations argv_2117 succesfully");
#endif // #if defined (DEBUG_COFF_LOADER)					
				}
			}
		}
	}
	
	if (argv_1892 == argv_894) {
#if defined (DEBUG_COFF_LOADER)
		argv_1689->argv_2146.argv_2142 (argv_1086, "COFF argv_1314 argv_2117 succesfully");
#endif // #if defined (DEBUG_COFF_LOADER)					
	}
	else {
		argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: COFF argv_1314 argv_2094 failed !");
	}
	argv_1143 ();
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_3487		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_773: symbol whose presence must be checked.
// @@
// @@ OUTPUT		:	
// @@ _presence_flag: bool&: set to true if the symbol contained in
// @@   '_symbol_name' is present into the map,
// @@   set to false otherwise.
// @@
// @@ _iter: map<string, argv_777>::iterator&: iterator containing the 
// @@   argv_1073 concerning the symbol '_symbol_name', to be more precise,
// @@   the first part of the iterator contains the symbol's argv_2697, and
// @@   the second part contains the argv_1073 associated with this symbol.
// @@   Notice that it is undefined if the '_presence_flag' is false.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given symbol is present
// @@ in the map that associates a symbol's argv_2697 to it's associated argv_1073.
// @@ If the symbol is present, then the parameter '_presence_flag' is 
// @@ set to true, otherwise it set to false.
// @@ If symbol is present in map, then an iterator pointing on the
// @@ corresponding entry from the map is returned to the caller via
// @@ the '_iter' parameter.  
// @@
// @@ CONTRACT 		: 
// @@ - '_symbol_name' parameter must not be a argv_2766 pointer.
// @@ - '_symbol_name' parameter must not be an empty string. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_3487 (argv_773 _symbol_name, bool& _presence_flag, map<string, argv_777>::iterator& _iter) {
	argv_3379 argv_1892		= argv_894;
	_presence_flag	= false;

	if ((_symbol_name == argv_2766) || (strlen(_symbol_name) == 0)) {
		argv_1892 = argv_887;		
	}
	else {
		_iter = m_name_data.find (_symbol_name);
		if (_iter != m_name_data.end()) {
			_presence_flag = true;
		}
	}
	return (argv_1892);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_3486		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_777>::iterator: iterator that points to
// @@ the symbol to check and it's associated argv_1073. 
// @@
// @@ OUTPUT		:
// @@ _answer_flag: bool&: set to true if the symbol is local, 
// @@                      set to false otherwise.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ A COFF argv_1314 contains a symbol table, 
// @@ This symbol table contains several fields,
// @@ and each symbol may either be
// @@ - internal : defined into this COFF argv_1314.
// @@ - external : defined in another COFF argv_1314.
// @@ - neither internal, nor external.
// @@ To determine whether a given symbol is internal or
// @@ external, we must consider the 'section_index' field,
// @@ If this field is set to zero, then the symbol is external,
// @@ If this field is set to a argv_3807 greater than the number of 
// @@   symbols contained in this COFF argv_1314, the symbol is neither
// @@   internal, nor external (negative argv_3325).
// @@ If this field is greater than zero, and lower or equal to
// @@ the number of symbols into the COFF argv_1314, then it is an
// @@ internal symbol.
// @@
// @@ This function permits to determine whether the symbol whose
// @@ argv_1073 are pointed to by the parameter '_iter' is a local symbol
// @@ or not. A local symbol is defined within the argv_1043 COFF argv_1314.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_3486 (map<string, argv_777>::iterator& _iter, bool& _answer_flag) {
	argv_3379 argv_1892 = argv_894;
	if (_iter->second.section_index > 0) {
		_answer_flag = true;	
	}
	else {
		_answer_flag = false;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_3485		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_777>::iterator: iterator that points to
// @@ the symbol to check and it's associated argv_1073. 
// @@
// @@ OUTPUT		:
// @@ _answer_flag: bool&: set to true if the symbol is external, 
// @@                      set to false otherwise.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ A COFF argv_1314 contains a symbol table, 
// @@ This symbol table contains several fields,
// @@ and each symbol may either be
// @@ - internal : defined into this COFF argv_1314.
// @@ - external : defined in another COFF argv_1314.
// @@ - neither internal, nor external.
// @@ To determine whether a given symbol is internal or
// @@ external, we must consider the 'section_index' field,
// @@ If this field is set to zero, then the symbol is external,
// @@ If this field is set to a argv_3807 greater than the number of 
// @@   symbols contained in this COFF argv_1314, the symbol is neither
// @@   internal, nor external (negative argv_3325).
// @@ If this field is greater than zero, and lower or equal to
// @@ the number of symbols into the COFF argv_1314, then it is an
// @@ internal symbol.
// @@
// @@ This function permits to determine whether the symbol whose
// @@ argv_1073 are pointed to by the parameter '_iter' is an external symbol
// @@ or not. An external symbol is not defined within the argv_1043 
// @@ COFF argv_1314.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_3485 (map<string, argv_777>::iterator& _iter, bool& _answer_flag) {
	argv_3379 argv_1892 = argv_894;
	if (_iter->second.section_index == 0) {
		_answer_flag = true;	
	}
	else {
		_answer_flag = false;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_2198		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_777>::iterator: iterator that points to
// @@ the symbol to check and it's associated argv_1073. 
// @@
// @@ _symbol_name: argv_773: argv_2697 of the symbol to map to virtual memory.
// @@
// @@ OUTPUT		:	
// @@ _xmapped_addr: argv_3715 *&: argv_595 of the symbol after it was mapped
// @@   to virtual memory (meaningful only in case of success).
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to request and allocate an aligned
// @@ argv_710 of virtual memory for the symbol whose argv_2697 is contained
// @@ in the '_symbol_name' parameter, and whose argv_1073 are contained 
// @@ into the '_iter' iterator.
// @@ In case of success, the argv_595 of the first byte of the allocated
// @@ argv_710 is returned to the caller via the '_xmapped_addr' parameter.
// @@
// @@ Notice that if the symbol has already been mapped to xmemory 
// @@ before, then no allocation occurs and the argv_595 of the argv_710
// @@ of virtual memory that was allocated the first argv_3678 the symbol
// @@ was mapped is returned via the '_xmapped_addr' parameter.
// @@
// @@ As this function uses an iterator given by the caller, the caller
// @@ is supposed to have performed a lookup of the symbol
// @@ in some way prior to this call.
// @@ 
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_2198 (map<string, argv_777>::iterator& _iter, argv_773 _symbol_name, argv_3715 *& _xmapped_addr) {
	argv_3379 argv_1892              = argv_894;
	void * symbol_ptr      = argv_2766;
	bool found_from_cache  = false;
	char argv_3681[MAX_PATH];

	// create a xmemory argv_710 for this symbol
	argv_1892 = argv_3848->argv_3215 (_symbol_name, (argv_3715 *) _iter->second.argv_3092, _iter->second.argv_3400, found_from_cache, &symbol_ptr);
	if (argv_1892 != argv_3852) {
		argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_764::argv_2198: xmem alloc failed !");
		argv_1892 = argv_2802;
	}
	else if (found_from_cache == true) {
		_xmapped_addr = (argv_3715 *) symbol_ptr;
		argv_3409 (argv_3681, MAX_PATH, "argv_2198: symbol '%s' found from cache at argv_595 0x%X", _symbol_name, (argv_3717) _xmapped_addr);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
	}
	else { // argv_710 not found from xmem cache
		// now copy the content of the function to xmemory
#if defined (DEBUG_COFF_LOADER)
		argv_1689->argv_2146.argv_2142 (argv_1086, "argv_764::argv_2198...[xmemory argv_710 allocated]");
#endif // #if defined (DEBUG_COFF_LOADER)
		_iter->second.real_start_addr = _iter->second.argv_3092;
#if defined (DEBUG_COFF_LOADER)
		argv_1689->argv_2146.argv_2142 (argv_1086, "argv_764::argv_2198...[copying symbol argv_1073]");
		argv_3409 (argv_3681, MAX_PATH, "argv_1335=0x%X, argv_3092=0x%X, real_start_addr=0x%X, xmem argv_710 :0x%X", argv_1335, _iter->second.argv_3092, _iter->second.real_start_addr, symbol_ptr);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);

		argv_3409 (argv_3681, MAX_PATH, "memcpy (%X, %X, %u)", symbol_ptr, _iter->second.real_start_addr, _iter->second.argv_3400);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
		argv_3409 (argv_3681, MAX_PATH, "argv_2198: symbol '%s' xmapped at argv_595 0x%X", _symbol_name, symbol_ptr);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)

		argv_3587->argv_2732 (symbol_ptr, (argv_2157) _iter->second.real_start_addr, _iter->second.argv_3400);
		if (strcmp (_symbol_name, "?argv_1337@@YAXIPAD@Z") == 0) {
#if defined (DEBUG_COFF_LOADER)
			argv_1689->argv_2146.argv_2128 (argv_1086, (argv_3715 *) symbol_ptr, _iter->second.argv_3400, "file_type_2_string_VIRGIN");
#endif // #if defined (DEBUG_COFF_LOADER)
		}

#if defined (DEBUG_COFF_LOADER)
		argv_1689->argv_2146.argv_2142 (argv_1086, "argv_764::argv_2198...[symbol argv_1073 copied]");
#endif // #if defined (DEBUG_COFF_LOADER)
		argv_3587->argv_2719();
		_xmapped_addr = (argv_3715 *) symbol_ptr;

		// beware: relocations are not solved at this point
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_2198		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_773: argv_2697 of the symbol to map to virtual memory.
// @@
// @@ OUTPUT		:
// @@ _xmapped_addr: argv_3715 *&: argv_595 of the symbol after it was mapped
// @@   to virtual memory (meaningful only in case of success).
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to request and allocate an aligned
// @@ argv_710 of virtual memory for the symbol whose argv_2697 is contained
// @@ in the '_symbol_name' parameter.
// @@ In case of success, the argv_595 of the first byte of the allocated
// @@ argv_710 is returned to the caller via the '_xmapped_addr' parameter.
// @@
// @@ Notice that if the symbol has already been mapped to xmemory 
// @@ before, then no allocation occurs and the argv_595 of the argv_710
// @@ of virtual memory that was allocated the first argv_3678 the symbol
// @@ was mapped is returned via the '_xmapped_addr' parameter.
// @@
// @@ CONTRACT 		:	
// @@ - the symbol '_symbol_name' must exists in the argv_1043 COFF argv_1314.
// @@ - the symbol '_symbol_name' must not be an external symbol.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_2198 (argv_773 _symbol_name, argv_3715 *& _xmapped_addr) {
	argv_3379 argv_1892		= argv_894;

	bool presence_flag = false;
	map<string, argv_777>::iterator iter_local;
	argv_1892 = argv_3487 (_symbol_name, presence_flag, iter_local);
	if (argv_1892 != argv_894) {
		argv_1892 = argv_896;
	}
	else if (presence_flag == false) {
		argv_1892 = argv_886;
	}
	else if (iter_local->second.section_index == 0) { // external symbol
		argv_1892 = argv_880;
	}
	else {
		argv_1892 = argv_2198 (iter_local, _symbol_name, _xmapped_addr);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_2850		
// @@
// @@ INPUT			:
// @@ _reloc_unit: Crich_reloc_unit: the argv_1073 structure containing
// @@ information about the relocation to be performed.
// @@
// @@ _local_base_addr: argv_3715 *: The argv_595 of the first byte of the
// @@  argv_710 in which relocation must be performed (base argv_595).
// @@
// @@ _solved_adress: argv_3715 *: argv_595 of the first byte of the solved
// @@   symbol to use for patching. In other words it is where we 
// @@   can find the argv_595 to use for patch.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ A COFF argv_1314 contains a symbol table which is a list
// @@ of symbols.
// @@ Each symbol may have zero to n relocations associated with it.
// @@ you can see each relocation as a 4 argv_739 hole where the argv_595
// @@ of the missing symbol must be filled in in order for the symbol
// @@ to be completed and useable.
// @@ Notice that there is a argv_3695 field associated with each relocation.
// @@ This argv_3695 determines how the relocation should be patched.
// @@ Notice that the only admitted types are :
// @@ - argv_1828: to patch, we must compute the 32 bit
// @@   relative displacement to the target.
// @@ - argv_1826: to patch, we just have to use the argv_3807 as
// @@   a virtual argv_595 (kind of absolute addressing).
// @@ The argv_1827 argv_3695 is not supported for the argv_3678 being.
// @@
// @@ This function uses the argv_1073 related to the relocation '_reloc_unit'
// @@ and the base argv_595 '_local_base_addr', and also the resolved
// @@ argv_595 '_solved_adress' to perform the relocation patch using also
// @@ the relocation argv_3695 which is a field of the _reloc_unit argv_1073 
// @@ structure.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_2850 (Crich_reloc_unit& _reloc_unit, argv_3715 * _local_base_addr, argv_3715 * _solved_adress) {
	argv_3379 argv_1892 = argv_894;
#if defined (DEBUG_COFF_LOADER)
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "patching the following relocation : '%s'", _reloc_unit.argv_2697.c_str());
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)

	argv_3717 his_size	  = argv_1616;
	argv_688 atyp;
	argv_3715 * from_addr  = argv_2766;
	argv_3715 * to_addr    = argv_2766;

	// ensure that the symbol argv_3695 is coherent
	argv_3717 argv_3695 = _reloc_unit.reloc.argv_3696;
	if ((argv_3695 != argv_1828) && (argv_3695 != argv_1826) && (argv_3695 != argv_1827)) {
		argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_764::argv_2850 - unknown argv_1073 argv_3695 : ", argv_3695);
		argv_1892 = argv_898;
	}
	else if (argv_3695 == argv_1828) { // compute the delta and patch
		to_addr          = (argv_3715 *) _local_base_addr + _reloc_unit.reloc.argv_3825;
#if defined (DEBUG_COFF_LOADER)
		{
			argv_3409 (argv_3681, MAX_PATH, "BEFORE DELTA : _solved_adress = 0x%X, to_addr=0x%X, argv_1616=%d", _solved_adress, to_addr, argv_1616);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
		}
#endif // #if defined (DEBUG_COFF_LOADER)

		// compute delta between the argv_1073 to patch and it's location in xmem
		atyp.argv_684 = (argv_3717) _solved_adress - (argv_3717) (to_addr + argv_1616);
		from_addr  = &atyp.argv_685[0];
#if defined (DEBUG_COFF_LOADER)
		argv_3409 (argv_3681, MAX_PATH, "patching [FUNCTION] relocation : (delta=%d) from=%X, to=%X, size=%X", atyp.argv_684, from_addr, to_addr, his_size);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)
	}
	else if (argv_3695 == argv_1826) { // just use the argv_3280 + argv_710 argv_3457 and patch
		atyp.argv_691	 = (argv_3717) _solved_adress;
		to_addr      = (argv_3715 *) _local_base_addr + _reloc_unit.reloc.argv_3825;
#if defined (DEBUG_COFF_LOADER)
		argv_3409 (argv_3681, MAX_PATH, "patching [DATA] relocation : from=%X, to=%X, size=%X", from_addr, to_addr, his_size);
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)
		from_addr    = &atyp.argv_685[0];
	}
	else if (argv_3695 == argv_1827) {
		argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_764::argv_2850 - relocation argv_3695 not supported : ", argv_3695);
		argv_1892 = argv_892;
	}

	if (argv_1892 == argv_894) {
		if (his_size == 0) {
			argv_1892 = argv_888;
		}
		else {
			argv_688 atyp_2;
			
			// read the argv_1073 contained at the destination argv_595
			memcpy (&atyp_2.argv_685[0], to_addr, argv_1616);
#if defined (DEBUG_COFF_LOADER)
			argv_3409 (argv_3681, MAX_PATH, "compiler prior argv_3807 was : %X (will be added to solved argv_595)", atyp_2.argv_691);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)

			// argv_576 the retrieved argv_1073 to the argv_595 to patch
			atyp.argv_691   = atyp_2.argv_691 + atyp.argv_691;
			
			// perform the actual patch
			// notice that we always patch an argv_595, nothing else => 4 argv_739
			memcpy (to_addr, from_addr, his_size);
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_3252		
// @@
// @@ INPUT			:
// @@ _root_plugin_name: argv_773: argv_2697 of the argv_1043 root plugin.
// @@
// @@ _plugin_name: argv_773: argv_2697 of the argv_1043 plugin.
// @@
// @@ _symbol_name: argv_773: argv_2697 of the symbol to argv_3249.
// @@
// @@ _iter: map<string, argv_777>::iterator&: 
// @@  iterator that associates the argv_1043 symbol's argv_2697
// @@  with it's argv_1073. these argv_1073 have been collected during
// @@  the COFF loading process.
// @@
// @@ _msc: map<string, argv_764 *>& : the map containing the 
// @@   dependancy list for the argv_1043 coff loader.
// @@
// @2 _father_addr: argv_3715 *: argv_595 of the father argv_710.
// @@   it may be argv_2766 if we are at the root of the memory tree.
// @@   This father argv_595 is especially necessary if the symbol
// @@   to argv_3249 is a label, because in that case we have to
// @@   argv_3249 the symbol using it's father's argv_710 argv_3457 argv_595.
// @@
// @@ OUTPUT		:	
// @@ _addr: argv_3715 *& : this parameter contains the argv_3266 of the
// @@   resolution. In other words it contains the argv_595 of the
// @@   resolved symbol.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3249 a symbol that is defined 
// @@ locally, in other word that is defined into the argv_1043 plugin.
// @@ to argv_3249 a given symbol, we must create a virtual memory chunk 
// @@ for it and also argv_3249 all possible relocations for this symbol.
// @@ A relocation being a reference (an argv_595) to another symbol
// @@ that may be defined in the same plugin, or in another plugin.
// @@ This function is recursive in nature and we can see the plugin
// @@ with it's dependancies as a tree with it's childs.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_3252 (argv_773 _root_plugin_name, argv_773 _plugin_name, argv_773 _symbol_name, map<string, argv_777>::iterator& _iter, map<string, argv_764 *>& _msc, argv_3715 *& _addr, argv_3715 * _father_addr) {
	argv_3379 argv_1892 = argv_894;
	char argv_3681[MAX_PATH];
#if defined (DEBUG_COFF_LOADER)
	argv_1689->argv_2146.argv_2142 (argv_1086, "argv_764::argv_3252...[IN]");
#endif // #if defined (DEBUG_COFF_LOADER)

	// if symbol is a label, then it's location is within it's father argv_710's argv_595 space
	if (_iter->second.storage_class == argv_1832) {
		_addr = _father_addr + _iter->second.argv_3807;
#if defined (DEBUG_COFF_LOADER)
		argv_3409 (argv_3681, MAX_PATH, "symbol '%s' is a label => it's location in father argv_710 (at offset 0x%X + father_addr: 0x%X = 0x%X)", _symbol_name, _iter->second.argv_3807, _father_addr, _addr);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)

		// the labels are supposed to have no relocations
		if (_iter->second.argv_2775 != 0) {
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_764::argv_3252 - symbol '%s' is a label but it has %d relocations (expected zero relocation) !", _symbol_name, _iter->second.argv_2775);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
			argv_1892 = argv_889;
		}
	}
	else { // the symbol is an actual symbol, not a label.
		// xmap the symbol as it is defined internally (size is contained in the iterator)
		argv_1892 = argv_2198 (_iter, _symbol_name, _addr);
		if (argv_1892 != argv_3852) {
			string serror = argv_1240 (argv_1892);
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : 'argv_3252' failed while looking for symbol '%s' - argv_2198 failed - %s", _symbol_name, serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
		}
		else { // symbol succesfully xmapped to memory
#if defined (DEBUG_COFF_LOADER)
			argv_1689->argv_2146.argv_2142 (argv_1086, "symbol succesfully xmapped to memory");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_1892 = argv_894;
			argv_3717 nb_relocation = _iter->second.v_relocation.size ();
			argv_3715 * solved_address = argv_2766;
			// solve all relocations for this symbol and patch their argv_595
#if defined (DEBUG_COFF_LOADER)
			argv_1689->argv_2146.argv_2142 (argv_1086, "Solve all relocations for this symbol");
			argv_1689->argv_2146.argv_2142 (argv_1086, "number of relocations : ", nb_relocation);
#endif // #if defined (DEBUG_COFF_LOADER)
			for (argv_3717 i=0 ; i<nb_relocation ; i++) {
#if defined (DEBUG_COFF_LOADER)
				{
					argv_3409 (argv_3681, MAX_PATH, "solving relocation (%d/%d) of '%s'", i+1, nb_relocation, _symbol_name);
					argv_3681[MAX_PATH - 1] = '\0';
					argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
				}
#endif // #if defined (DEBUG_COFF_LOADER)

				argv_1892 = argv_3249 (_root_plugin_name, _plugin_name, _iter->second.v_relocation[i].argv_2697.c_str(), _msc, solved_address, _addr);
#if defined (DEBUG_COFF_LOADER)
				argv_1689->argv_2146.argv_2142 (argv_1086, "argv_764::argv_3252...[RESOLVE_RETURNED]");
#endif // #if defined (DEBUG_COFF_LOADER)
				if (argv_1892 != argv_894) {
					argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : failed while resolving relocation '%s' for symbol '%s'", _iter->second.v_relocation[i].argv_2697.c_str(), _symbol_name);
					argv_3681[MAX_PATH - 1] = '\0';
					argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
					break;
				}
				else {
					argv_1892 = argv_2850 (_iter->second.v_relocation[i], _addr, solved_address);
					if (argv_1892 != argv_894) {
						argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : failed while patching relocation '%s' for symbol '%s'", _iter->second.v_relocation[i].argv_2697.c_str(), _symbol_name);
						argv_3681[MAX_PATH - 1] = '\0';
						argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
						break;
					} 
				} 
			}
		}
	}
#if defined (DEBUG_COFF_LOADER)
	argv_1689->argv_2146.argv_2142 (argv_1086, "argv_764::argv_3252...[OUT]");
#endif // #if defined (DEBUG_COFF_LOADER)
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_3251		
// @@
// @@ INPUT			:
// @@ _root_plugin_name: argv_773: argv_2697 of the argv_1043 root plugin.
// @@
// @@ _plugin_name: argv_773: argv_2697 of the argv_1043 plugin.
// @@
// @@ _symbol_name: argv_773: argv_2697 of the symbol to argv_3249.
// @@
// @@ _iter: map<string, argv_777>::iterator&:
// @@  iterator that associates the argv_1043 symbol's argv_2697
// @@  with it's argv_1073. these argv_1073 have been collected during
// @@  the COFF loading process.
// @@
// @@ _msc: map<string, argv_764 *>& : the map containing the 
// @@   dependancy list for the argv_1043 coff loader.
// @@
// @2 _father_addr: argv_3715 *: argv_595 of the father argv_710.
// @@   it may be argv_2766 if we are at the root of the memory tree.
// @@   This father argv_595 is especially necessary if the symbol
// @@   to argv_3249 is a label, because in that case we have to
// @@   argv_3249 the symbol using it's father's argv_710 argv_3457 argv_595.
// @@
// @@ OUTPUT		:	
// @@ _addr: argv_3715 *& : this parameter contains the argv_3266 of the
// @@   resolution. In other words it contains the argv_595 of the
// @@   resolved symbol.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ A COFF argv_1314 contains a part that is called the symbol table.
// @@ This symbol table is a list of symbols.
// @@ Each symbol appearing in the symbol table may be defined
// @@ in the argv_1043 COFF argv_1314, or defined in another COFF argv_1314.
// @@ This function performs the resolution of a given symbol
// @@ that is located in another COFF argv_1314 (in another plugin).
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_3251 (argv_773 _root_plugin_name, argv_773 _plugin_name, argv_773 _symbol_name, map<string, argv_777>::iterator& _iter, map<string, argv_764 *>& _msc, argv_3715 *& _addr, argv_3715 * _father_addr) {
	argv_3379 argv_1892 = argv_894;
	map<string, argv_764 *>::iterator msc_iter;
	map<string, argv_764 *>::iterator found_iter;
	map<string, argv_777>::iterator local_iter;
	char argv_3681[MAX_PATH];
#if defined (DEBUG_COFF_LOADER)
	argv_3409 (argv_3681, MAX_PATH, "argv_3251: must argv_3249 '%s'", _symbol_name);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)
	
	// try to locate the module where this external symbol is defined
	bool presence_flag = false;
	argv_3717 nb_found      = 0;

	for (msc_iter=_msc.begin() ; msc_iter != _msc.end() ; ++msc_iter) {
		argv_1892 = msc_iter->second->argv_3487 (_symbol_name, presence_flag, local_iter);
		if (argv_1892 != argv_894) {
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3251 : 'argv_3251' failed while looking for symbol '%s'", _symbol_name);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
			break;
		}
		else if (presence_flag == true) { 
			argv_1892 = msc_iter->second->argv_3486 (local_iter, presence_flag);
			if (argv_1892 != argv_894) {
				argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3251 : 'argv_3486' failed while looking for symbol '%s'", _symbol_name);
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
				break;
			}
			else {
				if (presence_flag == true) { // symbol is present, and local to the module
#if defined (DEBUG_COFF_LOADER)
					argv_3409 (argv_3681, MAX_PATH, "=> external symbol '%s' located in module '%s'", _symbol_name, msc_iter->first.c_str());
					argv_3681[MAX_PATH - 1] = '\0';
					argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)

					nb_found++; // go on however to check for duplicates
					if (nb_found == 1) {
						found_iter = msc_iter;
					}
				}
			}
		}
	}

	if (argv_1892 == argv_894) {
		// check whether it was found or not
		if (nb_found == 0) {
			argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: 0 definition found for this symbol !");
			argv_1892 = argv_900;
		}
		else if (nb_found > 1) {
			argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: this symbol is defined several times : ", nb_found);
			argv_1892 = argv_899;
		}
		else if (nb_found == 1) { // ok, we found the unique module where this symbol is defined
#if defined (DEBUG_COFF_LOADER)
			argv_1689->argv_2146.argv_2142 (argv_1086, "symbol definition found !");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_1892 = found_iter->second->argv_3249 (_plugin_name, found_iter->first.c_str(), _symbol_name, _msc, _addr, _father_addr);
#if defined (DEBUG_COFF_LOADER)
			argv_1689->argv_2146.argv_2142 (argv_1086, "argv_764::argv_3251...[RESOLVE_RETURNED]");
#endif // #if defined (DEBUG_COFF_LOADER)

			if (argv_1892 != argv_894) {
				argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 failed for external symbol '%s' located in module '%s'", _symbol_name, found_iter->first.c_str());
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
			}
			else {
#if defined (DEBUG_COFF_LOADER)
				argv_3409 (argv_3681, MAX_PATH, "resolved external symbol '%s' located in module '%s' at argv_595 %X", _symbol_name, found_iter->first.c_str(), _addr);
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_764
// @@
// @@ FUNCTION		:	argv_3249		
// @@
// @@ INPUT			:
// @@ _root_plugin_name: argv_773: argv_2697 of the argv_1043 root plugin.
// @@
// @@ _plugin_name: argv_773: argv_2697 of the argv_1043 plugin.
// @@
// @@ _symbol_name: argv_773: argv_2697 of the symbol to argv_3249.
// @@
// @@ _msc: map<string, argv_764 *>& : the map containing the 
// @@   dependancy list for the argv_1043 coff loader
// @@
// @2 _father_addr: argv_3715 *: argv_595 of the father argv_710.
// @@   it may be argv_2766 if we are at the root of the memory tree.
// @@   This father argv_595 is especially necessary if the symbol
// @@   to argv_3249 is a label, because in that case we have to
// @@   argv_3249 the symbol using it's father's argv_710 argv_3457 argv_595.
// @@
// @@ OUTPUT		:
// @@ _addr: argv_3715 *& : this parameter contains the argv_3266 of the
// @@   resolution. In other words it contains the argv_595 of the
// @@   resolved symbol.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_894 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3249 the symbol whose argv_2697
// @@ is contained into the '_symbol_name' parameter.
// @@ the symbol is supposed to be defined in the plugin whose argv_2697
// @@ is contained in the '_symbol_name' parameter.
// @@ As this function is recursive in nature, we also keep track
// @@ of the root plugin via the '_root_plugin_name' parameter.
// @@ The resolved argv_595 is then returned via the '_addr' parameter.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must have been called prior to this call
// @@ - the COFF argv_1314 associated with the argv_1043 argv_764 argv_2785
// @@   must have been argv_2117 succesfully prior to this call.
// @@ - '_symbol_name' parameter must not be a argv_2766 pointer.
// @@ - '_symbol_name' parameter must not be an empty string.
// @@ - the symbol whose argv_2697 is contained in the '_symbol_name'
// @@   variable must be present in the COFF argv_1314 associated with 
// @@   the argv_1043 argv_764 argv_2785.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_764::argv_3249 (argv_773 _root_plugin_name, argv_773 _plugin_name, argv_773 _symbol_name, map<string, argv_764 *>& _msc, argv_3715 *& _addr, argv_3715 * _father_addr) {
	argv_3379 argv_1892 = argv_894;
	char argv_3681[MAX_PATH];
#if defined (DEBUG_COFF_LOADER)
	argv_3409 (argv_3681, MAX_PATH, "must argv_3249 =====[ROOT_PLUGIN:%s]===[PLUGIN:%s]===[%s]==[father_addr=0x%X]=====", _root_plugin_name, _plugin_name, _symbol_name, _father_addr);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)

	if (init_done == false) {
		argv_1892 = argv_884;
	}
	else if (argv_2117 == false) {
		argv_1892 = argv_882;
	}
	else {
#if defined (DEBUG_COFF_LOADER)
		argv_1689->argv_2146.argv_2142 (argv_1242, "argv_764::argv_3249...[PRE-CONDITIONS OK]");
#endif // #if defined (DEBUG_COFF_LOADER)
		// check parameters validity
		if ((_symbol_name == argv_2766) || (strlen(_symbol_name) == 0)) {
			argv_1892 = argv_887;
		}
		else { // parameters are correct
			bool presence_flag = false;
#if defined (DEBUG_COFF_LOADER)
			argv_1689->argv_2146.argv_2142 (argv_1086, "argv_764::argv_3249...[PARAMETERS OK]");
#endif // #if defined (DEBUG_COFF_LOADER)
			map<string, argv_777>::iterator iter_local;

			// notice that even if symbol is external it should be present
#if defined (DEBUG_COFF_LOADER)
			argv_1689->argv_2146.argv_2142 (argv_1086, "argv_764::argv_3249...[CHECK SYMBOL PRESENCE]");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_1892 = argv_3487 (_symbol_name, presence_flag, iter_local); 
			if (argv_1892 != argv_894) {
				argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : 'argv_3487' failed while looking for symbol '%s'", _symbol_name);
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
			}
			else if (presence_flag == false) { 
				argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : symbol not found in argv_1043 module : '%s'", _symbol_name);
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
				argv_1892 = argv_890;
			}
			else { // symbol is present, it can be either external, internal, or none of them
#if defined (DEBUG_COFF_LOADER)
				argv_1689->argv_2146.argv_2142 (argv_1242, "argv_764::argv_3249...[SYMBOL PRESENT IN MODULE]");
#endif // #if defined (DEBUG_COFF_LOADER)
				// check whether symbol was already xmapped or not
				argv_3717 unused_size;
				argv_1892 = argv_3848->argv_3481 (_symbol_name, (argv_3715 *) iter_local->second.argv_3092, iter_local->second.argv_3400, presence_flag, _addr, unused_size);
				if (argv_1892 != argv_3852) {
					string serror = argv_1240 (argv_1892);
					argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3480 failed while processing symbol '%s' (errno=%s)", _symbol_name, serror.c_str());
					argv_3681[MAX_PATH - 1] = '\0';
					argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
				}
				else { 
					argv_1892 = argv_894;
					if (presence_flag == true) {
#if defined (DEBUG_COFF_LOADER)
						argv_3409 (argv_3681, MAX_PATH, "symbol '%s' was already xmapped at argv_595 0x%X", _symbol_name, _addr);
						argv_3681[MAX_PATH - 1] = '\0';
						argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
#endif // #if defined (DEBUG_COFF_LOADER)
					}
					else {
#if defined (DEBUG_COFF_LOADER)
						argv_1689->argv_2146.argv_2142 (argv_1086, "symbol was not xmapped yet");
#endif // #if defined (DEBUG_COFF_LOADER)
						argv_1892 = argv_3486 (iter_local, presence_flag);
						if (argv_1892 != argv_894) {
							argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : 'argv_3486' failed while looking for symbol '%s'", _symbol_name);
							argv_3681[MAX_PATH - 1] = '\0';
							argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
						}
						else if (presence_flag == true) { // symbol is locally defined
#if defined (DEBUG_COFF_LOADER)
							argv_1689->argv_2146.argv_2142 (argv_1242, "argv_764::argv_3249...[SYMBOL IS LOCALLY DEFINED]");
#endif // #if defined (DEBUG_COFF_LOADER)
							argv_1892 = argv_3252 (_root_plugin_name, _plugin_name, _symbol_name, iter_local, _msc, _addr, _father_addr);
							if (argv_1892 == argv_894) {
#if defined (DEBUG_COFF_LOADER)
								argv_1689->argv_2146.argv_2128 (argv_1086, _addr, iter_local->second.argv_3400, _symbol_name);
#endif // #if defined (DEBUG_COFF_LOADER)
							}
						}
						else { // symbol is either external, or none
#if defined (DEBUG_COFF_LOADER)
							argv_1689->argv_2146.argv_2142 (argv_1086, "argv_764::argv_3249...[SYMBOL IS EITHER EXTERNAL, OR UNKNOWN]");
#endif // #if defined (DEBUG_COFF_LOADER)
							argv_1892 = argv_3485 (iter_local, presence_flag);
							if (argv_1892 != argv_894) {
								argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : 'argv_3485' failed while looking for symbol '%s'", _symbol_name);
								argv_3681[MAX_PATH - 1] = '\0';
								argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
							}
							else if (presence_flag == false) { // symbol exists, but it is meaningless
								argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : symbol '%s' is neither internal, nor external !", _symbol_name);
								argv_3681[MAX_PATH - 1] = '\0';
								argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
								argv_1892 = argv_893;
							}
							else { // symbol exists, and it is defined externally
#if defined (DEBUG_COFF_LOADER)
								argv_1689->argv_2146.argv_2142 (argv_1086, "symbol is defined externally");
#endif // #if defined (DEBUG_COFF_LOADER)
								argv_1892 = argv_3251 (_root_plugin_name, _plugin_name, _symbol_name, iter_local, _msc, _addr, _father_addr);
							}
						}
					}
				}
			}
		}
	}
#if defined (DEBUG_COFF_LOADER)
	argv_1689->argv_2146.argv_2142 (argv_1086, "argv_764::argv_3249...[OUT]");
#endif // #if defined (DEBUG_COFF_LOADER)
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
