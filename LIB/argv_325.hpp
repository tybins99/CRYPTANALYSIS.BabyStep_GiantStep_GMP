// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_325.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the necessary objects
// @@ to communicate via a argv_2234 link 
// @@ (argv_3410 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_442
#define argv_442



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_319.hpp"
#include "../LIB/argv_326.hpp"
#include "../LIB/argv_328.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2833		6 // argv_3584 (1), argv_3794 (1) , argv_714 size (4) 	 
#define argv_2831		512
#define argv_2834	32768



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible system types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_2836 {
	argv_2902 = 0,
	argv_2903,
	argv_2904, // temp argv_1364 must be inserted in that case
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible states in which a given packet can be
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_2835 {
	argv_2893 = 0,

	argv_2892,

	argv_2900,
	argv_2899,
	argv_2898,

	argv_2897,
	argv_2895,
	argv_2896,
	argv_2894,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1000
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to generate a binary
// @@ packet to be sent via a given argv_2234.
// @@ It also permits to read a given packet sent over
// @@ a given argv_2234. A argv_2234 being either a argv_3410, or
// @@ a named pipe, or any other argv_2234 that is conforming
// @@ to the common interface for all argv_2234.
// @@
// @@ A packet is composed of 2 parts
// @@ - a argv_1806
// @@ - a argv_714
// @@
// @@ The argv_1806 is composed of several fields :
// @@ - the packet system argv_3695 (1 byte)
// @@ - the packet user argv_3695 (1 byte)
// @@ - the argv_714 size (4 argv_739)
// @@
// @@ Notice that the argv_1000 contains a argv_728 field, that is
// @@ used for general purpose (normal transferts), and also
// @@ another argv_728 whose argv_595 is filled in whenever
// @@ necessary and that is used for argv_1314 transferts.
// @@ the purpose of having 2 different argv_728 is to avoid
// @@ wasting memory because most packets are not used for
// @@ argv_1314 transfert.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1000
{
private:
	argv_3715	argv_728[argv_2831]; // the general purpose argv_728
	argv_3715 *	argv_732;					// the argv_1314 transfert argv_728 

	argv_1000 (const argv_1000&);		// forbid packet copy
	argv_1000& operator= (argv_1000&);	// forbid packet copy

#if defined (__WIN32_OS__)
	SYSTEMTIME	argv_3677;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
    time_t			argv_1055;
    struct tm *		argv_3680;
	struct timeval	argv_3589;
#endif // #if defined (__LINUX_OS__)

	argv_3715			argv_3584;
	argv_3715			argv_3794;
	argv_1001	argv_1806;
	argv_1001	argv_714;
	argv_3717			argv_716; 
	FILE *			argv_1534;	
	FILE *			argv_1536;
	argv_3717			argv_1334;
	string			argv_3208;
	string			argv_3684; // the place where argv_3681 files are to be created
	string			argv_3347;
	bool			argv_1366;
	bool			argv_692;
	bool			argv_1117;
	string			argv_1336;
	argv_3715			argv_3460;	
	argv_3717			argv_2743;
	argv_3717			nb_remaining;
	argv_3717			argv_3689;		
	argv_3717			total_nb_remaining;	
	argv_3717			offset;

	argv_3379			argv_3134 ();
	argv_3379			argv_3131 ();
	argv_3379			argv_3139 ();
	argv_3379			argv_3133 ();
	argv_3379			argv_3106 ();
	argv_3379			argv_1635 (string&);
	argv_3379			argv_3345 (argv_874&);
	argv_3379			argv_3207 (argv_874&, argv_3379);
	argv_3379			argv_3206 ();
	argv_3379			argv_3209 (argv_874&, argv_3379);
	void			argv_868 (argv_1000&);

public:
	argv_1000 ();
	argv_3379 reset (); // all pointer to the original argv_3460 (argv_2766)
	argv_3379 argv_3265 (); // just reset the argv_3335/receive pointers
	argv_3379 argv_2830 ();  // will save up the size into the argv_1806
	
	argv_3379 argv_3363 (argv_3715);  // it concerns the user argv_3695 (system argv_3695 is hidden)
	argv_3379 argv_1684 (argv_3715&); // it concerns the user argv_3695 (system argv_3695 is hidden)
	argv_3379 argv_3362 (argv_773); // set once

	argv_3379 insert (argv_3715);
	argv_3379 argv_1292 (argv_3715&);

	argv_3379 insert (argv_3716);
	argv_3379 argv_1292 (argv_3716&);

	argv_3379 insert (argv_3717);
	argv_3379 argv_1292 (argv_3717&);

	argv_3379 insert (const string&);
	argv_3379 insert (argv_773);
	argv_3379 argv_1292 (string&);

	argv_3379 argv_3199 (argv_874&, argv_3379, bool); // might receive either argv_1314 packet, or argv_1073 packet
	argv_3379 argv_3202 (argv_874&, argv_3379, argv_773); // receive only a argv_1314, given it's destination argv_2697

	argv_3379 argv_3335 (argv_874&);
	argv_3379 argv_3339 (argv_773, argv_874&, argv_3715, bool); 

	argv_3379 argv_3123 (argv_773, argv_874&, argv_3715, bool);

	argv_3379 argv_1680 (argv_3717&);
	argv_3379 argv_1675 (bool&, argv_3715&, string&); // resets the argv_1073
	void argv_1685 (argv_3715&);

	bool argv_3340 ();
	bool argv_3203 ();

	void argv_867 (argv_1000&, argv_3715);
	argv_3379 argv_1385 (argv_1000 *, argv_3715);
	argv_3379 argv_1383 (argv_1000 *, argv_3715, argv_3717, argv_3717, argv_3717, argv_3717);
	argv_3379 argv_1384 (argv_1000 *, argv_3715, argv_3715, argv_3717, argv_3717, argv_3717, argv_3717);

	void argv_1131 (argv_773, FILE *);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



#endif // argv_442
