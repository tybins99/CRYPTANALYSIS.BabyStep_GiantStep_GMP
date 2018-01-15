// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_308.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the argv_1073 structure and
// @@ functions that are used by the kernel.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_418
#define argv_418



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ include files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_296.hpp"
#include "../LIB/argv_301.hpp"
#include "../LIB_AVX/file_type_result.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ function pointers declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3379 (* argv_1465)					(argv_2157, argv_3715 *, argv_3717, bool&, argv_2157&);
typedef argv_3379 (* argv_1412)		(argv_2157, argv_2157&);
typedef void (* argv_1420)	(argv_2157, argv_2157);

typedef argv_3379 (* argv_1535)					(argv_2157, argv_3715 *, argv_3717, bool&, argv_2157&);
typedef argv_3379 (* argv_1421)					(argv_2157, argv_3715 *, argv_3717&, argv_2157, argv_3379&);
typedef argv_3379 (* argv_1435)				(argv_2157, argv_2157, char *&, argv_3717&);
typedef argv_3379 (* argv_1408)					(argv_2157, argv_773);
typedef argv_3379 (* argv_1416)					(argv_2157);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ structures definitions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_550 {
	argv_2157							argv_686; // necessary to have a O(1) deallocation
	argv_1465					argv_1560;
	argv_1412		argv_1544;
	argv_1420	argv_1547;
	
	argv_1408					argv_1542;
	argv_1416						argv_1545;
	argv_1535					argv_1605;
	argv_1435				argv_1552;
	argv_1421					argv_1548;
} argv_3288;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ STRUCTURE NAME: argv_3405
// @@
// @@ DESCRIPTION:
// @@ This argv_1073 structure contains all the argv_1073 necessary for the kernel
// @@ to work properly :
// @@
// @@ - argv_3583: argv_2785 containing all the system dependant functions.
// @@
// @@ - complex_list_ptr: argv_2785 containing all the resolved symbols
// @@
// @@ - argv_3711: argv_2785 containing the argv_3266 of the argv_1314
// @@   argv_3695 detection process.
// @@
// @@ - argv_1056: argv_3717 : this field permits the kernel plugin 
// @@   to know what argv_3695 of argv_1314 argv_3695 detection plugin was ran.
// @@
// @@ - argv_1960: permits the kernel to log events to log files.
// @@
// @@ - argv_2087: linked list of argv_2785, each
// @@   argv_2785 containing all the functions for a given scanner 
// @@   (construct, scan, get_scan_report, dysinfect, argv_1127)
// @@
// @@ - triplet_ptr: this argv_2785 contains all the functions for a given 
// @@   scanner (construct, scan, get_scan_report, dysinfect, argv_1127).
// @@
// @@ - argv_3316: array of 'argv_3428' structures, so
// @@   actually we have a argv_3428 per argv_1314 argv_3695.
// @@ 
// @@ - argv_2852: char: system dependant path argv_3347.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_555 {
	// common part (for any possible application)
	argv_3449		*		argv_3583;
	argv_2157						argv_1960;
	argv_1533			argv_1422;
	argv_3715						argv_2852;
	char						argv_1048[MAX_PATH]; // argv_1043 argv_1364

	// application dependant part
	argv_2157						argv_3711;
	argv_3717						argv_1056;
	argv_2157						argv_1050; // used when scanning (stateful scan)
	argv_2157 						argv_3316;
	argv_2157						argv_2087;
} argv_3405;



#endif // argv_418



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
