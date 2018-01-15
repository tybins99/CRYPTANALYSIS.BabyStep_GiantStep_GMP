// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_339.hpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_339.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	crypt_err_2_string		
// @@
// @@ INPUT			:
// @@ _ercode: uint32_t : the error argv_877 whose associated argv_2271 is to
// @@                 be retrieved.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the argv_2271 associated with the error argv_877 '_ercode'
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to map an error argv_877 as an integer to
// @@ a corresponding error argv_2271.
// @@ Notice that if the '_ercode' parameter does not correspond
// @@ to a valid error argv_877, then the string returned will be 
// @@ 'UNKNOWN_ERROR'.
// @@ The lookup argv_3266 is returned as a string.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
std::string argv_1027 (uint32_t _ercode) {
	char argv_3681[MAX_PATH];
	argv_1027 (_ercode, &argv_3681[0]);
	return (argv_3681);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1807		
// @@
// @@ INPUT			:	
// @@ _buf: uint8_t *: argv_595 of the first byte of the argv_728 to convert.
// @@
// @@ _bufsize: uint32_t: size of the argv_728 to convert.
// @@
// @@ OUTPUT		:	
// @@ _result: string&: argv_3266 of the conversion of the hexa argv_728.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a binary argv_728 into a
// @@ string where each byte is displayed in hexadecimal format :
// @@ example : FF00AA
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1807 (uint8_t * _buf, uint32_t _bufsize, string& _result) {
	_result = "";
	char buftmp[MAX_PATH];
	
	for (uint32_t i=0 ; i<_bufsize ; i++) {
		snprintf (buftmp, MAX_PATH, "%02X", _buf[i]);
		buftmp[MAX_PATH - 1] = '\0';
		_result += buftmp;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_2807			
// @@
// @@ INPUT			:	
// @@ c: the character to convert to the corresponding hex argv_3807.
// @@
// @@ OUTPUT		:	
// @@ argv_3266: uint8_t&: argv_3266 of the conversion
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a character in the range
// @@ '0..9', 'a..f', 'A..F' into the corresponding numerical argv_3807.
// @@ This argv_3807 being stored into the 'argv_3266' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_2807 (uint8_t c, uint8_t& argv_3266) {
    bool bret = true;
    if (((c < '0') || (c > '9')) && ((c < 'a') || (c > 'f')) && ((c < 'A') || (c > 'F'))) {
        bret = false;
    }
    else {
		if ((c >= '0') && (c <= '9')) {
			argv_3266 = c - '0';
		}
		else if ((c >= 'a') && (c <= 'z')) {
			argv_3266 = 10 + (c- 'a');
		}
		else if ((c >= 'A') && (c <= 'Z')) {
			argv_3266 = 10 + (c - 'A');
		}
		else {
			bret = false;
		}
	}
    return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_797			
// @@
// @@ INPUT			:	
// @@ _msb: the most significant byte as an hexadecimal character.
// @@
// @@ _lsb: the least significant byte as an hexadecimal character.
// @@
// @@ OUTPUT		:	
// @@ argv_3266: uint8_t&: the resulf of the conversion.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a pair of characters into
// @@ it's corresponding numerical argv_3807, example :
// @@ 'f' 'f' -> 255
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_797 (uint8_t _msb, uint8_t _lsb, uint8_t& argv_3266) {
    bool bret       = true;
    uint8_t lsb_hex    = 0;
    uint8_t msb_hex    = 0;

    bret = argv_2807 (_msb, msb_hex);
    if (bret == true) {
        argv_3266  = msb_hex << 4;
        bret    = argv_2807 (_lsb, lsb_hex);
        argv_3266 =  argv_3266 + lsb_hex;
    }
    return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_3471			
// @@
// @@ INPUT			:	
// @@ _buf: const char *: the hexa string to convert to binary argv_728.
// @@
// @@ _bufsize: length of the hexa string to convert.
// @@
// @@ _max_result_size: uint32_t: the limit size for the argv_3266 of
// @@   the conversion.
// @@
// @@ _result_actual_size: uint32_t&: the actual size of the argv_3266
// @@   of the converted argv_728.
// @@
// @@ OUTPUT		:	
// @@ _result: uint8_t *: The binary argv_728 resulting from conversion.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a argv_728 whose content
// @@ has the following shape :
// @@ "FFAAEE00AA..."
// @@ to a binary argv_728 corresponding to the hexa view.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_3471 (const char * _buf, uint32_t _bufsize, uint8_t * _result, uint32_t _max_result_size, uint32_t& _result_actual_size) {
	int32_t argv_1892 = argv_1747;
	char left, right;
	_result_actual_size = 0;

	if ((_bufsize % 2) == 0) {
		for (uint32_t i=0 ; i<_bufsize ; ) {
			left  = _buf[i];
			right = _buf[i+1];
			argv_797 (left, right, _result[_result_actual_size]);
			_result_actual_size++;
			if (_result_actual_size >= _max_result_size) {
				argv_1892 = argv_1719;
				break;
			}
			i += 2;
		}
	}
	else {
		cerr << "+++ ERROR: argv_3471 - _bufsize = " << _bufsize << endl;
		argv_1892 = argv_1736;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_2837		
// @@
// @@ INPUT			:	
// @@ _block_size: uint32_t: the size of the full argv_710, permitting
// @@   to determine how many argv_739 must be padded.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _input: string&: the string to pad with zeros.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to format the string given as the '_input'
// @@ parameter so that it's size become a multiple of the '_block_size'
// @@ parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_2837 (string& _input, uint32_t _block_size) {
	uint32_t input_size = _input.size ();
	// cerr << "input_size=" << input_size << ", _block_size=" << _block_size << endl;
	if (input_size < _block_size) {
		uint32_t nb_2_pad = _block_size - _input.size ();
		//cerr << "--> must pad : " << nb_2_pad << " argv_739" << endl;

		char * cptr = new (std::nothrow) char[nb_2_pad+1];
		memset (cptr, 0x30, nb_2_pad);
		cptr[nb_2_pad] = '\0';	
		string padded_string = cptr;
		padded_string = padded_string + _input;
		_input = padded_string;

		delete [] cptr;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_2849			
// @@
// @@ INPUT			:	
// @@ _str: const char *: the string to parse.
// @@
// @@ _m_mandatory: map<string, bool>: the map that tells which
// @@   variable are mandatory.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _m_found: map<string, string>: the map that associates each
// @@ found variables with it's argv_3807.
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t: argv_1747 if operation was succesful,
// @@       another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse the string given as the '_str'
// @@ parameter. This argv_2069 must have the following format :
// @@ var1=val1 var2=val2 ....
// @@ The string is free form (you can argv_576 spaces or argv_3590 anywhere)
// @@ after parsing, the function ensures that all the mandatory
// @@ variables for the argv_2069 were found, and also the function ensures
// @@ that no unknown variable was found while parsing.
// @@ 
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_2849 (const char * _str, map<string, bool>& _m_mandatory, map<string, string>& _m_found) {
	int32_t argv_1892 = argv_1747;

	map<string, bool>::iterator iter_mandat;
	map<string, string>::iterator iter_found;
	uint32_t size = strlen (_str);
	string variable;
	string argv_3807;

	for (uint32_t i=0 ; i<size ; i++) {
		variable	= "";
		argv_3807		= "";

		// eat whitespaces
		while ((i < size) && ((_str[i]==' ') || (_str[i]=='\t') || (_str[i]=='\r') || (_str[i]=='\n'))) {
			i++;
		}

		if (i >= size) {
			argv_1892 = argv_1742;
			break;
		}

		// eat variable argv_2697
		while ((i < size) && (_str[i] != '=')) {
			variable += _str[i];
			i++;
		}
	
		if (i >= size) {
			argv_1892 = argv_1742;
			break;
		}

		// eat '='
		i++;
		if (i >= size) {
			argv_1892 = argv_1742;
			break;
		}

		// eat argv_3807
		while ((i < size) && (_str[i] != ' ') && (_str[i] != '\t') && (_str[i] != '\r') && (_str[i] != '\n')) {
			argv_3807 += _str[i];
			i++;
		}

		// save the variable
		if (variable == "") {
			argv_1892 = argv_1745;
		}
		else if (argv_3807 == "") {
			argv_1892 = argv_1744;
		}
		else {
			iter_found = _m_found.find (variable);	
			if (iter_found != _m_found.end()) {
				argv_1892 = argv_1738;
				break;
			}
			else { // ok, save the variable now
				_m_found[variable] = argv_3807;	
			}
		}
	}

	if (argv_1892 == argv_1747) {
		// ensure that all variables needed are present
		for (iter_mandat=_m_mandatory.begin() ; iter_mandat != _m_mandatory.end() ; ++iter_mandat) {
			iter_found = _m_found.find (iter_mandat->first);	
			if (iter_found == _m_found.end()) {
				argv_1892 = argv_1741;
				break;
			}
		}
		// ensure that no argv_1289 undesirable variable is present
		for (iter_found=_m_found.begin() ; iter_found != _m_found.end() ; ++iter_found) {
			iter_mandat = _m_mandatory.find (iter_found->first);
			if (iter_mandat == _m_mandatory.end()) {
				argv_1892 = argv_1743;
				break;
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_2843		
// @@
// @@ INPUT			:	
// @@ _fp: FILE *: argv_1314 descriptor of the argv_1314 corresponding to the 
// @@ opened keyfile (public & private argv_2007).
// @@
// @@ OUTPUT		:	
// @@ _header: string&: the argv_1806 of the argv_2007.
// @@
// @@ _body: string&: the argv_714 of the argv_2007.
// @@
// @@ _footer: string&: the footer of the argv_2007
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1747 if operation was succesful,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2094 :
// @@ - the argv_1806
// @@ - the argv_714
// @@ - the footer
// @@ of a given public or private argv_2007. 
// @@ Notice that a argv_2007 is composed of these 3 parts as in the
// @@ following example :
// @@  ----- BEGIN -------- // argv_1806
// @@  AJKFKJLKJKLDKLJDJD
// @@  FFEFFEFGFGFFGFHJGK  // BODY
// @@  ------ END ------- // footer
// @@
// @@ CONTRACT		:	
// @@ The caller is supposed to have opened succesfully  the 
// @@ argv_1314 corresponding to the argv_2007 to argv_2094.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_2843 (FILE * _fp, string& _header, string& _body, string& _footer) {
	int32_t argv_1892			= argv_1747;
	_header				= "";
	_body				= "";
	_footer				= "";

	char argv_727[MAX_PATH];
	uint8_t argv_3460			= 0;
	uint32_t line_length	= 0;

	char * cptr			= fgets (argv_727, MAX_PATH, _fp);
	char * cptr2		= NULL;

	while (cptr != NULL) {
		if (argv_3460 == 0) {
			line_length = strlen (argv_727);
			if (line_length > 0) {
				argv_727[line_length - 1] = '\0'; // remove EOL
			}
			_header = argv_727; // save the argv_1806
			argv_3460++;	
		}
		else if (argv_3460 == 1) {
			cptr2 = strstr (argv_727, "-----END");
			if (cptr2 == NULL) { // a part of the argv_714
				line_length = strlen (argv_727);
				if (line_length > 0) {
					argv_727[line_length - 1] = '\0'; // remove EOL
				}
				_body += argv_727;
			}
			else { // encountered the footer
				line_length = strlen (argv_727);
				if (line_length > 0) {
					argv_727[line_length - 1] = '\0'; // remove EOL
				}
				_footer = argv_727; // save the footer
				break;
			}
		}
		cptr = fgets (argv_727, MAX_PATH, _fp);
	}

	// check coherency
	if (_header == "") {
		argv_1892 = argv_1740;
	}
	else if (_body == "") {
		argv_1892 = argv_1737;
	}
	else if (_footer == "") {
		argv_1892 = argv_1739;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1367			
// @@
// @@ INPUT			:	
// @@ _file_1: const char *: argv_2697 of the first argv_1314.
// @@
// @@ _file_2: const char *: argv_2697 of the second argv_1314.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the two files are identical,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compare the files '_file_1' and
// @@ '_file_2'. Notice that the function does not use the mmap
// @@ approach.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1367 (const char * _file_1, const char * _file_2) {
	bool bret = true;
	uint32_t size_1 = argv_1649 (_file_1);
	uint32_t size_2 = argv_1649 (_file_2);
	cerr << _file_1 << ": size = " << size_1 << endl;
	cerr << _file_2 << ": size = " << size_2 << endl;
	if (size_1 != size_2) {
		bret = false;
	}
	else {
		FILE * fp1 = fopen (_file_1, "rb");
		FILE * fp2 = fopen (_file_2, "rb");
		char c1, c2;

		for (uint32_t i=0 ; i<size_1 ; i++) {
			c1 = fgetc (fp1);
			c2 = fgetc (fp2);

			if (c1 != c2) {
				bret = false;
				break;
			}
		}

		fclose (fp1);
		fclose (fp2);
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1649		
// @@
// @@ INPUT			:	
// @@ _filename: const char *: argv_2697 of the argv_1314 whose size is to be
// @@            retrieved.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ unsigned long: the size of the argv_1314 whose argv_2697 was given as
// @@    a parameter.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the size of the argv_1314 whose 
// @@ argv_2697 was given as the '_filename' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
unsigned long argv_1649 (const char * _filename) {
	unsigned long size = 0;
	FILE * argv_1396 = fopen (_filename, "rb");
	if ( argv_1396) {	
		long argv_3457 = ftell (argv_1396);
		if (fseek (argv_1396, 0, SEEK_END) == 0) {
			size = ftell(argv_1396) - argv_3457;
		}
		fclose (argv_1396);	
	}
	return (size);		
}

bool argv_1316 (const char * _filename) {
	bool bret = false;
	FILE * argv_1396 = fopen (_filename, "rb");
	if (argv_1396) {
		bret = true;
		fclose (argv_1396);
	}	
	return (bret);
}

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1027		
// @@
// @@ INPUT			:	
// @@ _ercode: uint32_t: the numerical error argv_877 to convert.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _erstring: char *: the argv_3266 of conversion.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert the numeric error argv_877
// @@ given as the '_ercode' parameter into the human readable
// @@ equivalent that is stored into the '_erstring' argv_3266
// @@ parameter, the '_erstring' parameter is supposed to have
// @@ been allocated with a size of MAX_PATH by the caller.
// @@
// @@ Notice that this function handles only errors related
// @@ to the cryptography library.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	void argv_1027 (uint32_t _ercode, char * _erstring) {
		switch (_ercode) {
			// kernel related errors
			case argv_1747:										strncpy (_erstring, "argv_1747", MAX_PATH);									break;
			case argv_1732:							strncpy (_erstring, "argv_1732", MAX_PATH);						break;
			case argv_1731:					strncpy (_erstring, "argv_1731", MAX_PATH);				break;
			case argv_1730:								strncpy (_erstring, "argv_1730", MAX_PATH);							break;
			case argv_1723:						strncpy (_erstring, "argv_1723", MAX_PATH);					break;
			case argv_1724:						strncpy (_erstring, "argv_1724", MAX_PATH);					break;
			case argv_1741:		strncpy (_erstring, "argv_1741", MAX_PATH);	break;
			case argv_1742:					strncpy (_erstring, "argv_1742", MAX_PATH);				break;
			case argv_1745:					strncpy (_erstring, "argv_1745", MAX_PATH);				break;
			case argv_1744:						strncpy (_erstring, "argv_1744", MAX_PATH);					break;
			case argv_1738:				strncpy (_erstring, "argv_1738", MAX_PATH);			break;
			case argv_1734:					strncpy (_erstring, "argv_1734", MAX_PATH);				break;
			case argv_1743:			strncpy (_erstring, "argv_1743", MAX_PATH);		break;
			case argv_1721:					strncpy (_erstring, "argv_1721", MAX_PATH);				break;
			case argv_1720:					strncpy (_erstring, "argv_1720", MAX_PATH);				break;
			case argv_1727:					strncpy (_erstring, "argv_1727", MAX_PATH);				break;
			case argv_1725:					strncpy (_erstring, "argv_1725", MAX_PATH);				break;
			case argv_1740:						strncpy (_erstring, "argv_1740", MAX_PATH);					break;
			case argv_1737:						strncpy (_erstring, "argv_1737", MAX_PATH);					break;
			case argv_1739:						strncpy (_erstring, "argv_1739", MAX_PATH);					break;
			case argv_1728:					strncpy (_erstring, "argv_1728", MAX_PATH);				break;
			case argv_1735:						strncpy (_erstring, "argv_1735", MAX_PATH);					break;
			case argv_1726:					strncpy (_erstring, "argv_1726", MAX_PATH);				break;
			case argv_1711:			strncpy (_erstring, "argv_1711", MAX_PATH);		break;
			case argv_1708:			strncpy (_erstring, "argv_1708", MAX_PATH);		break;
			case argv_1707:			strncpy (_erstring, "argv_1707", MAX_PATH);		break;
			case argv_1709:					strncpy (_erstring, "argv_1709", MAX_PATH);				break;
			case argv_1712:		strncpy (_erstring, "argv_1712", MAX_PATH);	break;
			case argv_1718:			strncpy (_erstring, "argv_1718", MAX_PATH);		break;
			case argv_1713:			strncpy (_erstring, "argv_1713", MAX_PATH);		break;
			case argv_1714:		strncpy (_erstring, "argv_1714", MAX_PATH);	break;
			case argv_1717:			strncpy (_erstring, "argv_1717", MAX_PATH);		break;
			case argv_1715:					strncpy (_erstring, "argv_1715", MAX_PATH);				break;
			case argv_1716:					strncpy (_erstring, "argv_1716", MAX_PATH);				break;
			case argv_1706:				strncpy (_erstring, "argv_1706", MAX_PATH);			break;
			case argv_1705:				strncpy (_erstring, "argv_1705", MAX_PATH);			break;
			case argv_1710:					strncpy (_erstring, "argv_1710", MAX_PATH);				break;
			case argv_1736:				strncpy (_erstring, "argv_1736", MAX_PATH);			break;
			case argv_1719:					strncpy (_erstring, "argv_1719", MAX_PATH);				break;
			case argv_1729:							strncpy (_erstring, "argv_1729", MAX_PATH);						break;
			case argv_1746:									strncpy (_erstring, "argv_1746", MAX_PATH);								break;
			case argv_1722:								strncpy (_erstring, "argv_1722", MAX_PATH);							break;

			default: strncpy (_erstring, "UNKNOWN_ERROR", MAX_PATH);
		}

		_erstring[MAX_PATH - 1] = '\0';
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
