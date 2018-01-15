#include "../LIB_CRYPTO/argv_335.hpp"

Crandom_data_set::Crandom_data_set (argv_794 *	_gmp_tool_ptr) {
	argv_1774 = _gmp_tool_ptr;
	argv_1774->argv_1483 (argv_2370);
	argv_1774->argv_1483 (argv_1639);
	argv_1774->argv_1483 (argv_829);
	argv_1774->argv_1483 (argv_708);
	argv_1774->argv_1483 (argv_2371);
	argv_1774->argv_1483 (argv_2806);
	argv_1774->argv_1483 (argv_2826);
}

Crandom_data_set::~Crandom_data_set () {
	argv_1774->argv_1469 (argv_2370);
	argv_1774->argv_1469 (argv_1639);
	argv_1774->argv_1469 (argv_829);
	argv_1774->argv_1469 (argv_708);
	argv_1774->argv_1469 (argv_2371);
	argv_1774->argv_1469 (argv_2806);
	argv_1774->argv_1469 (argv_2826);
}
//-------------------------------------------------

void argv_1008 (const char * _msg) {
	FILE * fp_crash = fopen ("C:\\argv_1008.txt", "ab");
	if (fp_crash) {
		fprintf (fp_crash, "%s\r\n", _msg);
		fclose (fp_crash);
	}
}

void argv_3247 () {
	FILE * fp_crash = fopen ("C:\\argv_1008.txt", "wb");
	if (fp_crash) {
		fclose (fp_crash);
	}
}

argv_1034::argv_1034 () {
	argv_1774 = NULL;
}

void argv_1034::init (argv_794 * _gmp_tool_ptr, FILE * _fp_log) {
	argv_1462			= _fp_log;	
	argv_1774	= _gmp_tool_ptr;
	argv_1795.init (argv_3372, argv_1774);
}

void argv_1034::argv_974 (argv_2674 _modulo, argv_2674 _result) {
	argv_1774->argv_1500 (_result, _modulo);      // sqrt of the size of the group
	argv_1774->argv_1467 (_result, _result, 1); // ceil
	string modulo_str	= argv_1774->argv_3813 (_modulo);
	string order_str	= argv_1774->argv_3813 (_result);
	fprintf (argv_1462, "Number of elements in group : %s => order = %s\r\n", modulo_str.c_str(), order_str.c_str());
	fflush (argv_1462);
}

void argv_1034::argv_695 (argv_2674 _generator, argv_2674 _modulo, argv_2674 _order, argv_2674 _beta) {
	fprintf (stderr, "argv_695\r\n");
	fflush (stderr);
	argv_781 bench;
	bench.argv_3457 ();

	argv_2674 argv_3266, iterator;
	argv_1774->argv_1483 (argv_3266);
	argv_1774->argv_1483 (iterator);
	argv_1774->argv_1496 (iterator,	"0", 10);
	argv_1774->argv_1496 (argv_3266, "1", 10);
	bool must_save = false;

	while (argv_1774->argv_1471 (iterator, _order) < 0) {
		argv_1795.argv_580 (argv_3266, iterator);
		argv_1774->argv_1488 (argv_3266, argv_3266, _generator);
		argv_1774->argv_1487 (argv_3266, argv_3266, _modulo);
		argv_1774->argv_1467 (iterator, iterator, 1);	
	}

	string duration_str = bench.argv_3464 ("===> argv_695");
	fprintf (stderr, "%s\n", duration_str.c_str());
	fprintf (argv_1462, "%s\r\n", duration_str.c_str());
	fflush (stderr);
	fflush (argv_1462);

	uint32_t max_collision;
	uint32_t nb_collision	= argv_1795.argv_976 (max_collision);
	fprintf (stderr, "number of collisions : %u (max_collision=%u)\n", nb_collision, max_collision);
	fprintf (argv_1462, "number of collisions : %u (max_collision=%u)\r\n", nb_collision, max_collision);
	fflush (stderr);
	fflush (argv_1462);

	//argv_1795.argv_1130 ("after baby step", argv_1462);
	argv_1774->argv_1469 (argv_3266);
	argv_1774->argv_1469 (iterator);
}


// argv_708 = (argv_624 exp x) mod order
bool argv_1034::argv_1687 (argv_2674 _beta, argv_2674 _order, argv_2674 _precomputed_inverse, argv_2674 _modulo, argv_2674 _result) {
	bool found = false;
	fprintf (stderr, "argv_1034::argv_1687\r\n");
	fflush (stderr);
	argv_781 bench;
	bench.argv_3457 ();

	argv_2674 y, alpha_invert_powered, nb_todo, iterator, found_value;
	argv_1774->argv_1483 (y);
	argv_1774->argv_1483 (alpha_invert_powered);
	argv_1774->argv_1483 (nb_todo);
	argv_1774->argv_1483 (iterator);
	argv_1774->argv_1483 (found_value);

	// argv_3266 = 0
	argv_1774->argv_1496 (_result,	"0", 10);
	// alpha_invert_powered = 1;
	argv_1774->argv_1496 (alpha_invert_powered,	"1", 10);
	// y = argv_708
	argv_1774->fp_mpz_set (y, _beta);
	// nb_todo = order - 1
	argv_1774->argv_1502 (nb_todo, _order, 1);

	string found_value_str;
	string y_str;
	Cinf_counter fast_iterator;
	fast_iterator.init_for_incr (argv_1774, argv_1462, nb_todo);

	while (fast_iterator.incr_limit_reached () != true) {
		if (argv_1795.argv_1908 (y, found_value) == true) {
			// compute (i*m)+j	
			fast_iterator.convert_2_mpz (iterator);
			y_str = argv_1774->argv_3813 (y);
			fprintf (argv_1462, "found : y=%s\r\n", y_str.c_str());
			{
				string i_str = argv_1774->argv_3813 (iterator);
				string j_str = argv_1774->argv_3813 (found_value);
				string argv_2182 = argv_1774->argv_3813 (_order);
				fprintf (argv_1462, "(%s * %s) + %s\r\n", i_str.c_str(), argv_2182.c_str(), j_str.c_str());
			}
			argv_1774->argv_1488 (_result, iterator, _order);
			argv_1774->argv_1466 (_result, _result, found_value);
			found = true;
			break;
		}
		else { // argv_3807 not found yet
			//y = (y * _precomputed_inverse) % _modulo;
			argv_1774->argv_1488 (y, y, _precomputed_inverse);
			argv_1774->argv_1487 (y, y, _modulo);
		}
		fast_iterator.incr ();
	}

	string duration_str = bench.argv_3464 ("===> argv_1687");
	fprintf (stderr, "%s\n", duration_str.c_str());
	fprintf (argv_1462, "%s\r\n", duration_str.c_str());
	fflush (stderr);
	fflush (argv_1462);

	argv_1774->argv_1469 (y);
	argv_1774->argv_1469 (alpha_invert_powered);
	argv_1774->argv_1469 (nb_todo);
	argv_1774->argv_1469 (iterator);
	argv_1774->argv_1469 (found_value);

	if (found == true) {
		string result_str = argv_1774->argv_3813 (_result);
		fprintf (argv_1462, "argv_1034::argv_1687...[FOUND: argv_3266 = %s]\r\n", result_str.c_str());
	}
	else {
		fprintf (argv_1462, "argv_1034::argv_1687...[NOT_FOUND]\r\n");
	}
	return (found);
}

void argv_1034::argv_1134 (argv_2674 _generator, argv_2674 _modulo, argv_2674 _beta, argv_2674 _result) {
	argv_2674 iterator, computed_beta;
	argv_1774->argv_1483 (iterator);
	argv_1774->argv_1483 (computed_beta);

	argv_1774->argv_1483		(iterator);
	string argv_1925;
	string beta_str;

	fprintf (argv_1462, "---- brute force ----\r\n");
	argv_1774->argv_1497		(iterator, 1);
	argv_1774->argv_1496	(computed_beta, "1", 10);
	while (argv_1774->argv_1471 (iterator, _modulo) < 0) {
		argv_1774->argv_1488 (computed_beta, computed_beta, _generator);
		argv_1774->argv_1487 (computed_beta, computed_beta, _modulo);
		argv_1925	= argv_1774->argv_3813 (iterator);
		beta_str	= argv_1774->argv_3813 (computed_beta);
		fprintf (argv_1462, "3 ^ %s = %s\r\n", argv_1925.c_str(), beta_str.c_str());
		argv_1774->argv_1467 (iterator, iterator, 1);
	}
	argv_1774->argv_1469 (iterator);
	argv_1774->argv_1469 (computed_beta);
}

// _generator	: a small integer that can generate all possible integers
//                using only the exponentiation operator
// _modulo		: the size of the group generated by '_generator'
// _beta		: the argv_3266 of the exponentiation : argv_708 = (argv_1639 ^ x)
//				  x being the argv_3807 to find.
//
// _result		: the argv_3807 of x found using the baby step/giant step algorithm.
bool argv_1034::argv_3249 (argv_2674 _generator, argv_2674 _modulo, argv_2674 _beta, argv_2674 _result) {
	bool bret = false;
	argv_2674 order, negative_order, precomputed_inverse;
	argv_1774->argv_1483 (order);
	argv_1774->argv_1483 (negative_order);
	argv_1774->argv_1483 (precomputed_inverse); // i.e: argv_624 ^ (- order)

	argv_1134 (_generator, _modulo, _beta, _result);

	argv_974 (_modulo, order);
	argv_695 (_generator, _modulo, order, _beta);

	// negative_order = (-1) * order
	argv_1774->argv_1491 (negative_order, order); 
	// precomputed_inverse = argv_624 ^ negative_order
	argv_1774->argv_1494 (precomputed_inverse, _generator, negative_order, _modulo);
	argv_1170 ("precomputed_inverse", precomputed_inverse);

	bret = argv_1687 (_beta, order, precomputed_inverse, _modulo, _result);

	argv_1774->argv_1469 (order);
	argv_1774->argv_1469 (negative_order);
	argv_1774->argv_1469 (precomputed_inverse);
	return (bret);
}

void argv_1034::argv_1170 (const char * _msg, argv_2674 _var, bool _display_2_log) {
	string value_str = argv_1774->argv_3813 (_var);	
	if (_display_2_log == false) {
		fprintf (stderr, "%s = %s\r\n", _msg, value_str.c_str());
	}
	else {
		fprintf (argv_1462, "%s = %s\r\n", _msg, value_str.c_str());
	}
}

void argv_1034::argv_826 (Crandom_data_set& _data_set, uint32_t _key_size_in_bit) {
	argv_1774->argv_1496 (_data_set.argv_2370,				"33679", 10);
	argv_1774->argv_1496 (_data_set.argv_1639,			"3", 10);
	argv_1774->argv_1496 (_data_set.argv_829,	"16610", 10);
	argv_1774->argv_1496 (_data_set.argv_708,				"26470", 10);
	argv_1774->argv_1496 (_data_set.argv_2371,		"33677", 10);
	argv_1774->argv_1496 (_data_set.argv_2806,				"1", 10);
	argv_1774->argv_1496 (_data_set.argv_2826,	"8419", 10);
	{
		string g_str	= argv_1774->argv_3813 (_data_set.argv_1639);
		string a_str	= argv_1774->argv_3813 (_data_set.argv_829);
		string p_str	= argv_1774->argv_3813 (_data_set.argv_2370);
		string beta_str = argv_1774->argv_3813 (_data_set.argv_708);
		fprintf (argv_1462, "(%s ^ %s) mod %s = %s\r\n", g_str.c_str(), a_str.c_str(), p_str.c_str(), beta_str.c_str());
	}
	argv_1170 ("argv_2370",					_data_set.argv_2370);
	argv_1170 ("argv_1639",				_data_set.argv_1639);
	argv_1170 ("argv_829",		_data_set.argv_829);
	argv_1170 ("argv_708",					_data_set.argv_708);
	argv_1170 ("argv_2371",			_data_set.argv_2371);
	argv_1170 ("argv_2806",					_data_set.argv_2806);
	argv_1170 ("argv_2826",		_data_set.argv_2826);
	fflush (argv_1462);
}

bool argv_1034::argv_827 () {
	bool bret = true;
	argv_2674 argv_3266;
	argv_1774->argv_1483 (argv_3266);

	Crandom_data_set data_set (argv_1774);

	argv_826 (data_set, 16);

	argv_2674 converted_value;
	argv_1774->argv_1483 (converted_value);
	Cinf_counter conv_counter; 
	conv_counter.init_for_decr (argv_1774, argv_1462, data_set.argv_829);
	conv_counter.convert_2_mpz (converted_value);
	string converted_str = argv_1774->argv_3813 (converted_value); 
	fprintf (argv_1462, "converted argv_3807 = %s\r\n", converted_str.c_str());
  //---------------
	bret = argv_3249 (data_set.argv_1639, data_set.argv_2370, data_set.argv_708, argv_3266);
	if (bret == false) {
		fprintf (argv_1462, "NOT FOUND !\r\n");
		fprintf (stderr, "NOT FOUND !\r\n");
	}
	else {
		string result_str = argv_1774->argv_3813 (argv_3266);
		fprintf (stderr, "found argv_3266 = %s\r\n", result_str.c_str());
		fprintf (argv_1462, "found argv_3266 = %s\r\n", result_str.c_str());
		if (argv_1774->argv_1471 (data_set.argv_829, argv_3266) != 0) {
			fprintf (argv_1462, "+++ INCOHERENCY DETECTED !\r\n");
			fprintf (stderr, "+++ INCOHERENCY DETECTED !\r\n");
		}
	}
	argv_1774->argv_1469 (argv_3266);

	return (bret);
}
