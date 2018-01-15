// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_343.hpp
// @@ 
// @@ DESCRIPTION:
// @@ public argv_2007 encipher/decipher algorithms
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_343.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1023	
// @@
// @@ FUNCTION		:	argv_1023			
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
// @@ Normal constructor of the argv_1023
// @@ argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1023::argv_1023 () {
	argv_1774	= argv_2766;
	argv_3423			= argv_2766;
	argv_1368		= argv_2766;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1023	
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
// @@ This function permits to restore the argv_2785 to it's 
// @@ initial argv_3460.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1023::reset () {
	argv_1127 ();
	argv_2696				= 0;
	argv_711				= 0;
	argv_2748			= 0;
	nb_remaining			= 0;
	argv_1369			= 0;
	argv_2739				= 0;
	argv_2750					= 0;
	argv_3689			= 0;
	total_nb_remaining		= 0;
	argv_3423					= argv_2766; 
	argv_1368				= argv_2766; 
	argv_1774			= argv_2766;
	argv_2753				= 0;
	argv_1044			= 0;
	argv_3688			= 0;
	argv_1126	= 0;
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1023	
// @@
// @@ FUNCTION		:	argv_971			
// @@
// @@ INPUT			:	
// @@ _src_size: argv_3717: the size of the source argv_1314 to encipher/decipher.
// @@
// @@ _is_cipher: bool: must be set to true if the operation intended is
// @@   a ciphering operation.
// @@ 
// @@ _n: argv_2674: the RSA famous 'n' integer appearing in the RSA formula.
// @@
// @@ OUTPUT		:	
// @@ _destination_file_size: argv_3717&: the argv_3266 of the computation operation.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the size of the destination argv_1314
// @@ of the argv_1043 operation (either encipher, or decipher) depending 
// @@ on the argv_3807 of n, and depending on the size of the argv_1314 to
// @@ encipher/decipher.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1023::argv_971 (argv_2674 _n, argv_3717 _src_size, bool _is_cipher, argv_3717& _destination_file_size) {
	argv_3379 argv_1892 = argv_1747;
	_destination_file_size = 0;
	// compute the size of 'n' when represented as an hex string
	string n_str = argv_1774->argv_3813 (_n, true);
	argv_2696			= n_str.size ();

	if (n_str == "0") {
		argv_1892 = argv_1746;
	}
	else { 
		if (_is_cipher == true) {
			argv_711			= (argv_2696 - 4) / 2;
		}
		else {
			argv_711			= argv_2696 / 2;
		}
		argv_2748			= _src_size / argv_711;
		nb_remaining			= _src_size - (argv_2748 * argv_711);
		total_nb_remaining		= _src_size;
		argv_2753				= argv_2696 - 4;
		argv_1044			= 0;
		argv_3689			= 0;
		argv_1369			= 0;
		argv_2750					= 0;

		if (_is_cipher == true) {
			argv_1126	= (argv_2696 / 2) * argv_2748;
			if (nb_remaining > 0) {
				argv_1126 = argv_1126 + (argv_2696 / 2);
			}
		}
		else { // for decipher, we can't know exactly => just take the size of the ciphered argv_1314
			argv_1126 = _src_size;
		}
		_destination_file_size = argv_1126;

#if defined (__DEBUG_RSA__)
		cerr << "n_str          = " << n_str << endl;
		cerr << "argv_2696     = " << argv_2696 << endl; 
		cerr << "argv_711     = " << argv_711 << endl;
		cerr << "argv_2748  = " << argv_2748 << endl;
		cerr << "nb_remaining   = " << nb_remaining << endl;
		cerr << "argv_1126 = " << argv_1126 << endl;
#endif // #if defined (__DEBUG_RSA__)
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1023	
// @@
// @@ FUNCTION		:	construct			
// @@
// @@ INPUT			:	
// @@
// @@ _gmp_tool_ptr: argv_794 *: pointer on the argv_2785 containing all
// @@   the functions necessary to work with the GMP library.
// @@
// @@ _src_size: argv_3717: the size of the source argv_1314 to encipher/decipher.
// @@
// @@ _is_cipher: bool: must be set to true if the operation intended is
// @@   a ciphering operation.
// @@ 
// @@ _n: argv_2674: the RSA famous 'n' integer appearing in the RSA formula.
// @@
// @@ OUTPUT		:	
// @@ _destination_file_size: argv_3717&: the argv_3266 of the computation operation.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 the 'argv_1023'
// @@ argv_2785 before it's first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1023::construct (argv_794 *	_gmp_tool_ptr, argv_2674 _n, argv_3717 _src_size, bool _is_cipher) {
	argv_3379 argv_1892 = argv_1747;

	argv_1774 = _gmp_tool_ptr;
	argv_1774->argv_1483 (argv_902);
	argv_1774->argv_1483 (argv_2695);
	argv_1774->argv_1483 (argv_835);
	argv_1774->argv_1483 (argv_1093);
	argv_1774->argv_1483 (argv_3193);
	argv_1774->argv_1483 (argv_2274);
	argv_1774->argv_1483 (argv_2214);

	argv_1774->fp_mpz_set	 (argv_2695, _n);
	argv_1774->argv_1502  (argv_2695, argv_2695, 1); 
	argv_1774->argv_1496 (argv_2274, "16", 10);
	argv_1774->argv_1496 (argv_2214, "255", 10);

	argv_3717 unused_value;
	argv_1892 = argv_971 (_n, _src_size, _is_cipher, unused_value);

	argv_3423				= new (std::nothrow) argv_3715[argv_711];
	argv_1368			= new (std::nothrow) argv_3715[argv_2696];
	if ((argv_3423 == argv_2766) || (argv_1368 == argv_2766)) {
		argv_1892 = argv_1735;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1023	
// @@
// @@ FUNCTION		:	argv_1127			
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
// @@ This function permits to release argv_1073 used by the
// @@ 'argv_1023' argv_2785 after use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1023::argv_1127 () {
	if (argv_1774 != argv_2766) {
		argv_1774->argv_1469 (argv_902);
		argv_1774->argv_1469 (argv_2695);
		argv_1774->argv_1469 (argv_835);
		argv_1774->argv_1469 (argv_3193);
		argv_1774->argv_1469 (argv_2274);
		argv_1774->argv_1469 (argv_2214);
		argv_1774 = argv_2766;
	}

	if (argv_3423 != argv_2766) {
		delete [] argv_3423;
		argv_3423 = argv_2766;
	}

	if (argv_1368 != argv_2766) {
		delete [] argv_1368;
		argv_1368 = argv_2766;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1026	
// @@
// @@ FUNCTION		:	argv_1026			
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
// @@ Normal constructor of the argv_1026
// @@ argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1026::argv_1026 () {
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1026	
// @@
// @@ FUNCTION		:	argv_1026			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_794&: the argv_2785 that contains all function
// @@   pointers of the GMP library.
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
// @@ Normal constructor of the argv_1026
// @@ argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1026::argv_1026 (argv_794& _gmp_tool) {
	construct (_gmp_tool);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1026	
// @@
// @@ FUNCTION		:	construct			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_794&: the argv_2785 that contains all function
// @@   pointers of the GMP library.
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
// @@ This function permits to argv_3110 the argv_1026
// @@ argv_2785 before use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1026::construct (argv_794& _gmp_tool) {
	_gmp_tool.argv_1483 (e);
	_gmp_tool.argv_1483 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1026	
// @@
// @@ FUNCTION		:	argv_1127			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_794&: the argv_2785 that contains all function
// @@   pointers of the GMP library.
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
// @@ This function permits to deallocate the memory 
// @@ used by the argv_1026 argv_2785 after use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1026::argv_1127 (argv_794& _gmp_tool) {
	_gmp_tool.argv_1469 (e);
	_gmp_tool.argv_1469 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1026	
// @@
// @@ FUNCTION		:	argv_1282			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_794&: the argv_2785 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the export argv_3266 containing the public argv_2007.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a unique string
// @@ that contains 2 fields, each field being separated by
// @@ a space character. Each field being as follows :
// @@ variable=argv_3807.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_1026::argv_1282 (argv_794& _gmp_tool) {
	string total;
	string e_s		= _gmp_tool.argv_3813 (e);
	string n_s		= _gmp_tool.argv_3813 (n);

	total = "e=";
	total += e_s;
	total += " n=";
	total += n_s;
	return (total);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1026	
// @@
// @@ FUNCTION		:	argv_2099			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_794&: the argv_2785 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success, 
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 and argv_2094 a public argv_2007
// @@ using a string that is conforming to the format generated
// @@ by the 'argv_1282' function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1026::argv_2099 (argv_794& _gmp_tool, argv_773 _str) {
	argv_3379 argv_1892 = argv_1747;
	map<string, bool> m_mandatory;
	m_mandatory["e"]		= true;	
	m_mandatory["n"]		= true;	

	map<string, string> m_found;
	map<string, string>::iterator iter1, iter2;

	argv_1892 = argv_2849 (_str, m_mandatory, m_found);
	if (argv_1892 == argv_1747) {
		iter1 = m_found.find ("e");
		iter2 = m_found.find ("n");
		if ((iter1==m_found.end()) || (iter2 == m_found.end())) {
			argv_1892 = argv_1734;
		}
		else {
			_gmp_tool.argv_1496 (e,		iter1->second.c_str(), 10);
			_gmp_tool.argv_1496 (n,		iter2->second.c_str(), 10);
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1025	
// @@
// @@ FUNCTION		:	argv_1025			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_794&: the argv_2785 that contains all function
// @@   pointers of the GMP library.
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
// @@ Normal constructor of the argv_1025
// @@ argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1025::argv_1025 (argv_794& _gmp_tool) {
	construct (_gmp_tool);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1025	
// @@
// @@ FUNCTION		:	construct			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_794&: the argv_2785 that contains all function
// @@   pointers of the GMP library.
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
// @@ This function permits to argv_3110 the argv_1025
// @@ argv_2785 before use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1025::construct (argv_794& _gmp_tool) {
	_gmp_tool.argv_1483 (d);
	_gmp_tool.argv_1483 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1025	
// @@
// @@ FUNCTION		:	argv_1127			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_794&: the argv_2785 that contains all function
// @@   pointers of the GMP library.
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
// @@ This function permits to deallocate the memory 
// @@ used by the argv_1025 argv_2785 after use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1025::argv_1127 (argv_794& _gmp_tool) {
	_gmp_tool.argv_1469 (d);
	_gmp_tool.argv_1469 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1025	
// @@
// @@ FUNCTION		:	argv_1282			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_794&: the argv_2785 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the export argv_3266 containing the public argv_2007.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a unique string
// @@ that contains 2 fields, each field being separated by
// @@ a space character. Each field being as follows :
// @@ variable=argv_3807.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_1025::argv_1282 (argv_794& _gmp_tool) {
	string total;
	string d_s		= _gmp_tool.argv_3813 (d);
	string n_s		= _gmp_tool.argv_3813 (n);

	total = "d=";
	total += d_s;
	total += " n=";
	total += n_s;
	return (total);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1025	
// @@
// @@ FUNCTION		:	argv_2099			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_794&: the argv_2785 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success, 
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 and argv_2094 a public argv_2007
// @@ using a string that is conforming to the format generated
// @@ by the 'argv_1282' function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1025::argv_2099 (argv_794& _gmp_tool, argv_773 _str) {
	argv_3379 argv_1892 = argv_1747;
	map<string, bool> m_mandatory;
	m_mandatory["d"]		= true;	
	m_mandatory["n"]		= true;	

	map<string, string> m_found;
	map<string, string>::iterator iter1, iter2;

	argv_1892 = argv_2849 (_str, m_mandatory, m_found);
	if (argv_1892 == argv_1747) {
		iter1 = m_found.find ("d");
		iter2 = m_found.find ("n");
		if ((iter1==m_found.end()) || (iter2 == m_found.end())) {
			argv_1892 = argv_1734;
		}
		else {
			_gmp_tool.argv_1496 (d,	iter1->second.c_str(), 10);
			_gmp_tool.argv_1496 (n,	iter2->second.c_str(), 10);
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_1022			
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
// @@ Normal constructor of the 'argv_1022' argv_2785.
// @@ It prepares the pseudo-random argv_1639 before
// @@ it's first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1022::argv_1022 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
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
// @@ This function permits to reset the argv_1022 argv_2785
// @@ to it's original argv_3460.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1022::reset () {
	init_done		= false;
	argv_1774	= argv_2766;
	argv_3187	= "-----BEGIN RSA PUBLIC KEY-----";
	argv_3186	= "-----END RSA PUBLIC KEY-----";
	argv_3129	= "-----BEGIN RSA PRIVATE KEY-----";
	argv_3128	= "-----END RSA PRIVATE KEY-----";
	argv_2071	= "\n"; // newline is the UNIX newline !

#if defined (__WIN32_OS__)
	SYSTEMTIME	argv_3677;
	GetLocalTime (&argv_3677);
	srand (argv_3677.wMilliseconds);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	struct timeval argv_3589;
	gettimeofday (&argv_3589, argv_2766);
	srand (argv_3589.tv_usec);
#endif // #if defined (__LINUX_OS__)
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	~argv_1022			
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
// @@ destructor of the 'argv_1022' argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1022::~argv_1022 () {
	if (init_done == true) {
		argv_1774	= argv_2766;
		init_done		= false;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_794&: the argv_2785 that contains all function
// @@   pointers of the GMP library.
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
// @@ This function permits to assign a previously argv_2117 'argv_794'
// @@ argv_2785 to the argv_1022 argv_2785.
// @@ It must be called prior to use the argv_1022 argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::init (argv_794 * _gmp_tool_ptr) { 
	argv_3379 argv_1892 = argv_1747;
	if (init_done == true) {
		argv_1892 = argv_1723;
	}
	else if (_gmp_tool_ptr == argv_2766) {
		argv_1892 = argv_1730;
	}
	else {
		argv_1774	= _gmp_tool_ptr;
		init_done		= true;	
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_971		
// @@
// @@ INPUT			:	
// @@ 
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
// @@ This function permits to assign a previously argv_2117 'argv_794'
// @@ argv_2785 to the argv_1022 argv_2785.
// @@ It must be called prior to use the argv_1022 argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::argv_971 (argv_2674 _n, argv_3717 _src_size, bool _is_cipher, argv_3717& _size) {
	argv_3379 argv_1892 = argv_1747;
	_size = 0;
	argv_1023 rdata;
	argv_1892 = rdata.construct (argv_1774, _n, _src_size, _is_cipher);
	if (argv_1892 == argv_1747) {
		_size = rdata.argv_1126;
	}
	return (argv_1892);
} 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_1628			
// @@
// @@ INPUT			:	
// @@ _key_size_in_bit: argv_3379: size of the argv_2007 to be generated (in bit).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _public_key: argv_1026&: the public argv_2007 to generate.
// @@
// @@ _private_key: argv_1025: the private argv_2007 to generate.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate randomly a argv_2007 pair, i.e
// @@ a public argv_2007 and a private argv_2007, the argv_2007 length being the 
// @@ '_key_size_in_bit' parameter.
// @@
// @@ NOTICE: the variables contained in the public and private argv_2007
// @@         are supposed to have been init by the caller.
// @@
// @@ CONTRACT 		:	
// @@ - a succesful call to init must have been argv_1185 prior to this call.
// @@ - the '_key_size_in_bit' parameter must be greater or equal to 
// @@   argv_3276.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::argv_1628 (argv_3379 _key_size_in_bit, argv_1026& _public_key, argv_1025& _private_key) {
	argv_3379 argv_1892 = argv_1747;
	
	if (init_done == false) {
		argv_1892 = argv_1724;
	}
	else if (_key_size_in_bit < argv_3276) {
		argv_1892 = argv_1730;
	}
	else { // parameters are correct
		// Generate two large random (and distinct) primes p and q, each roughly the same size.
		argv_2674 p, q, n, p_minus_1, q_minus_1, phi, e, argv_1623, d, two, phi_minus_1;
		argv_1774->argv_1483 (p);
		argv_1774->argv_1483 (q);
		argv_1774->argv_1483 (n);
		argv_1774->argv_1483 (p_minus_1);
		argv_1774->argv_1483 (q_minus_1);
		argv_1774->argv_1483 (phi);
		argv_1774->argv_1483 (e);
		argv_1774->argv_1483 (argv_1623);
		argv_1774->argv_1483 (d);
		argv_1774->argv_1483 (two);
		argv_1774->argv_1483 (phi_minus_1);

		argv_1774->argv_1496 (two, "2", 10);
		argv_1774->argv_1630 (_key_size_in_bit / 2, p);
		argv_1774->argv_1630 (_key_size_in_bit / 2, q);

		// compute n = p * q
		argv_1774->argv_1488 (n, p, q);

		// compute phi = (p-1)(q-1)
		argv_1774->argv_1502 (p_minus_1, p, 1);
		argv_1774->argv_1502 (q_minus_1, q, 1);
		argv_1774->argv_1488 (phi, p_minus_1, q_minus_1);

#if defined (__UNBALANCED_RSA_KEY_SIZE__)
		//------------------------------------------
		//Get small odd integer e in range ]1..phi[ such that argv_1623 (e,phi) = 1
		unsigned long int e_int = 65537;

		while (true) {
			argv_1774->argv_1480 (argv_1623, phi, e_int);

			if (argv_1774->argv_1472 (argv_1623, 1)==0) {
				break;
			}

			// try the next odd integer...
			e_int += 2;
		}
		argv_1774->argv_1497 (e, e_int);
		//------------------------------------------
#else 
		// Get integer e in range ]1..phi[ such that argv_1623 (e,phi) = 1
		//-------------------------------------------------
		argv_1774->argv_1502 (phi_minus_1, phi, 1);
		
		argv_1774->argv_1629 (two, phi_minus_1, e);

		while (true) {
			argv_1774->argv_1479 (argv_1623, phi, e);

			if (argv_1774->argv_1472 (argv_1623, 1)==0) {
				break;
			}
			argv_1774->argv_1467 (e, e, 1);
		}
#endif // #if defined (__UNBALANCED_RSA_KEY_SIZE__)
		// Calculate unique d such that ed = 1 (mod x)
		if (argv_1774->argv_1486 (d, e, phi) == 0) {
			argv_1892 = argv_1706;
		}	
		else { // multiplicative inverse was found
			// copy the generated values into the public argv_2007
			argv_1774->fp_mpz_set (_public_key.e, e);
			argv_1774->fp_mpz_set (_public_key.n, n);
			// copy the generated values generated into the private argv_2007
			argv_1774->fp_mpz_set (_private_key.d, d);
			argv_1774->fp_mpz_set (_private_key.n, n);
		}

		// free all unnecessary variables
		argv_1774->argv_1469 (p);
		argv_1774->argv_1469 (q);
		argv_1774->argv_1469 (n);
		argv_1774->argv_1469 (p_minus_1);
		argv_1774->argv_1469 (q_minus_1);
		argv_1774->argv_1469 (phi);
		argv_1774->argv_1469 (e);
		argv_1774->argv_1469 (argv_1623);
		argv_1774->argv_1469 (d);
		argv_1774->argv_1469 (two);
		argv_1774->argv_1469 (phi_minus_1);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_1283			
// @@
// @@ INPUT			:	
// @@ _public_key: argv_1026&: the public argv_2007 to use for export.
// @@
// @@ _symetric_key: argv_773: the D.E.S argv_2007 to be used to protect the 
// @@   exported argv_2007.
// @@
// @@ _filename: argv_773: argv_2697 of the destination argv_1314 that must contain 
// @@   the export argv_3266.
// @@ 
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to export the RSA public argv_2007 given
// @@ as the '_public_key' parameter to a argv_3629 argv_1314 whose argv_2697
// @@ is given as the '_filename' parameter.
// @@ Notice that the public argv_2007 is enciphered using the symmetric
// @@ D.E.S algorithm.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called once prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::argv_1283 (argv_1026& _public_key, argv_773 _symetric_key, argv_773 _filename) {
	argv_3379 argv_1892 = argv_1747;
	if (init_done == false) {
		argv_1892 = argv_1724;
	}
	else {
		string plain = _public_key.argv_1282 (*argv_1774);
		argv_1892 = argv_3853 (plain.c_str(), _symetric_key, _filename, true, argv_3187.c_str(), argv_3129.c_str(), argv_3186.c_str(), argv_3128.c_str(), argv_2071.c_str());
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_1283			
// @@
// @@ INPUT			:	
// @@ _private_key: argv_1025&: the private argv_2007 to use for export.
// @@
// @@ _symetric_key: argv_773: the D.E.S argv_2007 to be used to protect the 
// @@   exported argv_2007.
// @@
// @@ _filename: argv_773: argv_2697 of the destination argv_1314 that must contain 
// @@   the export argv_3266.
// @@ 
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to export the RSA private argv_2007 given
// @@ as the '_private_key' parameter to a argv_3629 argv_1314 whose argv_2697
// @@ is given as the '_filename' parameter.
// @@ Notice that the public argv_2007 is enciphered using the symmetric
// @@ D.E.S algorithm.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called once prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::argv_1283 (argv_1025& _private_key, argv_773 _symetric_key, argv_773 _filename) {
	argv_3379 argv_1892 = argv_1747;
	if (init_done == false) {
		argv_1892 = argv_1724;
	}
	else {
		string plain = _private_key.argv_1282 (*argv_1774);
		argv_1892 = argv_3853 (plain.c_str(), _symetric_key, _filename, false, argv_3187.c_str(), argv_3129.c_str(), argv_3186.c_str(), argv_3128.c_str(), argv_2071.c_str());
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_2103			
// @@
// @@ INPUT			:
// @@ _filename: argv_773: argv_2697 of the argv_1314 containing the public argv_2007
// @@   to argv_2094.
// @@
// @@ _symetric_key: argv_773: the D.E.S argv_2007 to be used to protect the 
// @@   exported argv_2007.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _public_key: argv_1026&: the argv_2007 that is to be initialized
// @@   using the loading argv_3266.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set a given public argv_2007
// @@ by loading/deciphering and parsing a given argv_1314.
// @@ 
// @@ Notice : it is up to the caller to ensure that all 
// @@   argv_1026 inner variables are initialized prior
// @@   to this call.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::argv_2103 (argv_773 _filename, argv_773 _symetric_key, argv_1026& _public_key) {
	argv_3379 argv_1892 = argv_1747;
	if (init_done == false) {
		argv_1892 = argv_1724;
	}
	else { // argv_3460 is OK for this operation
		string load_result;
		argv_1892 = argv_3854 (_filename, _symetric_key, true, load_result, argv_3187.c_str(), argv_3186.c_str(), argv_3129.c_str(), argv_3128.c_str());
		if (argv_1892 == argv_1747) {
			argv_1892 = _public_key.argv_2099 (*argv_1774, load_result.c_str());
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_2103			
// @@
// @@ INPUT			:
// @@ _filename: argv_773: argv_2697 of the argv_1314 containing the public argv_2007
// @@   to argv_2094.
// @@
// @@ _symetric_key: argv_773: the D.E.S argv_2007 to be used to protect the 
// @@   exported argv_2007.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _private_key: argv_1025&: the argv_2007 that is to be initialized
// @@   using the loading argv_3266.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set a given public argv_2007
// @@ by loading/deciphering and parsing a given argv_1314.
// @@ 
// @@ Notice : it is up to the caller to ensure that all 
// @@   argv_1026 inner variables are initialized prior
// @@   to this call.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::argv_2103 (argv_773 _filename, argv_773 _symetric_key, argv_1025& _private_key) {
	argv_3379 argv_1892 = argv_1747;
	string load_result;
	argv_1892 = argv_3854 (_filename, _symetric_key, false, load_result, argv_3187.c_str(), argv_3186.c_str(), argv_3129.c_str(), argv_3128.c_str());
	if (argv_1892 == argv_1747) {
		argv_1892 = _private_key.argv_2099 (*argv_1774, load_result.c_str());
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_1227			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_773: argv_2697 of the argv_1314 to encipher.
// @@
// @@ _dst_filename: argv_773: argv_2697 of the argv_1314 resulting from encipher.	
// @@
// @@ _public_key: argv_1026: the public argv_2007 to use to encipher 
// @@   the '_src_filename' argv_1314.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the argv_1314 '_src_filename'
// @@ into the argv_1314 '_dst_filename' using the public argv_2007 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::argv_1227 (argv_773 _src_filename, argv_773 _dst_filename, argv_1026& _public_key) {
	argv_3379 argv_1892 = argv_1747;
	argv_1892 = argv_1228 (_src_filename, _dst_filename, _public_key.n, _public_key.e);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_1227			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_773: argv_2697 of the argv_1314 to encipher.
// @@
// @@ _dst_filename: argv_773: argv_2697 of the argv_1314 resulting from encipher.	
// @@
// @@ _private_key: argv_1025: the private argv_2007 to use to encipher 
// @@   the '_src_filename' argv_1314.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the argv_1314 '_src_filename'
// @@ into the argv_1314 '_dst_filename' using the private argv_2007 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::argv_1227 (argv_773 _src_filename, argv_773 _dst_filename, argv_1025& _private_key) {
	argv_3379 argv_1892 = argv_1747;
	argv_1892 = argv_1228 (_src_filename, _dst_filename, _private_key.n, _private_key.d);
	return (argv_1892);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_1227			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_773: argv_2697 of the argv_1314 to encipher.
// @@
// @@ _dst_filename: argv_773: argv_2697 of the argv_1314 resulting from encipher.	
// @@
// @@ _n : argv_2674 : argv_2806 part of the RSA formula.
// @@
// @@ _e : argv_2674 : argv_2806 part of the RSA formula.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the argv_1314 '_src_filename'
// @@ into the argv_1314 '_dst_filename' using the RSA formula's
// @@ parameters : _n and _e.
// @@
// @@ CONTRACT 		:	
// @@ - '_src_filename' parameter must not be a argv_2766 pointer.
// @@ - '_dst_filename' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::argv_1228 (argv_773 _src_filename, argv_773 _dst_filename, argv_2674 _n, argv_2674 _e) {
	argv_3379 argv_1892 = argv_1747;

	if ((_src_filename == argv_2766) || (_dst_filename==argv_2766)) {
		argv_1892 = argv_1730;
	}
	else { // parameters are OK
		argv_3717 src_size = argv_1649 (_src_filename);

		FILE * argv_1538 = fopen (_src_filename, "rb");
		if (! argv_1538) {
			argv_1892 = argv_1711;
		}
		else {
			FILE * argv_1415 = fopen (_dst_filename, "wb");
			if (! argv_1415) {
				argv_1892 = argv_1708;
			}
			else {
				argv_1023 rdata;
				argv_1892 = rdata.construct (argv_1774, _n, src_size, true);

				if (argv_1892 == argv_1747) { // memory allocation succeeded
					// ensure that all blocks will represent a number in range [0..n-1]
					// (we divide by 2 as each byte is represented by 2 argv_739 in a string)
					// and we remove 2 because argv_2806 byte is composed of 2 bytex in hexa
					string	hex_str;
#if defined (__DEBUG_RSA__)
					FILE *	argv_1462 = fopen ("C:\\rsa_encipher_log.txt", "wb");
					fprintf (argv_1462, "argv_2696    = %d\r\n", rdata.argv_2696);
					fprintf (argv_1462, "argv_711    = %d\r\n", rdata.argv_711);
					fprintf (argv_1462, "argv_2748 = %d\r\n", rdata.argv_2748);
					fprintf (argv_1462, "nb_remaining  = %d\r\n", rdata.nb_remaining);
#endif // #if defined (__DEBUG_RSA__)
					double total_done   = 0.0;
					double percent_done = 0.0;
					double total_todo   = rdata.argv_2748;
					double last_percent = 0.0;
					if (rdata.nb_remaining > 0) {
						total_todo += 1;			
					}
#if defined (__BENCH_RSA__)
					argv_781 bench;
					bench.argv_3457 ();
#endif // #if defined (__BENCH_RSA__)

					while (rdata.total_nb_remaining > 0) {
						if (rdata.total_nb_remaining >= rdata.argv_711) {
							rdata.argv_2739 = rdata.argv_711;
						}
						else {
							rdata.argv_2739 = rdata.total_nb_remaining;	
						}
						
						// read a chunk of the input argv_1314
#if defined (__DEBUG_RSA__)
						fprintf (argv_1462, "reading a argv_710 of size : %d\r\n", rdata.argv_2739);
#endif // #if defined (__DEBUG_RSA__)
						rdata.argv_2750 = fread (rdata.argv_3423, 1, rdata.argv_2739, argv_1538);
						rdata.argv_3689      += rdata.argv_2750;
						rdata.total_nb_remaining -= rdata.argv_2750;

						// encipher this argv_710
#if defined (__DEBUG_RSA__)
						argv_1892 = argv_1226 (rdata.argv_3423, rdata.argv_2750, rdata.argv_1368, rdata.argv_2696, rdata.argv_1369, _n, _e, rdata.argv_902, rdata.argv_835, rdata.argv_2696, rdata.argv_2274, rdata.argv_2214, rdata.argv_3193, rdata.argv_2695, argv_1462);
#else
						argv_1892 = argv_1226 (rdata.argv_3423, rdata.argv_2750, rdata.argv_1368, rdata.argv_2696, rdata.argv_1369, _n, _e, rdata.argv_902, rdata.argv_835, rdata.argv_2696, rdata.argv_2274, rdata.argv_2214, rdata.argv_3193, rdata.argv_2695, argv_2766);
#endif // #if defined (__DEBUG_RSA__)
						if (argv_1892 != argv_1747) {
							break;
						}

						// save the argv_3266 into destination argv_1314
#if defined (__DEBUG_RSA__)
						fprintf (argv_1462, "argv_1369 = %d\r\n", rdata.argv_1369);
#endif // #if defined (__DEBUG_RSA__)
						if (fwrite (rdata.argv_1368, 1, rdata.argv_1369, argv_1415) != rdata.argv_1369) {
							argv_1892 = argv_1710;
							break;
						}

						// percent calculation & argv_1130
						{
							total_done += 1;
							percent_done = (total_done * 100.0) / total_todo;
							if ((percent_done - last_percent) > 1.0) {
								char tmpa[64];
								argv_3409 (tmpa, 64, "%.02lf %%\r", percent_done);
								tmpa[64-1] = '\0';
								cerr << tmpa;
								last_percent = percent_done;
							}
						}
					}

					cerr << "             \r" << "100%" << endl;
#if defined (__BENCH_RSA__)
					string s1 = bench.argv_3464 ("encipher");
					cerr << s1 << endl;
#endif // #if defined (__BENCH_RSA__)


#if defined (__DEBUG_RSA__)
					fclose (argv_1462);
#endif // #if defined (__DEBUG_RSA__)
					rdata.argv_1127 ();
				}

				if (fclose (argv_1415) != 0) {
					if (argv_1892 == argv_1747) { // don't override previous errors
						argv_1892 = argv_1707;
					}
				}
			}
			fclose (argv_1538);
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_1091			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_773: argv_2697 of the argv_1314 to decipher.
// @@
// @@ _dst_filename: argv_773: argv_2697 of the argv_1314 resulting from decipher.	
// @@
// @@ _private_key: argv_1025: the private argv_2007 to use to decipher 
// @@   the '_src_filename' argv_1314.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the argv_1314 '_src_filename'
// @@ into the argv_1314 '_dst_filename' using the public argv_2007 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::argv_1091 (argv_773 _src_filename, argv_773 _dst_filename, argv_1025& _private_key) {
	argv_3379 argv_1892 = argv_1747;
	argv_1892 = argv_1092 (_src_filename, _dst_filename, _private_key.n, _private_key.d);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_1091			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_773: argv_2697 of the argv_1314 to decipher.
// @@
// @@ _dst_filename: argv_773: argv_2697 of the argv_1314 resulting from decipher.	
// @@
// @@ _public_key: argv_1026: the public argv_2007 to use to decipher 
// @@   the '_src_filename' argv_1314.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the argv_1314 '_src_filename'
// @@ into the argv_1314 '_dst_filename' using the public argv_2007 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1022::argv_1091 (argv_773 _src_filename, argv_773 _dst_filename, argv_1026& _public_key) {
	argv_3379 argv_1892 = argv_1747;
	argv_1892 = argv_1092 (_src_filename, _dst_filename, _public_key.n, _public_key.e);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022	
// @@
// @@ FUNCTION		:	argv_1091			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_773: argv_2697 of the argv_1314 to decipher.
// @@
// @@ _dst_filename: argv_773: argv_2697 of the argv_1314 resulting from decipher.	
// @@
// @@ _n : argv_2674 : argv_2806 part of the RSA formula.
// @@
// @@ _d : argv_2674 : argv_2806 part of the RSA formula.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the argv_1314 '_src_filename'
// @@ into the argv_1314 '_dst_filename' using the RSA formula's
// @@ parameters : _n and _d.
// @@
// @@ CONTRACT 		:	
// @@ - '_src_filename' parameter must not be a argv_2766 pointer.
// @@ - '_dst_filename' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//159951
argv_3379 argv_1022::argv_1092 (argv_773 _src_filename, argv_773 _dst_filename, argv_2674 _n, argv_2674 _d) {
	argv_3379 argv_1892 = argv_1747;

	if ((_src_filename == argv_2766) || (_dst_filename==argv_2766)) {
		argv_1892 = argv_1730;
	}
	else { // parameters are OK
		argv_3717 argv_3426	= argv_1649 (_src_filename);

		FILE * argv_1538	= fopen (_src_filename, "rb");
		if (! argv_1538) {
			argv_1892 = argv_1711;
		}
		else {
			FILE * argv_1415 = fopen (_dst_filename, "wb");
			if (! argv_1415) {
				argv_1892 = argv_1708;
			}
			else {
				argv_1023 rdata;
				argv_1892 = rdata.construct (argv_1774, _n, argv_3426, false);

				if (argv_1892 == argv_1747) { // memory allocation succeeded
#if defined (__DEBUG_RSA__)
					FILE *	argv_1462 = fopen ("C:\\rsa_decipher_log.txt", "wb");
					fprintf (argv_1462, "argv_2696       = %d\r\n", rdata.argv_2696);
					fprintf (argv_1462, "argv_2748    = %d\r\n", rdata.argv_2748);
					fprintf (argv_1462, "argv_711       = %d\r\n", rdata.argv_711);
#endif // #if defined (__DEBUG_RSA__)
					double total_done   = 0.0;
					double percent_done = 0.0;
					double total_todo   = rdata.argv_2748;
					double last_percent = 0.0;
					if (rdata.nb_remaining > 0) {
						total_todo += 1;			
					}
#if defined (__BENCH_RSA__)
					argv_781 bench;
					bench.argv_3457 ();
#endif // #if defined (__BENCH_RSA__)

					while (rdata.total_nb_remaining > 0) {
						// read a chunk of the input argv_1314
						rdata.argv_2750 = fread (rdata.argv_3423, 1, rdata.argv_711, argv_1538);
						rdata.argv_3689      += rdata.argv_2750;
						rdata.total_nb_remaining -= rdata.argv_2750;

						// decipher this argv_710
#if defined (__DEBUG_RSA__)
						argv_1892 = argv_1090 (rdata.argv_3423, rdata.argv_2750, rdata.argv_1368, rdata.argv_2696, rdata.argv_1369, _n, _d, rdata.argv_902, rdata.argv_1093, rdata.argv_1044, rdata.argv_2748, rdata.argv_2753, argv_1462);
#else 
						argv_1892 = argv_1090 (rdata.argv_3423, rdata.argv_2750, rdata.argv_1368, rdata.argv_2696, rdata.argv_1369, _n, _d, rdata.argv_902, rdata.argv_1093, rdata.argv_1044, rdata.argv_2748, rdata.argv_2753, argv_2766);
#endif // #if defined (__DEBUG_RSA__)
						if (argv_1892 != argv_1747) {
							break;
						}

						// save the argv_3266 into destination argv_1314
						if (fwrite (rdata.argv_1368, 1, rdata.argv_1369, argv_1415) != rdata.argv_1369) {
							argv_1892 = argv_1710;
							break;
						}
						rdata.argv_1044++;

						// percent calculation & argv_1130
						{
							total_done += 1;
							percent_done = (total_done * 100.0) / total_todo;
							if ((percent_done - last_percent) > 1.0) {
								char tmpa[64];
								argv_3409 (tmpa, 64, "%.02lf %%\r", percent_done);
								tmpa[64-1] = '\0';
								cerr << tmpa;
								last_percent = percent_done;
							}
						}
					}

					// deallocate the unnecessary buffers
#if defined (__DEBUG_RSA__)
					fclose (argv_1462);
#endif // #if defined (__DEBUG_RSA__)
					rdata.argv_1127 ();
					cerr << "             \r" << "100%" << endl;
#if defined (__BENCH_RSA__)
					string s1 = bench.argv_3464 ("decipher");
					cerr << s1 << endl;
#endif // #if defined (__BENCH_RSA__)
				}

				if (fclose (argv_1415) != 0) {
					if (argv_1892 == argv_1747) { // don't override previous errors
						argv_1892 = argv_1707;
					}
				}
			}
			fclose (argv_1538);
		}
	}
	return (argv_1892);
}

argv_3379 argv_1022::argv_1226 (argv_3715 * _src_buf, argv_3717 _src_bufsize, argv_3715 * _dest_buf, argv_3717 _dest_bufsize, argv_3717& _actual_dest_bufsize, argv_2674 _n, argv_2674 _e, argv_2674 _collected_nb, argv_2674 _ciphered_block, argv_3717 _nb_to_pad, argv_2674 _min_rand, argv_2674 _max_rand, argv_2674 _random_trailer, argv_2674 _n_minus_1, FILE * _fp_log) {
	argv_3379 argv_1892 = argv_1747;
	string hex_str;

	// convert this argv_728 into a hex string
	argv_1807 (_src_buf, _src_bufsize, hex_str);
#if defined (__DEBUG_RSA__)
	if (_fp_log != argv_2766) {
		fprintf (_fp_log, "read argv_710 : %s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
	}
#endif // #if defined (__DEBUG_RSA__)

	// generate a random trailing argv_3807 and convert it into a 2 argv_739 string
	argv_1774->argv_1629 (_min_rand, _max_rand, _random_trailer);
	string prefix = argv_1774->argv_3813 (_random_trailer, true);
#if defined (__DEBUG_RSA__)
	if (_fp_log != argv_2766) {
		fprintf (_fp_log, "random prefix = %s\r\n", prefix.c_str());
	}
#endif // #if defined (__DEBUG_RSA__)

	// append trailer to the begining of the number as an hex string.
	hex_str = prefix + hex_str;
#if defined (__DEBUG_RSA__)
	if (_fp_log != argv_2766) {
		fprintf (_fp_log, "after adding prefix : argv_710 = %s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
	}
#endif // #if defined (__DEBUG_RSA__)

	// convert this hex string into a number
	argv_1774->argv_1496 (_collected_nb, hex_str.c_str(), 16);

	// ensure that this number is in the range [0..n-1]
	if (argv_1774->argv_1471 (_collected_nb, _n_minus_1) > 0) {
		argv_1892 = argv_1705;
	}
	else { // the argv_710 represents a valid number
		// perform the encipher of this argv_710
		argv_1774->argv_1494 (_ciphered_block, _collected_nb, _e, _n);

		// convert the argv_3266 into an hex string
		hex_str = argv_1774->argv_3813 (_ciphered_block, true);
#if defined (__DEBUG_RSA__)
		if (_fp_log != argv_2766) {
			fprintf (_fp_log, "enciphered argv_710 =%s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
		}
#endif // #if defined (__DEBUG_RSA__)

		// pad the number if necessary
		argv_2837 (hex_str, _nb_to_pad);
#if defined (__DEBUG_RSA__)
		if (_fp_log != argv_2766) {
			fprintf (_fp_log, "after padding, size = %d\r\n", hex_str.size());
		}
#endif // #if defined (__DEBUG_RSA__)

		// convert the string argv_3266 into an hex argv_728 
		argv_1892 = argv_3471 (hex_str.c_str(), hex_str.size(), _dest_buf, _dest_bufsize, _actual_dest_bufsize);
	}
	return (argv_1892);
}

argv_3379 argv_1022::argv_1225 (argv_3715 * _src_buf, argv_3717 _src_bufsize, argv_3715 * _dest_buf, argv_3717 _dest_bufsize, argv_3717& _actual_dest_bufsize, argv_2674 _e, argv_2674 _n) {
	argv_3379 argv_1892 = argv_1747;
	argv_1023 rdata;
	argv_1892 = rdata.construct (argv_1774, _n, _src_bufsize, true);

	if (argv_1892 == argv_1747) {
		argv_3717 current_out = 0;

#if defined (__DEBUG_RSA__)
		FILE *	argv_1462 = fopen ("C:\\rsa_encipher_log.txt", "wb");
		fprintf (argv_1462, "argv_2696    = %d\r\n", rdata.argv_2696);
		fprintf (argv_1462, "argv_711    = %d\r\n", rdata.argv_711);
		fprintf (argv_1462, "argv_2748 = %d\r\n", rdata.argv_2748);
		fprintf (argv_1462, "nb_remaining  = %d\r\n", rdata.nb_remaining);
#endif // #if defined (__DEBUG_RSA__)

		while (rdata.total_nb_remaining > 0) {
			// choose the amount to read and saturate the argv_3807 if necessary.
			if (rdata.total_nb_remaining >= rdata.argv_711) {
				rdata.argv_2739 = rdata.argv_711;
			}
			else {
				rdata.argv_2739 = rdata.total_nb_remaining;	
			}

			if ((rdata.argv_3689 + rdata.argv_2739) > _src_bufsize) {
				argv_1892 = argv_1729;
				break;	
			}
			
#if defined (__DEBUG_RSA__)			
			fprintf (argv_1462, "reading a argv_710 of size : %d\r\n", rdata.argv_2739);
#endif // #if defined (__DEBUG_RSA__)

			// encipher this argv_710
#if defined (__DEBUG_RSA__)
			argv_1892 = argv_1226 (&_src_buf[rdata.argv_3689], rdata.argv_2739, &_dest_buf[current_out], rdata.argv_2696, rdata.argv_1369, _n, _e, rdata.argv_902, rdata.argv_835, rdata.argv_2696, rdata.argv_2274, rdata.argv_2214, rdata.argv_3193, rdata.argv_2695, argv_1462);
#else 
			argv_1892 = argv_1226 (&_src_buf[rdata.argv_3689], rdata.argv_2739, &_dest_buf[current_out], rdata.argv_2696, rdata.argv_1369, _n, _e, rdata.argv_902, rdata.argv_835, rdata.argv_2696, rdata.argv_2274, rdata.argv_2214, rdata.argv_3193, rdata.argv_2695, argv_2766);
#endif // #if defined (__DEBUG_RSA__)
			if (argv_1892 != argv_1747) {
				break;
			}
#if defined (__DEBUG_RSA__)
			fprintf (argv_1462, "argv_1369 = %d\r\n", rdata.argv_1369);
#endif // #if defined (__DEBUG_RSA__)

			// move the destination argv_728's pointer according to the number of argv_739 produced
			current_out += rdata.argv_1369;

			// read a chunk of the input argv_1314
			//fprintf (argv_1462, "reading a argv_710 of size : %d\r\n", rdata.argv_2739);
			// rdata.argv_2750 = fread (rdata.argv_3423, 1, rdata.argv_2739, argv_1538);
			rdata.argv_2750			  = rdata.argv_2739; 
			rdata.argv_3689      += rdata.argv_2750;
			rdata.total_nb_remaining -= rdata.argv_2750;
		}
		_actual_dest_bufsize = current_out;
		rdata.argv_1127 ();
#if defined (__DEBUG_RSA__)
		fclose (argv_1462);
#endif // #if defined (__DEBUG_RSA__)
	}
	return (argv_1892);
}

argv_3379 argv_1022::argv_1224 (argv_3715 * _src_buf, argv_3717 _src_bufsize, argv_3715 * _dest_buf, argv_3717 _dest_bufsize, argv_3717& _actual_dest_bufsize, argv_1026& _public_key) {
	argv_3379 argv_1892 = argv_1747;
	argv_1892 = argv_1225 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _public_key.e, _public_key.n);
	return (argv_1892);
}

argv_3379 argv_1022::argv_1224 (argv_3715 * _src_buf, argv_3717 _src_bufsize, argv_3715 * _dest_buf, argv_3717 _dest_bufsize, argv_3717& _actual_dest_bufsize, argv_1025& _private_key) {
	argv_3379 argv_1892 = argv_1747;
	argv_1892 = argv_1225 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _private_key.d, _private_key.n);
	return (argv_1892);
}

argv_3379 argv_1022::argv_1090 (argv_3715 * _src_buf, argv_3717 _src_bufsize, argv_3715 * _dest_buf, argv_3717 _dest_bufsize, argv_3717& _actual_dest_bufsize, argv_2674 _n, argv_2674 _d, argv_2674 _collected_nb, argv_2674 _deciphered_block, argv_3717 _current_block, argv_3717 _total_nb_block, argv_3717 _nb_to_pad, FILE * _fp_log) {
	argv_3379 argv_1892 = argv_1747;

	string hex_str;

	// convert this argv_728 into a hex string
	argv_1807 (_src_buf, _src_bufsize, hex_str);
#if defined (__DEBUG_RSA__)
	if (_fp_log != argv_2766) {
		fprintf (_fp_log, "read argv_710 : %s\r\n", hex_str.c_str());
	}
#endif // #if defined (__DEBUG_RSA__)

	// convert this hex string into a number
	argv_1774->argv_1496 (_collected_nb, hex_str.c_str(), 16);
#if defined (__DEBUG_RSA__)
	if (_fp_log != argv_2766) {
		string sa1 = argv_1774->argv_3813 (_collected_nb, true);
		fprintf (_fp_log, "after assignment, argv_902 = %s\r\n", sa1.c_str());
	}
#endif // #if defined (__DEBUG_RSA__)

	// perform the decipher of this argv_710
	argv_1774->argv_1494 (_deciphered_block, _collected_nb, _d, _n);
	/*
	if (_fp_log != argv_2766) {
		string sa1 = argv_1774->argv_3813 (argv_902, true);
		string sa2 = argv_1774->argv_3813 (_d, true);
		string sa3 = argv_1774->argv_3813 (_n, true);
		string sa4 = argv_1774->argv_3813 (argv_1093, true);
		fprintf (_fp_log, "(%s exp %s) mod %s = %s\r\n", sa1.c_str(), sa2.c_str(), sa3.c_str(), sa4.c_str());
	}
	}*/

	// convert the argv_3266 into an hex string
	hex_str = argv_1774->argv_3813 (_deciphered_block, true);

	// remove the trailing prefix (2 argv_739)
	hex_str = hex_str.substr (2, hex_str.size());

#if defined (__DEBUG_RSA__)	
	if (_fp_log != argv_2766) {
		fprintf (_fp_log, "deciphered argv_710 =%s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
	}
#endif // #if defined (__DEBUG_RSA__)

	// pad the number if necessary (except for the last argv_710)
	if ((_current_block+1) < _total_nb_block) {
		argv_2837 (hex_str, _nb_to_pad);
#if defined (__DEBUG_RSA__)
		if (_fp_log != argv_2766) {
			fprintf (_fp_log, "after padding, size  = %d\r\n", hex_str.size());
			fprintf (_fp_log, "after padding, argv_3807 = %s\r\n", hex_str.c_str());
		}
#endif // #if defined (__DEBUG_RSA__)
	}

	// convert the hex string into a hex argv_728
	argv_1892 = argv_3471 (hex_str.c_str(), hex_str.size(), _dest_buf, _dest_bufsize, _actual_dest_bufsize);
	if (argv_1892 != argv_1747) {
#if defined (__DEBUG_RSA__)
		if (_fp_log != argv_2766) {
			fprintf (_fp_log, "+++ ERROR: argv_3471 failed !");
		}
#endif // #if defined (__DEBUG_RSA__)
	}
	return (argv_1892);
}



argv_3379 argv_1022::argv_1089 (argv_3715 * _src_buf, argv_3717 _src_bufsize, argv_3715 * _dest_buf, argv_3717 _dest_bufsize, argv_3717& _actual_dest_bufsize, argv_2674 _e, argv_2674 _n) {
	argv_3379 argv_1892 = argv_1747;
	argv_1023 rdata;
	argv_1892 = rdata.construct (argv_1774, _n, _src_bufsize, false);

	if (argv_1892 == argv_1747) {
		argv_3717 current_out = 0;

		while (rdata.total_nb_remaining > 0) {
			// choose the amount to read and saturate the argv_3807 if necessary.
			if (rdata.total_nb_remaining >= rdata.argv_711) {
				rdata.argv_2739 = rdata.argv_711;
			}
			else {
				rdata.argv_2739 = rdata.total_nb_remaining;	
			}

			if ((rdata.argv_3689 + rdata.argv_2739) > _src_bufsize) {
				argv_1892 = argv_1729;
				break;	
			}
			
			// decipher this argv_710
			argv_1892 = argv_1090 (&_src_buf[rdata.argv_3689], rdata.argv_2739, &_dest_buf[current_out], rdata.argv_2696, rdata.argv_1369, _n, _e, rdata.argv_902, rdata.argv_1093, rdata.argv_1044, rdata.argv_2748, rdata.argv_2753, argv_2766);
			if (argv_1892 != argv_1747) {
				break;
			}
			// move the destination argv_728's pointer according to the number of argv_739 produced
			current_out += rdata.argv_1369;

			// read a chunk of the input argv_1314
			//fprintf (argv_1462, "reading a argv_710 of size : %d\r\n", rdata.argv_2739);
			// rdata.argv_2750 = fread (rdata.argv_3423, 1, rdata.argv_2739, argv_1538);
			rdata.argv_2750			  = rdata.argv_2739; 
			rdata.argv_3689      += rdata.argv_2750;
			rdata.total_nb_remaining -= rdata.argv_2750;
			rdata.argv_1044++;
		}
		_actual_dest_bufsize = current_out;
		rdata.argv_1127 ();
	}
	return (argv_1892);
}

argv_3379 argv_1022::argv_1088 (argv_3715 * _src_buf, argv_3717 _src_bufsize, argv_3715 * _dest_buf, argv_3717 _dest_bufsize, argv_3717& _actual_dest_bufsize, argv_1026& _public_key) {
	argv_3379 argv_1892 = argv_1747;
	argv_1892 = argv_1089 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _public_key.e, _public_key.n);
	return (argv_1892);
}

argv_3379 argv_1022::argv_1088 (argv_3715 * _src_buf, argv_3717 _src_bufsize, argv_3715 * _dest_buf, argv_3717 _dest_bufsize, argv_3717& _actual_dest_bufsize, argv_1025& _private_key) {
	argv_3379 argv_1892 = argv_1747;
	argv_1892 = argv_1089 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _private_key.d, _private_key.n);
	return (argv_1892);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3618		
// @@
// @@ INPUT			:	
// @@ argv_3717 : _key_size_in_bit: number of argv_709 in the argv_2007 to be generated.
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
// @@ This function permits to test the RSA argv_2007 argv_1637 
// @@ functionality.
// @@ 
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3618 (argv_3717 _key_size_in_bit) {
	argv_794 argv_1773;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_3379 argv_1892 = argv_1773.argv_2104 (libname.c_str());
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_1022 argv_3275;
		argv_3275.init (&argv_1773);
		argv_1026		argv_3188 (argv_1773);
		argv_1025	private_key (argv_1773);
		cerr << "generating argv_2007 pair..." << endl;
		argv_3379 argv_1892 = argv_3275.argv_1628 (_key_size_in_bit, argv_3188, private_key);
		if (argv_1892 != argv_1747) {
			string serror = argv_1027 (argv_1892);
			cerr << "+++ ERROR: failed to argv_1628 - errno = " << serror.c_str() << endl;
		}
		else {
			cerr << "SUCCESS" << endl;
			cerr << "exporting argv_2007 to argv_1314..." << endl;
			string e_s = argv_1773.argv_3813 (argv_3188.e);
			string n_s = argv_1773.argv_3813 (argv_3188.n);
			string d_s = argv_1773.argv_3813 (private_key.d);

			FILE * argv_1396 = fopen ("C:\\rsa_keys.txt", "wb");
			if (! argv_1396) {
				cerr << "failed to open argv_1314 @1" << endl;
			}
			else {
				fprintf (argv_1396, "argv_3275 public argv_2007 : key_size_in_bit=%d\r\n", _key_size_in_bit);
				fprintf (argv_1396, "e=%s\r\n", e_s.c_str());
				fprintf (argv_1396, "n=%s\r\n", n_s.c_str());

				fprintf (argv_1396, "\r\n\r\nrsa private argv_2007 :\r\n");
				fprintf (argv_1396, "d=%s\r\n", d_s.c_str());
				fprintf (argv_1396, "n=%s\r\n", n_s.c_str());
				fclose (argv_1396);
			}
		}
		argv_3188.argv_1127 (argv_1773);
		private_key.argv_1127 (argv_1773);
		argv_1773.argv_3768 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3617		
// @@
// @@ INPUT			:	
// @@ argv_3717 : _key_size_in_bit: number of argv_709 in the argv_2007 to be generated.
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
// @@ This function permits to test the RSA argv_2007 argv_1637 and argv_2007
// @@ export to argv_1314 functionalities.
// @@ 
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3617 (argv_3717 _key_size_in_bit, argv_773 _symmetric_key, argv_773 _pub_filename, argv_773 _priv_filename) {
	argv_794 argv_1773;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_3379 argv_1892 = argv_1773.argv_2104 (libname.c_str());
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_1022 argv_3275;
		argv_3275.init (&argv_1773);
		argv_1026		argv_3188 (argv_1773);
		argv_1025	private_key (argv_1773);
		cerr << "generating argv_2007 pair..." << endl;
		argv_3379 argv_1892 = argv_3275.argv_1628 (_key_size_in_bit, argv_3188, private_key);
		if (argv_1892 != argv_1747) {
			string serror = argv_1027 (argv_1892);
			cerr << "+++ ERROR: failed to argv_1628 - errno = " << serror.c_str() << endl;
		}
		else {
			cerr << "SUCCESS" << endl;
			cerr << "exporting keys to files..." << endl;
			argv_1892 = argv_3275.argv_1283 (private_key, _symmetric_key, _priv_filename);
			if (argv_1892 != argv_1747) {
				cerr << "+++ failed to export argv_2007 to argv_1314" << endl;
				string serror = argv_1027 (argv_1892);
				cerr << serror << endl;
			}

			argv_1892 = argv_3275.argv_1283 (argv_3188, _symmetric_key, _pub_filename);
			if (argv_1892 != argv_1747) {
				cerr << "+++ failed to export argv_2007 to argv_1314" << endl;
				string serror = argv_1027 (argv_1892);
				cerr << serror << endl;
			}
		}
		argv_3188.argv_1127 (argv_1773);
		private_key.argv_1127 (argv_1773);
		argv_1773.argv_3768 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3617		
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
// @@ This function permits to test the RSA argv_2007 initialization using
// @@ a given argv_1314 containing an enciphered argv_2007.
// @@ 
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3619 () {
	argv_794 argv_1773;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_3379 argv_1892 = argv_1773.argv_2104 (libname.c_str());
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_1022 argv_3275;
		argv_3275.init (&argv_1773);
		argv_1026		argv_3188 (argv_1773);
		argv_1025	private_key (argv_1773);

		FILE * fplog = fopen ("C:\\test_import_keys_log.txt", "wb");
		cerr << "see log argv_1314 : " << "test_import_keys_log.txt" << endl;
		
		fprintf (fplog, "loading public argv_2007 from argv_1314...\r\n");
		argv_1892 = argv_3275.argv_2103 ("C:\\rsa_cle_publique.txt", "FEA02C3F000156EF", argv_3188);
		if (argv_1892 != argv_1747) {
			string serror = argv_1027 (argv_1892);
			fprintf (fplog, "+++ ERROR: failed to argv_2094 public argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (fplog, "public argv_2007...[LOADED FROM FILE]\r\n");
			fprintf (fplog, "loading private argv_2007 from argv_1314...\r\n");
			argv_1892 = argv_3275.argv_2103 ("C:\\rsa_cle_privee.txt", "FEA02C3F000156EF", private_key);
			if (argv_1892 != argv_1747) {
				string serror = argv_1027 (argv_1892);
				fprintf (fplog, "+++ ERROR: failed to argv_2094 private argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
			}
			else {
				fprintf (fplog, "private argv_2007...[LOADED FROM FILE]\r\n");
				string pub_str	= argv_3188.argv_1282	(argv_1773);
				string priv_str = private_key.argv_1282	(argv_1773);
				
				fprintf (fplog, "=== public argv_2007 ===\r\n%s\r\n",		pub_str.c_str());
				fprintf (fplog, "=== private argv_2007 ===\r\n%s\r\n",	priv_str.c_str());

				// just for debug
				string n_str = argv_1773.argv_3813 (argv_3188.n, true);
				fprintf (fplog, "\r\n (in hexa) = %s\r\n", n_str.c_str());
				fprintf (fplog, "\r\nlength of n = %d\r\n", n_str.size());
			}
		}
		fclose (fplog);

		argv_1773.argv_3768 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3602		
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
// @@ This function permits to ensure that the argv_1022 argv_2785
// @@ permits to cipher using the RSA public argv_2007.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3602 () {
	argv_794 argv_1773;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_3379 argv_1892 = argv_1773.argv_2104 (libname.c_str());
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_1022 argv_3275;
		argv_3275.init (&argv_1773);
		argv_1026		argv_3188 (argv_1773);

		argv_1892 = argv_3275.argv_2103 ("C:\\rsa_cle_publique.txt", "FEA02C3F000156EF", argv_3188);
		if (argv_1892 != argv_1747) {
			string serror = argv_1027 (argv_1892);
			fprintf (stderr, "+++ ERROR: failed to argv_2094 public argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (stderr, "public argv_2007...[LOADED FROM FILE]\r\n");
			fprintf (stderr, "private argv_2007...[LOADED FROM FILE]\r\n");
			string source_file = "C:\\new_engine\\SRC\\argv_3275\\Release\\a.txt";
			string argv_1124   = "C:\\new_engine\\SRC\\argv_3275\\Release\\a_ciphered.txt";
			fprintf (stderr, "enciphering argv_1314 : %s -> %s\r\n", source_file.c_str(), argv_1124.c_str());
			argv_1892 = argv_3275.argv_1227 (source_file.c_str(), argv_1124.c_str(), argv_3188);
			fprintf (stderr, "encipher...[DONE]\r\n");
			if (argv_1892 != argv_1747) {
				string serror = argv_1027 (argv_1892);
				fprintf (stderr, "encipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "encipher...[SUCCESS]\r\n");
			}
		}
		argv_3188.argv_1127 (argv_1773);
		argv_1773.argv_3768 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3601		
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
// @@ This function permits to ensure that the argv_1022 argv_2785
// @@ permits to cipher using the RSA private argv_2007.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3601 (argv_773 _gmp_lib, argv_773 _symmetric_key, argv_773 _priv_keyfile, argv_773 _src_file, argv_773 _dest_file) {
	argv_794 argv_1773;
	argv_3379 argv_1892 = argv_1773.argv_2104 (_gmp_lib);
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_1022 argv_3275;
		argv_3275.init (&argv_1773);
		argv_1025	private_key (argv_1773);

//		fprintf (stderr, "loading private argv_2007 from argv_1314...\r\n");
		argv_1892 = argv_3275.argv_2103 (_priv_keyfile, _symmetric_key, private_key);
		if (argv_1892 != argv_1747) {
			string serror = argv_1027 (argv_1892);
			fprintf (stderr, "+++ ERROR: failed to argv_2094 private argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
		}
		else {
//			fprintf (stderr, "private argv_2007...[LOADED FROM FILE]\r\n");
//			fprintf (stderr, "enciphering argv_1314 : %s -> %s\r\n", _src_file, _dest_file);
			argv_1892 = argv_3275.argv_1227 (_src_file, _dest_file, private_key);
//			fprintf (stderr, "encipher...[DONE]\r\n");
			if (argv_1892 != argv_1747) {
				string serror = argv_1027 (argv_1892);
				fprintf (stderr, "encipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "encipher...[SUCCESS]\r\n");
			}
		}
		private_key.argv_1127 (argv_1773);
		argv_1773.argv_3768 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3598		
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
// @@ This function permits to ensure that the argv_1022 argv_2785
// @@ permits to decipher using the RSA private argv_2007.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3598 () {
	argv_794 argv_1773;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_3379 argv_1892 = argv_1773.argv_2104 (libname.c_str());
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_1022 argv_3275;
		argv_3275.init (&argv_1773);
		argv_1025	private_key (argv_1773);

		fprintf (stderr, "loading private argv_2007 from argv_1314...\r\n");
		argv_1892 = argv_3275.argv_2103 ("C:\\rsa_cle_privee.txt", "FEA02C3F000156EF", private_key);
		if (argv_1892 != argv_1747) {
			string serror = argv_1027 (argv_1892);
			fprintf (stderr, "+++ ERROR: failed to argv_2094 private argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (stderr, "private argv_2007...[LOADED FROM FILE]\r\n");
			string source_file = "C:\\new_engine\\SRC\\argv_3275\\Release\\a_ciphered.txt";
			string argv_1124   = "C:\\new_engine\\SRC\\argv_3275\\Release\\a_deciphered.txt";
			fprintf (stderr, "deciphering argv_1314 : %s -> %s\r\n", source_file.c_str(), argv_1124.c_str());
			argv_1892 = argv_3275.argv_1091 (source_file.c_str(), argv_1124.c_str(), private_key);
			fprintf (stderr, "decipher...[DONE]\r\n");
			if (argv_1892 != argv_1747) {
				string serror = argv_1027 (argv_1892);
				fprintf (stderr, "decipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "decipher...[SUCCESS]\r\n");
			}
		}
		private_key.argv_1127 (argv_1773);
		argv_1773.argv_3768 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3599		
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
// @@ This function permits to ensure that the argv_1022 argv_2785
// @@ permits to decipher using the RSA public argv_2007.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3599 (argv_773 _gmp_dll, argv_773 _symmetric_key, argv_773 _pubkey_file, argv_773 _src_file, argv_773 _dest_file) {
	argv_794 argv_1773;
	argv_3379 argv_1892 = argv_1773.argv_2104 (_gmp_dll);
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_1022 argv_3275;
		argv_3275.init (&argv_1773);
		argv_1026		argv_3188 (argv_1773);

		argv_1892 = argv_3275.argv_2103 (_pubkey_file, _symmetric_key, argv_3188);
		if (argv_1892 != argv_1747) {
			string serror = argv_1027 (argv_1892);
			fprintf (stderr, "+++ ERROR: failed to argv_2094 public argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (stderr, "public argv_2007...[LOADED FROM FILE]\r\n");
			fprintf (stderr, "deciphering argv_1314 : %s -> %s\r\n", _src_file, _dest_file);
			argv_1892 = argv_3275.argv_1091 (_src_file, _dest_file, argv_3188);
			fprintf (stderr, "decipher...[DONE]\r\n");
			if (argv_1892 != argv_1747) {
				string serror = argv_1027 (argv_1892);
				fprintf (stderr, "decipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "decipher...[SUCCESS]\r\n");
			}
		}
		argv_3188.argv_1127 (argv_1773);
		argv_1773.argv_3768 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3626		
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
// @@ This function permits to ensure that the argv_1022 argv_2785
// @@ permits to encipher using the RSA public argv_2007 and to
// @@ decipher using the RSA private argv_2007.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3626 () {
	cerr << "----- encipher using public argv_2007 ----" << endl;
	argv_3602 ();

	cerr << "----- decipher using private argv_2007 ----" << endl;
	argv_3598 ();

	if (argv_1367 ("C:\\new_engine\\SRC\\argv_3275\\Release\\a.txt", "C:\\new_engine\\SRC\\argv_3275\\Release\\a_deciphered.txt") == false) {
		cerr << "+++ ERROR: files are different !" << endl;
	}
	else {
		cerr << "argv_1314 comparison...[OK]" << endl;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3625		
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
// @@ This function permits to ensure that the argv_1022 argv_2785
// @@ permits to encipher using the RSA private argv_2007 and to
// @@ decipher using the RSA public argv_2007.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3625 () {
	string src_filename			= "C:\\new_engine\\SRC\\argv_3275\\Release\\a.txt";
	string ciphered_filename	= "C:\\new_engine\\SRC\\argv_3275\\Release\\a_ciphered.txt"; 
	string deciphered_filename	= "C:\\new_engine\\SRC\\argv_3275\\Release\\a_deciphered.txt"; 
	string private_keyfile		= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_priv_key.txt";
	string public_keyfile		= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_pub_key.txt";
	string symmetric_key		= "FEA02C3F000156EF";
	string gmp_libname			= "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";

	cerr << "----- encipher using private argv_2007 ----" << endl;
	argv_3601 (gmp_libname.c_str(), symmetric_key.c_str(), private_keyfile.c_str(), src_filename.c_str(), ciphered_filename.c_str());

	cerr << "----- decipher using public argv_2007 ----" << endl;
	argv_3599 (gmp_libname.c_str(), symmetric_key.c_str(), public_keyfile.c_str(), ciphered_filename.c_str(), deciphered_filename.c_str());

	if (argv_1367 (src_filename.c_str(), deciphered_filename.c_str()) == false) {
		cerr << "+++ ERROR: files are different !" << endl;
	}
	else {
		cerr << "argv_1314 comparison...[OK]" << endl;
	}
}

#if defined (__RSA_MMAP_TEST__)
	bool argv_3621 (argv_773 _private_key_file, argv_773 _symetric_key, argv_773 _source, argv_773 _dest) {
		bool bret = true;
		argv_794 argv_1773;
		string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
		argv_3379 argv_1892 = argv_1773.argv_2104 (libname.c_str());
		if (argv_1892 != argv_1747) {
			bret = false;
			cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
		}
		else {
			argv_1022 argv_3275;
			argv_3275.init (&argv_1773);
			argv_1025	private_key (argv_1773);

			fprintf (stderr, "loading private argv_2007 from argv_1314...\r\n");
			argv_1892 = argv_3275.argv_2103 (_private_key_file, _symetric_key, private_key);
			if (argv_1892 != argv_1747) {
				bret = false;
				string serror = argv_1027 (argv_1892);
				fprintf (stderr, "+++ ERROR: failed to argv_2094 private argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "private argv_2007...[LOADED FROM FILE]\r\n");
				fprintf (stderr, "enciphering argv_1314 : %s -> %s\r\n", _source, _dest);

				argv_789 mapper_src;
				argv_789 mapper_dest;

				argv_3715 * src_ptr = argv_2766;
				argv_3717   src_size = 0;
				argv_3715 * dest_ptr = argv_2766;
				argv_3717   dest_size = 0;

				// mmap the source argv_1314
				bool bret2 = mapper_src.argv_2346 (_source, argv_2348, src_ptr, src_size);
				if (bret2 == false) {
					bret = false;
					cerr << "+++ ERROR: failed to mmap source argv_1314 !" << endl;
				}
				else {
					cerr << "source argv_1314 mmapped" << endl;
					// compute the space needed for the destination argv_1314
					argv_1892 = argv_3275.argv_971 (private_key.n, src_size, true, dest_size);
					if (argv_1892 != argv_1747) {
						bret = false;
						cerr << "+++ ERROR: 'argv_971' failed !" << endl;
					}
					else {
						cerr << "destination argv_1314 size will be : " << dest_size << endl;
						// mmap the destination argv_1314
						bret2 = mapper_dest.argv_2346 (_dest, argv_2349, dest_ptr, dest_size);
						if (bret2 == false) {
							bret = false;
							cerr << "+++ ERROR: failed to mmap destination argv_1314 !" << endl;

							argv_3717 argv_1239, argv_1247;
							mapper_dest.argv_1659 (argv_1239, argv_1247);
							cerr << "argv_1239=" << argv_1239 << ", argv_1247=" << argv_1247 << endl;
						}
						else {
							cerr << "destination argv_1314 mmapped" << endl;
							argv_3717 actual_dest_size = 201274;
							argv_1892 = argv_3275.argv_1225 (src_ptr, src_size, dest_ptr, dest_size, actual_dest_size, private_key.d, private_key.n);
							fprintf (stderr, "encipher...[DONE]\r\n");
							if (argv_1892 != argv_1747) {
								bret = false;
								string serror = argv_1027 (argv_1892);
								fprintf (stderr, "encipher...[FAILED - %s]\r\n", serror.c_str());
							}
							else {
								fprintf (stderr, "encipher...[SUCCESS]\r\n");
								fprintf (stderr, "actual_dest_size = %u\n", actual_dest_size);
							}
							mapper_dest.argv_873 ();
						}
						mapper_src.argv_873 ();
					}
				}
			}
			private_key.argv_1127 (argv_1773);
			argv_1773.argv_3768 ();
		}
		return (bret);
	}
#endif // #if defined (__RSA_MMAP_TEST__)


#if defined (__RSA_MMAP_TEST__)
	bool argv_3620 (argv_773 _public_key_file, argv_773 _symetric_key, argv_773 _source, argv_773 _dest) {
		bool bret = true;
		argv_794 argv_1773;
		string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
		argv_3379 argv_1892 = argv_1773.argv_2104 (libname.c_str());
		if (argv_1892 != argv_1747) {
			cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
			bret = false;
		}
		else {
			argv_1022 argv_3275;
			argv_3275.init (&argv_1773);
			argv_1026	argv_3188 (argv_1773);

			fprintf (stderr, "loading public argv_2007 from argv_1314...\r\n");
			argv_1892 = argv_3275.argv_2103 (_public_key_file, _symetric_key, argv_3188);
			if (argv_1892 != argv_1747) {
				bret = false;
				string serror = argv_1027 (argv_1892);
				fprintf (stderr, "+++ ERROR: failed to argv_2094 private argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "public argv_2007...[LOADED FROM FILE]\r\n");
				fprintf (stderr, "enciphering argv_1314 : %s -> %s\r\n", _source, _dest);

				argv_789 mapper_src;
				argv_789 mapper_dest;

				argv_3715 * src_ptr = argv_2766;
				argv_3717   src_size = 0;
				argv_3715 * dest_ptr = argv_2766;
				argv_3717   dest_size = 0;

				// mmap the source argv_1314
				bool bret2 = mapper_src.argv_2346 (_source, argv_2348, src_ptr, src_size);
				if (bret2 == false) {
					bret = false;
					cerr << "+++ ERROR: failed to mmap source argv_1314 !" << endl;
				}
				else {
					cerr << "source argv_1314 mmapped" << endl;
					// compute the space needed for the destination argv_1314
					argv_1892 = argv_3275.argv_971 (argv_3188.n, src_size, false, dest_size);
					if (argv_1892 != argv_1747) {
						bret = false;
						cerr << "+++ ERROR: 'argv_971' failed !" << endl;
					}
					else {
						cerr << "destination argv_1314 size will be : " << dest_size << endl;
						// mmap the destination argv_1314
						bret2 = mapper_dest.argv_2346 (_dest, argv_2349, dest_ptr, dest_size);
						if (bret2 == false) {
							bret = false;
							cerr << "+++ ERROR: failed to mmap destination argv_1314 !" << endl;
						}
						else {
							cerr << "destination argv_1314 mmapped" << endl;
							argv_3717 actual_dest_size = 201274;
							argv_1892 = argv_3275.argv_1089 (src_ptr, src_size, dest_ptr, dest_size, actual_dest_size, argv_3188.e, argv_3188.n);
							fprintf (stderr, "decipher...[DONE]\r\n");
							if (argv_1892 != argv_1747) {
								bret = false;
								string serror = argv_1027 (argv_1892);
								fprintf (stderr, "decipher...[FAILED - %s]\r\n", serror.c_str());
							}
							else {
								fprintf (stderr, "encipher...[SUCCESS]\r\n");
								fprintf (stderr, "actual_dest_size = %u\n", actual_dest_size);
							}
							mapper_dest.argv_873 ();
						}
					}
					mapper_src.argv_873 ();
				}
			}
			argv_3188.argv_1127 (argv_1773);
			argv_1773.argv_3768 ();
		}
		return (bret);
	}
#endif // #if defined (__RSA_MMAP_TEST__)


#if defined (__RSA_MMAP_TEST__)
	void argv_3622 () {
		string private_keyfile	= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_priv_key.txt";
		string public_keyfile	= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_pub_key.txt";
		string plain_file		= "C:\\new_engine\\SRC\\argv_3275\\Release\\a.txt";
		string ciphered_file	= "C:\\new_engine\\SRC\\argv_3275\\Release\\a_ciphered.txt";
		string deciphered_file	= "C:\\new_engine\\SRC\\argv_3275\\Release\\a_deciphered.txt";
		string symetric_key		= "FEA02C3F000156EF";

		cerr << "------------- ENCIPHER -----------------" << endl;
		bool bret = argv_3621 (private_keyfile.c_str(), symetric_key.c_str(), plain_file.c_str(), ciphered_file.c_str());

		if (bret == true) {
			cerr << "------------- DECIPHER -----------------" << endl;
			argv_3620 (public_keyfile.c_str(), symetric_key.c_str(), ciphered_file.c_str(), deciphered_file.c_str());
		}
	}
#endif // #if defined (__RSA_MMAP_TEST__)

class argv_1024
{
private:
	map<string, bool>	argv_2384;
	map<string, bool>::iterator	argv_2344;

public:
	bool	argv_1905;
	bool	argv_1900;
	bool	argv_1899;
	bool	argv_1917;
	string	argv_3424;
	string	argv_1124;
	string	argv_3185;
	string	argv_3125;
	string	argv_1120;
	argv_3717	argv_2013;
	string	argv_2014;

	argv_1024 () {
		argv_2013					= 0;
		argv_1905				= false;
		argv_1900				= false;
		argv_1899				= false;
		argv_1917				= false;

		argv_2384["-genrsa"]		= true;
		argv_2384["-argv_2013"]		= true;
		argv_2384["-argv_1120"]		= true;
		argv_2384["-argv_3185"]	= true;
		argv_2384["-argv_3125"]	= true;
		argv_2384["-encipher"]		= true;
		argv_2384["-decipher"]		= true;
		argv_2384["-dest"]			= true;
		argv_2384["-verbose"]		= true;
	}

	void argv_1130 () {
		if (argv_1905 == true) {
			cerr << "genrsa : true" << endl;
		}
		else {
			cerr << "genrsa : false" << endl;
		}
		if (argv_1900 == true) {
			cerr << "encipher : true" << endl;
		}
		else {
			cerr << "encipher : false" << endl;
		}
		if (argv_1899 == true) {
			cerr << "decipher : true" << endl;
		}
		else {
			cerr << "decipher : false" << endl;
		}
		if (argv_1917 == true) {
			cerr << "verbose : true" << endl;
		}
		else {
			cerr << "verbose : false" << endl;
		}
		cerr << "source argv_1314 : "	<< argv_3424		<< endl;
		cerr << "argv_1124 : "		<< argv_1124	<< endl;
		cerr << "argv_3185 : "	<< argv_3185	<< endl;
		cerr << "argv_3125 : "	<< argv_3125	<< endl;
		cerr << "argv_1120 : "		<< argv_1120		<< endl;
		cerr << "argv_2013 : "		<< argv_2013		<< endl;
		cerr << "argv_2014 : "	<< argv_2014	<< endl;
	}

	bool argv_1906 (argv_773 _parameter) {
		bool bret = false;
		argv_2384.find (_parameter);
		argv_2344 = argv_2384.find (_parameter);
		if (argv_2344 != argv_2384.end()) {
			bret = true;
		}	
		return (bret);
	}

	void argv_3287 (argv_773 _var, argv_773 _val) {
		if (     strcmp (_var, "-genrsa") == 0) {
			argv_1905 = true;	
		}
		else if (strcmp (_var, "-argv_2013") == 0) {
			argv_2014 = _val;	
			argv_2013		= atoi (_val);
		}
		else if (strcmp (_var, "-argv_1120") == 0) {
			argv_1120 = _val;	
		}
		else if (strcmp (_var, "-argv_3185") == 0) {
			argv_3185 = _val;	
		}
		else if (strcmp (_var, "-argv_3125") == 0) {
			argv_3125 = _val;	
		}
		else if (strcmp (_var, "-encipher") == 0) {
			argv_1900 = true;	
			argv_3424	= _val;
		}
		else if (strcmp (_var, "-decipher") == 0) {
			argv_1899 = true;	
			argv_3424	= _val;
		}
		else if (strcmp (_var, "-dest") == 0) {
			argv_1124 = _val;
		}
		else if (strcmp (_var, "-verbose") == 0) {
			argv_1917 = true;
		}
	}
};

void argv_1153 () {
	cerr << "usage:" << endl; 
	cerr << "./a.out -genrsa -argv_2013 <size_in_bit> -argv_1120 <argv_2007> -argv_3185 <argv_1364> -argv_3125 <argv_1364> {-verbose}" << endl;
	cerr << "./a.out -encipher <source_filename> -dest <argv_1125> -argv_3185 <argv_1364> -argv_1120 <argv_2007> {-verbose}" << endl;
	cerr << "./a.out -encipher <source_filename> -dest <argv_1125> -argv_3125 <argv_1364> -argv_1120 <argv_2007> {-verbose}" << endl;
	cerr << endl;
	cerr << "./a.out -decipher <source_filename> -dest <argv_1125> -argv_3185 <argv_1364> -argv_1120 <argv_2007> {-verbose}" << endl;
	cerr << "./a.out -decipher <source_filename> -dest <argv_1125> -argv_3125 <argv_1364> -argv_1120 <argv_2007> {-verbose}" << endl;
}

argv_3379 argv_809 (argv_1024& _param) {
	argv_3379 argv_1892 = 0;
	argv_3379 nb_opa = 0;
	if (_param.argv_1905 == true) {
		nb_opa++;	
	}
	if (_param.argv_1900 == true) {
		nb_opa++;	
	}
	if (_param.argv_1899 == true) {
		nb_opa++;	
	}
	if (nb_opa == 0) {
		cerr << "+++ ERROR: please choose an operation : -genrsa, -encipher, -decipher" << endl;
		argv_1892 = 1;
	}
	else if (nb_opa > 1) {
		argv_1892 = 2;
		cerr << "+++ ERROR: multiple operations not allowed !!" << endl;
	}
	else { // user chose only argv_2806 operation 
		if (_param.argv_1120 == "") {
			cerr << "+++ ERROR: missing parameter : -argv_1120" << endl;
			argv_1892 = 3;
		}
		else if (_param.argv_1120.size() != 16) {
			cerr << "+++ ERROR: invalid parameter argv_3807 : -argv_1120 (length must be 16) !!" << endl;
			argv_1892 = 3;
		}

		if (argv_1892 == 0) {
			if (_param.argv_1905 == true) {
				if (_param.argv_2014 == "") {
					cerr << "+++ ERROR: missing parameter : -argv_2013" << endl;
					argv_1892 = 3;
				}
				else if ((_param.argv_2013 < 128) || (_param.argv_2013 > 8192)) {
					cerr << "+++ ERROR: invalid parameter argv_3807 -argv_2013 must be within range [128..8192]" << endl;
					argv_1892 = 3;
				}
				else if (_param.argv_3185 == "") {
					cerr << "+++ ERROR: missing parameter : -argv_3185" << endl;
					argv_1892 = 3;
				}
				else if (_param.argv_3125 == "") {
					cerr << "+++ ERROR: missing parameter : -argv_3125" << endl;
					argv_1892 = 3;
				}
			}
			else if ((_param.argv_1899 == true) || (_param.argv_1900 == true)) {
				if (_param.argv_3424 == "") {
					cerr << "+++ ERROR: missing parameter : source_filename" << endl;
					argv_1892 = 3;
				}
				else if (_param.argv_1124 == "") {
					cerr << "+++ ERROR: missing parameter : -dest" << endl;
					argv_1892 = 3;
				}
				else if ((_param.argv_3185 == "") && (_param.argv_3125 == "")) {
					cerr << "+++ ERROR: missing parameter : either -argv_3185, or -argv_3125" << endl;
					argv_1892 = 3;
				}
			}
		}
	}
	return (argv_1892);
}

argv_3379 argv_2845 (int _argc, char** _argv, argv_1024& _param) {
	argv_3379 argv_1892 = 0;
	for (argv_3379 i=1 ; i<_argc ; ) {
		// argv_986 param & ensure that the param is known
		if (_param.argv_1906 (_argv[i]) == false) {
			argv_1892 = 1;
			cerr << "+++ ERROR: unknown parameter : '" << _argv[i] << "'" << endl;
			break;
		}

		if ((strcmp(_argv[i], "-genrsa") == 0) || (strcmp(_argv[i], "-verbose") == 0)) {
			_param.argv_3287 (_argv[i], "");
			i += 1;
		}
		else {
			// argv_986 param argv_3807
			if ((i+1) >= _argc) {
				argv_1892 = 2;
				cerr << "+++ ERROR: missing argv_3807 for parameter '" << _argv[i] << "'" << endl; 
				break;
			}

			_param.argv_3287 (_argv[i], _argv[i+1]);
			i += 2;
		}
	}

	if (argv_1892 == 0) {
		argv_1892 = argv_809 (_param);
	}
	return (argv_1892);
}

#if defined (__TEST_RSA_MAIN__)
	int main(int argv_679, char* argv_680[]) {
		argv_3379 argv_1892 = 0;

		// argv_2094 the gmp DLL
		argv_794 argv_1773;
		string libname = "./gmp.dll";
		argv_1892 = argv_1773.argv_2104 (libname.c_str());
		if (argv_1892 != argv_1747) {
			cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
			argv_1892 = 5;
		}
		else {
			cerr << "GMP library argv_2117" << endl;
			argv_1022 argv_3275;
			argv_3275.init (&argv_1773);

			argv_1024 param;
			argv_1892 = argv_2845 (argv_679, argv_680, param);
			if (argv_1892 != 0) {
				argv_1153 ();	
				param.argv_1130 ();
			}
			else { // parameters are OK
				if (param.argv_1917 == true) {
					cerr << "parameters OK" << endl;
				}
				if (param.argv_1905 == true) {
					if (param.argv_1917 == true) {
						cerr << "generating RSA argv_2007 pair (argv_2007 size : " << param.argv_2013 << ")" << endl;
					}
					argv_3617 (param.argv_2013, param.argv_1120.c_str(), param.argv_3185.c_str(), param.argv_3125.c_str());
				}
				else {
					argv_1025 private_key (argv_1773);
					argv_1026	argv_3188 (argv_1773);

					if (param.argv_3185 != "") {
						if (param.argv_1917 == true) {
							cerr << "loading public argv_2007 from argv_1314 : " << param.argv_3185 << endl;
						}
						argv_1892 = argv_3275.argv_2103 (param.argv_3185.c_str(), param.argv_1120.c_str(), argv_3188);
						if (argv_1892 != argv_1747) {
							string serror = argv_1027 (argv_1892);
							fprintf (stderr, "+++ ERROR: failed to argv_2094 public argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
						}
					}
					else if (param.argv_3125 != "") {
						if (param.argv_1917 == true) {
							cerr << "loading private argv_2007 from argv_1314 : " << param.argv_3125 << endl;
						}
						argv_1892 = argv_3275.argv_2103 (param.argv_3125.c_str(), param.argv_1120.c_str(), private_key);
						if (argv_1892 != argv_1747) {
							string serror = argv_1027 (argv_1892);
							fprintf (stderr, "+++ ERROR: failed to argv_2094 private argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
						}
					}

					if (argv_1892 == argv_1747) {
						if (param.argv_1900 == true) {
							if (param.argv_3125 != "") {
								if (param.argv_1917 == true) {
									cerr << "encipher argv_1314     : " << param.argv_3424	<< endl;
									cerr << "to argv_1314           : " << param.argv_1124	<< endl;
									cerr << "using private argv_2007 : " << param.argv_3125 << endl;
								}
								argv_1892 = argv_3275.argv_1227 (param.argv_3424.c_str(), param.argv_1124.c_str(), private_key);
							}
							else if (param.argv_3185 != "") {
								if (param.argv_1917 == true) {
									cerr << "encipher argv_1314     : " << param.argv_3424	<< endl;
									cerr << "to argv_1314           : " << param.argv_1124	<< endl;
									cerr << "using public argv_2007  : " << param.argv_3185 << endl;
								}
								argv_1892 = argv_3275.argv_1227 (param.argv_3424.c_str(), param.argv_1124.c_str(), argv_3188);
							}
						}
						else if (param.argv_1899 == true) {
							if (param.argv_3125 != "") {
								if (param.argv_1917 == true) {
									cerr << "decipher argv_1314     : " << param.argv_3424	<< endl;
									cerr << "to argv_1314           : " << param.argv_1124	<< endl;
									cerr << "using private argv_2007 : " << param.argv_3125 << endl;
								}
								argv_1892 = argv_3275.argv_1091 (param.argv_3424.c_str(), param.argv_1124.c_str(), private_key);
							}
							else if (param.argv_3185 != "") {
								if (param.argv_1917 == true) {
									cerr << "decipher argv_1314     : " << param.argv_3424	<< endl;
									cerr << "to argv_1314           : " << param.argv_1124	<< endl;
									cerr << "using public argv_2007  : " << param.argv_3185 << endl;
								}
								argv_1892 = argv_3275.argv_1091 (param.argv_3424.c_str(), param.argv_1124.c_str(), argv_3188);
							}
						}
					}

					if (argv_1892 == argv_1747) {
						if (param.argv_1917 == true) {
							cerr << "operation success" << endl;
						}
					}
					else {
						string serror = argv_1027 (argv_1892);
						cerr << "operation FAILED ! - errno = " << serror << endl;
					}

					private_key.argv_1127 (argv_1773);
					argv_3188.argv_1127 (argv_1773);
				}
			}
			argv_1773.argv_3768 ();
		}

		if (argv_1892 == argv_1747) { // remap error argv_877
			argv_1892 = 0;
		}
		return (argv_1892);
	}
#endif // #if defined (__TEST_RSA_MAIN__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

