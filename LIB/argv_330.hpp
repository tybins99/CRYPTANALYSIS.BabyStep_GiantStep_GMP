// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_330.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions declarations necessary for other
// @@ parts to use the system tool argv_2785 that
// @@ permits to perform platform independant
// @@ system calls.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_446
#define argv_446



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ necessary function pointers definition
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void *  (* argv_1464) (size_t);
typedef void    (* argv_1431) (void *);


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ just a test
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void * (* argv_1410)	();
typedef void   (* argv_1419)		(void *);
typedef void   (* argv_1397)			(void *, argv_3717, argv_3717);
typedef bool   (* argv_1439)	(void *, argv_3717);
typedef argv_3717   (* argv_1463)		(void *, argv_3717);


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ simple list
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3379	(* argv_1457)	(argv_2157 *);
typedef void	(* argv_1458)	(argv_2157);
typedef void	(* fp_list_reset)		(argv_2157);
typedef argv_3717	(* argv_1461)	(argv_2157);
typedef argv_3379	(* argv_1456)			(argv_2157, argv_2157, bool);
typedef argv_3379	(* argv_1459)	(argv_2157, argv_2157 *);
typedef argv_3379	(* argv_1460)	(argv_2157, argv_2157 *);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ complex list
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3379 (* argv_1411)					(argv_2157 *);
typedef argv_3379 (* argv_1417)				(argv_2157);
typedef argv_3379 (* argv_1406)		(argv_2157, argv_3717, argv_773, argv_2157&);
typedef argv_3379 (* argv_1404)				(argv_2157, argv_3717, argv_3717& _nb_elem);
typedef argv_3379 (* argv_1403)		(argv_2157, argv_3717, argv_773, argv_2157&, argv_3717&);
typedef argv_3379 (* argv_1402)	(argv_2157, argv_3717, argv_773, argv_2157&, argv_2157 *);
typedef argv_3379 (* argv_1405)	(argv_2157, argv_3717, argv_773, argv_2157&, argv_2157 *);
typedef argv_3379 (* argv_1401)					(argv_2157, argv_3717, argv_773);
typedef argv_3379 (* argv_1400)			(argv_2157, argv_2157&, argv_3717, argv_773, argv_2157);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1314 memory mapper function pointers definition
// @@ These functions pointers permit to create/argv_1127 and use
// @@ a C argv_1314 mapper.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3379 (* argv_1427)				(argv_2157 *, argv_2157, argv_2157);
typedef argv_3379 (* argv_1428)			(argv_2157);
typedef argv_3379 (* argv_1430)			(argv_2157, argv_773, argv_3717, argv_3715 *&, argv_3717&);
typedef argv_3379 (* argv_1426)	(argv_2157);
typedef argv_3379 (* argv_1429) (argv_2157, argv_3717&, argv_3717&);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ group of system NATIVE functions imported
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3717	(* argv_1521)	(argv_1004, argv_3717);
typedef FILE *	(* argv_1513)					(const char *, const char *);
typedef int		(* argv_1510)				(FILE *);
typedef int		(* argv_1517)					(FILE *, long, int);
typedef long	(* argv_1518)					(FILE *);
typedef size_t  (* argv_1514)					(void *, size_t, size_t, FILE *);
typedef size_t  (* argv_1519)				(const void *, size_t, size_t, FILE *);
typedef size_t	(* argv_1527)				(const char *);
typedef void *  (* argv_1506)	(int);
typedef void    (* argv_1516)		(void *, argv_3717);
typedef void    (* argv_1512)			();
typedef char *  (* argv_1511)					(char *, int, FILE *);
typedef char *  (* argv_1531)				(argv_773, argv_773);
typedef void *	(* argv_1525)				(void *, const void *, size_t);
typedef void *  (* fp_NATIVE_memset)				(void *, int, size_t);
typedef int		(* argv_1524)				(const void *, const void *, size_t);
typedef void *  (* argv_1523)				(size_t);
typedef void    (* argv_1515)					(void *);
typedef char *  (* argv_1530)				(char *, argv_773, size_t);
typedef char *	(* argv_1528)				(char *, argv_773, size_t);
typedef char *	(* argv_1529)				(argv_773, argv_773, size_t);
typedef argv_3717    (* argv_1522)				(argv_3717);		
typedef char *  (* argv_1531)				(argv_773, argv_773);
typedef argv_3379	(* argv_1452)					(argv_2157 *, argv_773);
typedef argv_3379	(* argv_1453)				(argv_2157);
typedef void	(* argv_1455)					(argv_2157, argv_3717, argv_773);
typedef void	(* argv_1450)						(argv_2157, argv_3717, argv_773, argv_773);
typedef void	(* argv_1451)						(argv_2157, argv_3717, argv_773, argv_3717);
typedef void	(* argv_1454)						(argv_2157, argv_3717, argv_773, argv_3717);
typedef bool	(* argv_1507)	(argv_773);
typedef argv_3379	(* argv_1508)				(argv_773, argv_773);
typedef argv_3379	(* argv_1520)		(argv_773, argv_773, argv_773, argv_773, argv_1004);
typedef argv_3379	(* argv_1509)			(argv_773);
typedef argv_3379	(* argv_1526)		(argv_773, argv_3717);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ plugin debug log facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void	(* fp_kdbg_reset)					(argv_773);
typedef void	(* argv_1441)				(argv_773, argv_773);
typedef void	(* argv_1440)					(argv_773, argv_773, argv_3717);
typedef void	(* argv_1442)				(argv_773, argv_773, argv_3717);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ STRUCTURE NAME: argv_3449
// @@
// @@ DESCRIPTION:
// @@ This argv_1073 structure contains all native functions
// @@ that are system dependant.
// @@ These system dependant functions, after being collected, permit
// @@ to create a platform independant program.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_561 {
	argv_1521		argv_2728;
	argv_1513						argv_2720;
	argv_1510					argv_2717;
	argv_1517						argv_2724;
	argv_1518						argv_2725;
	argv_1514						argv_2721;
	argv_1519					argv_2726;
	argv_1527					argv_2734;
	argv_1506		argv_2710;
	argv_1516			argv_2723;
	argv_1512				argv_2719;
	argv_1511						argv_2718;	
	argv_1531					argv_2738;	
	argv_1525					argv_2732;
	fp_NATIVE_memset					NATIVE_memset;
	argv_1524					argv_2731;
	argv_1523					argv_2730;
	argv_1515						argv_2722;
	argv_1530					argv_2737;
//	fp_NATIVE_strcpy					NATIVE_strcpy;
//	fp_NATIVE_strcat					NATIVE_strcat;
	argv_1528					argv_2735;
	argv_1529					argv_2736;
	argv_1522					argv_2729;
	argv_1507		argv_2714;
	argv_1508					argv_2715;
	argv_1520			argv_2727;
	argv_1509				argv_2716;
	argv_1526			argv_2733;

	argv_1427					argv_2202;	
	argv_1428					argv_2203;
	argv_1430				argv_2205;	
	argv_1426		argv_2201;
	argv_1429		argv_2204;

	argv_1452						argv_2022;
	argv_1453					argv_2023;
	argv_1455						argv_2025;
	argv_1450							argv_2020;
	argv_1451							argv_2021;
	argv_1454							argv_2024;

	// plugin debug facility
	fp_kdbg_reset						kdbg_reset;
	argv_1441					argv_1927;
	argv_1440						argv_1926;
	argv_1442					argv_1928;

	// list
	argv_1457					argv_2080;
	argv_1458					argv_2082;
	fp_list_reset						list_reset;	
	argv_1461					argv_2086;
	argv_1456							argv_2079;
	argv_1459					argv_2084;
	argv_1460					argv_2085;

	// complex list
	argv_1411				argv_1013;
	argv_1417			argv_1128;
	argv_1406		argv_961;
	argv_1404			argv_951;
	argv_1403		argv_950;
	argv_1402 argv_949;
	argv_1405  argv_952;
	argv_1401				argv_948;
	argv_1400		argv_947;

} argv_3449;



#endif // argv_446



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
