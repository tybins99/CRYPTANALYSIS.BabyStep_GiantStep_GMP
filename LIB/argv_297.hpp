// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_297.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the necessary objects
// @@ to argv_1789 n argv_2234 and all their events.
// @@ (argv_3410 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_361
#define argv_361



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <stack>
#include "../LIB/argv_316.hpp"
#include "../LIB/argv_319.hpp"
#include "../LIB/argv_321.hpp"
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_326.hpp"
#include "../LIB/argv_328.hpp"
#include "../LIB/argv_290.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_1270	256



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible client types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3096 {
	argv_861 = 0,

	// external clients
	argv_859,
	argv_860,
	argv_851,

	// internal clients
	argv_854,
	argv_853,
	argv_856,
	argv_855,
	argv_857,
	argv_852,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ listener argv_2785 (associate a argv_3410 with a clien argv_3695)
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_864
{
public:
	argv_3715		argv_849;
	SOCKET 		argv_3410;

	argv_864 ();
	void		reset ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ event loop routines
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3379 (* argv_1423)		(argv_761 * _data_ptr, argv_3717 _index, bool& _trigger_write);
typedef argv_3379 (* argv_1424)	(argv_761 * _data_ptr, argv_3717 _index, vector<argv_3717>&);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_787
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 contains all the argv_1073 needed
// @@ by the event loop to be able to argv_1789
// @@ all possible events.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_787
{
public:
	void reset ();
	argv_787 ();

	argv_1423		argv_1601;
	argv_1424		argv_1603;
	argv_1423		argv_1604;
	argv_1423		argv_1541;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_786
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to build an event driven
// @@ architecture when working with sockets.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_786 
{
protected:
	fd_set				readfds;
	fd_set				readfds_dirty;
	fd_set				writefds;
	fd_set				writefds_dirty;

	stack<argv_3717>	argv_3451;						// to avoid lookup at runtime
	argv_786 (const argv_786&);				// forbid copy
	argv_786& operator= (const argv_786&);	// forbid copy

	argv_3379 argv_807 (argv_3717&);
	argv_3379 argv_814 (argv_3717&);
	argv_3379 argv_579 (argv_3717, bool, bool);
	argv_3379 argv_3212 (argv_3717, argv_3379);
	argv_3379 argv_3212 (argv_3717, bool, bool, argv_3379);
	argv_3379 argv_3211 (argv_3717, argv_3379);
	argv_3379 argv_578 (argv_3717&, SOCKET&, argv_3715);
	argv_3379 argv_3116 ();
	argv_3379 argv_3116 (argv_787&, argv_761 *, argv_3717, vector<argv_864>&);
	argv_3379 argv_3145 (argv_761 *, argv_3717, vector<argv_3717>&);
	argv_3379 argv_3146 (argv_761 *, argv_3717, bool&);
	void argv_1149 (SOCKET&, argv_3715);
	argv_3379 argv_3692 (vector<argv_3717>&);
	bool argv_858 (argv_3715);

	argv_787	argv_1248;
	argv_3717				argv_2749;
	vector<argv_864>	argv_3799;	
	argv_761 *		argv_847;
	argv_3717				argv_848;
	argv_3717				argv_2741; // permits to argv_3463 the loop sooner (speed up)
	argv_3379				argv_2221;
	argv_865	*			argv_2135;
	argv_3717				argv_2745;

public:
	void reset ();
	argv_786 ();

	argv_3379 argv_3278 (argv_865 *, vector<argv_864>&, argv_761 *, argv_3717 _tab_size, argv_787&);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_850 (argv_3715);


#endif // argv_361
