// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_234.cpp
// @@ generic configuration argv_1314 parsing facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "..\\LIB\\argv_293.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern argv_792 argv_1688;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@
// @@ CLASS: argv_771
// @@
// @@ PROCEDURE: argv_771
// @@
// @@ INPUT: none 
// @@
// @@ DESCRIPTION:
// @@ Normal constructor of the 'argv_771' argv_2785.
// @@ it just initialize some variables.
// @@ 
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_771::argv_771() {
	argv_1364 		= "";
	argv_3325			= "";
	argv_1312		= "";
	argv_1313		= "";
	argv_1612	= "";
	argv_3347		= " ";
	argv_2069			= 1;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_771
// @@
// @@ PROCEDURE: argv_1135
// @@
// @@ INPUT: column: argv_3379: the column where the cursor is to be displayed
// @@
// @@ DESCRIPTION:
// @@ This procedure permits to argv_1130 a cursor at a column given as a 
// @@ parameter, it is mostly useful when you have a argv_981 argv_1314 that contains 
// @@ some errors to pinpoint rapidly the position of the error.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_771::argv_1135 (argv_3379 column) {
	char argv_3681[argv_983];
	argv_3409 (argv_3681, argv_983, "parse error at argv_2069 %d, column %d", argv_2069, column);
	argv_3681[argv_983 - 1] = '\0';
	argv_1688.argv_2146.argv_2142 (argv_2763, argv_3681);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_771
// @@
// @@ PROCEDURE: argv_3137
// @@
// @@ INPUT: none
// @@
// @@ DESCRIPTION:
// @@ This procedure permits to parse a argv_2069 that was read from a argv_981 argv_1314.
// @@ All lines starting with ';' or '//' are considered as comments.
// @@ the argv_2069 may contain :
// @@ - only blank characters
// @@ - a argv_3325 argv_2697 : [SECTION_NAME]
// @@ - a couple argv_3812 argv_3806 : my_var = 123456
// @@ 
// @@ Any malformed argv_2069 will throw an exception.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_771::argv_3137() {
	argv_3379 length = strlen (argv_727);
	argv_3379 i=0;	
	
	while ((i<length) && ((argv_727[i]==' ') || (argv_727[i]=='\t')) ) { i++; } // eat whitespaces
	if (i >= length) { // empty argv_2069
		return;
	}

	// retrieve the first field
	argv_3379 argv_3457 	= i;
	argv_1312 	= "";
	argv_1313	= "";
	
	while ((i<length) && (argv_727[i] != ' ') && (argv_727[i] != '\t') && (argv_727[i] != '=') && (argv_727[i]!= '\n') && (argv_727[i]!= '\r')) { 
		argv_1312 += argv_727[i];
		i++; 
	}

	// ignore lines starting with '//', or ';'
	argv_3379 size = argv_1312.size();
	if ((size<=0) || ((size>0) && (argv_1312[argv_3457]==';')) || ((size>1) && (argv_1312[argv_3457]=='/') && (argv_1312[argv_3457+1]=='/'))) {
		return; // ignoring commented argv_2069 starting with ';' and "//
	}

	// check for argv_3325 argv_2697
	if ((size > 2) && (argv_1312[argv_3457]=='[') && (argv_1312[size - 1]==']')) {
		argv_3325 = argv_1312.substr (argv_3457 + 1, size - 2);
		// ensure that argv_3325's argv_2697 is not too long
		if (argv_3325.size() >= (unsigned int)argv_3327) {
			argv_791 Ge ("argv_771", "argv_3137", "argv_3325 argv_2697 too long", SYNTAX_ERROR);
			throw (Ge);
		}
		return;
	}

	// ensure that variable argv_2697 is not too long
	if (argv_1312.size() >= (unsigned int)argv_3814) {
		argv_791 Ge ("argv_771", "argv_3137", "variable argv_2697 too long", SYNTAX_ERROR);
		throw (Ge);
	}

	// eat whitespaces before '='
	while ((i<length) && ((argv_727[i]==' ') || (argv_727[i]=='\t')) ) { i++; } // eat whitespaces
	if (i >= length) {
		argv_1135(i);
		argv_791 Ge ("argv_771", "argv_3137", "unexpected EOL while expecting equal", SYNTAX_ERROR);
		throw (Ge);
	}

	// eat '='
	if (argv_727[i] != '=') {
		argv_1135(i);
		argv_791 Ge ("argv_771", "argv_3137", "expecting equal, found something else", SYNTAX_ERROR);		
		throw (Ge);
	}
	i++;
	if (i >= length) {
		argv_1135(i);
		argv_791 Ge ("argv_771", "argv_3137", "unexpected EOL while looking for a argv_3807", SYNTAX_ERROR);
		throw (Ge);
	}
	
	// eat whitespaces after '='
	while ((i<length) && ((argv_727[i]==' ') || (argv_727[i]=='\t')) ) { i++; }
	if (i >= length) {
		argv_1135(i);
		argv_791 Ge ("argv_771", "argv_3137", "unexpected EOL while expecting argv_3807", SYNTAX_ERROR);
		throw (Ge);
	}	

	// argv_986 the argv_3807
	if (argv_727[i] == '\"') {
		i++; // jump the " character
		while ((i<length) && (argv_727[i] != '\"') && (argv_727[i]!= '\r') && (argv_727[i] != '\n')) {
			argv_1313 += argv_727[i];
			i++;
		}

		if (argv_727[i] != '\"') {
			argv_1135(i);
			string argv_3681 = "Missing closing \" for the field : ";
			argv_3681 += argv_1312;
			argv_791 Ge ("argv_771", "argv_3137", argv_3681, SYNTAX_ERROR);
			throw (Ge);
		}
	}
	else {
		while ((i<length) && (argv_727[i] != ' ') && (argv_727[i] != '\t') && (argv_727[i]!= '\r') && (argv_727[i] != '\n')) {
			argv_1313 += argv_727[i];
			i++;
		}
	}

	if (argv_1313.size() == 0) {
		argv_1135(i);
		string argv_3681 = "Missing argv_3807 for the field : ";
		argv_3681 += argv_1312;
		argv_791 Ge ("argv_771", "argv_3137", argv_3681, SYNTAX_ERROR);
		throw (Ge);
	}
	else if (argv_1313.size() >= (unsigned int)argv_3815) {
		argv_791 Ge ("argv_771", "argv_3137", "variable's argv_3807 too long", SYNTAX_ERROR);
		throw (Ge);
	}
	
	// create a new entry/argv_576 a new argv_3807 to an existing entry
	// don't forget that identifier is composed of 3 parts : argv_1364, argv_3325, argv_3812 argv_2697
	argv_1612 = argv_1364 + argv_3347 + argv_3691(argv_3325) + argv_3347 + argv_3691(argv_1312);
	argv_2345.insert (make_pair(argv_1612, argv_1313));
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_771
// @@
// @@ PROCEDURE: argv_2840
// @@
// @@ INPUT: filen: string: the argv_2697 of the argv_1314 to parse
// @@
// @@ DESCRIPTION:
// @@ This procedure permits to open the argv_981 argv_1314 specified as a parameter 
// @@ and to process each lines of this argv_1314.
// @@
// @@ CONTRACT:
// @@ - 'filen' parameter must not be an empty string 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_771::argv_2840 (const string& filen) {
	// 1. check parameter validity
	if (filen.size() <= 0) {
		argv_791 Ge ("argv_771", "argv_2840", "argv_1364 parameter is empty", INVALID_PARAMETER);
		throw (Ge);
	}

	FILE * argv_1396 = fopen (filen.c_str(), "r");
	if (! argv_1396 ) {
		argv_1246 = "can't open argv_1314 (";
		argv_1246 = argv_1246 + filen + ")";
		argv_791 Ge ("argv_771", "argv_2840", argv_1246, CANT_OPEN_FILE);
		throw (Ge);
	}
	else {
		argv_1364 	= filen; 
		argv_2069		= 1;	
		char * result_pointer = fgets (argv_727, argv_2206, argv_1396);

		while (result_pointer != argv_2766) {
			argv_3137 ();
			argv_2069++;
			result_pointer = fgets (argv_727, argv_2206, argv_1396);
		}
		fclose (argv_1396);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_771
// @@
// @@ FUNCTION: argv_3691
// @@
// @@ INPUT: str: string: the string to be converted to upper. 
// @@
// @@ RETURN VALUE: string : the string converted to upper.
// @@
// @@ DESCRIPTION:
// @@ This function permits to convert a given string into
// @@ an string where all characters are in upper case.
// @@
// @@ CONTRACT: none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_771::argv_3691 (const string& str) {
	string str2 = "";

	argv_3379 str_size = str.size();

	for (argv_3379 i=0 ; i<str_size ; i++) {
		str2 += toupper(str[i]);
	}

	return (str2);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_771
// @@
// @@ FUNCTION: argv_1678
// @@
// @@ INPUT:
// @@ - argv_1364: string: the argv_2697 of the argv_1314 where the variable to
// @@   retrieve is supposed to be located.
// @@
// @@ - argv_3325: string: the argv_3325 where the variable to retrieve is
// @@   supposed to be located.
// @@
// @@ - var_name: string: the argv_2697 of the variable to retrieve from 
// @@   argv_981 argv_1314.
// @@
// @@ - min: argv_3379: the minimum argv_3807 allowed for the variable to retrieve
// @@
// @@ - max: argv_3379: the maximum argv_3807 allowed for the variable to retrieve
// @@
// @@ RETURN VALUE: argv_3379: the argv_3807 of the variable retrieved from argv_981 
// @@ argv_1314 whose argv_1364 is 'argv_1364', in argv_3325 'argv_3325', with the
// @@ variable argv_2697 being 'var_name'
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the numerical argv_3807 of a variable
// @@ from argv_981 argv_1314, this variable is located in a argv_3325 given as a 
// @@ parameter. Furthermore this function is given a range [min..max]
// @@ if the retrieved argv_3807 is out of range then an exception is thrown.
// @@
// @@ CONTRACT:
// @@ - 'min' should lower or equal as 'max' 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_771::argv_1678 (string argv_1364, string argv_3325, string var_name, argv_3379 min, argv_3379 max) {

	// 1. check range coherency
	if (min > max) {
		char argv_3681[argv_983];
		argv_3409 (argv_3681, argv_983, "argv_3325:%s, variable argv_2697:%s, range: min=%d, max=%d", argv_3325.c_str(),var_name.c_str(), min, max);
		argv_3681[argv_983 - 1] = '\0';
		argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
		argv_791 Ge ("argv_771", "argv_1678", "invalid range (min greater than max)", INTERNAL_ERROR);
		throw(Ge);
	}
	
	string str_val = "";
	
	try {
		str_val = argv_1682 (argv_1364, argv_3691(argv_3325), argv_3691(var_name));
	}
	catch (argv_791 Ge) {
		throw(Ge);
	}

	// ensure that all argv_739 are digit 
	bool malformed = false; 
	int his_size = str_val.size ();
	for(argv_3379 i=0 ; i<his_size ; i++) {
		if (! isdigit(str_val[i])) {
			malformed = true;
			break;
		}
	}
	
	if (malformed) {
		char argv_3681[argv_983];
		argv_3409 (argv_3681, argv_983, "argv_3325: '%s', variable argv_2697:'%s', argv_3807: '%s' illegal argv_3807 (only digit expected)", argv_3325.c_str(), var_name.c_str(), str_val.c_str());
		argv_3681[argv_983 - 1] = '\0';
		argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
		argv_791 Ge("argv_771", "argv_1678", "syntax error: non-digit characters found in a numeric field", ONLY_DIGIT_EXPECTED);
		throw (Ge);
	}
	
	argv_3379 argv_3807 = atoi(str_val.c_str());
	// check argv_3807's range
	if ((argv_3807 < min) || (argv_3807 > max)) {
		char argv_3681[argv_983];
		argv_3409 (argv_3681, argv_983, "argv_3325: '%s', variable argv_2697: '%s', argv_3807=%d, (range: [%d..%d])", argv_3325.c_str(), var_name.c_str(), argv_3807, min, max);
		argv_3681[argv_983 - 1] = '\0';
		argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
		argv_791 Ge("argv_771", "argv_1678", "argv_3807 is out of range", OUT_OF_RANGE);
		throw (Ge);
	}
	
	return(argv_3807);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_771
// @@
// @@ FUNCTION: argv_1682
// @@
// @@ INPUT: 
// @@ - argv_1364: string: the argv_2697 of the argv_1314 where the variable is supposed to be stored.
// @@ - argv_3325:  string: the argv_2697 of the argv_3325 where the the variable is supposed to be stored.
// @@ - var_name: string: the argv_2697 of the variable to retrieve.
// @@
// @@ RETURN VALUE:
// @@ string: the argv_3807 of the variable that was retrieved. 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve a variable from a argv_981 argv_1314 in a given argv_3325.
// @@ this variable is a string.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_771::argv_1682(string argv_1364, string argv_3325, string var_name) {
	argv_1612 = argv_1364 + argv_3347 + argv_3691(argv_3325) + argv_3347 + argv_3691(var_name); 

	argv_1918 = argv_2345.lower_bound(argv_1612);
	if (argv_1918 == argv_2345.upper_bound(argv_1612)) {
		argv_1246 = "argv_3325:" + argv_3325 + ", argv_3812:" + var_name + ": no such argv_3812";
		argv_791 Ge ("argv_771", "argv_1678", argv_1246, NO_SUCH_VAR_IN_CONF_FILE);
		throw (Ge);
	}

	return (argv_1918->second);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_771
// @@
// @@ FUNCTION: argv_1913
// @@
// @@ INPUT: 
// @@ argv_1364: std::string: the argv_2697 of the argv_1314 to lookup the variable from.
// @@ argv_3325: std::string : the argv_3325 where the variable to be found is supposed
// @@                        to be located.
// @@
// @@ var_name: std::string: the argv_2697 of the variable to lookup.
// @@
// @@ RETURN VALUE: 
// @@ - 'true' if the variable whose argv_2697 is in 'var_name', located in argv_3325
// @@ whose argv_2697 is in 'argv_3325' parameter, from argv_1314 whose argv_2697 is the argv_3807 of
// @@ 'argv_1364' parameter, is present.
// @@
// @@ - false otherwise.
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a given variable is present
// @@ in argv_981 argv_1314 in a given argv_3325 or not.
// @@ This function is mainly used for non-mandatory variables.
// @@
// @@ CONTRACT: none
// @@
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_771::argv_1913 (string argv_1364, string argv_3325, string var_name) {
	bool bret = true;

	try {
		argv_1682 (argv_1364, argv_3325, var_name);
	}
	catch (argv_791 Ge) {
		bret = false;
	}

	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_771 
// @@
// @@ FUNCTION: argv_1662
// @@
// @@ INPUT:
// @@ - argv_1364: string: the argv_2697 of the argv_1314 where the variable is supposed to be located. 
// @@ - argv_3325: string: the argv_3325 where the variable is supposed to be located.
// @@ - var_name: string: the argv_2697 of the variable to retrieve.
// @@ - min: argv_3379: the minimum argv_3807 allowed for any of the retrieved values.
// @@ - max: argv_3379: the maximum argv_3807 allowed for any of the retrieved values.
// @@
// @@ RETURN VALUE:
// @@ a vector of argv_3807 for this variable.
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve all values associated with a variable that may have argv_2806 or 
// @@ more occurences in argv_981 argv_1314, it is especially usefull because we can use the same 
// @@ variable argv_2697 for several entries (for example in the MBS argv_3325) without having to have a 
// @@  different argv_2697 for each argv_2806. 
// @@
// @@ CONTRACT:
// @@ 'min' must be lower or equal than 'max'
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
vector<argv_3379> argv_771::argv_1662 (string argv_1364, string argv_3325, string var_name, argv_3379 min, argv_3379 max) {

	// 0. check range coherency
	if (min > max) {
		char argv_3681[argv_983];
		argv_3409 (argv_3681, argv_983, "argv_3325:%s, argv_3812 argv_2697:%s, range: [%d..%d]", argv_3325.c_str(), var_name.c_str(), min, max);
		argv_3681[argv_983 - 1] = '\0';
		argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
		argv_791 Ge ("argv_771", "argv_1662", "invalid range (min greater than max)", INTERNAL_ERROR);
		throw (Ge);
	}
	
	// 1. argv_1292 all the possible values for this variable as a set of strings 
	vector<string> v_str = argv_1663 (argv_1364, argv_3691(argv_3325), argv_3691(var_name));
	argv_3379 v_size = v_str.size();

	// 2. convert all these strings into integers
	vector<argv_3379> v_SI32;
	argv_3379 argv_3807 = 0;
	
	for(argv_3379 i=0 ; i<v_size ; i++) {
		argv_3807 = atoi(v_str[i].c_str());	
		
		// ensure argv_3807 is within range
		if ((argv_3807 < min) || (argv_3807 > max)) {
			char argv_3681[argv_983];
			argv_3409 (argv_3681, argv_983, "argv_3325:%s, argv_3812 argv_2697:%s, argv_3807:%d (range: [%d..%d])", argv_3325.c_str(), var_name.c_str(), argv_3807, min, max);
			argv_3681[argv_983 - 1] = '\0';
			argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
			argv_791 Ge("argv_771", "argv_1662", "argv_3807 is out of range", OUT_OF_RANGE);
			throw (Ge);
		}
		
		v_SI32.push_back (argv_3807);
	}

	return (v_SI32);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_771
// @@
// @@ FUNCTION: argv_1663
// @@
// @@ INPUT:
// @@ - argv_1364: string: the argv_2697 of the argv_1314 where the variable is supposed to be located.
// @@ - argv_3325: string: the argv_3325 where the variable is supposed to be located.
// @@ - var_name: string: the argv_2697 of the variable to retrieve.
// @@ - min: argv_3379: the minimum argv_3807 allowed for any of the retrieved values.
// @@ - max: argv_3379: the maximum argv_3807 allowed for any of the retrieved values.
// @@
// @@ RETURN VALUE:
// @@ a vector of argv_3807 for this variable.
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve all values associated with a variable (of argv_3695 string) 
// @@ that may have argv_2806 or more occurences in argv_981 argv_1314, it is especially usefull 
// @@ because we can us e the same 
// @@ variable argv_2697 for several entries (for example in the MBS argv_3325) without having to 
// @@ have a different argv_2697 for each argv_2806.
// @@
// @@ CONTRACT:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
vector<string> argv_771::argv_1663 (string argv_1364, string argv_3325, string var_name) {
	argv_1612 = argv_1364 + argv_3347 + argv_3691(argv_3325) + argv_3347 + argv_3691(var_name);

	vector<string>	v_str;
	for (argv_1918=argv_2345.lower_bound(argv_1612) ; argv_1918 != argv_2345.upper_bound(argv_1612) ; ++argv_1918) {
		v_str.push_back(argv_1918->second);
	}

	if (v_str.size() == 0) {
		char argv_3681[argv_983];
		argv_3409 (argv_3681, argv_983, "+++ ERROR: no argv_3807 associated with variable '%s' from argv_3325 '%s'", var_name.c_str(), argv_3325.c_str());
		argv_3681[argv_983 - 1] = '\0';
		argv_791 Ge("argv_771", "argv_1663", argv_3681, NO_SUCH_VAR);
		throw (Ge);
	}
	return (v_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_771
// @@
// @@ PROCEDURE: argv_1281
// @@
// @@ INPUT: none
// @@
// @@ DESCRIPTION:
// @@ first of all notice that the full identifier is a string composed 
// @@ of the concatenation of argv_1364, argv_3325 argv_2697, field argv_2697,
// @@ it is used as unique identifier for any variable.
// @@
// @@ This procedure permits to split the full variable identifier 
// @@ into 3 fields :
// @@ - the argv_1364
// @@ - the argv_3325 argv_2697
// @@ - the field argv_2697.
// @@
// @@ CONTRACT:
// @@ the full identifier must have a coherent size. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   
void argv_771::argv_1281 () {
	
	if (argv_1612.size() < (2 * argv_3347.size())) {
		argv_791 Ge ("argv_771", "argv_1281", "bad identifier format (1)", INTERNAL_ERROR);
		throw (Ge);
	}

	argv_1364 	= "";
	argv_3325  	= "";
	argv_1312	= "";	
	istringstream iss;
	iss.str (argv_1612);
	iss >> argv_1364 >> argv_3325 >> argv_1312;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   
// @@
// @@ CLASS: argv_771
// @@
// @@ FUNCTION: argv_1192
// @@
// @@ INPUT: none
// @@
// @@ RETURN VALUE:
// @@ a vector of string containing the formatted argv_981 argv_1314 that was parsed.
// @@
// @@ DESCRIPTION:
// @@ This function permits to generate a vector of string, this vector containing
// @@ the argv_3266 of the argv_981 argv_1314 parsing, it permits to check that parse was performed
// @@ succesfully and also to dump to log argv_1314. 
// @@
// @@ CONTRACT: none
// @@
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
vector<string> argv_771::argv_1192 (bool is_html) {
	string full_str 	= "";
	string his_file 	= "";
	string his_section	= "";

	vector<string> v_str;
	
	for (argv_1918=argv_2345.begin() ; argv_1918 != argv_2345.end() ; ++argv_1918) {
		argv_1612 = argv_1918->first;
		argv_1281();
		if (argv_1364 != his_file) {
			full_str = full_str + "argv_1314: " + argv_1364;
			his_file = argv_1364;
			// v_str.push_back (full_str);
			full_str = "";
		}

		if (his_section != argv_3325) {
			his_section = argv_3325;
			full_str = full_str + "[" + argv_3325 + "]";
			v_str.push_back (" ");
			v_str.push_back (full_str);
			full_str = "";
		}

		full_str =  full_str + "[" + his_section + "] " + argv_1312 + " = " + argv_1918->second;  
		v_str.push_back (full_str);
		full_str = "";
	}

	return (v_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ PROCEDURE: argv_770
// @@
// @@ INPUT: none
// @@
// @@ DESCRIPTION:
// @@ normal constructor of the 'argv_770' argv_2785.
// @@ Does nothing actually.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_770::argv_770() {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_1911
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose presence is to be 
// @@                       checked.
// @@
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_2697 is in 'varname' was found from argv_3325
// @@   whose argv_2697 is within parameter 'argv_3325'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a variable of argv_3695 argv_3379
// @@ is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_770::argv_1911 (std::string argv_3325, std::string varname) {
	bool ret = false;

	argv_1924 = argv_2181.find (argv_3325 + varname);

	if (argv_1924 != argv_2181.end()) {
		ret = true;
	}

	return (ret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_1909
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose presence is to be 
// @@                       checked.
// @@
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_2697 is in 'varname' was found from argv_3325
// @@   whose argv_2697 is within parameter 'argv_3325'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a multivalued variable of 
// @@ argv_3695 argv_3379 is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_770::argv_1909 (std::string argv_3325, std::string varname) {
	bool bret = false;
	argv_1922 = argv_2176.find (argv_3325 + varname);
	if (argv_1922 != argv_2176.end()) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_1912
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose presence is to be 
// @@                       checked.
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_2697 is in 'varname' was found from argv_3325
// @@   whose argv_2697 is within parameter 'argv_3325'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a variable of argv_3695 string
// @@ is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_770::argv_1912 (std::string argv_3325, std::string varname) {
	bool bret = false;
	{
		FILE * argv_1396 = fopen ("C:\\log.txt", "wb");
		std::map<string, string>::iterator iterz;
		fprintf (argv_1396, "============================");
		fprintf (argv_1396, "%d elements\r\n", argv_2182.size ());
		string s1, s2;
		for (iterz=argv_2182.begin() ; iterz != argv_2182.end() ; ++iterz) {
			s1 = iterz->first;
			s2 = iterz->second;
			fprintf (argv_1396, ":%s: -> :%s:\r\n", s1.c_str(), s2.c_str());
		}
		string stot = argv_3325 + varname;
		fprintf (argv_1396, "seached string : in argv_3325 :%s:, variable:%s: , argv_2007=%s", argv_3325.c_str(), varname.c_str(), stot.c_str());
		fclose (argv_1396);
	}

	argv_1925 = argv_2182.find (argv_3325 + varname);

	if (argv_1925 != argv_2182.end()) {
		bret = true;
	}
	return (bret);
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_1910
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose presence is to be 
// @@                       checked.
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_2697 is in 'varname' was found from argv_3325
// @@   whose argv_2697 is within parameter 'argv_3325'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a multivalued variable 
// @@ of argv_3695 string is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_770::argv_1910 (std::string argv_3325, std::string varname) {
	bool bret = false;
	argv_1923 = argv_2177.find (argv_3325 + varname);	
	if (argv_1923 != argv_2177.end()) {
		bret = true;
	}
	return (bret);
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ PROCEDURE: argv_3360
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose argv_3807 is to be 
// @@                       set.
// @@ DESCRIPTION:
// @@ This function permits to argv_576 a variable of argv_3695 argv_3379 to the 
// @@ container.
// @@
// @@ CONTRACT: 
// @@ The variable must not already present in container.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_770::argv_3360 (std::string argv_3325, std::string varname, argv_3379 argv_3807) {

	if (argv_1911(argv_3325, varname) == true) {
		std::string argv_3681 = "variable " + varname + " already present in argv_3325 " + argv_3325;
		argv_791 Ge ("argv_770", "argv_3360", argv_3681, VAR_ALREADY_PRESENT);
		throw (Ge);
	}

	argv_2181[argv_3325 + varname] = argv_3807;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_1679
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose argv_3807 is to be 
// @@                       retrieved.
// @@
// @@ RETURN VALUE: argv_3379: the argv_3807 retrieved
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the argv_3807 associated with a variable
// @@ that was previously argv_2117 from argv_981 argv_1314.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown
// @@   so if you want to ensure that the variable is present, please use
// @@   the function "argv_1911"
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_770::argv_1679 (std::string argv_3325, std::string varname) {
//	try {
		if (argv_1911(argv_3325, varname) == false) {
			std::string argv_3681 = "variable: " + varname + ": no such argv_3379 argv_3812 in argv_3325 :" + argv_3325 + ":";
			argv_791 Ge ("argv_770", "argv_1679", argv_3681, NO_SUCH_VAR);
			throw (Ge);
		}
/*	}
	catch (argv_791 ge) {
		char argv_3681[MAX_PATH];
		string argv_839;
		string fn_name;
		string argv_2693;
		int argv_1239;
		while (ge.argv_1669 (argv_839, fn_name, argv_2693, argv_1239) == true) {
			argv_3409 (argv_3681, MAX_PATH, "from class: %s, in function : %s : %s (argv_1239=%d)", argv_839.c_str(), fn_name.c_str(), argv_2693.c_str(), argv_1239);
			argv_3681[MAX_PATH - 1] = '\0';
			MessageBox (argv_2766, argv_3681, "Error", MB_OK|MB_ICONERROR);
		}
	}*/


	return (argv_1924->second);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ PROCEDURE: argv_3361
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose argv_3807 is to be 
// @@                       set.
// @@ DESCRIPTION:
// @@ This function permits to argv_576 a variable of argv_3695 string to the 
// @@ container.
// @@
// @@ CONTRACT: 
// @@ The variable must not already present in container.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_770::argv_3361 (std::string argv_3325, std::string varname, std::string argv_3807) {
	if (argv_1912 (argv_3325, varname) == true) {
		std::string argv_3681 = "variable '" + varname + "' already present in argv_3325 '" + argv_3325 + "'";
		argv_791 Ge ("argv_770", "argv_3361", argv_3681, VAR_ALREADY_PRESENT);
		throw (Ge);
	}

	argv_2182[argv_3325 + varname] = argv_3807;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_1683
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose argv_3807 is to be 
// @@                       retrieved.
// @@
// @@ RETURN VALUE: string: the argv_3807 retrieved
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the argv_3807 associated with a variable
// @@ that was previously argv_2117 from argv_981 argv_1314.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown
// @@   so if you want to ensure that the variable is present, please use
// @@   the function "argv_1912"
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
std::string argv_770::argv_1683 (std::string argv_3325, std::string varname) {
//	try {
		if (argv_1912 (argv_3325, varname) == false) {
			std::string argv_3681 = "(1) variable :" + varname + ": no such string variable in argv_3325 :" + argv_3325 + ":";
			argv_791 Ge ("argv_770", "argv_1683", argv_3681, NO_SUCH_VAR);
			throw (Ge);
		}
/*	}
	catch (argv_791 ge) {
		char argv_3681[MAX_PATH];
		string argv_839;
		string fn_name;
		string argv_2693;
		int argv_1239;
		while (ge.argv_1669 (argv_839, fn_name, argv_2693, argv_1239) == true) {
			argv_3409 (argv_3681, MAX_PATH, "from class: %s, in function : %s : %s (argv_1239=%d)", argv_839.c_str(), fn_name.c_str(), argv_2693.c_str(), argv_1239);
			argv_3681[MAX_PATH - 1] = '\0';
			MessageBox (argv_2766, argv_3681, "Error", MB_OK|MB_ICONERROR);
		}
	}*/

//	MessageBox (argv_2766, "argv_770::argv_1683", "", MB_OK);
	return (argv_1925->second);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_581
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose argv_3807 is to be 
// @@                       retrieved.
// @@
// @@ argv_3807: argv_3379: argv_2806 possible argv_3807 associated with the variable.
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to associate a argv_3807 to a given variable that
// @@ may have more than argv_2806 argv_3807, in order to argv_576 new values, just call
// @@ this function several times with new values.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_770::argv_581 (std::string argv_3325, std::string varname, argv_3379 argv_3807) {
	string argv_1612 = argv_3325 + varname;
	argv_1922 = argv_2176.find (argv_1612);
	if (argv_1922 == argv_2176.end()) {
		vector<argv_3379> v;
		v.push_back (argv_3807);
		argv_2176[argv_1612] = v;
	}
	else {
		(argv_1922->second).push_back (argv_3807);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_3358
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose argv_3807 is to be 
// @@                       retrieved.
// @@
// @@ _v: vector<argv_3379>: all possible values associated with the variable.
// @@
// @@ RETURN VALUE: none
// @@
// @@ DESCRIPTION:
// @@ This function permits to associate several values to a given variable that
// @@ may have more than argv_2806 argv_3807.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_770::argv_3358 (std::string argv_3325, std::string varname, const vector<argv_3379>& _v) {
	string argv_1612 = argv_3325 + varname;
	argv_1922 = argv_2176.find (argv_1612);
	if (argv_1922 != argv_2176.end()) { // already present or set
		std::string argv_3681 = "variable :" + varname + " in argv_3325 \'"+ argv_3325 + "\' already has a argv_3807(s)";
		argv_791 Ge ("argv_770", "argv_3358", argv_3681, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // was not already present or set
		argv_2176[argv_1612] = _v;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_1664
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose argv_3807 is to be 
// @@                       retrieved.
// @@
// @@
// @@ IO: vector<argv_3379> : the set of values associated with the variable
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the values associated with a variable
// @@ that was previously argv_2117 from argv_981 argv_1314.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_770::argv_1664 (std::string argv_3325, std::string varname, vector<argv_3379>& _v_result) {
	_v_result.clear ();
	string argv_1612 = argv_3325 + varname;
	argv_1922 = argv_2176.find (argv_1612);
	if (argv_1922 == argv_2176.end()) {
		std::string argv_3681 = "(2) variable :" + varname + ": no such string variable in argv_3325 :" + argv_3325 + ":";
		argv_791 Ge ("argv_770", "argv_1664", argv_3681, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // was found from container
		_v_result = argv_1922->second;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_582
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose argv_3807 is to be 
// @@                       retrieved.
// @@
// @@ argv_3807: argv_3379: the values associated with the variable.
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to associate a argv_3807 to a given variable that
// @@ may have more than argv_2806 argv_3807, in order to argv_576 new values, just call
// @@ this function several times with new values.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_770::argv_582 (std::string argv_3325, std::string varname, std::string argv_3807) {
	string argv_1612 = argv_3325 + varname;
	argv_1923 = argv_2177.find (argv_1612);
	if (argv_1923 == argv_2177.end()) {
		vector<string> v;
		v.push_back (argv_3807);
		argv_2177[argv_1612] = v;
	}
	else {
		(argv_1923->second).push_back (argv_3807);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_3359
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose argv_3807 is to be 
// @@                       retrieved.
// @@
// @@ _v: vector<string> : the set of values to be associated with the 
// @@                      variable.
// @@
// @@ RETURN VALUE: none
// @@ 
// @@ DESCRIPTION:
// @@ This function permits to associate a set of values to a given variable 
// @@ that may have more than argv_2806 argv_3807.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_770::argv_3359 (std::string argv_3325, std::string varname, const vector<string>& _v) {
	string argv_1612 = argv_3325 + varname;
	argv_1923 = argv_2177.find (argv_1612);
	if (argv_1923 != argv_2177.end()) {
		std::string argv_3681 = "variable :" + varname + " in argv_3325 \'"+ argv_3325 + "\' already has a argv_3807(s)";
		argv_791 Ge ("argv_770", "argv_3359", argv_3681, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // ok, values not already assigned
		argv_2177[argv_1612] = _v;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ FUNCTION: argv_1665
// @@
// @@ INPUT: 
// @@ argv_3325: std::string: the argv_2697 of the argv_3325 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_2697 of the variable whose argv_3807 is to be 
// @@                       retrieved.
// @@
// @@
// @@ IO: vector<string> : the set of values associated with the variable
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the values associated with a variable
// @@ that was previously argv_2117 from argv_981 argv_1314.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_770::argv_1665 (std::string argv_3325, std::string varname, vector<string>& _v_result) {
	_v_result.clear ();
	string argv_1612 = argv_3325 + varname;
	argv_1923 = argv_2177.find (argv_1612);
	if (argv_1923 == argv_2177.end()) {
		std::string argv_3681 = "(3) variable :" + varname + ": no such string variable in argv_3325 :" + argv_3325 + ":";
		argv_791 Ge ("argv_770", "argv_1665", argv_3681, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // was found from container
		_v_result = argv_1923->second;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_768 
// @@
// @@ FUNCTION: argv_768 
// @@
// @@ INPUT: none
// @@
// @@ OUTPUT: none
// @@
// @@ IO: none
// @@
// @@ RETURN VALUE: none
// @@
// @@ DESCRIPTION:
// @@ Normal constructor of the argv_768 argv_2785.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_768::argv_768 () {
	argv_2097 = false;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_768
// @@
// @@ FUNCTION: argv_2094
// @@
// @@ INPUT: 
// @@ _filename: string: the argv_2697 of the configuration argv_1314 to argv_2094.
// @@
// @@ OUTPUT: none
// @@
// @@ IO: none
// @@
// @@ RETURN VALUE: 
// @@ bool: true if configuration argv_1314 parsing was succesful.
// @@       false otherwise.
// @@
// @@ DESCRIPTION:
// @@ This function permits to argv_2094 the configuration argv_1314 given as 
// @@ a parameter.
// @@
// @@ CONTRACT: 
// @@ - the configuration argv_1314 must not have been already argv_2117. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_768::argv_2094 (string _filename) {
	bool bret = true;
	if (argv_2097 == true) {
		argv_1688.argv_2146.argv_2142 (argv_1242, "argv_768::argv_2094 - illegal call when argv_981 argv_1314 already argv_2117 !");
		bret = false;
	}
	else { // not already argv_2117 
		try {
			argv_1364 = _filename;
			argv_1688.argv_2146.argv_2142 (argv_2763, "============ parsing argv_981 argv_1314 ============");
			argv_1688.argv_2146.argv_2142 (argv_2763, "argv_1314 : ", argv_1364.c_str());
			argv_984.argv_2840 (argv_1364);
			vector<string> v_str;
			v_str = argv_984.argv_1192 ();
			argv_3379 argv_2744 = v_str.size();
			for (argv_3379 i=0 ; i<argv_2744 ; i++) {	
				argv_1688.argv_2146.argv_2142 (argv_2763, v_str[i].c_str());
			}
			argv_1688.argv_2146.argv_2142 (argv_2763, " ");
			bret 	 = argv_2964 ();
		}
		catch (argv_791 Ge) {
			string argv_839="";
			string fn_name   = "";
			string argv_2693       = "";
			argv_3379 argv_1239;	
			char argv_3681[argv_983];
			while (Ge.argv_1669 (argv_839, fn_name, argv_2693, argv_1239) == true) {
				argv_3409 (argv_3681, argv_983, "+++ ERROR: parse error: %s (argv_1239=%d)", argv_2693.c_str(), argv_1239);
				argv_3681[argv_983 - 1]='\0';
				argv_1688.argv_2146.argv_2142 (argv_1242, argv_3681);
			}
			bret = false;
		}
	}
	if (bret == true) {
		argv_2097 = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


