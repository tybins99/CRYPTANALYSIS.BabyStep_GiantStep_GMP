// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_309.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the argv_1073 structures
// @@ and objects that permit to use the 
// @@ platform independant kernel
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_419
#define argv_419



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"
#include "../LIB_AVX/general_avx.hpp"
#include "../LIB/argv_316.hpp"
#if defined (__LINUX_OS__)
	#include <dlfcn.h>
#endif // #if defined (__LINUX_OS__)


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions pointers for the functions exported by the kernel
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_1961 {
	argv_1979 = 0,
	argv_1978,
	argv_1977,
	argv_1980,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions pointers for the functions exported by the kernel
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_2157	(* argv_1409)				();
typedef argv_3379	(* argv_1418)				(argv_2157);
typedef argv_3379	(* argv_1399)					(argv_2157, argv_773, argv_773, argv_773, argv_773, argv_2157&);
typedef argv_3379	(* argv_1537)				(argv_2157);
typedef argv_3379	(* argv_1433)			(argv_2157, argv_3717&, argv_3717&);
typedef argv_3379	(* argv_1432)	(argv_2157, argv_3717&, argv_3717&);
typedef argv_3379	(* argv_1434)				(argv_2157, argv_773, argv_2157 *);

typedef argv_3379	(* argv_1447)			(argv_2157&, argv_2157);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ inner functions exported by the kernel
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3379 (* argv_1448)			(argv_2157&, char *, bool&, argv_2157&);	
typedef argv_3379 (* argv_1445)			(argv_2157&, argv_2157, char *, argv_3379&);		
typedef argv_3379 (* argv_1446)		(argv_2157&, argv_2157, char *&, argv_3717&);
typedef argv_3379 (* argv_1444)	(argv_2157);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_838
// @@
// @@ DESCRIPTION	:	
// @@ This argv_2785 permits to create an abstraction of the
// @@ plugin based kernel to hide all complicated mechanisms
// @@ for use easiness purpose and low argv_877 coupling.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_838
{
private:
	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	FILE	*						argv_1398;
	void							argv_3283 (argv_773);
	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	argv_3715							argv_3460;				// to ensure that operations are allowed
	argv_2157							argv_1994;			// contains the kernel's memory
	argv_2157							argv_1936;		// no need to know about that
	argv_2157							argv_3317;	// no need to know about that
	argv_865 *							argv_2135;
	argv_3379							argv_2033;
	string							argv_3273;
	string							argv_3347;
	string							argv_982;
	string							argv_2131;
	string							argv_1171;
	string							argv_3012;
	string							argv_3290;
	string							argv_1195;
	string							argv_1937;
	string							argv_1676;
	string							argv_3682;
	string							argv_1982;

#if defined (__WIN32_OS__) 
	HMODULE							argv_1810;
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_2157							argv_1810;
#endif // #if defined (__LINUX_OS__)

	argv_1409				argv_1543;
	argv_1418				argv_1546;
	argv_1399					argv_1540;	
	argv_1537				argv_1606;
	argv_1433			argv_1550;
	argv_1432	argv_1549;
	argv_1434				argv_1551;

	argv_1448			argv_1559;
	argv_1445				argv_1556;
	argv_1446		argv_1557;
	argv_1447			argv_1558;
	argv_1444	argv_1555;

	argv_3379							argv_2104 (argv_773);
	argv_3379							argv_2149 (argv_773, argv_2157&);
	argv_3379							argv_3768 ();
	argv_3379							argv_1658 (argv_3379&);
	argv_3379							argv_1138 (argv_3379, argv_773);
	void							argv_1139 (argv_773, argv_3379);
	argv_3379							argv_3115 ();
	argv_3379							argv_2148 ();
	argv_3379							argv_2150 ();
	void							reset ();

public:
	argv_838 ();
	argv_3379							construct_kernel (argv_773, argv_773, argv_865 *);

	argv_3379							argv_721 ();
	argv_3379							argv_3375 ();

	argv_3379							argv_1129 ();

	argv_3379							argv_3306 (argv_773, bool, bool&, bool&, argv_1004&, bool&, bool&, argv_3379&);
};



#endif // argv_419



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
