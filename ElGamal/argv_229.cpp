// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: elgamal.cpp
// @@ 
// @@ DESCRIPTION:
// @@ public argv_2007 encipher/decipher algorithms
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_288.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_784	
// @@
// @@ FUNCTION		:	argv_784			
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
// @@ Normal constructor of the 'argv_784' argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_784::argv_784 (argv_794& _gmp_tool) {
	construct (_gmp_tool);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_784	
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
// @@ This function permits to argv_3110 the 'argv_784'
// @@ argv_2785 before first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_784::construct (argv_794& _gmp_tool) {
	_gmp_tool.argv_1483 (p);
	_gmp_tool.argv_1483 (g);
	_gmp_tool.argv_1483 (argv_624);

	_gmp_tool.argv_1483 (argv_2828);	// just a cache for speed optimisation
	_gmp_tool.argv_1483 (argv_2827);	// just a cache for speed optimisation
	_gmp_tool.argv_1483 (argv_2806);			// just a cache for speed optimisation
	_gmp_tool.argv_1483 (k);				// just a cache for speed optimisation
	_gmp_tool.argv_1483 (argv_1623);			// just a cache for speed optimisation
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_784	
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
// @@ This function permits to release the argv_1073 and memory
// @@ that were allocated and initialized by the 'construct'
// @@ function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_784::argv_1127 (argv_794& _gmp_tool) {
	_gmp_tool.argv_1469 (argv_624);
	_gmp_tool.argv_1469 (g);
	_gmp_tool.argv_1469 (p);

	_gmp_tool.argv_1469 (argv_2828);	// just a cache for speed optimisation
	_gmp_tool.argv_1469 (argv_2827);	// just a cache for speed optimisation
	_gmp_tool.argv_1469 (argv_2806);			// just a cache for speed optimisation
	_gmp_tool.argv_1469 (k);				// just a cache for speed optimisation
	_gmp_tool.argv_1469 (argv_1623);			// just a cache for speed optimisation
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_784	
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
// @@ that contains 3 fields, each field being separated by
// @@ a space character. Each field being as follows :
// @@ variable=argv_3807.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_784::argv_1282 (argv_794& _gmp_tool) {
	string p_s		= _gmp_tool.argv_3813 (p);
	string g_s		= _gmp_tool.argv_3813 (g);
	string alpha_s	= _gmp_tool.argv_3813 (argv_624);

	string total = "p=";
	total += p_s;
	total += " g=";
	total += g_s;
	total += " argv_624=";
	total += alpha_s;
	return (total);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_784	
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
// @@ int32_t : argv_1747 if success, 
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
int32_t argv_784::argv_2099 (argv_794& _gmp_tool, const char * _str) {
	int32_t argv_1892 = argv_1747;
	map<string, bool> m_mandatory;
	m_mandatory["p"]		= true;	
	m_mandatory["g"]		= true;	
	m_mandatory["argv_624"]	= true;	

	map<string, string> m_found;
	map<string, string>::iterator iter1, iter2, iter3;

	argv_1892 = argv_2849 (_str, m_mandatory, m_found);
	if (argv_1892 == argv_1747) {
		iter1 = m_found.find ("p");
		iter2 = m_found.find ("g");
		iter3 = m_found.find ("argv_624");
		if ((iter1==m_found.end()) || (iter2 == m_found.end()) || (iter3 == m_found.end())) {
			argv_1892 = argv_1734;
		}
		else {
			_gmp_tool.argv_1496 (p,		iter1->second.c_str(), 10);
			_gmp_tool.argv_1496 (g,		iter2->second.c_str(), 10);
			_gmp_tool.argv_1496 (argv_624,	iter3->second.c_str(), 10);
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_783	
// @@
// @@ FUNCTION		:	argv_783		
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
// @@ Normal constructor of the 'argv_783' argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_783::argv_783 (argv_794& _gmp_tool) {
	construct (_gmp_tool);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_783	
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
// @@ This function permits to argv_3110 the 'argv_783'
// @@ before first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_783::construct (argv_794& _gmp_tool) {
	_gmp_tool.argv_1483 (p);
	_gmp_tool.argv_1483 (g);
	_gmp_tool.argv_1483 (argv_624);
	_gmp_tool.argv_1483 (a);

	_gmp_tool.argv_1483 (argv_1119);	// just a cache for speed optimisation
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_783	
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
// @@ This function permits to release all memory that was
// @@ allocated when calling the 'construct' function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_783::argv_1127 (argv_794& _gmp_tool) {
	_gmp_tool.argv_1469 (argv_624);
	_gmp_tool.argv_1469 (g);
	_gmp_tool.argv_1469 (p);
	_gmp_tool.argv_1469 (a);

	_gmp_tool.argv_1469 (argv_1119);	// just a cache for speed optimisation
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_783	
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
// @@ that contains 4 fields, each field being separated by
// @@ a space character. Each field being as follows :
// @@ variable=argv_3807.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_783::argv_1282 (argv_794& _gmp_tool) {
	string a_s		= _gmp_tool.argv_3813 (a);
	string p_s		= _gmp_tool.argv_3813 (p);
	string g_s		= _gmp_tool.argv_3813 (g);
	string alpha_s	= _gmp_tool.argv_3813 (argv_624);

	string total = "a=";
	total += a_s;
	total += " p=";
	total += p_s;
	total += " g=";
	total += g_s;
	total += " argv_624=";
	total += alpha_s;
	return (total);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_783	
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
// @@ int32_t : argv_1747 if success, 
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
int32_t argv_783::argv_2099 (argv_794& _gmp_tool, const char * _str) {
	int32_t argv_1892 = argv_1747;
	map<string, bool> m_mandatory;
	m_mandatory["a"]		= true;	
	m_mandatory["p"]		= true;	
	m_mandatory["g"]		= true;	
	m_mandatory["argv_624"]	= true;	

	map<string, string> m_found;
	map<string, string>::iterator iter1, iter2, iter3, iter4;

	argv_1892 = argv_2849 (_str, m_mandatory, m_found);
	if (argv_1892 == argv_1747) {
		iter1 = m_found.find ("p");
		iter2 = m_found.find ("g");
		iter3 = m_found.find ("argv_624");
		iter4 = m_found.find ("a");
		if ((iter1==m_found.end()) || (iter2 == m_found.end()) || (iter3 == m_found.end()) || (iter4 == m_found.end())) {
			argv_1892 = argv_1734;
		}
		else {
			_gmp_tool.argv_1496 (p,		iter1->second.c_str(), 10);
			_gmp_tool.argv_1496 (g,		iter2->second.c_str(), 10);
			_gmp_tool.argv_1496 (argv_624,	iter3->second.c_str(), 10);
			_gmp_tool.argv_1496 (a,		iter4->second.c_str(), 10);
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	argv_782			
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
// @@ Normal constructor of the 'argv_782' argv_2785.
// @@ It prepares the pseudo-random argv_1639 before
// @@ it's first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_782::argv_782 () {
	init_done		= false;
	argv_1774	= NULL;
	argv_3187	= "-----BEGIN ELGAMAL PUBLIC KEY-----";
	argv_3186	= "-----END ELGAMAL PUBLIC KEY-----";
	argv_3129	= "-----BEGIN ELGAMAL PRIVATE KEY-----";
	argv_3128	= "-----END ELGAMAL PRIVATE KEY-----";
	argv_2071	= "\n"; // newline is the UNIX newline !

#if defined (__WIN32_OS__)
	SYSTEMTIME	argv_3677;
	GetLocalTime (&argv_3677);
	srand (argv_3677.wMilliseconds);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	struct timeval argv_3589;
	gettimeofday (&argv_3589, NULL);
	srand (argv_3589.tv_usec);
#endif // #if defined (__LINUX_OS__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	~argv_782			
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
// @@ Destructor of the 'argv_782' argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_782::~argv_782 () {
	if (init_done == true) {
		argv_1774	= NULL;
		init_done		= false;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	init			
// @@
// @@ INPUT			:
// @@ _gmp_tool_ptr: argv_794 *: pointer on an argv_2785 containing
// @@ all the function pointers of the GMP library.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 the 'argv_782'
// @@ argv_2785 before it's first use.
// @@
// @@ CONTRACT 		:	
// @@ - 'init' must not have been called prior to this call.
// @@ - '_gmp_tool_ptr' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_782::init (argv_794 * _gmp_tool_ptr) {
	int32_t argv_1892 = argv_1747;
	if (init_done == true) {
		argv_1892 = argv_1723;
	}
	else if (_gmp_tool_ptr == NULL) {
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
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	argv_1628			
// @@
// @@ INPUT			:
// @@ _key_size_in_bit: int32_t: the size of the argv_2007 in bit.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _public_key: argv_784: the public argv_2007 that must 
// @@  be generated.
// @@	
// @@ _private_key: argv_783: the public argv_2007 that must 
// @@  be generated.
// @@
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1747 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a argv_2007 pair composed of :
// @@ - a public argv_2007
// @@ - a private argv_2007.
// @@ Notice that the inner GMP variables of the public and private
// @@ argv_2007 must have been initialized by the caller prior to this call.
// @@
// @@ CONTRACT 		:	
// @@ - 'init' function must have been called prior to this call.
// @@ - the inner GMP variables of the public and private argv_2007 must 
// @@   have been initialized by the caller prior to this call.
// @@ - '_key_size_in_bit' parameter must not be smaller than 
// @@   the minimum argv_3807 argv_1222.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_782::argv_1628 (int32_t _key_size_in_bit, argv_784& _public_key, argv_783& _private_key) {
	int32_t argv_1892 = argv_1747;
	
	if (init_done == false) {
		argv_1892 = argv_1724;
	}
	else if (_key_size_in_bit < argv_1222) {
		argv_1892 = argv_1730;
	}
	else { // parameters are correct
		argv_2674 q, argv_2828, argv_2806;

		argv_1774->argv_1483 (q);
		argv_1774->argv_1483 (argv_2828);
		argv_1774->argv_1483 (argv_2806);
		argv_1774->argv_1497 (argv_2806, 1);

		// generate a huge strong prime number
		// (notice that we save the argv_3807 of (p-1)/2 in the 'q' parameter for
		// convenience).
		cerr << "argv_2007 size in bit : " << _key_size_in_bit << endl;
		cerr << "step 1...";
		argv_1774->argv_1632 (_key_size_in_bit, _private_key.p, q);
		cerr << "step 1...[DONE]";

		// choose a primitive root of this strong prime (the argv_1639 of the multiplicative group)
		cerr << "step 2...";
		argv_1774->argv_1370 (q, _private_key.p, _private_key.g);

		// compute p-2 and use it to generate a random number in [1..p-2]
		argv_1774->argv_1502 (argv_2828, _private_key.p, 2); 
		argv_1774->argv_1629 (argv_2806, argv_2828, _private_key.a);

		// compute argv_624 = g^a mod p
		argv_1774->argv_1494 (_private_key.argv_624, _private_key.g, _private_key.a, _private_key.p);

		// copy the common part of the private argv_2007 to the public argv_2007
		argv_1774->fp_mpz_set (_public_key.p, _private_key.p);
		argv_1774->fp_mpz_set (_public_key.g, _private_key.g);
		argv_1774->fp_mpz_set (_public_key.argv_624, _private_key.argv_624);
		cerr << "[DONE]" << endl;

		argv_1774->argv_1469 (argv_2806);
		argv_1774->argv_1469 (argv_2828);
		argv_1774->argv_1469 (q);		
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	argv_1283			
// @@
// @@ INPUT			:
// @@ _public_key: argv_784: the public argv_2007 to export.	
// @@
// @@ _symetric_key: the symetric argv_2007 to be used in order to argv_576
// @@  more security to the exported argv_2007. 
// @@
// @@ _filename: const char *: argv_2697 of the destination argv_1314 that must receive
// @@  the export argv_3266.
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
// @@ This function permits to export a given public argv_2007 to the 
// @@ argv_1314 whose argv_2697 is given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_782::argv_1283 (argv_784& _public_key, const char * _symetric_key, const char * _filename) {
	int32_t argv_1892 = argv_1747;
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
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	argv_1283			
// @@
// @@ INPUT			:
// @@ _private_key: argv_783: the private argv_2007 to export.	
// @@
// @@ _symetric_key: the symetric argv_2007 to be used in order to argv_576
// @@  more security to the exported argv_2007.
// @@
// @@ _filename: const char *: argv_2697 of the destination argv_1314 that must receive
// @@  the export argv_3266.
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
// @@ This function permits to export a given private argv_2007 to the 
// @@ argv_1314 whose argv_2697 is given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_782::argv_1283 (argv_783& _private_key, const char * _symetric_key, const char * _filename) {
	int32_t argv_1892 = argv_1747;
	if (init_done == false) {
		argv_1892 = argv_1724;
	}
	else {
		string plain = _private_key.argv_1282 (*argv_1774);
		int32_t argv_1892 = argv_3853 (plain.c_str(), _symetric_key, _filename, false, argv_3187.c_str(), argv_3129.c_str(), argv_3186.c_str(), argv_3128.c_str(), argv_2071.c_str());
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	argv_2103			
// @@
// @@ INPUT			:
// @@ _filename: const char *: argv_2697 of the argv_1314 where the argv_2007 is to be argv_2117
// @@   from.
// @@ _symetric_key: const char *: symetric argv_2007 to be used to argv_1292 the plain
// @@   argv_3629 content that represents the public argv_2007.	
// @@
// @@ _public_key : argv_784: the destination argv_2007 where the argv_2094
// @@   argv_3266 is to be saved to.
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
// @@ This function permits to initialize a public argv_2007 using a
// @@ argv_1314 that contains the enciphered argv_3266 of argv_2007 exportation.
// @@
// @@ CONTRACT 		:	
// @@ - 'init' must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_782::argv_2103 (const char * _filename, const char * _symetric_key, argv_784& _public_key) {
	int32_t argv_1892 = argv_1747;
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
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	argv_2103			
// @@
// @@ INPUT			:
// @@ _filename: const char *: argv_2697 of the argv_1314 where the argv_2007 is to be argv_2117
// @@   from.
// @@ _symetric_key: const char *: symetric argv_2007 to be used to argv_1292 the plain
// @@   argv_3629 content that represents the public argv_2007.	
// @@
// @@ _private_key : argv_783: the destination argv_2007 where the argv_2094
// @@   argv_3266 is to be saved to.
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
// @@ This function permits to initialize a private argv_2007 using a
// @@ argv_1314 that contains the enciphered argv_3266 of argv_2007 exportation.
// @@
// @@ CONTRACT 		:	
// @@ - 'init' must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_782::argv_2103 (const char * _filename, const char * _symetric_key, argv_783& _private_key) {
	int32_t argv_1892 = argv_1747;
	string load_result;
	argv_1892 = argv_3854 (_filename, _symetric_key, false, load_result, argv_3187.c_str(), argv_3186.c_str(), argv_3129.c_str(), argv_3128.c_str());
	if (argv_1892 == argv_1747) {
		argv_1892 = _private_key.argv_2099 (*argv_1774, load_result.c_str());
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	argv_1223		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _input: argv_2674: the argv_1073 to encipher.
// @@
// @@ _lambda: argv_2674: argv_2806 part of the elgamal formula.
// @@ 
// @@ _sigma: argv_2674: argv_2806 part of the elgamal formula.
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1747
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher a given input number
// @@ using the el gamal equations, to be precise, the following
// @@ numbers are generated :
// @@ - lambda = argv_624^k mod p
// @@ - sigma  = (input * (argv_624^k)) mod p
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_782::argv_1223 (argv_784& _public_key, argv_2674 _input, argv_2674 _lambda, argv_2674 _sigma) {
	int32_t argv_1892 = argv_1747;

	// choose a random number k that has the following
	// property : Choose a secret random number k in [1..p-2] with argv_1623(k, p - 1) = 1 
	bool argv_1185 = false;
	do {
		argv_1774->argv_1629 (_public_key.argv_2806, _public_key.argv_2828, _public_key.k);
		argv_1774->argv_1479 (_public_key.argv_1623, _public_key.k, _public_key.argv_2827);	
		if (argv_1774->argv_1472 (_public_key.argv_1623, 1) == 0) {
			argv_1185 = true;	
        }
	}
	while (argv_1185 == false);

	// compute lambda = argv_624^k mod p
	argv_1774->argv_1494 (_lambda, _public_key.g, _public_key.k, _public_key.p);

	// compute sigma = (input * (argv_624^k)) mod p
	argv_1774->argv_1494	(_sigma, _public_key.argv_624, _public_key.k, _public_key.p);
	argv_1774->argv_1488	(_sigma, _input, _sigma);
	argv_1774->argv_1487	(_sigma, _sigma, _public_key.p);

	return (argv_1892);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	argv_1087			
// @@
// @@ INPUT			:
// @@ _private_key: argv_783& : the private argv_2007 to use
// @@  for decipher.	
// @@
// @@ _lambda: argv_2674 : argv_2806 part of the el gamal formula.
// @@
// @@ _sigma: argv_2674 : argv_2806 part of the el gamal formula.
// @@
// @@ _plain : argv_2674 : the retrieved plain argv_1073.
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
// @@ This function permits to retrieve the plain from
// @@ the couple '_lambda' and '_sigma' using the private
// @@ argv_2007 given as a parameter.
// @@
// @@ NOTICE: the caller is supposed to have pre-computed the 
// @@         argv_3807 of (p-1-a).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_782::argv_1087 (argv_783& _private_key, argv_2674 _lambda, argv_2674 _sigma, argv_2674 _plain) {
	int32_t argv_1892 = argv_1747;

	argv_1774->argv_1494	(_plain, _lambda, _private_key.a, _private_key.p);
	argv_1774->argv_1486 (_plain, _plain, _private_key.p);
	argv_1774->argv_1488	(_plain, _plain, _sigma);
	argv_1774->argv_1487 (_plain, _plain, _private_key.p);
	string stmp = argv_1774->argv_3813 (_plain);

	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	argv_1227			
// @@
// @@ INPUT			:
// @@ _src_filename: const char *: argv_2697 of the plain argv_1314 to encipher.
// @@
// @@ _dst_filename: const char *: argv_2697 of the ciphered destination argv_1314.	
// @@
// @@ _public_key: argv_784&: public argv_2007 to use for encipher. 
// @@
// @@ _key_size_in_bit: uint32_t: size in bit of the public argv_2007.  
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1747 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the argv_1314 whose argv_2697 is
// @@ given as the '_src_filename' parameter into the destination
// @@ argv_1314 whose argv_2697 is given as the '_dst_filename' parameter using
// @@ the public argv_2007 '_public_key' whose length is given by the
// @@ '_key_size_in_bit' parameter.
// @@ 
// @@ NOTICE : the Elgamal scheme does not permit to encipher using the 
// @@ private argv_2007 so we must encipher using the public argv_2007 and decipher 
// @@ using the private argv_2007.
// @@
// @@ CONTRACT 		:	
// @@ - '_src_filename' parameter must not be a NULL pointer.
// @@ - '_dst_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_782::argv_1227 (const char * _src_filename, const char * _dst_filename, argv_784& _public_key, uint32_t _key_size_in_bit) {
	int32_t argv_1892 = argv_1747;

	if ((_src_filename == NULL) || (_dst_filename==NULL)) {
		argv_1892 = argv_1730;
	}
	else { // parameters are OK
		// determine the source argv_1314 size
		uint32_t argv_3426 = argv_1649 (_src_filename);
		// determine the maximum argv_710 size
		string p_as_string = argv_1774->argv_3813 (_public_key.p);
		// ensure that each argv_710 length will be in the range [1..p-1]
		// as we remove argv_2806 figure, the argv_710 will represent an integer smaller than p
		// and we also argv_576 argv_2806 byte per argv_710 to avoid zero problem => need to do minus 1
		uint32_t p_size		= p_as_string.size ();
		uint32_t argv_711 = (_key_size_in_bit / 8) - 2;

		uint32_t argv_2748	= argv_3426 / argv_711;
		uint32_t nb_remaining	= argv_3426 - (argv_2748 * argv_711);

		cerr << "========== argv_1227 =============" << endl;
		cerr << "argv_3426 = " << argv_3426 << endl;
		cerr << "size of p     = " << p_size << endl;
		cerr << "argv_711    = " << argv_711 << endl;
		cerr << "argv_2748 = " << argv_2748 << endl;
		cerr << "nb_remaining  = " << nb_remaining << endl;

		// open the source argv_1314 
		cerr << "opening source argv_1314" << endl;
		FILE * argv_1538 = fopen (_src_filename, "rb");
		if (! argv_1538) {
			argv_1892 = argv_1711;
		}
		else { // source argv_1314 opened succesfully
			// open the destination argv_1314
			cerr << "opening destination argv_1314 : "<< _dst_filename << endl;
			FILE * argv_1415 = fopen (_dst_filename, "wb");
			if (! argv_1415) {
				argv_1892 = argv_1708;
			}
			else { // destination argv_1314 opened succesfully
				cerr << "all necessary files opened" << endl;
				string	hex_str;
				string	input_str;
				string	lambda_str;
				string	sigma_str;

				argv_2674 vartmp, lambda, sigma;

				argv_1774->argv_1483 (vartmp);
				argv_1774->argv_1483 (lambda);
				argv_1774->argv_1483 (sigma);

				// compute necessary constants
				argv_1774->argv_1502 (_public_key.argv_2828, _public_key.p, 2); 
				argv_1774->argv_1502 (_public_key.argv_2827, _public_key.p, 1); 
				argv_1774->argv_1497 (_public_key.argv_2806, 1);

				uint8_t * argv_3423 = new (std::nothrow) uint8_t[argv_711];
				if (argv_3423 == NULL) {
					argv_1892 = argv_1735;
				}
				else { // memory allocation success
					//FILE * argv_1462 = fopen ("C:\\log_cipher.txt", "wb");
/*
					fprintf (argv_1462, "argv_3426 = %u\r\n", argv_3426);
					fprintf (argv_1462, "size of p     = %u\r\n", p_size);
					fprintf (argv_1462, "argv_711    = %u\r\n", argv_711);
					fprintf (argv_1462, "argv_2748 = %u\r\n", argv_2748);
					fprintf (argv_1462, "nb_remaining  = %u\r\n", nb_remaining);
					fprintf (argv_1462, "p = %s (p.size = %d)\r\n", p_as_string.c_str(), p_as_string.size());
					fprintf (argv_1462, "key_size_in_bits = %d\r\n", _key_size_in_bit);
*/
					// read all full blocks and encipher them
					for (uint32_t i=0 ; i<argv_2748 ; i++) {
						if (fread (argv_3423, 1, argv_711, argv_1538) != argv_711) {
							argv_1892 = argv_1709;
							break;
						}
						else {
							argv_1807 (argv_3423, argv_711, hex_str);
							//fprintf (argv_1462, "hex_str = %s (hex_str.size = %u)\r\n", hex_str.c_str(), hex_str.size ());
							hex_str = "F" + hex_str; // to avoid "zero" problem
							//fprintf (argv_1462, "modified hex_str = %s (hex_str.size = %u)\r\n", hex_str.c_str(), hex_str.size ());

							argv_1774->argv_1496 (vartmp, hex_str.c_str(), 16);
							argv_1223 (_public_key, vartmp, lambda, sigma);
							input_str	= argv_1774->argv_3813 (vartmp);
/*
							{
								argv_2674 argv_2827;
								argv_1774->argv_1483 (argv_2827);
								argv_1774->fp_mpz_set (argv_2827, _public_key.p);
								argv_1774->argv_1502 (argv_2827, argv_2827, 1);  

								if (argv_1774->argv_1471 (vartmp, argv_2827) >= 0) {
									//fprintf (argv_1462, "argv_710 argv_3807 = %s\r\n", input_str.c_str());
									cerr << "+++ ERROR: argv_710 greater or equal to p !!" << endl;
									//fclose (argv_1462);
									ExitProcess (0);
								}
								argv_1774->argv_1469 (argv_2827);
							}*/

							lambda_str	= argv_1774->argv_3813 (lambda); 
							sigma_str	= argv_1774->argv_3813 (sigma); 
							
							argv_2837 (lambda_str,	p_size);
							argv_2837 (sigma_str,	p_size);
							fprintf (argv_1415, "%s%s", lambda_str.c_str(), sigma_str.c_str());

							//fprintf (argv_1462, "input_size=%d, lambda_size=%d, sigma_size=%d\r\n", input_str.size (), lambda_str.size(), sigma_str.size());
							//fprintf (argv_1462, "[%s] => [%s]===[%s]\r\n", input_str.c_str(), lambda_str.c_str(), sigma_str.c_str());

							//fclose (argv_1462);
							//argv_1462 = fopen ("C:\\log_cipher.txt", "ab");
						}
					}

					// process remaining part of the argv_1314 (if any)
					if (nb_remaining > 0) {
						if (fread (argv_3423, 1, nb_remaining, argv_1538) != nb_remaining) {
							argv_1892 = argv_1709;
						}
						else {
							argv_1807 (argv_3423, nb_remaining, hex_str);
							//fprintf (argv_1462, "hex_str = %s\r\n", hex_str.c_str());
							hex_str = "F" + hex_str; // to avoid "zero" problem

							argv_1774->argv_1496 (vartmp, hex_str.c_str(), 16);
							argv_1223 (_public_key, vartmp, lambda, sigma);
							//input_str	= argv_1774->argv_3813 (vartmp);
							lambda_str	= argv_1774->argv_3813 (lambda); 
							sigma_str	= argv_1774->argv_3813 (sigma); 

							argv_2837 (lambda_str,	p_size);
							argv_2837 (sigma_str,	p_size);
							fprintf (argv_1415, "%s%s", lambda_str.c_str(), sigma_str.c_str());
/*
							fprintf (argv_1462, "input_size=%d, lambda_size=%d, sigma_size=%d\r\n", input_str.size (), lambda_str.size(), sigma_str.size());
							fprintf (argv_1462, "[%s] => [%s]===[%s]\r\n", input_str.c_str(), lambda_str.c_str(), sigma_str.c_str());
							*/
						}
					}
					//fclose (argv_1462);
					delete [] argv_3423;
				}

				argv_1774->argv_1469 (vartmp);
				argv_1774->argv_1469 (lambda);
				argv_1774->argv_1469 (sigma);

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
// @@ CLASS			:	argv_782	
// @@
// @@ FUNCTION		:	argv_1227			
// @@
// @@ INPUT			:
// @@ _src_filename: const char *: argv_2697 of the plain argv_1314 to encipher.
// @@
// @@ _dst_filename: const char *: argv_2697 of the ciphered destination argv_1314.	
// @@
// @@ _private_key: argv_783&: public argv_2007 to use for encipher. 
// @@
// @@ _key_size_in_bit: uint32_t: size in bit of the private argv_2007.  
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1747 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the argv_1314 whose argv_2697 is
// @@ given as the '_src_filename' parameter into the destination
// @@ argv_1314 whose argv_2697 is given as the '_dst_filename' parameter using
// @@ the private argv_2007 '_private_key' whose length is given by the
// @@ '_key_size_in_bit' parameter.
// @@ 
// @@ NOTICE : the Elgamal scheme does not permit to encipher using the 
// @@ private argv_2007 so we must encipher using the public argv_2007 and decipher 
// @@ using the private argv_2007.
// @@
// @@ CONTRACT 		:	
// @@ - '_src_filename' parameter must not be a NULL pointer.
// @@ - '_dst_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_782::argv_1091 (const char * _src_filename, const char * _dst_filename, argv_783& _private_key, uint32_t _key_size_in_bit) {
	cerr << "decipher...[START]" << endl;
	int32_t argv_1892 = argv_1747;
	if ((_src_filename == NULL) || (_dst_filename==NULL)) {
		argv_1892 = argv_1730;
	}
	else { // parameters are OK
		// determine the source argv_1314 size
		uint32_t argv_3426 = argv_1649 (_src_filename);
		//cerr << "argv_3426 = " << argv_3426 << endl;

		// open the source argv_1314 
		FILE * argv_1538 = fopen (_src_filename, "rb");
		if (! argv_1538) {
			argv_1892 = argv_1711;
		}
		else { // source argv_1314 opened succesfully
			// open the destination argv_1314
			FILE * argv_1415 = fopen (_dst_filename, "wb");
			if (! argv_1415) {
				argv_1892 = argv_1713;
			}
			else { // destination argv_1314 opened succesfully
				// determine the maximum argv_710 size
				string p_as_string	= argv_1774->argv_3813 (_private_key.p);
				uint32_t p_size			= p_as_string.size ();
				uint32_t argv_711		= p_size * 2; // because of lambda and sigma
				uint32_t plain_size		= 0;

				uint32_t argv_2748	= argv_3426 / argv_711;
				uint32_t nb_remaining	= argv_3426 - (argv_2748 * argv_711);
				cerr << "===== decipher ======" << endl;
				cerr << "argv_3426 = " << argv_3426 << endl;
				cerr << "size of p     = " << p_size << endl;
				cerr << "argv_711    = " << argv_711 << endl;
				cerr << "argv_2748 = " << argv_2748 << endl;
				cerr << "nb_remaining  = " << nb_remaining << endl;

				// we must always have entire blocks
				if (nb_remaining > 0) {
					argv_1892 = argv_1714;
				}
				else if ((argv_2748 % 2) != 0) {
					argv_1892 = argv_1717;
				}
				else { // we have only complete blocks => ok to proceed
					uint32_t output_size = 0;
					argv_2674 lambda, sigma, plain;
					string plain_str;
					argv_1774->argv_1483 (lambda);
					argv_1774->argv_1483 (sigma);
					argv_1774->argv_1483 (plain);

					char * lambda_buf			= new (std::nothrow) char[p_size+1]; // for '\0'
					char * sigma_buf			= new (std::nothrow) char[p_size+1]; // for '\0'
					uint8_t * hex_buf				= new (std::nothrow) uint8_t[p_size]; 
					uint32_t   actual_output_size	= 0;

					if ((lambda_buf == NULL) || (sigma_buf == NULL) || (hex_buf==NULL)) {
						argv_1892 = argv_1735;
					}
					else {
						for (uint32_t i=0 ; i<argv_2748 ; i++) {
							// read lambda
							if (fread (lambda_buf, 1, p_size, argv_1538) != p_size) {
								argv_1892 = argv_1715; 
								break;
							}
							
							// read sigma
							if (fread (sigma_buf, 1, p_size, argv_1538) != p_size) {
								argv_1892 = argv_1715; 
								break;
							}

							// decipher using lambda and sigma
							lambda_buf[p_size]	= '\0';
							sigma_buf[p_size]	= '\0';
							argv_1774->argv_1496 (lambda, lambda_buf, 10);
							argv_1774->argv_1496 (sigma,  sigma_buf,  10);

							argv_1087 (_private_key, lambda, sigma, plain);
							
							// convert the argv_3266 to string
							plain_str = argv_1774->argv_3813 (plain, true);

							// remove the trailing 'F'
							plain_str = plain_str.substr (1, plain_str.size());
							argv_3471 (plain_str.c_str(), plain_str.size (), hex_buf, output_size, actual_output_size);
							if (fwrite (hex_buf, 1, output_size, argv_1415) != output_size) {
								argv_1892 = argv_1716;
								break;
							}
						}

						delete [] lambda_buf;
						delete [] sigma_buf;
						delete [] hex_buf;
					}

					argv_1774->argv_1469 (plain);
					argv_1774->argv_1469 (sigma);
					argv_1774->argv_1469 (lambda);
				}

				if (fclose (argv_1415) != 0) {
					if (argv_1892 == argv_1747) { // don't override previous errors
						argv_1892 = argv_1712;
					}
				}
			}
			fclose (argv_1538);
		}
	}
	cerr << "decipher...[DONE]" << endl;
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3603		
// @@
// @@ INPUT			:	
// @@ uint32_t : _key_size_in_bits: the length of the argv_2007 to be
// @@   generated.
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
// @@ This function permits to test the el gamal argv_2007 argv_1637 
// @@ and the argv_2007 export features.
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3603 (uint32_t _key_size_in_bits) {
	argv_794 argv_1773;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1892 = argv_1773.argv_2104 (libname.c_str());
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_782 elgamal;
		elgamal.init (&argv_1773);

		argv_783	private_key (argv_1773);
		argv_784		argv_3188 (argv_1773);

		cerr << "generating argv_2007 pair..." << endl;
		argv_1892 = elgamal.argv_1628 (_key_size_in_bits, argv_3188, private_key);
		if (argv_1892 != argv_1747) {
			cerr << "+++ ERROR: argv_1628 failed !" << endl;
		}
		else {
			cerr << "exporting argv_2007 to argv_1314..." << endl;
			string a_s		= argv_1773.argv_3813 (private_key.a);
			string p_s		= argv_1773.argv_3813 (private_key.p);
			string g_s		= argv_1773.argv_3813 (private_key.g);
			string alpha_s	= argv_1773.argv_3813 (private_key.argv_624);
			{
				FILE * fplog = fopen ("C:\\key_clear.txt", "wb");
				if (fplog) {
					fprintf (fplog, "==== PLAIN: private argv_2007 ===\r\n");
					fprintf (fplog, "p=%s\r\n", p_s.c_str());
					fprintf (fplog, "g=%s\r\n", g_s.c_str());
					fprintf (fplog, "argv_624=%s\r\n", alpha_s.c_str());
					fprintf (fplog, "a=%s\r\n", a_s.c_str());
					fprintf (fplog, "\r\n==== PLAIN: public argv_2007 ===\r\n");
					p_s			= argv_1773.argv_3813 (argv_3188.p);
					g_s			= argv_1773.argv_3813 (argv_3188.g);
					alpha_s		= argv_1773.argv_3813 (argv_3188.argv_624);
					fprintf (fplog, "p=%s\r\n", p_s.c_str());
					fprintf (fplog, "g=%s\r\n", g_s.c_str());
					fprintf (fplog, "argv_624=%s\r\n", alpha_s.c_str());
					fclose (fplog);
				}
			}

			argv_1892 = elgamal.argv_1283 (private_key, "FEA02C3F000156EF", "C:\\cle_privee.txt");
			if (argv_1892 != argv_1747) {
				cerr << "+++ failed to export argv_2007 to argv_1314" << endl;
				string serror = argv_1027 (argv_1892);
				cerr << serror << endl;
			}
//			else {
//				cerr << "private argv_2007 export success" << endl;
//			}

			argv_1892 = elgamal.argv_1283 (argv_3188, "FEA02C3F000156EF", "C:\\cle_publique.txt");
			if (argv_1892 != argv_1747) {
				cerr << "+++ failed to export argv_2007 to argv_1314" << endl;
				string serror = argv_1027 (argv_1892);
				cerr << serror << endl;
			}
//			else {
//				cerr << "public argv_2007 export success" << endl;
//			}
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3614		
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
// @@ This function permits to test the loading feature that
// @@ imports keys from files that were generated during an export.
// @@
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3614 () {
	argv_794 argv_1773;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1892 = argv_1773.argv_2104 (libname.c_str());
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_782 elgamal;
		elgamal.init (&argv_1773);
		FILE * fplog = fopen ("C:\\test_import_keys_log.txt", "wb");
		cerr << "see log argv_1314 : " << "test_import_keys_log.txt" << endl;

		argv_783	private_key (argv_1773);
		argv_784		argv_3188	(argv_1773);

		//fprintf (fplog, "loading public argv_2007 from argv_1314...\r\n");
		argv_1892 = elgamal.argv_2103 ("C:\\cle_publique.txt", "FEA02C3F000156EF", argv_3188);
		if (argv_1892 != argv_1747) {
			string serror = argv_1027 (argv_1892);
			//fprintf (fplog, "+++ ERROR: failed to argv_2094 public argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
		}
		else {
			//fprintf (fplog, "public argv_2007...[LOADED FROM FILE]\r\n");
			//fprintf (fplog, "loading private argv_2007 from argv_1314...\r\n");
			argv_1892 = elgamal.argv_2103 ("C:\\cle_privee.txt", "FEA02C3F000156EF", private_key);
			if (argv_1892 != argv_1747) {
				string serror = argv_1027 (argv_1892);
				//fprintf (fplog, "+++ ERROR: failed to argv_2094 private argv_2007 from argv_1314 (%s)\r\n", serror.c_str());
			}
			else {
				//fprintf (fplog, "private argv_2007...[LOADED FROM FILE]\r\n");
				string pub_str	= argv_3188.argv_1282 (argv_1773);
				string priv_str = private_key.argv_1282 (argv_1773);
				
				//fprintf (fplog, "=== public argv_2007 ===\r\n%s\r\n", pub_str.c_str());
				//fprintf (fplog, "=== private argv_2007 ===\r\n%s\r\n", priv_str.c_str());
			}
		}
		fclose (fplog);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3600		
// @@
// @@ INPUT			:	
// @@ uint32_t : _key_size_in_bits: length of the argv_2007 in argv_709.
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
// @@ This function permits to test the argv_1314 enciphering
// @@ feature.
// @@
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3600 (uint32_t _key_size_in_bits) {
	argv_794 argv_1773;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1892 = argv_1773.argv_2104 (libname.c_str());
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_782 elgamal;
		elgamal.init (&argv_1773);
		argv_784		argv_3188	(argv_1773);
		string source_file	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a.txt";
		string argv_1124	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a_ciphered.txt";

		argv_1892 = elgamal.argv_2103 ("C:\\cle_publique.txt", "FEA02C3F000156EF", argv_3188);
		if (argv_1892 != argv_1747) {
			string serror = argv_1027 (argv_1892);
			cerr << "+++ ERROR: failed to argv_2094 public argv_2007 from argv_1314 - errno = " << serror.c_str() << endl;
		}
		else {
			string source_file	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a.txt";
			string argv_1124	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a_ciphered.txt";

			cerr << "encipher...[START]" << endl;
			argv_1892 = elgamal.argv_1227 (source_file.c_str(), argv_1124.c_str(), argv_3188, _key_size_in_bits);
			cerr << "encipher...[DONE]" << endl;
			if (argv_1892 != argv_1747) {
				string serror = argv_1027 (argv_1892);
				cerr << "+++ ERROR: failed to encipher argv_1314 - errno = " << serror.c_str() << endl;
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
// @@ FUNCTION		:	argv_3597		
// @@
// @@ INPUT			:	
// @@ uint32_t : _key_size_in_bits: length of the argv_2007 in argv_709.
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
// @@ This function permits to test the argv_1314 deciphering
// @@ feature.
// @@
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3597 (uint32_t _key_size_in_bits) {
	argv_794 argv_1773;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1892 = argv_1773.argv_2104 (libname.c_str());
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_782 elgamal;
		elgamal.init (&argv_1773);
		argv_783	private_key (argv_1773);
		argv_1892 = elgamal.argv_2103 ("C:\\cle_privee.txt", "FEA02C3F000156EF", private_key);
		if (argv_1892 != argv_1747) {
			string serror = argv_1027 (argv_1892);
			cerr << "+++ ERROR: failed to argv_2094 private argv_2007 from argv_1314 - errno = " << serror.c_str() << endl;
		}
		else {
			string source_file	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a_ciphered.txt";
			string argv_1124	= "C:\\new_engine\\SRC\\ElGamal\\Release\\a_deciphered.txt";

			argv_1892 = elgamal.argv_1091 (source_file.c_str(), argv_1124.c_str(), private_key, _key_size_in_bits);
			if (argv_1892 != argv_1747) {
				string serror = argv_1027 (argv_1892);
				cerr << "+++ ERROR: failed to decipher argv_1314 - errno = " << serror.c_str() << endl;
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
// @@ FUNCTION		:	argv_3623		
// @@
// @@ INPUT			:	
// @@ uint32_t : _key_size_in_bits: length of the argv_2007 in argv_709.
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
// @@ This function permits to test the prime random argv_1637
// @@ that is provided by the argv_794 argv_2785.
// @@
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3623 (uint32_t _size_in_bit) {
	argv_794 argv_1773;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1892 = argv_1773.argv_2104 (libname.c_str());
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_2674 p, q;
		argv_1773.argv_1483 (p);
		argv_1773.argv_1483 (q);
		
		argv_1773.argv_1630 (_size_in_bit, p);
		argv_1773.argv_1630 (_size_in_bit, q);

		string p_str = argv_1773.argv_3813 (p);
		string q_str = argv_1773.argv_3813 (q);
		cerr << "p = " << p_str << endl;
		cerr << "q = " << q_str << endl;

		argv_1773.argv_1469 (p);
		argv_1773.argv_1469 (q);

		argv_1773.argv_3768 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3624		
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
// @@ This function permits to test the primitive root argv_1639
// @@ that is provided by the argv_794 argv_2785.
// @@
// @@ Notice that the filenames are hardcoded, so you may have
// @@ to adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3624 () {
	argv_794 argv_1773;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1892 = argv_1773.argv_2104 (libname.c_str());
	if (argv_1892 != argv_1747) {
		cerr << "+++ ERROR: failed to argv_2094 gmp library" << endl;
	}
	else {
		argv_2674 p, q, argv_1639;
		argv_1773.argv_1483 (p);
		argv_1773.argv_1483 (q);
		argv_1773.argv_1483 (argv_1639);

		//----------------------------------------- 
		argv_1773.argv_1496 (p,	"0", 10);
		//----------------------------------------- 
//void argv_1807 (uint8_t * _buf, uint32_t _bufsize, string& _result) {
		string s1;
		for (uint32_t i=0 ; i<10 ; i++) {
			argv_1807 ((uint8_t *) &p, sizeof(argv_2674), s1);
			fprintf (stderr, "p = %s\n", s1.c_str());
			argv_1773.argv_1467 (p, p, 1);
		}

/*
		argv_1773.argv_1496 (p,	"5", 10);
		argv_1773.argv_1496 (q,	"2", 10);
		argv_1773.argv_1370 (q, p, argv_1639);
		*/
// 1: exp
// 2: argv_2370
// 3: argv_3266
		argv_1773.argv_1496 (q,	"2326547", 10);
		argv_1773.argv_1496 (p,	"3", 10);
		argv_1773.argv_1370 (q, p, argv_1639);
		
		string p_str	= argv_1773.argv_3813 (p);
		string q_str	= argv_1773.argv_3813 (q);
		string gen_str	= argv_1773.argv_3813 (argv_1639);
		cerr << "p = " << p_str << endl;
		cerr << "q = " << q_str << endl;
		cerr << "argv_1639 = " << gen_str << endl;

		argv_1773.argv_1469 (p);
		argv_1773.argv_1469 (q);
		argv_1773.argv_1469 (argv_1639);

		argv_1773.argv_3768 ();
	}
}

bool argv_2122 (string& _full_name) {
	bool bret = false;
	string full_libname = ".\\gmp.dll";
	if (argv_1316 (full_libname.c_str()) == true) {
		_full_name = full_libname;
		bret = true;
	}
	else { // try the second possible location
		full_libname = ".\\Release\\gmp.dll";
		if (argv_1316 (full_libname.c_str()) == true) {
			_full_name = full_libname;
			bret = true;
		}
	}
	return (bret);
}
/*
void test_hash_table () {
	argv_794 argv_1773;
	string full_libname;
	argv_2122 (full_libname);
//	string full_libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	int32_t argv_1892 = argv_1773.argv_2104 (full_libname.c_str());
	if (argv_1892 != argv_1747) {
		string serror = argv_1027 (argv_1892);
		fprintf (stderr, "+++ ERROR: failed to argv_2094 gmp library (argv_1239=%s)", serror.c_str());
	}
	else {
		argv_2674 p;
		string p_str;
		argv_1773.argv_1483 (p);

		argv_801 table;
		table.init (5, &argv_1773);
		uint32_t argv_830;
		uint32_t i;

		argv_1773.argv_1496 (p,	"5555555555555555555555555555555555555555555", 10);
		for (i=0 ; i<10 ; i++) {
			p_str = argv_1773.argv_3813 (p);
			argv_1773.argv_1467 (p, p, 1);
			table.argv_580 (p_str.c_str(), p_str.c_str(), argv_830);
		}
		bool presence_flag;
		string retrieved_value;
		argv_1773.argv_1496 (p,	"5555555555555555555555555555555555555555555", 10);
		for (i=0 ; i<10 ; i++) {
			p_str = argv_1773.argv_3813 (p);
			argv_1773.argv_1467 (p, p, 1);
			presence_flag = table.argv_1908 (p_str.c_str(), retrieved_value, argv_830);
			if (presence_flag == false) {
				fprintf (stderr, "+++ ERROR @1\n");
			}
			else if (p_str != retrieved_value) {
				fprintf (stderr, "+++ ERROR @2\n");
			}
		}
		table.argv_1131 ("C:\\log.txt", "GMP: after insert");
	}
}*/

void argv_3596 () {
	argv_794 argv_1773;
	string full_libname;
	argv_2122 (full_libname);
	int32_t argv_1892 = argv_1773.argv_2104 (full_libname.c_str());
	if (argv_1892 != argv_1747) {
		string serror = argv_1027 (argv_1892);
		fprintf (stderr, "+++ ERROR: failed to argv_2094 gmp library (argv_1239=%s)", serror.c_str());
	}
	else { // open log argv_1314
		FILE * argv_1462 = fopen ("C:\\log.txt", "wb");
		if (! argv_1462) {
			fprintf (stderr, "+++ ERROR: failed to open log argv_1314 !\n");
		}
		else {
			argv_1034 shanks;
			shanks.init (&argv_1773, argv_1462);

			argv_781 bench;
			bench.argv_3457 ();
				shanks.argv_827 ();
			string elapsed_str = bench.argv_3464 ("argv_3249");	
			fprintf (argv_1462, "%s\r\n", elapsed_str.c_str());
			fclose (argv_1462);
		}
	}
}

#if defined (__TEST_ELGAMAL_MAIN__)
	int main(int argv_679, char* argv_680[]) {
		uint32_t key_size_in_bit = 32;
		argv_3596 ();
		return 0;
	}
#endif // #if defined (__TEST_ELGAMAL_MAIN__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

