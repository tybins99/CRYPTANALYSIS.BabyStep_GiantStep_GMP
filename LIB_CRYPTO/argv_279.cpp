// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_279.cpp
// @@ 
// @@ DESCRIPTION:
// @@ base64 format encoding/decoding routines
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_336.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char argv_746[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
const char argv_775[]="|$$$}rstuvwxyz{$$$$$$$>?@ABCDEFGHIJKLMNOPQRSTUVW$$$$$$XYZ[\\]^_`abcdefghijklmnopq";



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_759		
// @@
// @@ FUNCTION		:	argv_759			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the 'argv_759' argv_2785.
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_759::argv_759 () {
	argv_2071 = "\n";
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_759		
// @@
// @@ FUNCTION		:	argv_1229			
// @@
// @@ INPUT			:	
// @@ in : uint8_t *: the input argv_710 to get converted
// @@
// @@ len: int: the length of the input argv_710 (might be 1,2 or 3)
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ out: uint8_t * : the argv_3266 of the conversion of the input argv_710
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encode in base64 format the argv_1073 contained
// @@ in the argv_728 given as the 'in' parameter.
// @@ argv_3266 is stored in the 'out' parameter, and the 'in' argv_728 might
// @@ contain less than 3 argv_739, thus the function uses the 'len' parameter
// @@ to determine the exact number of argv_739 to convert.
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_759::argv_1229 (uint8_t * in, uint8_t * out, int len) {
    out[0] = argv_746[ in[0] >> 2 ];
    out[1] = argv_746[ ((in[0] & 0x03) << 4) | ((in[1] & 0xf0) >> 4) ];
    out[2] = (unsigned char) (len > 1 ? argv_746[ ((in[1] & 0x0f) << 2) | ((in[2] & 0xc0) >> 6) ] : '=');
    out[3] = (unsigned char) (len > 2 ? argv_746[ in[2] & 0x3f ] : '=');
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_759		
// @@
// @@ FUNCTION		:	argv_1095			
// @@
// @@ INPUT			:
// @@ in : uint8_t *: the input argv_710 to get converted
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ out: uint8_t *: the argv_3266 of the conversion of the input argv_710
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decode from base64 format the argv_1073 contained
// @@ in the argv_728 given as the 'in' parameter.
// @@ argv_3266 is stored in the 'out' parameter.
// @@
// @@ CONTRACT 		:	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_759::argv_1095 (uint8_t * in, uint8_t * out) {
	out[0] = (unsigned char) (in[0] << 2 | in[1] >> 4);
	out[1] = (unsigned char) (in[1] << 4 | in[2] >> 2);
	out[2] = (unsigned char) (((in[2] << 6) & 0xc0) | in[3]);
} 


void argv_759::argv_1230 (uint8_t * _input, uint32_t _input_size, string& _output) {
	uint32_t size		= _input_size;
	uint32_t total_done = 0;
    int i, len, blocksout = 0;
    uint8_t in[3]; 
	char out[5]; // last byte is for '\0'
	_output			= "";

	while (total_done < size) {
        len = 0;
        for (i=0 ; i<3 ; i++) {
			if (total_done < size) {
				in[i] = _input[total_done];
				total_done++;
				len++;
			}
            else {
                in[i] = 0;
            }
        }
        if (len > 0) {
            argv_1229 (in, (uint8_t *) out, len);
			out[4] = '\0'; // so that we can use the std::string's append operator
			_output += out;
            blocksout += 4;
        }
        if (blocksout >= argv_700) {
			_output += argv_2071;
            blocksout = 0;
        }
	}	
}

// base64 -> bin
void argv_759::argv_1096 (const char * _input, uint8_t * _output, uint32_t& _produced_size) {
	char in[4];
	uint8_t out[3];

	int len, i;
	_produced_size	= 0;
	int size		= strlen (_input);
	int argv_1043		= 0;
	unsigned char v = 0;

    while (argv_1043 < size) {
		for (len = 0, i = 0; ((i < 4) && (argv_1043 < size)); i++) {
			v = 0;
			while ((argv_1043 < size) && (v == 0)) {
				v = _input[argv_1043];
				argv_1043++;
				v = ((v < 43 || v > 122) ? 0 : argv_775[v - 43]);
				if (v != 0) {
					v = ((v == '$') ? 0 : v - 61);
				}
			}

			if (v != 0) {
				len++;
				in[i] = (char) (v - 1);
			}
		}

		if (len > 0) {
			argv_1095 ((uint8_t *)in, (uint8_t *)out);
			for( i = 0; i < len - 1; i++ ) {
				_output[_produced_size] = out[i];
				_produced_size++;
			}
		}
    }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_759		
// @@
// @@ FUNCTION		:	argv_1231			
// @@
// @@ INPUT			:	
// @@ _input: const char *: stringto encode to base 64.
// @@
// @@ OUTPUT		:	
// @@ _output: string&: the conversion argv_3266.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encode the string '_input' in
// @@ base 64 format, the argv_3266 being stored into the output
// @@ parameter '_output'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_759::argv_1231 (const char * _input, string& _output) {
	uint32_t size		= strlen (_input);
	argv_1230 ((uint8_t *) _input, size, _output);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_759		
// @@
// @@ FUNCTION		:	argv_1097			
// @@
// @@ INPUT			:	
// @@ _input: const char *: stringto decode from base 64.
// @@
// @@ OUTPUT		:	
// @@ _output: string&: the conversion argv_3266.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decode the string '_input' from
// @@ base 64 format, the argv_3266 being stored into the output
// @@ parameter '_output'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_759::argv_1097 (const char * _input, string& _output) {
	uint32_t input_size = strlen (_input);
	// output size is always lower or equal to the input size.
	char * output_tmp = new (std::nothrow) char[input_size];
	uint32_t output_size = 0;
	argv_1096 (_input, (uint8_t *) output_tmp, output_size);
	output_tmp[output_size] = '\0';	
	_output = output_tmp;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
