#ifndef argv_414
#define argv_414

#include <iostream>
#include <cstdio>
#include <windows.h>
#include <math.h>
#include <map>
#include <vector>
#include <string>
#include "../LIB/argv_296.hpp"

using namespace std;


enum argv_1799 {
	argv_1800 = 0,
	argv_1798,
	argv_1797,
	argv_1796,
};
//------------------------------------------------
#include "../LIB_CRYPTO/argv_340.hpp"

class argv_800
{
public:
	uint32_t  argv_2012; // speed up
	argv_2674 argv_2007;
	argv_2674 argv_3807;

	argv_800 (argv_794 * _gmp_ptr) {
		_gmp_ptr->argv_1483 (argv_2007);
		_gmp_ptr->argv_1483 (argv_3807);
	}

	bool operator < (argv_800&);
};


// this hash table is optimized and designed to be used with gmp library
class argv_801
{
private:
	argv_794 *		argv_1774;	
	argv_2674							argv_830;

	bool							init_done;
	argv_2674							argv_681;
	uint32_t							argv_682;
	vector<argv_800> *			argv_3816;
	uint32_t							argv_1794 (argv_2674, uint32_t&);

public:
	argv_801 ();
	int32_t init (uint32_t, argv_794 *);
	void reset ();
	void argv_580 (argv_2674, argv_2674);
	bool argv_1908 (argv_2674, argv_2674);
	uint32_t argv_976 (uint32_t&);
	void argv_1130 (const char *, FILE *);
	void sort ();
};



#endif // argv_350