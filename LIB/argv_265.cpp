#include "../LIB/argv_324.hpp"
//#include "Dbghelp.h"


string argv_762::argv_3467 (argv_3715 _storage_class) {
	string argv_3266 = "";
	switch (_storage_class) {
		case IMAGE_SYM_CLASS_END_OF_FUNCTION:	argv_3266 = "IMAGE_SYM_CLASS_END_OF_FUNCTION"; break;
		case IMAGE_SYM_CLASS_NULL:				argv_3266 = "IMAGE_SYM_CLASS_NULL";			break;
		case IMAGE_SYM_CLASS_AUTOMATIC:			argv_3266 = "IMAGE_SYM_CLASS_AUTOMATIC";		break;
		case IMAGE_SYM_CLASS_EXTERNAL:			argv_3266 = "IMAGE_SYM_CLASS_EXTERNAL";		break;
		case IMAGE_SYM_CLASS_STATIC:			argv_3266 = "IMAGE_SYM_CLASS_STATIC";			break;
		case IMAGE_SYM_CLASS_REGISTER:			argv_3266 = "IMAGE_SYM_CLASS_REGISTER";		break;
		case IMAGE_SYM_CLASS_EXTERNAL_DEF:		argv_3266 = "IMAGE_SYM_CLASS_EXTERNAL_DEF";	break;
		case argv_1832:				argv_3266 = "argv_1832";			break;
		case IMAGE_SYM_CLASS_UNDEFINED_LABEL:	argv_3266 = "IMAGE_SYM_CLASS_UNDEFINED_LABEL"; break;
		case IMAGE_SYM_CLASS_MEMBER_OF_STRUCT:	argv_3266 = "IMAGE_SYM_CLASS_MEMBER_OF_STRUCT";break;
		case IMAGE_SYM_CLASS_ARGUMENT:			argv_3266 = "IMAGE_SYM_CLASS_ARGUMENT";		break;
		case IMAGE_SYM_CLASS_STRUCT_TAG:		argv_3266 = "IMAGE_SYM_CLASS_STRUCT_TAG";		break;
		case IMAGE_SYM_CLASS_MEMBER_OF_UNION:	argv_3266 = "IMAGE_SYM_CLASS_MEMBER_OF_UNION"; break;
		case IMAGE_SYM_CLASS_UNION_TAG:			argv_3266 = "IMAGE_SYM_CLASS_UNION_TAG";		break;
		case IMAGE_SYM_CLASS_TYPE_DEFINITION:	argv_3266 = "IMAGE_SYM_CLASS_TYPE_DEFINITION"; break;
		case IMAGE_SYM_CLASS_UNDEFINED_STATIC:	argv_3266 = "IMAGE_SYM_CLASS_UNDEFINED_STATIC";break;
		case IMAGE_SYM_CLASS_ENUM_TAG:			argv_3266 = "IMAGE_SYM_CLASS_ENUM_TAG";		break;
		case IMAGE_SYM_CLASS_MEMBER_OF_ENUM:	argv_3266 = "IMAGE_SYM_CLASS_MEMBER_OF_ENUM";	break;
		case IMAGE_SYM_CLASS_REGISTER_PARAM:	argv_3266 = "IMAGE_SYM_CLASS_REGISTER_PARAM";	break;
		case IMAGE_SYM_CLASS_BIT_FIELD:			argv_3266 = "IMAGE_SYM_CLASS_BIT_FIELD";		break;
		case IMAGE_SYM_CLASS_BLOCK:				argv_3266 = "IMAGE_SYM_CLASS_BLOCK";			break;
		case IMAGE_SYM_CLASS_FUNCTION:			argv_3266 = "IMAGE_SYM_CLASS_FUNCTION";		break;
		case IMAGE_SYM_CLASS_END_OF_STRUCT:		argv_3266 = "IMAGE_SYM_CLASS_END_OF_STRUCT";	break;
		case IMAGE_SYM_CLASS_FILE:				argv_3266 = "IMAGE_SYM_CLASS_FILE";			break;
		case IMAGE_SYM_CLASS_SECTION:			argv_3266 = "IMAGE_SYM_CLASS_SECTION";			break;
		case IMAGE_SYM_CLASS_WEAK_EXTERNAL:		argv_3266 = "IMAGE_SYM_CLASS_WEAK_EXTERNAL";	break;
		case 107:								argv_3266 = "IMAGE_SYM_CLASS_CLR_TOKEN";		break;

		default: argv_3266 = "<unknown>";
	}
	return (argv_3266);
}

string argv_762::invalid_section_2_string (argv_3378 _invalid_section_index) {
	string argv_3266 = "";
	switch (_invalid_section_index) {
		case IMAGE_SYM_UNDEFINED:	argv_3266 = "(IMAGE_SYM_UNDEFINED)"; break;
		case IMAGE_SYM_ABSOLUTE:	argv_3266 = "(IMAGE_SYM_ABSOLUTE)"; break;
		case IMAGE_SYM_DEBUG:		argv_3266 = "(IMAGE_SYM_DEBUG)"; break;	
	}
	return (argv_3266);
}

void argv_1035::argv_1130 (argv_792 *	_glob_data_ptr, argv_773 _symbol_name, bool _verbose_name) {
	char argv_3681[MAX_PATH];
	argv_762 coff_dns;
	if (_verbose_name == true) {
		string storage_str = coff_dns.argv_3467 (argv_3468);
		string invalid_section_str;
		if (argv_3330 > 0) {
			invalid_section_str = "(argv_3457 at 1)";
			argv_3409 (argv_3681, MAX_PATH, "=> %-25s: argv_3808 = 0x%-5X, argv_3330 = %-2d %-21s, argv_3468 = 0x%02X (%s)", _symbol_name, argv_3808, argv_3330, invalid_section_str.c_str(), argv_3468, storage_str.c_str());
		}
		else {
			invalid_section_str = coff_dns.invalid_section_2_string (argv_3330);
			argv_3409 (argv_3681, MAX_PATH, "=> %-25s: argv_3808 = 0x%-5X, argv_3330 = %-2d %-21s, argv_3468 = 0x%02X (%s)", _symbol_name, argv_3808, argv_3330, invalid_section_str.c_str(), argv_3468, storage_str.c_str());
		}
	}
	else {
		argv_3409 (argv_3681, MAX_PATH, "=> %s", _symbol_name);
	}
	argv_3681[MAX_PATH - 1] = '\0';
	_glob_data_ptr->argv_2146.argv_2142 (argv_1086, argv_3681);
}

argv_763::argv_763 () {
	reset ();
}

argv_763::~argv_763() {
	reset ();
}

void argv_763::reset () {
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

	if (argv_2183.size() > 0) {
		argv_2183.clear ();
	}
}

argv_3379 argv_763::init (argv_792 * _glob_data_ptr, argv_3449 * _systool_ptr, argv_767 * _compress_tool_ptr, argv_774 * _cypher_tool_ptr, argv_3715 * _file_start_addr, argv_3717 _file_size, argv_1061 * _xmem_mgr_ptr) {
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
// @@ CLASS			:	argv_763
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
// @@ bool argv_763::argv_3484 (argv_773 _symb) {
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
bool argv_763::argv_3484 (argv_773 _s, argv_3717& _size) {
	_size = strlen (_s);
	argv_3717 i=0;
	bool bret = false;
	bool eaten_digit = false;
	// smallest size is 9, so let's ensure that the supposed string is not too short
	if (_size >= 9) {
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
			while ((i < _size) && (_s[i] >= 'A') && (_s[i]<='P')) {
				i++;
			}

			if ((i < _size) && (_s[i]=='@')) {
				// jump the '@'
				i++;
				// eat all except '@'
				argv_3717 k=0;
				while ((i < _size) && (_s[i] != '@')) {
					k++;
					i++;
				}

				// if second digit consumed => argv_714 may be empty
				if (i < _size) {
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
// @@ CLASS			:	argv_763
// @@
// @@ FUNCTION		:	generate_demangled_name		
// @@
// @@ INPUT			:	
// @@ _name: argv_773: argv_2697 to convert to simple argv_2697.
// @@
// @@ OUTPUT		:	
// @@ _simple_name: string&: generated simplified argv_2697
// @@    using the '_name' parameter.
// @@
// @@ _is_string: bool&: set to true if the mangled argv_2697 is a string
// @@             set to false otherwise.
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
bool argv_763::argv_1631 (argv_773 _name, string& _simple_name, bool& _is_string) {
	bool bret = false;
	_simple_name = ""; 
	argv_3717 size;
	_is_string = argv_3484 (_name, size);
	if (_is_string == false) {
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
		bret = true;
	}

	// log the demangled argv_2697 (just for info)
	/*{
		char argv_3681[argv_1812];
		char szUndName[argv_1812];
		if (UnDecorateSymbolName (_name, szUndName, 
			sizeof(szUndName), argv_3750))
		{
			// UnDecorateSymbolName returned success
			argv_3409 (argv_3681, argv_1812, "mangled argv_2697: '%s', demangled argv_2697 : '%s'", _name, szUndName);
		}
		else {// failed to demangle the argv_2697
			argv_3409 (argv_3681, argv_1812, "mangled argv_2697: '%s', demangled argv_2697 : (FAILED)", _name);
		}
		argv_3681[argv_1812 - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
	}*/
	return (bret);
}

argv_3379 argv_763::argv_2101 () {
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
// @@ CLASS			:	argv_763
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
bool argv_763::argv_2705 (argv_3715 * _cptr) {
	bool bret = false;
	if ((_cptr[0] != 0) || (_cptr[1] != 0) || (_cptr[2] != 0) || (_cptr[3] != 0)) {
		bret = true;
	}
	return (bret);
}

argv_3715 * argv_763::argv_1299 (argv_3717 _symbol_table_index, argv_3490 *& _entry_ptr, bool& _is_short) {
	argv_3715 * name_ptr	= argv_2766;
	argv_3373[8]	= '\0';
	argv_688 atyp;
	argv_3717 itmp;

	itmp = (argv_3717) argv_3489 + (argv_3491 * _symbol_table_index);	
	_entry_ptr = (argv_3490 *) itmp;
	if (argv_2705 (_entry_ptr->argv_2698) == true) {
		memcpy (&argv_3373[0], _entry_ptr->argv_2698, 8);
		name_ptr = &argv_3373[0];
		_is_short = true;
	}
	else {
		_is_short = false;
		memcpy (&atyp.argv_685[0], &_entry_ptr->argv_2698[4], 4);
		name_ptr = argv_3472 + atyp.argv_691;
	}
	return (name_ptr);
}

void argv_763::argv_1148 (argv_773 _symbol_name, argv_773 _simplified_name, bool _is_short, bool _is_string, bool _was_simplified) {
	char argv_3681[MAX_PATH];	
	if (_is_short == true) {
		if (_is_string == true) {
			if (_was_simplified == true) {
				argv_3409 (argv_3681, MAX_PATH, "%-25s [argv_3373|string=true|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_3409 (argv_3681, MAX_PATH, "%-25s [argv_3373|string=true]", _symbol_name);
			}
		}
		else {
			if (_was_simplified == true) {
				argv_3409 (argv_3681, MAX_PATH, "%-25s [argv_3373|string=false|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_3409 (argv_3681, MAX_PATH, "%-25s [argv_3373|string=false]", _symbol_name);
			}
		}
	}
	else {
		if (_is_string == true) {
			if (_was_simplified == true) {
				argv_3409 (argv_3681, MAX_PATH, "%-25s [long_name|string=true|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_3409 (argv_3681, MAX_PATH, "%-25s [long_name|string=true]", _symbol_name);
			}
		}
		else {
			if (_was_simplified == true) {
				argv_3409 (argv_3681, MAX_PATH, "%-25s [long_name|string=false|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_3409 (argv_3681, MAX_PATH, "%-25s [long_name|string=false]", _symbol_name);
			}
		}
	}
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
}

argv_3379 argv_763::argv_2115 () {
	argv_3379 argv_1892 = argv_894;
	if (init_done == false) {
		argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_763::argv_2115 - argv_884");
		argv_1892 = argv_884;
	}
	else {
		argv_3490 * entry_ptr	= argv_2766;
		argv_3715 * name_ptr					= argv_2766;
		string demangled_name;
		argv_1035	thumbnail;
		bool bret = true;
		bool is_short;
		bool is_string;
		
		for (argv_3717 i=0 ; i<argv_1819.argv_2779 ; ) {
			name_ptr = argv_1299 (i, entry_ptr, is_short);

			thumbnail.argv_3330					= entry_ptr->argv_3330;
			thumbnail.argv_3468					= entry_ptr->argv_3468;
			thumbnail.argv_3696							= entry_ptr->argv_3696;
			thumbnail.argv_3808							= entry_ptr->argv_3808;
			// save the original argv_2697
			argv_2183[(argv_773)name_ptr]	= thumbnail;
			bret = argv_1631 ((argv_773) name_ptr, demangled_name, is_string);

#if defined (__DEBUG_COFF_LOADER__)
			argv_1148 ((argv_773) name_ptr, demangled_name.c_str(), is_short, is_string, bret);
#endif // #if defined (__DEBUG_COFF_LOADER__)

			if (bret == true) {
				// save the simple argv_2697 as well (redundancy)
				argv_2183[demangled_name]= thumbnail;
			}

			i++;
			if (entry_ptr->argv_2767 > 0) {
				i += entry_ptr->argv_2767;
			}
		}
	}
	return (argv_1892);
}

argv_3379 argv_763::argv_2094 () {
	argv_3379 argv_1892 = argv_894;
	if (init_done == false) {
		argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_763::argv_2094 - argv_884");
		argv_1892 = argv_884;
	}
	else if (argv_2117 == true) {
		argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_763::argv_2094 - argv_885");
		argv_1892 = argv_885;
	}
	else {
		argv_1892 = argv_2101 ();
		if (argv_1892 == argv_894) {
			argv_1892 = argv_2115 ();		
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_763
// @@
// @@ FUNCTION		:	argv_1147		
// @@
// @@ INPUT			:	
// @@ bool: _verbose_mode: more details are displayed if set to true.
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
void argv_763::argv_1147 (bool _verbose_mode) {
	map<string, argv_1035>::iterator iter_local;	
	argv_1689->argv_2146.argv_2142 (argv_1086, "=== symbols defined in this argv_2691 module ===");
	for (iter_local=argv_2183.begin() ; iter_local != argv_2183.end() ; ++iter_local) {
		iter_local->second.argv_1130 (argv_1689, iter_local->first.c_str(), _verbose_mode);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_763
// @@
// @@ FUNCTION		:	argv_3487		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_773: symbol whose presence must be checked.
// @@
// @@ OUTPUT		:	
// @@
// @@ _iter: map<string, argv_1035>&: iterator containing the 
// @@   argv_1073 concerning the symbol '_symbol_name', to be more precise,
// @@   the first part of the iterator contains the symbol's argv_2697, and
// @@   the second part contains the argv_1073 associated with this symbol.
// @@   Notice that it is undefined if the symbol is not present.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the symbol whose argv_2697 was given as a parameter 
// @@       is present,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given symbol is present
// @@ in the map that associates a symbol's argv_2697 to it's associated argv_1073.
// @@ If symbol is present in map, then an iterator pointing on the
// @@ corresponding entry from the map is returned to the caller via
// @@ the '_iter' parameter.  
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_763::argv_3487 (argv_773 _symbol_name, map<string, argv_1035>::iterator& _iter) {
	bool bret = false;
	_iter = argv_2183.find (_symbol_name);
	if (_iter != argv_2183.end()) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_763
// @@
// @@ FUNCTION		:	argv_3486		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_1035>::iterator: iterator that 
// @@ points to the symbol to check and it's associated argv_1073. 
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if the symbol is local,
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
bool argv_763::argv_3486 (map<string, argv_1035>::iterator& _iter) {
	bool bret = false;
	if (_iter->second.argv_3330 > 0) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_763
// @@
// @@ FUNCTION		:	argv_3485		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_1035>::iterator: iterator that 
// @@ points to the symbol to check and it's associated argv_1073. 
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if symbol is external,
// @@       false otherwise.	
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
bool argv_763::argv_3485 (map<string, argv_1035>::iterator& _iter) {
	bool bret = false;
	if (_iter->second.argv_3330 == 0) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_763
// @@
// @@ FUNCTION		:	argv_2198		
// @@
// @@ INPUT			:
// @@ _section_hdr_ptr: argv_1829 *: pointer on the 
// @@  argv_1806 of the argv_3325 where the symbol is defined (permits
// @@  to retrieve it's content).
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
argv_3379 argv_763::argv_2198 (argv_1829 * _section_hdr_ptr, argv_773 _symbol_name, argv_3715 *& _xmapped_addr) {
	argv_3379 argv_1892              = argv_894;
	void * symbol_ptr      = argv_2766;
	bool found_from_cache  = false;
	char argv_3681[MAX_PATH];

	// create a xmemory argv_710 for this symbol
	argv_3715 * pointer_2_raw_data_real = _section_hdr_ptr->argv_3092 + argv_1335;
	argv_1892 = argv_3848->argv_3215 (_symbol_name, pointer_2_raw_data_real, _section_hdr_ptr->argv_3400, found_from_cache, &symbol_ptr);
	if (argv_1892 != argv_3852) {
		string serror = argv_1240 (argv_1892);
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: xmem argv_710 allocation request failed for symbol '%s' (errno = %s)", _symbol_name, serror.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
		argv_1892 = argv_2802;
	}
	else if (found_from_cache == true) {
		_xmapped_addr = (argv_3715 *) symbol_ptr;
		argv_3409 (argv_3681, MAX_PATH, "symbol '%s' found from xmem cache at argv_595 0x%X", _symbol_name, (argv_3717) _xmapped_addr);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
	}
	else { // argv_710 not found from xmem cache
		// now copy the content of the function to xmemory

		argv_3587->argv_2732 (symbol_ptr, (argv_2157) pointer_2_raw_data_real, _section_hdr_ptr->argv_3400);

#if defined (__DEBUG_COFF_LOADER__)
		argv_3409 (argv_3681, MAX_PATH, "symbol '%s' xmapped at argv_595 0x%X (content copied : %u argv_739)", _symbol_name, symbol_ptr, _section_hdr_ptr->argv_3400);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		argv_3587->argv_2719 ();
		_xmapped_addr = (argv_3715 *) symbol_ptr;
		// beware: relocations are not solved at this point
	}

	if (argv_1892 == argv_3852) { // remap error argv_877
		argv_1892 = argv_894;
	}
	return (argv_1892);
}

argv_3379 argv_763::argv_3251 (map<string, argv_1035>::iterator& _iter, argv_773 _root_plugin_name, argv_773 _plugin_name, argv_773 _symbol_name, map<string, argv_763 *>& _msc, argv_3715 *& _resolved_addr, argv_3715 * _father_addr) {
	argv_3379 argv_1892 = argv_894;
	map<string, argv_763 *>::iterator		msc_iter;
	map<string, argv_763 *>::iterator		found_iter;
	map<string, argv_1035>::iterator	thumbnail_iter;
	argv_3717 nb_found = 0;
	char argv_3681[MAX_PATH];

#if defined (__DEBUG_COFF_LOADER__)
	argv_3409 (argv_3681, MAX_PATH, "solving external symbol '%s' (searching from dependancy list containing %u elements)", _symbol_name, _msc.size());
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	// try to locate the module where this external symbol is defined
	for (msc_iter=_msc.begin() ; msc_iter != _msc.end() ; ++msc_iter) {
		if ((msc_iter->second->argv_3487 (_symbol_name, thumbnail_iter) == true) && (msc_iter->second->argv_3486 (thumbnail_iter) == true)) {
			if (nb_found == 0) { // save up the first instance of the symbol found
				found_iter = msc_iter;
			}
			else { // multiple instances found => log this error
				if (nb_found == 1) {
					argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: found multiple instance of symbol '%s' (firts instance found in module '%s')", _symbol_name, found_iter->first.c_str());
					argv_3681[MAX_PATH - 1] = '\0';
					argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
				}
				argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: symbol '%s' already defined in module '%s'", _symbol_name, msc_iter->first.c_str());
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
				argv_1892 = argv_899;
			}
			nb_found++;
		}
#if defined (__DEBUG_COFF_LOADER__)
		else {
			argv_3409 (argv_3681, MAX_PATH, "symbol '%s' not defined in module '%s'", _symbol_name, msc_iter->first.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
		}
#endif // #if defined (__DEBUG_COFF_LOADER__)
	}

	if (argv_1892 == argv_894) {
		if (nb_found == 0) {
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: undefined symbol '%s'", _symbol_name);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
			argv_1892 = argv_900;
		}
		else if (nb_found == 1) {
#if defined (__DEBUG_COFF_LOADER__)
			argv_3409 (argv_3681, MAX_PATH, "definition of external symbol '%s' found in module '%s'", _symbol_name, found_iter->first.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)
			argv_1892 = found_iter->second->argv_3249 (_plugin_name, found_iter->first.c_str(), _symbol_name, _msc, _resolved_addr, _father_addr);
		}
	}
	return (argv_1892);
}



argv_3379 argv_763::argv_2850 (argv_3717 _reloc_id, argv_773 _symbol_name, argv_1821 * _reloc_ptr, argv_3715 * _local_base_addr, argv_3715 * _reloc_solved_adress) {
	argv_3379 argv_1892 = argv_894;

#if defined (__DEBUG_COFF_LOADER__)
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "patching relocation %u of symbol '%s' (father argv_710 located at 0x%X)", _reloc_id, _symbol_name, _local_base_addr);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	// ensure that the symbol argv_3695 is coherent
	argv_3717 argv_3695 = _reloc_ptr->argv_3696;
	if ((argv_3695 != argv_1828) && (argv_3695 != argv_1826) && (argv_3695 != argv_1827)) {
		argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: while patching relocation - unknown argv_1073 argv_3695 : ", argv_3695);
		argv_1892 = argv_898;
	}
	else if (argv_3695 == argv_1827) {
		argv_1689->argv_2146.argv_2142 (argv_1242, "+++ ERROR: while patching relocation - relocation argv_3695 not supported : ", argv_3695);
		argv_1892 = argv_892;
	}
	else { // relocation argv_3695 is valid and can be handled.
		argv_688 atyp, atyp_2;
		argv_3715 * to_addr = (argv_3715 *) _local_base_addr + _reloc_ptr->argv_3825;
#if defined (__DEBUG_COFF_LOADER__)
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "must patch adress : 0x%X", to_addr);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)

		if (argv_3695 == argv_1828) {
			// compute delta between the argv_1073 to patch and it's location in xmem
			atyp.argv_684 = (argv_3717) _reloc_solved_adress - (argv_3717) (to_addr + argv_1616);
#if defined (__DEBUG_COFF_LOADER__)
			if (atyp.argv_684 > 0) {
				argv_3409 (argv_3681, MAX_PATH, "relocation is relative to father argv_710 : delta = +%d", atyp.argv_684);
			}
			else {
				argv_3409 (argv_3681, MAX_PATH, "relocation is relative to father argv_710 : delta = %d", atyp.argv_684);
			}
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		}
		else if (argv_3695 == argv_1826) {
			// just use the (argv_3280 + block_start) to patch
			atyp.argv_691 = (argv_3717) _reloc_solved_adress;
#if defined (__DEBUG_COFF_LOADER__)
			argv_3409 (argv_3681, MAX_PATH, "relocation is direct : 0x%X", atyp.argv_691);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		}

		argv_3715 * from_addr  = &atyp.argv_685[0];
		// we must consider the argv_1043 argv_3807, and argv_576 it to the argv_3807 we computed.
		// read the argv_1073 contained at the destination argv_595
		memcpy (&atyp_2.argv_685[0], to_addr, argv_1616);
		// argv_576 the retrieved argv_1073 to the argv_595 to patch
		atyp.argv_691 = atyp_2.argv_691 + atyp.argv_691;
		// perform the actual patch (notice that we always patch an argv_595, nothing else => 4 argv_739)
		memcpy (to_addr, from_addr, argv_1616);
	}
	return (argv_1892);
}



argv_3379 argv_763::argv_3250 (map<string, argv_1035>::iterator& _iter, argv_1829 * _section_hdr_ptr, argv_773 _root_plugin_name, argv_773 _plugin_name, argv_773 _symbol_name, map<string, argv_763 *>& _msc, argv_3715 *& _symb_resolved_addr, argv_3715 * _father_addr) {
	argv_3379 argv_1892 = argv_894;
	char argv_3681[MAX_PATH];
	argv_1821 * reloc_ptr				= argv_2766;
	argv_3715 *                  reloc_ptr_UI08			= argv_2766;
	argv_3490 *	entry_ptr				= argv_2766;
	argv_3715 *					name_ptr				= argv_2766;
	argv_3715 *					reloc_solved_address	= argv_2766;
	argv_3717					itmp, itmp1;
	bool					is_short;

#if defined (__DEBUG_COFF_LOADER__)
	argv_3409 (argv_3681, MAX_PATH, "resolving relocations for symbol '%s' (number of relocations : %u)", _symbol_name, _section_hdr_ptr->argv_2775);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	for (argv_3717 i=0 ; i<_section_hdr_ptr->argv_2775 ; i++) {
		// goto this relocation
		itmp  = (argv_3717) _section_hdr_ptr->argv_3093;
		itmp1 = (argv_3717) argv_1335;
		itmp = itmp + itmp1;
		itmp = itmp + (i * argv_1822);
		reloc_ptr = (argv_1821 *) itmp;
		reloc_ptr_UI08 = (argv_3715 *) reloc_ptr;
/*
#if defined (__DEBUG_COFF_LOADER__)
		argv_3409 (argv_3681, MAX_PATH, "argv_3093=0x%X, argv_1335=0x%X, argv_595 of the reloc %u = 0x%X", _section_hdr_ptr->argv_3093, argv_1335, i, reloc_ptr);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)
*/
		if ((reloc_ptr_UI08 + argv_1822) >= argv_1235) {
			argv_1892 = argv_891;
			break;
		}
		else { // argv_1292 the symbol argv_2697 associated with this relocation 
			name_ptr = argv_1299 (reloc_ptr->argv_3499, entry_ptr, is_short);
#if defined (__DEBUG_COFF_LOADER__)
			if (is_short == true) {
				argv_3409 (argv_3681, MAX_PATH, "symbol argv_2697 of the relocation %u : '%s' (short argv_2697)", i, (argv_773) name_ptr);
			}
			else {
				argv_3409 (argv_3681, MAX_PATH, "symbol argv_2697 of the relocation %u : '%s' (long argv_2697)", i, (argv_773) name_ptr);
			}
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)

			// argv_3249 this relocation
			argv_1892 = argv_3249 (_root_plugin_name, _plugin_name, (argv_773) name_ptr, _msc, reloc_solved_address, _symb_resolved_addr);
			if (argv_1892 != argv_894) {
				argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : failed while resolving relocation '%s' for symbol '%s'", name_ptr, _symbol_name);
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
				break;
			}
			else { // patch this relocation using the resolved argv_595
				argv_1892 = argv_2850 (i, _symbol_name, reloc_ptr, _symb_resolved_addr, reloc_solved_address);
				if (argv_1892 != argv_894) {
					argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : failed while patching relocation '%s' for symbol '%s'", name_ptr, _symbol_name);
					argv_3681[MAX_PATH - 1] = '\0';
					argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
					break;
				}
			}
		}	
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_763
// @@
// @@ FUNCTION		:	argv_3253		
// @@
// @@ INPUT			:
// @@ _section_hdr_ptr : argv_1829 *: pointer on the
// @@  the argv_1806 of the argv_3325 where the symbol is defined.
// @@  (it's content actually).
// @@
// @@ _root_plugin_name: argv_773: argv_2697 of the argv_1043 root plugin.
// @@
// @@ _plugin_name: argv_773: argv_2697 of the argv_1043 plugin.
// @@
// @@ _symbol_name: argv_773: argv_2697 of the symbol to argv_3249.
// @@
// @@ _iter: map<string, argv_1035>::iterator&: 
// @@  iterator that associates the argv_1043 symbol's argv_2697
// @@  with it's argv_1073. these argv_1073 have been collected during
// @@  the COFF loading process.
// @@
// @@ _msc: map<string, argv_763 *>& : the map containing the 
// @@   dependancy list for the argv_1043 coff loader.
// @@
// @2 _father_addr: argv_3715 *: argv_595 of the father argv_710.
// @@   it may be argv_2766 if we are at the root of the memory tree.
// @@   This father argv_595 is especially necessary if the symbol
// @@   to argv_3249 is a label, because in that case we have to
// @@   argv_3249 the symbol using it's father's argv_710 argv_3457 argv_595.
// @@
// @@ OUTPUT		:	
// @@ _resolved_symbol_addr: argv_3715 *& : this parameter contains the 
// @@ argv_3266 of the resolution. In other words it contains the argv_595 of 
// @@ the resolved symbol.
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
argv_3379 argv_763::argv_3253 (map<string, argv_1035>::iterator& _iter, argv_1829 * _section_hdr_ptr, argv_773 _root_plugin_name, argv_773 _plugin_name, argv_773 _symbol_name, map<string, argv_763 *>& _msc, argv_3715 *& _resolved_symbol_addr, argv_3715 * _father_addr) {
	argv_3379 argv_1892 = argv_894;
	char argv_3681[MAX_PATH];
	// if symbol is a label, then it's location is within it's father argv_710's argv_595 space
	if (_iter->second.argv_3468 == argv_1832) {
		_resolved_symbol_addr = _father_addr + _iter->second.argv_3808;
#if defined (__DEBUG_COFF_LOADER__)
		argv_3409 (argv_3681, MAX_PATH, "symbol '%s' is a label => it's location in father argv_710 (at offset 0x%X + father_addr: 0x%X = 0x%X)", _symbol_name, _iter->second.argv_3808, _father_addr, _resolved_symbol_addr);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)
/*
		// the labels are supposed to have no relocations (just ensure that)
		if (_section_hdr_ptr->argv_2775 != 0) { 
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: symbol '%s' is a label but it has %d relocations (expected zero relocation) !", _symbol_name, _section_hdr_ptr->argv_2775);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
			argv_1892 = argv_889;
		}*/
	}
	else { // the symbol is an actual symbol, not a label.
		// xmap the symbol as it is defined internally
		argv_1892 = argv_2198 (_section_hdr_ptr, _symbol_name, _resolved_symbol_addr);
		if (argv_1892 != argv_894) {
			string serror = argv_1240 (argv_1892);
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : 'argv_3252' failed while looking for symbol '%s' - argv_2198 failed - %s", _symbol_name, serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
		}
		else { // symbol succesfully xmapped to memory
			// argv_3249 and patch all relocations for this symbol
			argv_1892 = argv_3250 (_iter, _section_hdr_ptr, _root_plugin_name, _plugin_name, _symbol_name, _msc, _resolved_symbol_addr, _father_addr);
		} 
	}
	return (argv_1892);
}

argv_3379 argv_763::argv_3252 (map<string, argv_1035>::iterator& _iter, argv_773 _root_plugin_name, argv_773 _plugin_name, argv_773 _symbol_name, map<string, argv_763 *>& _msc, argv_3715 *& _addr, argv_3715 * _father_addr) {
	argv_3379 argv_1892 = argv_894;
	char argv_3681[MAX_PATH];
	// check whether this symbol was already xmapped or not.
	// BEWARE: argv_3325 are numbered from 1 to n
	argv_3717 itmp = (argv_3717) argv_3326 + (sizeof(argv_1829) * (_iter->second.argv_3330-1));
	argv_1829 * section_hdr_ptr = (argv_1829 *) itmp;
	argv_3717 real_PointerToRawData = section_hdr_ptr->argv_3092 + (argv_3717) argv_1335;
	argv_3717 unused_size;
	bool presence_flag = false;
	// ensure that this symbol was not already allocated to xmem
#if defined (__DEBUG_COFF_LOADER__)
	argv_3409 (argv_3681, MAX_PATH, "argv_3249 local symbol: '%s' located at index %u in symbol table, real_PointerToRawData=0x%X, argv_3400=0x%X", _symbol_name, _iter->second.argv_3330, real_PointerToRawData, section_hdr_ptr->argv_3400);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)
	
	argv_1892 = argv_3848->argv_3481 (_symbol_name, (argv_3715 *) real_PointerToRawData, section_hdr_ptr->argv_3400, presence_flag, _addr, unused_size);
	if (argv_1892 != argv_3852) {
		string serror = argv_1240 (argv_1892);
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3480 failed while processing symbol '%s' (errno=%s)", _symbol_name, serror.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
	}
	else { // this local symbol was not allocated yet to xmem
		argv_1892 = argv_894;
		if (presence_flag == true) {
#if defined (__DEBUG_COFF_LOADER__)
			argv_3409 (argv_3681, MAX_PATH, "local symbol '%s' already xmapped at argv_595 0x%X", _symbol_name, _addr);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		}
		else {
#if defined (__DEBUG_COFF_LOADER__)
			argv_1689->argv_2146.argv_2142 (argv_1086, "symbol was not xmapped yet");
#endif // #if defined (__DEBUG_COFF_LOADER__)
			argv_1892 = argv_3253 (_iter, section_hdr_ptr, _root_plugin_name, _plugin_name, _symbol_name, _msc, _addr, _father_addr);
		}
	}
	return (argv_1892);
}

void argv_763::argv_1145 (argv_3715 * _ptr, argv_773 _name, argv_773 _comment="") {
	char argv_3681[MAX_PATH];
	if (_ptr == argv_2766) { 
		argv_3409 (argv_3681, MAX_PATH, "%s = <argv_2766> %s", _name, _comment);
	}
	else {
		argv_3409 (argv_3681, MAX_PATH, "%s = 0x%X %s", _name, _ptr, _comment);
	}
	argv_3681[MAX_PATH - 1] = '\0';	
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
}

void argv_763::argv_1144 () {
	argv_1689->argv_2146.argv_2142 (argv_1086, "==== internal content of the coff loader ====");
	argv_1145 (argv_1335,			"argv_1335", "(argv_595 of the mmapped COFF argv_1314)");
	argv_1145 (argv_3326,		"argv_3326");
	argv_1145 (argv_3328,			"argv_3328");
	argv_1145 (argv_3472,			"argv_3472");
	argv_1145 (argv_3489,			"argv_3489");
	argv_1145 (argv_1235,				"argv_1235");
	argv_1689->argv_2146.argv_2142 (argv_1086, "==========================================");
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_763
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
// @@ _msc: map<string, argv_763 *>& : the map containing the 
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
// @@ - the COFF argv_1314 associated with the argv_1043 argv_763 argv_2785
// @@   must have been argv_2117 succesfully prior to this call.
// @@ - '_symbol_name' parameter must not be a argv_2766 pointer.
// @@ - '_symbol_name' parameter must not be an empty string.
// @@ - the symbol whose argv_2697 is contained in the '_symbol_name'
// @@   variable must be present in the COFF argv_1314 associated with 
// @@   the argv_1043 argv_763 argv_2785.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_763::argv_3249 (argv_773 _root_plugin_name, argv_773 _plugin_name, argv_773 _symbol_name, map<string, argv_763 *>& _msc, argv_3715 *& _addr, argv_3715 * _father_addr) {
	char argv_3681[MAX_PATH];
#if defined (__DEBUG_COFF_LOADER__)
	argv_3409 (argv_3681, MAX_PATH, "resolving symbol '%s' of plugin '%s' (root_plugin=%s)", _symbol_name, _plugin_name, _root_plugin_name);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	argv_3379 argv_1892 = argv_894;
	if (init_done == false) {
		argv_1892 = argv_884;
	}
	else if (argv_2117 == false) {
		argv_1892 = argv_882;
	}
	else if ((_symbol_name == argv_2766) || (strlen(_symbol_name) == 0)) {
		argv_1892 = argv_887;
	}
	else { // parameters are correct
		// notice that even if symbol is external it should be present
		map<string, argv_1035>::iterator iter_local;
		if (argv_3487 (_symbol_name, iter_local) == false) {
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : symbol '%s' not found in module '%s' (root_plugin was '%s')", _symbol_name, _plugin_name, _root_plugin_name);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
			argv_1892 = argv_890;	
		}
		else { // symbol is present, it can be either external, internal, or none of them
			if (argv_3486 (iter_local) == true) { 
#if defined (__DEBUG_COFF_LOADER__)
				argv_1689->argv_2146.argv_2142 (argv_1086, "symbol is present in module (symbol is local)");
#endif // #if defined (__DEBUG_COFF_LOADER__)
				argv_1892 = argv_3252 (iter_local, _root_plugin_name, _plugin_name, _symbol_name, _msc, _addr, _father_addr);
			}
			else if (argv_3485 (iter_local) == true) {
#if defined (__DEBUG_COFF_LOADER__)
				argv_1689->argv_2146.argv_2142 (argv_1086, "symbol is present in module (symbol is external)");
#endif // #if defined (__DEBUG_COFF_LOADER__)
				argv_1892 = argv_3251 (iter_local, _root_plugin_name, _plugin_name, _symbol_name, _msc, _addr, _father_addr);
			}
			else { // symbol is neither local, nor external (must not try to argv_3249 it)
				argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_3249 : symbol '%s' is neither internal, nor external !", _symbol_name);
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
				argv_1892 = argv_893;
			}
		}
	}

	if (argv_1892 != argv_894) {
		string serror = argv_1240 (argv_1892);
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: could not argv_3249 symbol '%s' of plugin '%s' (root_plugin=%s) - errno = %s", _symbol_name, _plugin_name, _root_plugin_name, serror.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1242, argv_3681);
	}
	return (argv_1892);
}