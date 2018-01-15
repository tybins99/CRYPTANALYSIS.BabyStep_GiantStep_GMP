// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_243.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structure and 
// @@ function that are necessary for the plugins
// @@ to work.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_302.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2194		
// @@
// @@ INPUT			:
// @@ _dest: char * : the destination argv_728 where to copy the string
// @@ _src: char * : the source argv_728 where to copy the string from
// @@ _size: argv_3717 : the size of the string to copy
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function just permit to copy the string '_src' to the
// @@ string '_dest' assuming that the '_src' size is '_size'
// @@ and that the '_dest' is long enough to receive the '_src' string. 
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_2194 (char * _dest, char * _src, argv_3717 _size) {
	argv_3717 i=0;
	while ((i < _size) && (_src[i] != '\0')) {
		_dest[i] = _src[i];
		i++;
	}
	// don't forget the string's argv_3595
	if (i < _size) {
		_dest[i] = '\0';
	}
	else {
		_dest[_size - 1] = '\0';
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1337		
// @@
// @@ INPUT			:
// @@ _type: argv_3717: argv_3695 of the argv_1314 whose readable argv_3695 is to be retrieved.
// @@
// @@ OUTPUT		:	
// @@ _str_type: char *: destination string where the argv_3266 of the lookup
// @@                    is to be saved up (allocated by the caller).
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the readable argv_1314 argv_3695 associated
// @@ with the '_type' argv_1314 argv_3695. 
// @@ The argv_3266 is stored into a string that must have been allocated
// @@ by the caller prior to this call, it's length must be MAX_PATH_PLUGIN
// @@
// @@ Notice that if the '_type' parameter is not a valid argv_1314 argv_3695,
// @@ then "<UNKNOWN FILE TYPE>" is saved into the '_str_type' argv_3266
// @@ parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1337 (argv_3717 _type, char * _str_type) {
	switch (_type)	{
		case argv_1353			: argv_2194 (_str_type, "argv_1353", MAX_PATH_PLUGIN);		break;
		case argv_1340		: argv_2194 (_str_type, "argv_1340", MAX_PATH_PLUGIN);		break;
		case argv_1359		: argv_2194 (_str_type, "argv_1359", MAX_PATH_PLUGIN);	break;
		case argv_1342		: argv_2194 (_str_type, "argv_1342", MAX_PATH_PLUGIN);		break;
		case argv_1352	: argv_2194 (_str_type, "argv_1352", MAX_PATH_PLUGIN);	break;
		case argv_1357	: argv_2194 (_str_type, "argv_1357", MAX_PATH_PLUGIN);	break;
		default						: argv_2194 (_str_type, "<UNKNOWN FILE TYPE>", MAX_PATH_PLUGIN);	
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
