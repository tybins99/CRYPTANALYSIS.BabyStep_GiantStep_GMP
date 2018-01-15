// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: complex_list.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the declaration of the
// @@ functions related to the complex list argv_2785.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_322.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058		
// @@
// @@ FUNCTION		:	argv_1058	
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
// @@ Normal constructor of the 'argv_1058' argv_2785.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1058::argv_1058 () {
	reset ();
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058		
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
// @@ This function brings the 'argv_1058' argv_2785 to
// @@ it's original argv_3460.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1058::reset () {
	// free all allocated horizontal lists
	for (argv_2165=argv_2173.begin() ; argv_2165 != argv_2173.end() ; ++argv_2165) {	 
		delete argv_2165->second;
	}
	argv_2173.clear ();
	argv_2165		= argv_2173.end();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058		
// @@
// @@ FUNCTION		:	argv_1667	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _nb_elem: argv_3717&: the size of the vertical list. 
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_960 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the number of symbols
// @@ contained in the argv_1058 argv_2785.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1058::argv_1667 (argv_3717& _nb_elem) {
	argv_3379 argv_1892 = argv_960;
	_nb_elem = argv_2173.size ();
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058		
// @@
// @@ FUNCTION		:	argv_2123	
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_773: the argv_2697 of the symbol to lookup.
// @@
// @@ OUTPUT		:
// @@ _cell_ptr: argv_2157&: the argv_595 of the cell corresponding to
// @@   the parameter '_symbol_name' if found.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_960 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the cell associated with the
// @@ symbol whose argv_2697 is given as the '_symbol_name' parameter.
// @@
// @@ It is unsafe because it does not check for parameters validity.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1058::argv_2123 (argv_773 _symbol_name, argv_2157& _cell_ptr) {
	argv_3379 argv_1892 = argv_960;
	argv_2165 = argv_2173.find (_symbol_name);
	if (argv_2165 == argv_2173.end()) {
		argv_1892 = argv_959;
	}
	else { // symbol was found from map => save it's corresponding iterator.
		_cell_ptr = (argv_2157&) argv_2165;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058		
// @@
// @@ FUNCTION		:	argv_1666	
// @@
// @@ INPUT			:
// @@ _symbol: argv_773: the argv_2697 of the symbol whose number of 
// @@   resolution is to be found.
// @@
// @@ OUTPUT		:
// @@ _size: argv_3717&: the number of solved symbols for the symbol
// @@ whose argv_2697 is given as the '_symbol' parameter.	
// @@
// @@ IO			:	
// @@ _prev_iter: if a lookup already succeeded before, the caller
// @@   may provide this parameter in order to avoid lookup, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379: argv_960 if operation was succesful,
// @@       another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the number of instances
// @@ of the symbol '_symbol' that were solved.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1058::argv_1666 (argv_773 _symbol, argv_2157& _prev_iter, argv_3717& _size) {
	argv_3379 argv_1892 = argv_960;
	if (_symbol==argv_2766) {
		argv_1892 = argv_957;
	}
	else { // if an iterator is given, then use it, otherwise perform a lookup
		if (_prev_iter == argv_2766) {
			argv_1892 = argv_2123 (_symbol, _prev_iter);
		}

		if (argv_1892 == argv_960) {
			argv_3694 * iter_ptr = (argv_3694 *)  &_prev_iter;
			argv_2165 = (*iter_ptr);
			_size = argv_2165->second->argv_1680 ();
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058		
// @@
// @@ FUNCTION		:	argv_1654	
// @@
// @@ INPUT			:
// @@ _symbol: argv_773: the argv_2697 of the symbol whose first instance
// @@   is to be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2157 *: the argv_595 of the first
// @@   resolved instance of the symbol whose argv_2697 is given as
// @@   the '_symbol' parameter.	
// @@
// @@ IO			:	
// @@ _prev_iter: if a lookup already succeeded before, the caller
// @@   may provide this parameter in order to avoid lookup, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379: argv_960 if operation was succesful,
// @@       another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the first instance
// @@ of the symbol whose argv_2697 is given as the '_symbol'
// @@ parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1058::argv_1654 (argv_773 _symbol, argv_2157& _prev_iter, argv_2157 * _extracted_resolved) {
	argv_3379 argv_1892 = argv_960;

	if (_prev_iter == argv_2766) {
		argv_1892 = argv_2123 (_symbol, _prev_iter);
	}
	
	if (argv_1892 == argv_960) {
		argv_3694 * iter_ptr = (argv_3694 *)  &_prev_iter;
		argv_2165 = (*iter_ptr);
		argv_1892 = argv_2165->second->argv_1651 (_extracted_resolved);
	}

	// remap error codes
	if (argv_1892 == argv_2083) {
		argv_1892 = argv_954;
	}
	if (argv_1892 == argv_2092) {
		argv_1892 = argv_960;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058		
// @@
// @@ FUNCTION		:	argv_1672	
// @@
// @@ INPUT			:
// @@ _symbol: argv_773: the argv_2697 of the symbol whose first instance
// @@   is to be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2157 *: the argv_595 of the next
// @@   resolved instance of the symbol whose argv_2697 is given as
// @@   the '_symbol' parameter.	
// @@
// @@ IO			:	
// @@ _prev_iter: if a lookup already succeeded before, the caller
// @@   may provide this parameter in order to avoid lookup, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379: argv_960 if operation was succesful,
// @@       another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the next instance
// @@ of the symbol whose argv_2697 is given as the '_symbol'
// @@ parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1058::argv_1672 (argv_773 _symbol, argv_2157& _prev_iter, argv_2157 * _extracted_resolved) {
	argv_3379 argv_1892 = argv_960;

	if (_prev_iter == argv_2766) {
		argv_1892 = argv_2123 (_symbol, _prev_iter);
	}
	
	if (argv_1892 == argv_960) {
		argv_3694 * iter_ptr = (argv_3694 *)  &_prev_iter;
		argv_2165 = (*iter_ptr);
		argv_1892 = argv_2165->second->argv_1668 (_extracted_resolved);
	}

	// remap error codes
	if (argv_1892 == argv_2083) {
		argv_1892 = argv_954;
	}
	if (argv_1892 == argv_2092) {
		argv_1892 = argv_960;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058		
// @@
// @@ FUNCTION		:	argv_590	
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_773: argv_2697 of the symbol to argv_576.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379: argv_960 if operation was succesful,
// @@       another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_576 a new symbol to the
// @@ vertical list. Notice that after insertion, there
// @@ is no instance of this symbol yet.
// @@
// @@ CONTRACT		:	
// @@ - '_symbol_name' parameter must not be a argv_2766 pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1058::argv_590 (argv_773 _symbol_name) {
	argv_3379 argv_1892 = argv_960;
	if (_symbol_name==argv_2766) {
		argv_1892 = argv_957;		
	}
	else { // parameters are OK
		argv_2157 cell_ptr_tmp = argv_2766;
		argv_1892 = argv_2123 (_symbol_name, cell_ptr_tmp);

		if (argv_1892 == argv_960) { 
			argv_1892 = argv_953;
		}
		else if (argv_1892 == argv_959) {
			argv_1892 = argv_960;
			argv_828 * hlist_ptr = new (std::nothrow) argv_828;
			argv_2173[_symbol_name] = hlist_ptr;
		}
	}

	argv_2165 = argv_2173.find (_symbol_name);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1058		
// @@
// @@ FUNCTION		:	argv_589	
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_773: argv_2697 of the symbol whose instance is to
// @@   be added.
// @@
// @@ _resolved_symbol: argv_2157: the argv_595 of the instance of the
// @@   symbol to be added.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	
// @@ _prev_iter: if a lookup already succeeded before, the caller
// @@   may provide this parameter in order to avoid lookup, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379: argv_960 if operation was succesful,
// @@       another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_576 an instance of the symbol 
// @@ whose argv_2697 is given as the '_symbol_name' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1058::argv_589 (argv_2157& _prev_iter, argv_773 _symbol_name, argv_2157 _resolved_symbol) {
	argv_3379 argv_1892 = argv_960;
	if (_symbol_name==argv_2766) {
		argv_1892 = argv_957;
	}
	else { // parameters are OK
		// if user gave a valid iterator, then use it
		if (_prev_iter == argv_2766) {
			argv_1892 = argv_2123 (_symbol_name, _prev_iter);
		}

		if (argv_1892 == argv_960) { // if entry was found
			// insert this resolved symbol
			argv_3694 * iter_ptr = (argv_3694 *)  &_prev_iter;
			argv_2165 = (*iter_ptr);
			argv_1892 = argv_2165->second->argv_576 (_resolved_symbol, true);
		}
	}
	
	// remap error codes
	if (argv_1892 == argv_2092) {
		argv_1892 = argv_960;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_766		
// @@
// @@ FUNCTION		:	argv_766	
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
// @@ Normal constructor of the 'argv_766' argv_2785.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_766::argv_766 () {
	argv_2168 = argv_2766;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_766		
// @@
// @@ FUNCTION		:	init	
// @@
// @@ INPUT			:
// @@ _size: argv_3717: the number of vertical lists to argv_3110.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_960 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 the argv_766 argv_2785
// @@ prior to first use by giving the size of the vertical list.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_766::init (argv_3717 _size) {
	argv_3379 argv_1892 = argv_960;
	if (_size == 0) {
		argv_1892 = argv_957;
	}
	else { // parameters are OK
		// allocate the array of vertical list
		argv_2168 = new (std::nothrow) argv_1058[argv_3048];
		if (argv_2168 == argv_2766) {
			argv_1892 = argv_958;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_766		
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
// @@ This function permits to reset the argv_766 argv_2785
// @@ to it's initial argv_3460.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_766::reset () {
	if (argv_2168 != argv_2766) {
		// free all boxes
		for (argv_3717 i=0 ; i<argv_3048 ; i++) {
			argv_2168[i].reset ();	
		}

		// free the array of vertical lists
		delete [] argv_2168;
		argv_2168 =  argv_2766;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_766		
// @@
// @@ FUNCTION		:	argv_2123	
// @@
// @@ INPUT			:
// @@ argv_3717: _plugin_type: the argv_3695 of plugin for which the symbol
// @@   is to be retrieved.
// @@
// @@ _symbol_name: argv_773: argv_2697 of the symbol whose location is to
// @@   be determined.
// @@
// @@ OUTPUT		:
// @@ _cell_ptr: argv_2157&: the argv_595 of the symbol '_symbol_name' 
// @@ of the plugin	'_plugin_type' 
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379: argv_960 if operation was succesful,
// @@       another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to find the location (the argv_595) of
// @@ the symbol '_symbol_name' of the plugin '_plugin_type' in
// @@ the complex list.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_766::argv_2123 (argv_3717 _plugin_type, argv_773 _symbol_name, argv_2157& _cell_ptr) {
	argv_3379 argv_1892 = argv_960;
	if (argv_2168 == argv_2766) {
		argv_1892 = argv_956;
	}
	else if (_plugin_type >= argv_3048) {
		argv_1892 = argv_957;	
	}
	else { // parameters are OK
		argv_1892 = argv_2168[_plugin_type].argv_2123 (_symbol_name, _cell_ptr);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_766		
// @@
// @@ FUNCTION		:	argv_1667	
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3717: the argv_3695 of plugin whose number of symbol
// @@   is to be determined.
// @@
// @@ OUTPUT		:
// @@ _nb_elem: argv_3717&: the retrieved number of symbols for this
// @@   plugin argv_3695.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_960 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the number of symbols
// @@ associated with the plugin whose argv_3695 is given as the
// @@ '_plugin_type' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_766::argv_1667 (argv_3717 _plugin_type, argv_3717& _nb_elem) {
	argv_3379 argv_1892 = argv_960;
	if (argv_2168 == argv_2766) {
		argv_1892 = argv_956;
	}
	else if (_plugin_type >= argv_3048) {
		argv_1892 = argv_957;	
	}
	else { // parameters are OK
		argv_1892 = argv_2168[_plugin_type].argv_1667 (_nb_elem);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_766		
// @@
// @@ FUNCTION		:	argv_1666			
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3717: the plugin argv_3695 concerned.
// @@
// @@ _symbol: argv_773: the symbol whose number of resolution is to
// @@    be retrieved.
// @@
// @@ OUTPUT		:
// @@ _size: argv_3717&: the number of instances for the symbol 
// @@   corresponding to the plugin argv_3695 '_plugin_type' whose
// @@   argv_2697 is given as the '_symbol' parameter.
// @@
// @@ IO			:	
// @@ _cell_ptr: argv_2157&: the argv_595 of this symbol's cell if
// @@   a previous call was performed (cache).	
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_960 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the number of resolved
// @@ instances of the symbol of the plugin argv_3695 '_plugin_type'
// @@ whose argv_2697 is given as the '_symbol' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_766::argv_1666 (argv_3717 _plugin_type, argv_773 _symbol, argv_2157& _cell_ptr, argv_3717& _size) {
	argv_3379 argv_1892 = argv_960;
	if (argv_2168 == argv_2766) {
		argv_1892 = argv_956;
	}
	else if (_plugin_type >= argv_3048) {
		argv_1892 = argv_957;	
	}
	else { // parameters are OK
		argv_1892 = argv_2168[_plugin_type].argv_1666 (_symbol, _cell_ptr, _size);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_766		
// @@
// @@ FUNCTION		:	argv_1654		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3717: the plugin argv_3695 concerned.
// @@
// @@ _symbol: argv_773: the symbol whose resolved instance is to
// @@   be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2157 *: argv_595 of the first resolved
// @@   symbol for the plugin whose argv_3695 is _plugin_type, and whose
// @@   argv_2697 is _symbol.
// @@
// @@ IO			:	
// @@ _cell_ptr: argv_2157&: may be furnished by the caller to
// @@    boost performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_960 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the argv_595 of the first
// @@ instance of the symbol _symbol of the plugin _plugin_type.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_766::argv_1654 (argv_3717 _plugin_type, argv_773 _symbol, argv_2157& _cell_ptr, argv_2157 * _extracted_resolved) {
	argv_3379 argv_1892 = argv_960;
	if (argv_2168 == argv_2766) {
		argv_1892 = argv_956;
	}
	else if (_plugin_type >= argv_3048) {
		argv_1892 = argv_957;	
	}
	else { // parameters are OK
		argv_1892 = argv_2168[_plugin_type].argv_1654 (_symbol, _cell_ptr, _extracted_resolved);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_766		
// @@
// @@ FUNCTION		:	argv_1672		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3717: the plugin argv_3695 concerned.
// @@
// @@ _symbol: argv_773: the symbol whose resolved instance is to
// @@   be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2157 *: argv_595 of the next resolved
// @@   symbol for the plugin whose argv_3695 is _plugin_type, and whose
// @@   argv_2697 is _symbol.
// @@
// @@ IO			:	
// @@ _cell_ptr: argv_2157&: may be furnished by the caller to
// @@    boost performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_960 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the argv_595 of the next
// @@ instance of the symbol _symbol of the plugin _plugin_type.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_766::argv_1672 (argv_3717 _plugin_type, argv_773 _symbol, argv_2157& _cell_ptr, argv_2157 * _extracted_resolved) {
	argv_3379 argv_1892 = argv_960;
	if (argv_2168 == argv_2766) {
		argv_1892 = argv_956;
	}
	else if (_plugin_type >= argv_3048) {
		argv_1892 = argv_957;	
	}
	else { // parameters are OK
		argv_1892 = argv_2168[_plugin_type].argv_1672 (_symbol, _cell_ptr, _extracted_resolved);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_766		
// @@
// @@ FUNCTION		:	argv_590		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3717: the plugin argv_3695 concerned.
// @@
// @@ _symbol_name: argv_773: argv_2697 of the symbol to argv_576.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_960 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_576 a new symbol associated with
// @@ the plugin whose argv_3695 is given by the '_plugin_type' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_766::argv_590 (argv_3717 _plugin_type, argv_773 _symbol_name) {
	argv_3379 argv_1892 = argv_960;
	if (argv_2168 == argv_2766) {
		argv_1892 = argv_956;
	}
	else if (_plugin_type >= argv_3048) {
		argv_1892 = argv_957;	
	}
	else { // parameters are OK
		argv_1892 = argv_2168[_plugin_type].argv_590 (_symbol_name);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_766		
// @@
// @@ FUNCTION		:	argv_589		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_3717: the plugin argv_3695 concerned.
// @@
// @@ _symbol_name: argv_773: argv_2697 of the symbol whose solved
// @@   instance is to be added.
// @@
// @@ OUTPUT		:
// @@
// @@ IO			:	
// @@ _prev_iter: argv_2157&: the cache iterator to provide if 
// @@    performance is to be improved.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_960 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_576 the instance of the symbol
// @@ whose argv_2697 is given as the '_symbol_name' parameter, 
// @@ pertaining to the plugin argv_3695 '_plugin_type', the instance
// @@ argv_595 being given by the '_resolved_symbol' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_766::argv_589 (argv_2157& _prev_iter, argv_3717 _plugin_type, argv_773 _symbol_name, argv_2157 _resolved_symbol) {
	argv_3379 argv_1892 = argv_960;
	if (argv_2168 == argv_2766) {
		argv_1892 = argv_956;
	}
	else if (_plugin_type >= argv_3048) {
		argv_1892 = argv_957;	
	}
	else { // parameters are OK
		argv_1892 = argv_2168[_plugin_type].argv_589 (_prev_iter, _symbol_name, _resolved_symbol);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
