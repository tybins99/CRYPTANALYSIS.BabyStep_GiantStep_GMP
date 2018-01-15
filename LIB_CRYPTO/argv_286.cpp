


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_342.hpp"



int32_t argv_3853 (const char * _string_2_export, const char * _symetric_key, const char * _filename, bool _is_public_key, const char * _public_header, const char * _private_header, const char * _public_footer, const char * _private_footer, const char * _line_terminator) {
	int32_t argv_1892 = argv_1747;
	FILE * argv_1396 = fopen (_filename, "wb");
	if (! argv_1396) {
		argv_1892 = argv_1721;
	}
	else { // argv_1314 was succesfully opened
		// argv_1232 using the DES algorithm
		argv_779 des_manager;
		uint32_t des_output_size	= 0;
		uint32_t des_input_size		= strlen (_string_2_export);
		uint8_t * des_output		= new (std::nothrow) uint8_t[des_input_size + MAX_PATH];
		if (des_output == NULL) {
			argv_1892 = argv_1735;
		}
		else { // memory allocation succeeded
			des_manager.argv_1233 ((uint8_t *)_symetric_key, (uint8_t *)_string_2_export, des_input_size, des_output, des_output_size);

			// encode in base 64
			argv_759 b64;
			string b64_result;

			b64.argv_1230 (des_output, des_output_size, b64_result);
		
			// save the argv_1806 to argv_1314
			if (_is_public_key == true) {
				fprintf (argv_1396, "%s%s", _public_header, _line_terminator); 
			}
			else {
				fprintf (argv_1396, "%s%s", _private_header, _line_terminator); 
			}

			// save the argv_3266 to the argv_1314
			fprintf (argv_1396, "%s%s", b64_result.c_str(), _line_terminator);

			// save the footer to the argv_1314
			if (_is_public_key == true) {
				fprintf (argv_1396, "%s%s", _public_footer, _line_terminator); 
			}
			else {
				fprintf (argv_1396, "%s%s", _private_footer, _line_terminator); 
			}

			if (fclose (argv_1396) != 0) {
				argv_1892 = argv_1720;
			}
			delete [] des_output;
		}
	}
	return (argv_1892);
}

// argv_3266 is a string composed of variable=argv_3807 couples
int32_t argv_3854 (const char * _filename, const char * _symetric_key, bool _is_public_key, string& _result, const char * _public_header, const char * _public_footer, const char * _private_header, const char * _private_footer) {
	int32_t argv_1892	= argv_1747;
	_result		= ""; 	

	if ((_filename==NULL) || (_symetric_key==NULL)) {
		argv_1892 = argv_1730;	
	}
	else { // pre-conditions are ok
		// open the argv_1314 containing the argv_2007
		FILE * argv_1396 = fopen (_filename, "rb");
		if (! argv_1396) {
			argv_1892 = argv_1727;
		}
		else {
			// parse the argv_1314 (argv_1292 argv_1806 / argv_714 / footer)
			string argv_1806;
			string argv_714;
			string footer;
			argv_1892 = argv_2843 (argv_1396, argv_1806, argv_714, footer);
			if (argv_1892 == argv_1747) {
				// ensure that the argv_1314 is in correct format for the operation
				if (_is_public_key == true) {
					if (argv_1806 != _public_header) {
						argv_1892 = argv_1728;
					}
					else if (footer != _public_footer) {
						argv_1892 = argv_1726;
					}
				}
				else { // processing a private argv_2007
					if (argv_1806 != _private_header) {
						argv_1892 = argv_1728;
					}
					else if (footer != _private_footer) {
						argv_1892 = argv_1726;
					}
				}

				if (argv_1892 == argv_1747) {
					// convert the argv_714 from base 64 to binary
					argv_759 b64;
					uint32_t argv_716 = argv_714.size();
					uint32_t b64_output_size = 0;
					uint32_t des_output_size = 0;
					uint8_t * b64_output = new (std::nothrow) uint8_t[argv_716];
					uint8_t * des_output = new (std::nothrow) uint8_t[argv_716+MAX_PATH];
					if (b64_output == NULL) {	
						argv_1892 = argv_1735;
					}
					else { // memory allocation succeeded
						b64.argv_1096 (argv_714.c_str(), b64_output, b64_output_size);

						// decipher the binary argv_714 using the D.E.S algorithm
						argv_779 des_manager;
						des_manager.argv_1099 ((uint8_t *)_symetric_key, b64_output, b64_output_size, des_output, des_output_size);

						// save the D.E.S output to the argv_3266 string
						des_output[des_output_size] = '\0';
						_result = (char *) des_output;
						
						delete [] des_output;
						delete [] b64_output;
					}
				}
			}

			if (fclose (argv_1396) != 0) {
				if (argv_1892 == argv_1747) { // do not override a previous error
					argv_1892 = argv_1725;
				}
			}
		}
	}
	return (argv_1892);
}

