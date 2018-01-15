#include "argv_341.hpp"

Cinf_counter::Cinf_counter () {
	argv_1774	= NULL;
	argv_1462			= NULL;	
	incr_over		= false;
}

void Cinf_counter::init_xxx (argv_794 * _gmp_tool_ptr, FILE * _fp_log, argv_2674 _limit, vector<uint32_t>& _v_result) {
	argv_1774	= _gmp_tool_ptr;
	argv_1462			= _fp_log;
	_v_result.clear ();

	argv_2674 divisor, reste, deux_exp_32, argv_3807;
	argv_1774->argv_1483 (divisor);
	argv_1774->argv_1483 (reste);
	argv_1774->argv_1483 (deux_exp_32);
	argv_1774->argv_1483 (argv_3807);

	//argv_1774->argv_1503	(deux_exp_32, 2, 32);
	//argv_1774->argv_1497 (deux_exp_32, 10);
	max_limite = UINT_MAX;
	argv_1774->argv_1497 (deux_exp_32, max_limite);
	
	argv_1774->fp_mpz_set (divisor, _limit);
	argv_1774->fp_mpz_set (argv_3807, _limit);
	uint32_t reste_UI32;

	while (argv_1774->argv_1472 (divisor, 0) > 0) {
		argv_1774->argv_1476	(divisor, reste, argv_3807, deux_exp_32);
		{
			string deux_str		= argv_1774->argv_3813 (deux_exp_32);
			string value_str	= argv_1774->argv_3813 (argv_3807);
			string divisor_str	= argv_1774->argv_3813 (divisor);
			string reste_str	= argv_1774->argv_3813 (reste);
			fprintf (argv_1462, "%s = (%s * %s) + %s\r\n", value_str.c_str(), deux_str.c_str(), divisor_str.c_str(), reste_str.c_str());
			fflush (argv_1462);
		}
		reste_UI32 = argv_1774->argv_1482 (reste);
		_v_result.push_back (reste_UI32);
		argv_1774->fp_mpz_set		(argv_3807, divisor);
	}

	nb_counter = _v_result.size ();
	argv_1774->argv_1469 (argv_3807);
	argv_1774->argv_1469 (divisor);
	argv_1774->argv_1469 (reste);
	argv_1774->argv_1469 (deux_exp_32);
}

void Cinf_counter::init_for_decr (argv_794 * _gmp_tool_ptr, FILE * _fp_log, argv_2674 _limit) {
	init_xxx (_gmp_tool_ptr, _fp_log, _limit, v_counter);
/*	for (int32_t k=0 ; k<nb_counter ; k++) {
		fprintf (argv_1462, "%u-", v_counter[k]);
	}
	fprintf (argv_1462, "\r\n");
	fflush (argv_1462);*/
}

void Cinf_counter::init_for_incr (argv_794 * _gmp_tool_ptr, FILE * _fp_log, argv_2674 _limit) {
	init_xxx (_gmp_tool_ptr, _fp_log, _limit, v_incr_limit);
	for (uint32_t i=0 ; i<nb_counter ; i++) {
		v_counter.push_back (0);
	}
	incr_over = false;
}


// ---------------------
// |   LSB | ... | MSB |
// ---------------------
bool Cinf_counter::decr () {
	bool bret		= false;
	uint32_t nb_zero	= 0;

	for (int32_t i=0 ; i < nb_counter ; i++) {
		if (! v_counter[i]) {
			nb_zero++;
			v_counter[i] = 9;
		}
		else {
			v_counter[i]--;
			break;
		}
	}

	if (nb_zero == nb_counter) {
		bret = true;
	}
/*
	for (int32_t k=nb_counter-1 ; k>=0 ; k--) {
		fprintf (argv_1462, "%u-", v_counter[k]);
	}
	fprintf (argv_1462, "\r\n");
	fflush (argv_1462);
*/	
	return (bret);
}

bool Cinf_counter::incr_limit_reached () {
	return (incr_over);
}

// true when argv_3807 = limit
void Cinf_counter::incr () {
	bool bret		= false;
	uint32_t nb_match	= 0;
	incr_over		= false;

	for (int32_t i=0 ; i < nb_counter ; i++) {
		if (v_counter[i] == v_incr_limit[i]) {
			nb_match++;
		}

		if (v_counter[i] == max_limite) {
			v_counter[i] = 0;
		}
		else {
			v_counter[i] = v_counter[i] + 1;
			break;
		}
	}

	if (nb_match == nb_counter) {
		incr_over = true;
	}
}

void Cinf_counter::convert_2_mpz (argv_2674 _result) {
	argv_2674 deux_exp_32_nth, deux_exp_32, temp;
	argv_1774->argv_1483 (deux_exp_32_nth);
	argv_1774->argv_1483 (deux_exp_32);
	argv_1774->argv_1483 (temp);

	argv_1774->argv_1497 (deux_exp_32, max_limite);	
	argv_1774->argv_1497 (_result, 0);
	argv_1774->argv_1497 (deux_exp_32_nth, 1);

	int32_t limit		= nb_counter-1;
	int32_t k = 0;
	for (int32_t i=0 ; i < nb_counter ; i++) {
		// argv_3266 = (deux_exp_32 ^ exposant) * v_counter[i]
		argv_1774->argv_1490 (temp, deux_exp_32_nth, v_counter[i]);
		argv_1774->argv_1466 (_result, _result, temp);
		{
			string s1 = argv_1774->argv_3813 (deux_exp_32_nth);
			string s2 = argv_1774->argv_3813 (temp);
			string s3 = argv_1774->argv_3813 (_result);
			fprintf (argv_1462, "deux_exp_32_nth=%s, v_counter[%u]=%u, _result=%s\r\n", s1.c_str(), i, v_counter[i], s3.c_str());
		}
		argv_1774->argv_1488 (deux_exp_32_nth, deux_exp_32_nth, deux_exp_32);				
	}

	string value_str = argv_1774->argv_3813 (_result);
	{
		fprintf (argv_1462, "argv_3807 converted : %s\r\n", value_str.c_str());
		fflush (argv_1462);
	}

	argv_1774->argv_1469 (deux_exp_32_nth);
	argv_1774->argv_1469 (deux_exp_32);
	argv_1774->argv_1469 (temp);
}