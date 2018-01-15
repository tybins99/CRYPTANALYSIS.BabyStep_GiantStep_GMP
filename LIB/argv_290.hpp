// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_290.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures used
// @@ by the event loop to argv_1789 clients
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_352
#define argv_352



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <stack>
#include <list>
#include "../LIB/argv_319.hpp"
#include "../LIB/argv_326.hpp"
#include "../LIB/argv_328.hpp"
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_321.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2215 640 // number of packets



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_761
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 contains all the argv_1073 needed
// @@ by the event loop to be able to process
// @@ argv_2806 given client.
// @@
// @@ Notice that the client has argv_2806 receive packet, and possibly
// @@ n argv_3335 packets whose argv_595 are contained in a argv_3335 argv_3191.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_761
{
private:
	list<argv_1000 *>	argv_3344;

public:
	bool			argv_3823;
	bool			argv_3195;
	bool			argv_3839;
	argv_1000			argv_2885;
	list<argv_1000 *>::iterator argv_1918;
	argv_1000			argv_2889;
	argv_876	argv_2258;
	SOCKET			argv_3410; // just a cache
	argv_3379			argv_2033;
	argv_3715			argv_849; // each father argv_3695 may have a different protocol
	argv_3717			argv_1637; // argv_1637 of this box

	argv_761 ();
	~argv_761 ();
	void reset ();

	argv_3379			argv_1677 (argv_3717&);
	argv_3379			argv_1610 (argv_1000 *&);
	argv_3379			pop_front ();
	argv_3379			push_back (argv_1000 *);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



#endif // argv_352
