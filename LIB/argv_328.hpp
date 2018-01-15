// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_328.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the functions,
// @@ argv_1073 structures and constants that are 
// @@ necessary to implement the avx scanning
// @@ and admmin protocol.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_429
#define argv_429



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ possible packet types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3100 {
	argv_2940 = 0,

	// scan client operations
	argv_2928,
	argv_2924,
	argv_2930,
	argv_2926,

	// scan server operations
	argv_2929,
	argv_2925,
	argv_2931,
	argv_2927,

	// admin operations
	argv_2938,				// used when service is shut down (via service manager)
	argv_2939,		// tell the COM manager to terminate itself.

	// update operations results
	argv_2941,			// argv_3374/argv_1127/construct/argv_717
	argv_2942,		

	// spyware operations
	argv_2935,		// forwarded to the spyware manager
	argv_2936, // inform about the number of categories
	argv_2937,			// not forwarded to the spyware manager
	argv_2934,  // argv_2697 + infection flag + spyware argv_2697 if necessary
	argv_2932,
	argv_2933,

	// archive extractor operations
	argv_2911,
	argv_2907,
	argv_2910,
	argv_2912,	// sent for each extracted files.

	// archive creator operations
	argv_2908,
	argv_2906,
	argv_2909,

	// interruptions related messages (same for all blocks)
	argv_2922,
	argv_2923,

	// inner protocol (COM MANAGER)
	argv_2920,
	argv_2916,
	argv_2915,
	argv_2919,
	argv_2913,
	argv_2921,
	argv_2917,
	argv_2918,
	argv_2914,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  protocol related functions.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_3795 (argv_3715);



#endif // argv_429



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
