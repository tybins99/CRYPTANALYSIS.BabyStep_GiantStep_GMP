#ifndef __INF_COUNTER_FLAG__
#define __INF_COUNTER_FLAG__

#include "../LIB_CRYPTO/argv_225.h"
#include "../LIB_CRYPTO/argv_339.hpp"
#include "../LIB_CRYPTO/argv_340.hpp"
#include <string>

using namespace std;


class Cinf_counter
{
private:
	bool			incr_over;
	uint32_t			max_limite;
	uint32_t			reste_UI32;
	uint32_t			nb_counter;
	vector<uint32_t>	v_counter;	
	vector<uint32_t>	v_incr_limit;
	argv_794 *		argv_1774;
	FILE *			argv_1462;

	void			init_xxx (argv_794 *, FILE *, argv_2674, vector<uint32_t>&);

public:
	Cinf_counter ();
	void			init_for_decr (argv_794 *, FILE *, argv_2674);
	void			init_for_incr (argv_794 *, FILE *, argv_2674);
	bool			decr ();
	void			incr ();
	void			convert_2_mpz (argv_2674);
	bool			incr_limit_reached ();
};


#endif // __INF_COUNTER_FLAG__