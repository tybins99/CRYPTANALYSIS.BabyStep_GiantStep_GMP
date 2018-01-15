// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_320.hpp
// @@ 
// @@ DESCRIPTION:
// @@ communication layer that uses namped pipes
// @@ (win32), and unix domain argv_3410 (Linux).
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_346
#define argv_346



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"
#include "argv_319.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_875
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits several local processes
// @@ to talk with each other.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_875 : public argv_874
{
protected:

public:
	argv_875 ();
	~argv_875 ();

	// client related functions
	argv_3379 argv_3112 (argv_773 _target_address, argv_3717 _port=0);

	// server related function
	argv_3379 argv_3118 (argv_773 _target_address, argv_3717 _port=0);
	argv_3379 argv_574 ();

	argv_3379 argv_3336 (argv_3715 *, argv_3717, argv_3717&);
	argv_3379 argv_3200 (argv_3715 *, argv_3717&);
	argv_3379 argv_870 ();
};



#endif // argv_346



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
