// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_319.hpp
// @@ 
// @@ DESCRIPTION:
// @@ abstraction layer for local and remote
// @@ inter process communications
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_345
#define argv_345



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_874
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to create argv_1119 classes
// @@ that argv_1789 the communications between local or
// @@ remote processes.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_874
{
protected:
	bool			argv_1915;
	bool			argv_1907;
	bool			argv_1898;
	argv_3717			argv_2033;

	virtual argv_3379 argv_3113 (argv_773 _target_address, argv_3717 _port=0)	= 0;

	// server related function
	virtual argv_3379 argv_3119 (argv_773 _target_address, argv_3717 _port=0)	= 0;
	virtual argv_3379 argv_575 (argv_2157&)			= 0;

	virtual argv_3379 argv_3337 (argv_3715 *, argv_3717, argv_3717&)		= 0;
	virtual argv_3379 argv_3201 (argv_3715 * _buf, argv_3717 _size_2_read, argv_3717& _actual_size, argv_3379 _timeout_second=-1)	= 0;
	virtual argv_3379 argv_871 ()					= 0;
	virtual argv_3379 argv_871 (argv_2157)				= 0;
	virtual argv_3379 argv_1645 (argv_2157&)				= 0; 	
	virtual argv_3379 argv_1661 (argv_2157&)	= 0;

public:
	argv_874 ();
	void reset ();
	virtual ~argv_874 ();

	// client related functions
	argv_3379 argv_3112 (argv_773 _target_address, argv_3717 _port=0);

	// server related function
	argv_3379 argv_3118 (argv_773 _target_address, argv_3717 _port=0);
	argv_3379 argv_574 (argv_2157&);

	argv_3379 argv_3336 (argv_3715 *, argv_3717, argv_3717&);
	argv_3379 argv_3200 (argv_3715 * _buf, argv_3717 _size_2_read, argv_3717& _actual_size, argv_3379 _timeout_second=-1);

	argv_3379 argv_870 ();
	argv_3379 argv_870 (argv_2157);
	argv_3379 argv_1658 ();
	argv_3379 argv_1644 (argv_2157&);
	argv_3379 argv_1660 (argv_2157&);
};



#endif // argv_345



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
