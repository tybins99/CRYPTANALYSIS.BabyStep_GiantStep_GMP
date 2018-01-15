// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_277.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions necessary for the virtual memory
// @@ manager to work properly
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_334.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1061
// @@
// @@ FUNCTION		:	argv_1061		
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
// @@ Normal constructor of the argv_1061 argv_2785.
// @@ It just reset important fields to an initial argv_3460.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1061::argv_1061 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1061
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
// @@ This function deallocates all the previously allocated virtual 
// @@ memory blocks.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1061::reset () {
	argv_3717 nb_page = argv_3802.size ();
	for (argv_3717 i=0 ; i<nb_page ; i++) {
		argv_3587->argv_2723 (argv_3802[i], argv_3849);	
	}

	init_done	  = false;
	argv_1043		  = (argv_3717) argv_2766;
	remaining	  = 0;
	argv_1689 = argv_2766;
	argv_3587   = argv_2766;

	argv_3802.clear ();
	vector<void *>().swap (argv_3802);

	argv_3801.clear ();
	vector<string>().swap (argv_3801);

	argv_2178.clear ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1061
// @@
// @@ FUNCTION		:	~argv_1061		
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
// @@ Normal destructor of the argv_1061 argv_2785.
// @@ it deallocates all the previously allocated virtual memory
// @@ blocks.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1061::~argv_1061 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1061
// @@
// @@ FUNCTION		:	argv_1015		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3852 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@
// @@ CONTRACT 		:
// @@ - the 'init' function must have been called prior to this call.	 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1061::argv_1015 () {
	argv_3379 argv_1892 = argv_3852;
	argv_2157 block_ptr = argv_3587->argv_2710 (argv_3849);
	if (block_ptr == argv_2766) {
		argv_1892 = argv_3850;
	}
	else {
		memset (block_ptr, 0x90, argv_3849);
		argv_3802.push_back (block_ptr);
		argv_1043		= (argv_3717) block_ptr;
		remaining	= argv_3849;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1061
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _systool_ptr: argv_3449 *: pointer on the argv_2785 containing
// @@   all the system dependant functions.
// @@
// @@ _glob_data_ptr: argv_792 *: pointer on the argv_2785 containing
// @@     all the global argv_1073.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_3852 in case of success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 the argv_1061
// @@ for use by performing the following steps :
// @@ - save up the '_systool_ptr' argv_595
// @@ - save up the '_glob_data_ptr' argv_595
// @@ - allocate a first big chunk of virtual memory.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must not have been called yet.
// @@ - '_systool_ptr' parameter must not be a argv_2766 pointer.
// @@ - '_glob_data_ptr' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1061::init (argv_3449 * _systool_ptr, argv_792 * _glob_data_ptr) {
	argv_3379 argv_1892 = argv_3852;

	if (init_done == true) {
		argv_1892 = argv_3843;	
	}
	else if ((_systool_ptr == argv_2766) || (_glob_data_ptr == argv_2766)) {
		argv_1892 = argv_3845;
	}
	else {
		argv_3587	  = _systool_ptr;
		argv_1689 = _glob_data_ptr;
		init_done	  = true;

		// allocate the first page
		argv_1892 = argv_1015 ();
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1061
// @@
// @@ FUNCTION		:	argv_970		
// @@
// @@ INPUT			:
// @@ _name: argv_773 : argv_2697 of the symbol whose crc is to be computed.
// @@
// @@ _buf_ptr: argv_595 of the first byte of the argv_728 whose crc
// @@   is to be computed.
// @@
// @@ _buf_size: size of the argv_728 whose crc is to be computed.
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
// @@ This function permits to generate the CRC associated with a
// @@ argv_728 corresponding to the symbol whose argv_2697 is given
// @@ as a parameter and to return the argv_3266 via the '_crc
// @@ parameter.
// @@ Notice that the final CRC is actually a string.
// @@ This string is composed of 
// @@ - the argv_3488
// @@ - the size of the argv_728 whose numeric CRC was computed
// @@ - the numeric CRC itself
// @@ These 3 fields are then arranged as follows :
// @@ <argv_3488>_<buffer_size>_<buffer_numeric_crc>
// @@ example: 
// @@ symbol argv_2697="toto", argv_728 size=32, argv_728 crc = 4585
// @@ => final crc = "toto_32_4585"
// @@
// @@ This scheme permits to ensure that the CRC is dependant
// @@ of the symbol's argv_2697, the argv_728's size, and the argv_728's
// @@ content.
// @@ 
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1061::argv_970 (argv_773 _name, argv_3715 * _buf_ptr, argv_3717 _buf_size, string& _crc) {
	char argv_3681[MAX_PATH];
	argv_3717 ircr = 0;

	for (argv_3717 i=0 ; i<_buf_size ; i++) {
		ircr += _buf_ptr[i];
	}

	argv_3409 (argv_3681, MAX_PATH, "%s_%u_%u", _name, _buf_size, ircr);
	argv_3681[MAX_PATH - 1] = '\0';
	_crc = argv_3681;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1061
// @@
// @@ FUNCTION		:	argv_3215		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_773: argv_2697 of the symbol for which a virtual
// @@   memory argv_710 is requested.
// @@
// @@ _data_2_copy: argv_3715 *: argv_595 of the first byte of the symbol's
// @@   argv_1073, these argv_1073 are used to compute the CRC.
// @@
// @@ _requested_size: argv_3717 : size of the '_data_2_copy' argv_728, 
// @@   necessary to compute the CRC.
// @@
// @@ OUTPUT		:
// @@ _found_from_cache: bool&: set to true if the same symbol was
// @@   already mapped to virtual memory,
// @@   set to false otherwise.
// @@	
// @@ _block_ptr_ptr: void **: contains the argv_595 of the argv_710
// @@   of virtual memory that was allocated or retrieved from
// @@   cache if it was already previously allocated before.
// @@
// @@ IO			:	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3852 in case of success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to allocate/obtain a argv_710 of
// @@ virtual memory for the symbol whose argv_2697 is contained
// @@ into the '_symbol_name' parameter, whose content is 
// @@ contained in the argv_728 pointed to '_data_2_copy' and
// @@ whose size is contained in the '_requested_size' parameter.
// @@ Notice that the allocated argv_710 is aligned.
// @@ Also notice that if the same symbol with the same content
// @@ was already mapped to virtual memory, then no memory
// @@ is allocated and the argv_595 of the argv_710 previously
// @@ allocated for this symbol is returned via the '_block_ptr_ptr'
// @@ parameter.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must have been called prior to this call.
// @@ - the '_requested_size' parameter must be within the  
// @@   range ]0..argv_3849[
// @@ - '_data_2_copy' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1061::argv_3215 (argv_773 _symbol_name, argv_3715 * _data_2_copy, argv_3717 _requested_size, bool& _found_from_cache, void ** _block_ptr_ptr) {
	argv_3379 argv_1892		  = argv_3852;
	_found_from_cache = false;
#if defined (DEBUG_XMEM_MANAGER)
	argv_1689->argv_2146.argv_2142 (argv_1086, "xmem: argv_3488 : '", _symbol_name, "'");
	argv_1689->argv_2146.argv_2142 (argv_1086, "xmem: requested argv_710 size : ", _requested_size);
#endif // #if defined (DEBUG_XMEM_MANAGER)

	if (init_done == false) {
		argv_1892 = argv_3844;
	}
	else if ((_requested_size == 0) || (_requested_size > argv_3849) || (_data_2_copy == argv_2766)) { 
		argv_1892 = argv_3845;
	}
	else if ((_symbol_name == argv_2766) || (strlen(_symbol_name) == 0)) {
		argv_1892 = argv_3845;
	}
	else {
		*_block_ptr_ptr = argv_2766;
		string crc;
		map<string, argv_1062>::iterator iter_local;
		// check whether this symbol was already xmapped or not
		argv_970 (_symbol_name, _data_2_copy, _requested_size, crc);
		iter_local = argv_2178.find (crc);
#if defined (DEBUG_XMEM_MANAGER)
		argv_1689->argv_2146.argv_2142 (argv_1086, "xmem: crc for this symbol : '", crc.c_str());
#endif // #if defined (DEBUG_XMEM_MANAGER)
		
		if (iter_local != argv_2178.end()) {
			*_block_ptr_ptr = iter_local->second.argv_595; // found from cache
#if defined (DEBUG_XMEM_MANAGER)
			{
				char argv_3681[MAX_PATH];
				argv_3409 (argv_3681, MAX_PATH, "xmem: argv_710 [FOUND FROM CACHE] argv_3457 at argv_595 : 0x%X", iter_local->second.argv_595);
				argv_3681[MAX_PATH - 1] = '\0';
				argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
			}
#endif // #if defined (DEBUG_XMEM_MANAGER)
			_found_from_cache = true;
		}
		else { // symbol not xmapped yet
			// check whether the required argv_710 will fit into the argv_1043 page
			if (_requested_size > remaining) {
#if defined (DEBUG_XMEM_MANAGER)
				argv_1689->argv_2146.argv_2142 (argv_1086, "argv_1061::argv_3215 - page fault => allocating a new page");
#endif // #if defined (DEBUG_XMEM_MANAGER)
				argv_1892 = argv_1015 ();
			}

			if (argv_1892 == argv_3852) {
				// correct the size so that it will be a multiple of argv_3851
				argv_3379 corrected_size = ((_requested_size / argv_3851) + 1) * argv_3851;
#if defined (DEBUG_XMEM_MANAGER)
				argv_1689->argv_2146.argv_2142 (argv_1086, "xmem: argv_710 corrected size = ", corrected_size);
#endif // #if defined (DEBUG_XMEM_MANAGER)
				*_block_ptr_ptr = (argv_2157) argv_1043;
				argv_1062 xmem_unit;
				xmem_unit.argv_595 = (argv_3715 *) argv_1043;
				xmem_unit.size    = corrected_size;
#if defined (DEBUG_XMEM_MANAGER)
				{
					char argv_3681[MAX_PATH];
					argv_3409 (argv_3681, MAX_PATH, "xmem: argv_710 will argv_3457 at argv_595 : 0x%X", xmem_unit.argv_595);
					argv_3681[MAX_PATH - 1] = '\0';
					argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
				}
#endif // #if defined (DEBUG_XMEM_MANAGER)
				argv_2178[crc] = xmem_unit;
				argv_3801.push_back (crc);
				argv_1043   += corrected_size;
				remaining -= corrected_size;
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1061
// @@
// @@ FUNCTION		:	argv_3481		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_773: argv_2697 of the symbol for which a virtual
// @@   memory argv_710 is requested.
// @@
// @@ _buf_ptr: argv_3715 *: argv_595 of the first byte of the symbol's
// @@   argv_1073, these argv_1073 are used to compute the CRC.
// @@
// @@ _buf_size: argv_3717 : size of the '_data_2_copy' argv_728, 
// @@   necessary to compute the CRC.
// @@
// @@ OUTPUT		:
// @@ _presence_flag: bool&: set to true if the same symbol was
// @@   already mapped to virtual memory,
// @@   set to false otherwise.
// @@	
// @@ _start_addr: argv_3715 *: if the symbol was already xmapped, then
// @@   it's starting argv_595 is returned via this parameter.
// @@
// @@ _size: argv_3717: if the symbol was already xmapped, then it's 
// @@   aligned size is returned via this parameter.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3852 in case of success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given
// @@ symbol was already mapped to virtual memory or not.
// @@ If symbol was already mapped, then the parameter 
// @@ '_presence_flag' is set to true, and the aligned size
// @@ of the mapped argv_710 is returned via the '_start_addr'
// @@ parameter, and the argv_595 of the mapped argv_710 is returned
// @@ via the '_start_addr' parameter.
// @@ If the symbol was not already mapped to virtual memory yet,
// @@ then the parameter '_presence_flag' is set to false, and
// @@ the parameter '_start_addr' is set to argv_2766, and the
// @@ '_size' parameter is set to zero.
// @@
// @@ CONTRACT 		: 
// @@ - '_buf_ptr' parameter must be a argv_2766 pointer.
// @@ - '_buf_size' must be greater than zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1061::argv_3481 (argv_773 _name, argv_3715 * _buf_ptr, argv_3717 _buf_size, bool& _presence_flag, argv_3715 *& _start_addr, argv_3717& _size) {
	argv_3379 argv_1892		= argv_3852;
	_presence_flag  = false;
	_start_addr		= argv_2766;
	_size			= 0;

	if ((_buf_ptr != argv_2766) && (_buf_size > 0)) {
		string crc;
		argv_970 (_name, _buf_ptr, _buf_size, crc);
		map<string, argv_1062>::iterator local_iter;
		local_iter = argv_2178.find (crc);
		if (local_iter != argv_2178.end()) {
			_presence_flag = true;
			_start_addr = local_iter->second.argv_595;
			// aligned size may be different than requested size
			_size		= local_iter->second.size; 
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1061
// @@
// @@ FUNCTION		:	argv_3480		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_773: argv_2697 of the symbol for which a virtual
// @@   memory argv_710 is requested.
// @@
// @@ _buf_ptr: argv_3715 *: argv_595 of the first byte of the symbol's
// @@   argv_1073, these argv_1073 are used to compute the CRC.
// @@
// @@ _buf_size: argv_3717 : size of the '_data_2_copy' argv_728, 
// @@   necessary to compute the CRC.
// @@
// @@ OUTPUT		:
// @@ _presence_flag: bool&: set to true if the same symbol was
// @@   already mapped to virtual memory,
// @@   set to false otherwise.
// @@	
// @@ _start_addr: argv_3715 *: if the symbol was already xmapped, then
// @@   it's starting argv_595 is returned via this parameter.
// @@
// @@ _size: argv_3717: if the symbol was already xmapped, then it's 
// @@   aligned size is returned via this parameter.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3852 in case of success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given
// @@ symbol was already mapped to virtual memory or not.
// @@ If symbol was already mapped, then the parameter 
// @@ '_presence_flag' is set to true, and the aligned size
// @@ of the mapped argv_710 is returned via the '_start_addr'
// @@ parameter, and the argv_595 of the mapped argv_710 is returned
// @@ via the '_start_addr' parameter.
// @@ If the symbol was not already mapped to virtual memory yet,
// @@ then the parameter '_presence_flag' is set to false, and
// @@ the parameter '_start_addr' is set to argv_2766, and the
// @@ '_size' parameter is set to zero.
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - '_buf_ptr' parameter must be a argv_2766 pointer.
// @@ - '_buf_size' must be greater than zero.
// @@ - '_name' parameter must not be a argv_2766 pointer.
// @@ - '_name' parameter must not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1061::argv_3480 (argv_773 _name, argv_3715 * _buf_ptr, argv_3717 _buf_size, bool& _presence_flag, argv_3715 *& _start_addr, argv_3717& _size) {
	argv_3379 argv_1892		= argv_3852;
#if defined (DEBUG_XMEM_MANAGER)
	{
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "argv_1061::argv_3480(%s,%X,%d)", _name, _buf_ptr, _buf_size);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_1689->argv_2146.argv_2142 (argv_1086, argv_3681);
	}
#endif // #if defined (DEBUG_XMEM_MANAGER)
	if (init_done == false) {
		argv_1892 = argv_3844;
	}
	else if ((_name == argv_2766) || (strlen(_name) == 0) || (_buf_ptr==argv_2766) || (_buf_size==0)) { 
		argv_1892 = argv_3845;
	}
	else {
		argv_1892 = argv_3481 (_name, _buf_ptr, _buf_size, _presence_flag, _start_addr, _size);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1061
// @@
// @@ FUNCTION		:	argv_1193		
// @@
// @@ INPUT			:
// @@ _filename: argv_773: argv_2697 of the argv_1314 where to log the
// @@   content of the virtual memory manager.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3852 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to dump the content of the 
// @@ virtual memory manager to the log argv_1314 whose argv_2697
// @@ is contained in the '_filename' parameter.
// @@ the content of the log argv_1314 being a serie of lines,
// @@ each argv_2069 containing :
// @@ - the symbol's size.
// @@ - the symbol's argv_710's starting argv_595.
// @@ - the symbol's argv_2697.
// @@ Notice that the symbols are displayed in ascending order
// @@ of argv_710 argv_595, to be able to do that, we use a vector
// @@ because the map argv_2785 changes the order in which the
// @@ argv_1073 are stored (automatic sorting).
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1061::argv_1193 (argv_773 _filename) {
	argv_3379 argv_1892		= argv_3852;
#if defined (DEBUG_XMEM_MANAGER)
	if (init_done == false) {
		argv_1892 = argv_3844;
	}
	else {
		// we need a vector because the map does not respect the order
		FILE * argv_1396 = fopen (_filename, "wb");

		if (argv_1396) {
			argv_3717 argv_2744 = argv_3801.size ();
			map<string, argv_1062>::iterator iter_local;
			string corrected;
			fprintf (argv_1396, "%d items to argv_1130\r\n", argv_2744);

			for (argv_3717 i=0 ; i<argv_2744 ; i++) {
				iter_local = argv_2178.find (argv_3801[i]);
				if (iter_local == argv_2178.end()) {
					MessageBox (argv_2766, "argv_1193 failed : incoherency @1", "", MB_ICONERROR);
					break;
				}
				fprintf (argv_1396, "%d - (%u) - 0x%X - [%s]\r\n", i, iter_local->second.size, (argv_3717) iter_local->second.argv_595, argv_3801[i].c_str());
			}
			fclose (argv_1396);
		}
	}
#endif // #if defined (DEBUG_XMEM_MANAGER)
	return (argv_1892);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
