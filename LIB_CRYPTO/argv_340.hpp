// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_340.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all argv_1073 structures and
// @@ functions necessary to use the gmp library
// @@ as a dynamic library.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_393
#define argv_393



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
#endif // #if defined (__WIN32_OS__) 
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include <map>

#if defined (__WIN32_OS__) 
	#include "../LIB_CRYPTO/argv_225.h"
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	#include <dlfcn.h>
	#include <sys/argv_3678.h>
	#include <unistd.h>
	#include "../LIB_CRYPTO/argv_226.h"
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_296.hpp"
#include "../LIB_CRYPTO/argv_336.hpp"
#include "../LIB_CRYPTO/argv_339.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2207	 4096



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ gmp function pointers
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void				(* argv_1578)			(argv_2674 integer);
typedef void				(* argv_1564)		(argv_2674 integer);
typedef void				(* argv_1592)		(argv_2674, unsigned long int);
typedef char *				(* argv_1576)		(char *, int, argv_2674);
typedef int					(* argv_1566)			(argv_2674, argv_2674);
typedef size_t				(* argv_1588)		(FILE *, int, argv_2674);
typedef int					(* argv_1568)	(argv_2674, argv_2674, argv_2674);
typedef	void				(* argv_1589)			(argv_2674, argv_2674, argv_2674, argv_2674);
typedef void				(* argv_1584)		(argv_2674, argv_2674, unsigned long int);
typedef int					(* argv_1567)		(argv_2674, unsigned long int);
typedef void				(* argv_1562)		(argv_2674 rop, argv_2674, unsigned long int op2);
typedef void				(* argv_1574)			(argv_2674 rop, argv_2674, argv_2674);
typedef void				(* argv_1596)			(argv_2674 rop, argv_2674, argv_2674);
typedef void				(* argv_1563)	(argv_2674 q, argv_2674, unsigned long int b);
typedef size_t				(* argv_1580)		(argv_2674, FILE *, int);
typedef void				(* argv_1553) (argv_1768);
typedef void				(* argv_1554)	(argv_1768, unsigned long int);
typedef void				(* argv_1600)		(argv_2674 rop, argv_1768, argv_2674);
typedef void				(* argv_1582)			(argv_2674, argv_2674, argv_2674);
typedef void				(* argv_1583)			(argv_2674, argv_2674, argv_2674);
typedef void				(* argv_1597)			(argv_2674, argv_2674, unsigned long int);
typedef void				(* fptr_mpz_set)			(argv_2674, argv_2674);
typedef unsigned long int	(* argv_1573)		(argv_2674, unsigned long int);
typedef void				(* fptr_mpz_init_set)		(argv_2674, argv_2674);
typedef void				(* argv_1569)			(argv_2674, argv_2674, argv_2674);
typedef void				(* argv_1572)			(argv_2674, argv_2674, argv_2674);
typedef void				(* argv_1599)		(argv_2674, argv_1768, unsigned long int);
typedef void				(* argv_1570)	(argv_2674, argv_2674, unsigned long int);
typedef int					(* argv_1590) (argv_2674, int);
typedef void				(* argv_1561)			(argv_2674, argv_2674, argv_2674);
typedef int					(* argv_1591)		(argv_2674, const char *, int);
typedef int					(* argv_1579)	(argv_2674, const char *, int);
typedef int					(* argv_1581)			(argv_2674, argv_2674, argv_2674);
typedef void				(* argv_1587)		(argv_2674, argv_2674);
typedef void				(* argv_1598)		(argv_2674, unsigned long int, unsigned long int);
typedef void				(* argv_1593)			(argv_2674, unsigned long int);
typedef void				(* argv_1565)			(argv_2674, unsigned long int);
typedef unsigned long int	(* argv_1575)			(argv_2674, argv_2674, unsigned long int);
typedef void				(* argv_1595)			(argv_2674, argv_2674);
typedef	void				(* argv_1586)			(argv_2674, argv_2674);
typedef unsigned long int	(* argv_1577)			(argv_2674);
typedef size_t				(* argv_1594)		(argv_2674, int);
typedef void				(* argv_1571)		(argv_2674, argv_2674, argv_2674, argv_2674);
typedef void				(* argv_1585)			(argv_2674, argv_2674, unsigned long int);
typedef void				(* argv_1571)		(argv_2674, argv_2674, argv_2674, argv_2674);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_794
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 contains all the necessary function pointers
// @@ to work with the GMP library necessary for El-Gamal and
// @@ RSA algorithms.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_794
{
private:
#if defined (__WIN32_OS__) 
	HINSTANCE argv_1791;
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	LPVOID argv_1791;
#endif // #if defined (__LINUX_OS__)

	int32_t argv_2107  ();
	int32_t argv_2108 ();

	int32_t argv_2106 ();
	int32_t argv_2109 (const char *, void *&);
	int32_t init_random_generator ();

	argv_1768			argv_3192;

	string					argv_2034;

	bool					argv_2273			(argv_2674, argv_2674);
	bool					argv_2272			(argv_2674, uint32_t);
	void					argv_1169				(const char * , argv_2674);
	bool					argv_1916			(argv_2674, argv_2674);
	bool					argv_1914				(argv_2674);
	void					argv_1627	(uint32_t);

public:
	argv_1567					argv_1472;
	argv_1578					argv_1483;
	argv_1564					argv_1469;
	argv_1592					argv_1497;
	argv_1576				argv_1481;
	argv_1566					argv_1471;
	argv_1588				argv_1493;
	argv_1568			argv_1473;
	argv_1589					argv_1494;
	argv_1584				argv_1489;
	argv_1562					argv_1467;
	argv_1574					argv_1479;
	argv_1596					argv_1501;
	argv_1563			argv_1468;
	argv_1580				argv_1485;
	argv_1553		argv_1437;
	argv_1554			argv_1438;
	argv_1600				argv_1505;
	argv_1582					argv_1487;
	argv_1583					argv_1488;
	argv_1597					argv_1502;
	fptr_mpz_set					fp_mpz_set;
	argv_1573				argv_1478;
	fptr_mpz_init_set				fp_mpz_init_set;
	argv_1569					argv_1474;
	argv_1572					argv_1477;
	argv_1599				argv_1504;	
	argv_1570			argv_1475;
	argv_1590			argv_1495;
	argv_1561					argv_1466;
	argv_1591				argv_1496;
	argv_1579			argv_1484;
	argv_1581					argv_1486;
	argv_1587				argv_1492;
	argv_1598				argv_1503;
	argv_1593					argv_1498;
	argv_1565					argv_1470;
	argv_1575					argv_1480;
	argv_1595					argv_1500;
	argv_1586					argv_1491;
	argv_1577					argv_1482;
	argv_1594				argv_1499;
	argv_1571				argv_1476;
	argv_1585					argv_1490;

	argv_794 ();
	int32_t	argv_2104			(const char *);
	int32_t	argv_3768			();
	string	argv_1658			();
	void	argv_1632	(uint32_t, argv_2674, argv_2674);
	bool	argv_1370		(argv_2674, argv_2674, argv_2674);
	void	argv_1629  (argv_2674, argv_2674, argv_2674);
	void	argv_1630	(uint32_t, argv_2674);

	string	argv_3813 (argv_2674 _var, bool _display_in_hexa=false);
	string  argv_1240 (int32_t);
	void	reset ();
};



#endif // #define argv_393



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
