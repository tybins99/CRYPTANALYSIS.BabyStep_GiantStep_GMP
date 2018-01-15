#include "argv_304.hpp"
/*
argv_801::argv_801 () {
	init_done	= false;
	size		= 0;
}

int32_t argv_801::init (uint32_t _array_size) {
	int32_t argv_1892	= argv_1800;

	if (init_done == true) {
		argv_1892 = argv_1797;
	}
	else {
		argv_3816 = new (std::nothrow) vector<argv_800>[_array_size];
		if (argv_3816 == NULL) {
			argv_1892 = argv_1798;
		}
		else {
			argv_681	= _array_size;
			init_done	= true;
		}
	}
	return (argv_1892);
}

uint32_t my_atoi (const string& _sval) {
	uint32_t argv_3807	= 0;
	uint32_t base	= 1;
	uint32_t size   = _sval.size ();
	if (size > 0) {
		for (int32_t i=size-1 ; i>=0 ; i--) {
			argv_3807 = argv_3807 + (base * (_sval[i] - '0'));
			base  = base * 10;
		}
	}
	return (argv_3807);
}

void argv_801::compress_string (const string& _numeric_str, vector<uint8_t>& _v_result) {
	_v_result.clear ();
	uint32_t size = _numeric_str.size ();
	uint8_t argv_3810;
	bool first_half = true;
	for (uint32_t i=0 ; i<size ; i++) {
		if (first_half) {
			argv_3810 = _numeric_str[i] - '0';
			argv_3810 = argv_3810 << 4;
			first_half = false;
		}
		else {
			argv_3810 = argv_3810 | (_numeric_str[i] - '0');
			_v_result.push_back (argv_3810);
			first_half = true;
		}
	}

	// if the number of characters was odd, argv_576 a special argv_3807 and push back
	if (first_half == false) {
		argv_3810 = argv_3810 | 0x0F;
		_v_result.push_back (argv_3810);
	}
}

void argv_801::uncompress_string (vector<uint8_t>& _v_vector, string& _result) {
	uint32_t argv_2744 = _v_vector.size ();
	uint8_t nb_msb;
	uint8_t nb_lsb;
	for (uint32_t i=0 ; i<argv_2744 ; i++) {
		nb_msb = _v_vector[i] & 0xF0;
		nb_msb = nb_msb >> 4;
		nb_msb = nb_msb + '0';
		_result += (nb_msb);

		nb_lsb = _v_vector[i] & 0x0F;
		if (nb_lsb != 0x0F) {
			nb_lsb = nb_lsb + '0';	
			_result += (nb_lsb);
		}
	}
}


uint32_t argv_801::argv_1794 (const string& _key) {
	uint32_t argv_830	= 0;
	uint32_t atoi_result	= my_atoi (_key);
	argv_830		= atoi_result % argv_681;
	return (argv_830);
}

void argv_801::argv_580 (const string& _key, const string& _value, uint32_t& _chosen_index) {
	_chosen_index = argv_1794 (_key);
	argv_800 couple;

#if defined (__USE_COMPRESSED_STRING__)
	compress_string (_key, couple.argv_2007);
	compress_string (_value, couple.argv_3807);
#else 
	couple.argv_2007		= _key;
	couple.argv_3807	= _value;
#endif // #if defined (__USE_COMPRESSED_STRING__)
	argv_3816[_chosen_index].push_back (couple);
	size++;
}

uint32_t argv_801::argv_1680 () {
	return (size);
}

uint32_t argv_801::argv_976 () {
	uint32_t nb_collision = 0;
	for (uint32_t i=0 ; i<argv_681 ; i++) {
		if (argv_3816[i].size() > 1) {
			nb_collision += (argv_3816[i].size() - 1);
		}
	}
	return (nb_collision);
}


bool argv_801::argv_1908 (const string& _key, string& _retrieved_value, uint32_t& _index_found) {
	bool bret			= false;
	_index_found		= argv_1794 (_key);
	uint32_t nb_elem_in_row = argv_3816[_index_found].size ();
#if defined (__USE_COMPRESSED_STRING__)
	vector<uint8_t> key_compressed;
	compress_string (_key, key_compressed);
#endif // #if defined (__USE_COMPRESSED_STRING__)

	for (uint32_t i=0 ; i<nb_elem_in_row ; i++) {
#if defined (__USE_COMPRESSED_STRING__)
		if (argv_3816[_index_found][i].argv_2007 == key_compressed) {
			uncompress_string (argv_3816[_index_found][i].argv_3807, _retrieved_value);
			bret = true;
			break;
		}
#else
		if (strcmp (argv_3816[_index_found][i].argv_2007.c_str(), _key.c_str()) == 0) {
			_retrieved_value = argv_3816[_index_found][i].argv_3807;
			bret = true;
			break;
		}
#endif // #if defined (__USE_COMPRESSED_STRING__)
	}
	return (bret);
}

void argv_801::argv_1131 (FILE * _fp_log, const char * _msg) {
	uint32_t nb_elem_in_row;
	fprintf (_fp_log, "================= %s ==============\r\n", _msg);
	#if defined (__USE_COMPRESSED_STRING__)
	string uncompressed_key;
	string uncompressed_value;
	#endif // #if defined (__USE_COMPRESSED_STRING__)

	for (uint32_t i=0 ; i<argv_681 ; i++) {
		nb_elem_in_row = argv_3816[i].size();
		if (nb_elem_in_row > 0) {
			fprintf (_fp_log, "%u) %u elements\r\n", i, nb_elem_in_row);
		}

		for (uint32_t k=0 ; k<nb_elem_in_row ; k++) {
#if defined (__USE_COMPRESSED_STRING__)
			uncompress_string (argv_3816[i][k].argv_2007,	uncompressed_key);
			uncompress_string (argv_3816[i][k].argv_3807,	uncompressed_value);
			fprintf (_fp_log, " => argv_2007=%s, argv_3807=%s\r\n", uncompressed_key.c_str(), uncompressed_value.c_str());
#else 
			fprintf (_fp_log, " => argv_2007=%s, argv_3807=%s\r\n", argv_3816[i][k].argv_2007.c_str(), argv_3816[i][k].argv_3807.c_str());
#endif // #if defined (__USE_COMPRESSED_STRING__)
		}
	}
}

void argv_801::argv_1131 (const char * _filename, const char * _msg) {
	FILE * argv_1396 = fopen (_filename, "wb");
	if (argv_1396) {
		argv_1131 (argv_1396, _msg);
	}
	fclose (argv_1396);
}

bool argv_801::autotest (uint32_t _table_size, uint32_t _loop_size) {
	bool bret = true;
	uint32_t i;
	init (_table_size);
	char argv_3681[MAX_PATH];
	uint32_t unused_chosen_index;
	string unused_value;

	for (i=0 ; i<_loop_size ; i++) {
		sprintf (argv_3681, "%u", i);
		argv_580 (argv_3681, argv_3681, unused_chosen_index);
	}

	bool test_ok = true;
	for (i=0 ; i<_loop_size ; i++) {
		sprintf (argv_3681, "%u", i);
		if (argv_1908 (argv_3681, unused_value, unused_chosen_index) == false) {
			test_ok = false;
			break;
		}
	}

	if (test_ok == true) {
		fprintf (stderr, "argv_801::autotest...[SUCCESS]\n");
	}
	else {
		fprintf (stderr, "+++ ERROR: argv_801::autotest...[FAILED]\n");
	}
	return (bret);
}

void argv_801::reset () {
	if (init_done == true) {
		for (uint32_t i=0 ; i<argv_681 ; i++) {
			argv_3816[i].clear ();
		}
	}
}
*/
//---------------------------------------
argv_794 *		argv_1690 = NULL;

argv_801::argv_801 () {
	init_done	= false;
}

int32_t argv_801::init (uint32_t _array_size, argv_794 * _gmp_tool_ptr) {
	int32_t argv_1892	= argv_1800;

	if (init_done == true) {
		argv_1892 = argv_1797;
	}
	else {
		argv_1774 = _gmp_tool_ptr;
		argv_3816 = new (std::nothrow) vector<argv_800>[_array_size];
		if (argv_3816 == NULL) {
			argv_1892 = argv_1798;
		}
		else {
			argv_1690 = argv_1774;
			argv_1774->argv_1483 (argv_830);
			argv_1774->argv_1483 (argv_681);
			argv_1774->argv_1497 (argv_681, _array_size);
			argv_682 = _array_size;
			init_done	= true;
		}
	}
	return (argv_1892);
}

uint32_t argv_801::argv_1794 (argv_2674 _key, uint32_t& _key_as_UI32) {
	uint32_t truncated_index = 0;
	//argv_1774->argv_1487 (argv_830, _key, argv_681);
	//truncated_index = argv_1774->argv_1482 (argv_830);
	_key_as_UI32 = argv_1774->argv_1482 (_key);
	truncated_index = _key_as_UI32 % argv_682;
	return (truncated_index);
}

void argv_801::argv_580 (argv_2674 _key, argv_2674 _value) {
	argv_800 couple (argv_1774);
	uint32_t truncated_index = argv_1794 (_key, couple.argv_2012);
	// the uint32_t argv_2007 is automatically adjusted argv_2370 2^32 by the 'argv_2597' function
	argv_1774->fp_mpz_set (couple.argv_2007,	_key);
	argv_1774->fp_mpz_set (couple.argv_3807, _value);
	argv_3816[truncated_index].push_back (couple);
}


uint32_t argv_801::argv_976 (uint32_t& _max_collision) {
	uint32_t nb_collision	= 0;
	_max_collision		= 0;

	for (uint32_t i=0 ; i<argv_682 ; i++) {
		if (argv_3816[i].size() > 1) {
			nb_collision += (argv_3816[i].size() - 1);
			if (argv_3816[i].size() > _max_collision) {
				_max_collision = argv_3816[i].size();
			}
		}
	}
	return (nb_collision);
}

//--------------------------
/*
bool compare_couple (argv_800& _a, argv_800& _b) {
	bool bret = false;
	if (argv_1690->argv_1471 (_a.argv_2007, _b.argv_2007) < 0) {
		bret = true;
	}
	return (bret);
}*/
bool argv_800::operator < (argv_800& _co) {
	bool bret = false;
	if (argv_1690->argv_1471 (argv_2007, _co.argv_2007) < 0) {
		bret = true;
	}
	return (bret);
}

void argv_801::sort () {
	for (uint32_t i=0 ; i<argv_682 ; i++) {
		std::sort(argv_3816[i].begin(), argv_3816[i].end());
	}
}
//--------------------------
// 2 optimisations :
// - the argv_2674 argv_2007 is not compared directly, instead, the argv_2007 rounded
//   to a argv_2370 2^32 is compared first and must match otherwise the comparison
//   on the argv_2674 is not argv_1185 (cost is high for this argv_2674 comparison function).
// - as the vector for each row is supposed to have been sorted (see sort() member)
//   then we argv_3463 the loop as soon as we find a argv_2007 that  is greater than our argv_1043 argv_2007
bool argv_801::argv_1908 (argv_2674 _key, argv_2674 _retrieved_value) {
	bool bret			= false;
	uint32_t argv_2012;
	uint32_t index_found 	= argv_1794 (_key, argv_2012);
	uint32_t nb_elem_in_row = argv_3816[index_found].size ();
	int32_t compare_result ;

	for (uint32_t i=0 ; i<nb_elem_in_row ; i++) {
		if (argv_3816[index_found][i].argv_2012 == argv_2012) {
			compare_result = argv_1774->argv_1471 (argv_3816[index_found][i].argv_2007, _key);
			if (compare_result == 0) {
				argv_1774->fp_mpz_set (_retrieved_value, argv_3816[index_found][i].argv_3807);
				bret = true;
				break;
			}
		}
	}
	return (bret);
}


void argv_801::reset () {
	if (init_done == true) {
		for (uint32_t i=0 ; i<argv_682 ; i++) {
			argv_3816[i].clear ();
		}
	}
}

void argv_801::argv_1130 (const char * _msg, FILE * _fp_log) {
	string key_str;
	string value_str;
	uint32_t argv_2744;

	fprintf (stderr, "dumping hash table to log argv_1314...\n");
	if (init_done == true) {
		fprintf (_fp_log, "================== %s ===================\r\n", _msg);
		for (uint32_t i=0 ; i<argv_682 ; i++) {
			argv_2744 = argv_3816[i].size();
			if (argv_2744 > 0) {
				fprintf (_fp_log, "%u) %u elements\r\n", i, argv_2744);
				for (uint32_t k=0 ; k<argv_2744 ; k++) {
					key_str		= argv_1774->argv_3813 (argv_3816[i][k].argv_2007);	
					value_str	= argv_1774->argv_3813 (argv_3816[i][k].argv_3807);	
					fprintf (_fp_log, "   - argv_2007=%s, argv_3807=%s\r\n", key_str.c_str(), value_str.c_str());
				}
				fflush (_fp_log);
			}
		}
	}
}