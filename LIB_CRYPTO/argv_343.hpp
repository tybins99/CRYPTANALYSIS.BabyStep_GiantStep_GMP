// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_343.hpp
// @@ 
// @@ DESCRIPTION:
// @@ public argv_2007 encipher/decipher algorithms
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_444
#define argv_444



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
#include <map>
#include <string>
#include <iostream>
#include <map>

#if defined (__LINUX_OS__)
	#include "../LIB_CRYPTO/argv_226.h"
#endif // #if defined (__LINUX_OS__)
#include "../LIB_CRYPTO/argv_340.hpp"
#include "../LIB_CRYPTO/argv_336.hpp"
#include "../LIB_CRYPTO/argv_337.hpp"
#include "../LIB_CRYPTO/argv_342.hpp"
#include "../LIB/argv_299.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_3276 1

#if defined (__BENCH_RSA__)
	class argv_781
	{
	protected:
		LARGE_INTEGER argv_2169;
		LARGE_INTEGER argv_2170;

		LONGLONG argv_2172;
		LONGLONG argv_2171;

	public:
		argv_781(void);

		void argv_3457(void);
		void argv_3463(void);
		double argv_1646(void) const;
		string argv_3464 (argv_773);
	};

	inline argv_781::argv_781(void) {
		LARGE_INTEGER liFrequency;

		QueryPerformanceFrequency(&liFrequency);
		argv_2172 = liFrequency.QuadPart;

		// Calibration
		argv_3457();
		argv_3463();

		argv_2171 = argv_2170.QuadPart-argv_2169.QuadPart;
	}

	inline void argv_781::argv_3457(void) {
		// Ensure we will not be interrupted by any other thread for a while
	//	Sleep(0);
		QueryPerformanceCounter(&argv_2169);
	}

	inline void argv_781::argv_3463(void) {
		QueryPerformanceCounter(&argv_2170);
	}

	inline double argv_781::argv_1646(void) const {
		return (double)(argv_2170.QuadPart-argv_2169.QuadPart-argv_2171)*1000000.0 / argv_2172;
	}

	inline string argv_781::argv_3464 (argv_773 _msg) {
		argv_3463 ();
		double elapsed = argv_1646 ();
		char argv_3681[MAX_PATH];
		if (elapsed < 1000000.0) {
			argv_3409 (argv_3681, 1024, "%s : %.02lf microseconds", _msg, elapsed);
		}
		else if ((elapsed >= 1000000.0) && (elapsed < 60000000.0)) {
			elapsed = elapsed / 1000000.0;
			argv_3409 (argv_3681, 1024, "%s : %.02lf seconds", _msg, elapsed);
		}
		else {
			elapsed = elapsed / 60000000.0;
			argv_3409 (argv_3681, 1024, "%s : %.02lf minutes", _msg, elapsed);
		}
		argv_3681[1024 - 1] = '\0';
		return argv_3681;
	}
#endif // #if defined (__BENCH_RSA__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1026	
// @@
// @@ DESCRIPTION	:
// @@ This argv_2785 contains all the argv_1073 related
// @@ to the argv_3275 public argv_2007.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1026
{
public:
	argv_2674	e;
	argv_2674	n;

	argv_1026 ();
	argv_1026 (argv_794&);
	void construct  (argv_794&);
	void argv_1127   (argv_794&);

	string	argv_1282 (argv_794&);
	argv_3379	argv_2099 (argv_794&, argv_773);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1025 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2785 contains all the argv_1073 related
// @@ to the argv_3275 private argv_2007.
// @@ 
// @@ NOTICE:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1025
{
public:
	argv_2674	d;
	argv_2674	n;
	bool	init_done;

	argv_1025 (argv_794&);
	void	construct (argv_794&);
	void	argv_1127 (argv_794&);

	string	argv_1282 (argv_794&);
	argv_3379	argv_2099 (argv_794&, argv_773);
};


class argv_1023
{
public:
	argv_794 *	argv_1774;
	argv_2674		argv_902;
	argv_2674		argv_2695;
	argv_2674		argv_835;
	argv_2674		argv_1093;
	argv_2674		argv_3193;
	argv_2674		argv_2274, argv_2214;

	argv_3717		argv_2696;
	argv_3717		argv_711;
	argv_3717		argv_2748;
	argv_3717		nb_remaining;
	argv_3717		argv_1369;

	argv_3717		argv_2739;
	argv_3717		argv_2750;
	argv_3717		argv_3689;
	argv_3717		total_nb_remaining;
	argv_3717		argv_1126;

	argv_3715 *		argv_3423;
	argv_3715 *		argv_1368;
	argv_3717		argv_2753;
	argv_3717		argv_1044;
	argv_3717		argv_3688;

	argv_1023 ();
	void	reset ();
	argv_3379	construct (argv_794 *, argv_2674, argv_3717, bool);
	void	argv_1127 ();
	argv_3379	argv_971 (argv_2674, argv_3717, bool, argv_3717&);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1022 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2785 permits to encipher/decipher using the
// @@ argv_3275 public argv_2007 cryptosystem.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1022
{
private:
	bool			init_done;
	argv_794	*	argv_1774;
	string			argv_3187;
	string			argv_3186;
	string			argv_3129;
	string			argv_3128;
	string			argv_2071;

	argv_3379			argv_1228 (argv_773, argv_773, argv_2674, argv_2674);
	argv_3379			argv_1092 (argv_773, argv_773, argv_2674, argv_2674);

	argv_3379			argv_1090 (argv_3715 * _src_buf, argv_3717 _src_bufsize, argv_3715 * _dest_buf, argv_3717 _dest_bufsize, argv_3717& _actual_dest_bufsize, argv_2674 _n, argv_2674 _d, argv_2674 _collected_nb, argv_2674 _deciphered_block, argv_3717 _current_block, argv_3717 _total_nb_block, argv_3717 _nb_to_pad, FILE * _fp_log=argv_2766);
	argv_3379			argv_1226 (argv_3715 * _src_buf, argv_3717 _src_bufsize, argv_3715 * _dest_buf, argv_3717 _dest_bufsize, argv_3717& _actual_dest_bufsize, argv_2674 _n, argv_2674 _e, argv_2674 _collected_nb, argv_2674 _ciphered_block,   argv_3717 _nb_to_pad, argv_2674 _min_rand, argv_2674 _max_rand, argv_2674 _random_trailer, argv_2674 _n_minus_1, FILE * _fp_log=argv_2766);

public:
	argv_1022 ();
	argv_3379 init (argv_794 *);
	void reset ();
	~argv_1022 ();

	argv_3379 argv_1628 (argv_3379, argv_1026&, argv_1025&);

	argv_3379 argv_1283 (argv_1026&, argv_773,  argv_773);
	argv_3379 argv_1283 (argv_1025&, argv_773, argv_773);

	argv_3379 argv_2103 (argv_773, argv_773, argv_1026&);
	argv_3379 argv_2103 (argv_773, argv_773, argv_1025&);

	argv_3379 argv_1227 (argv_773, argv_773, argv_1026&);
	argv_3379 argv_1227 (argv_773, argv_773, argv_1025&);

	argv_3379 argv_1091 (argv_773, argv_773, argv_1026&);
	argv_3379 argv_1091 (argv_773, argv_773, argv_1025&);

	argv_3379 argv_1224 (argv_3715 *, argv_3717, argv_3715 *, argv_3717, argv_3717&, argv_1026&);
	argv_3379 argv_1224 (argv_3715 *, argv_3717, argv_3715 *, argv_3717, argv_3717&, argv_1025&);

	argv_3379 argv_1088 (argv_3715 *, argv_3717, argv_3715 *, argv_3717, argv_3717&, argv_1026&);
	argv_3379 argv_1088 (argv_3715 *, argv_3717, argv_3715 *, argv_3717, argv_3717&, argv_1025&);

	argv_3379 argv_971 (argv_2674, argv_3717, bool, argv_3717&);
	argv_3379 argv_1225 (argv_3715 *, argv_3717, argv_3715 *, argv_3717, argv_3717&, argv_2674, argv_2674);
	argv_3379 argv_1089 (argv_3715 *, argv_3717, argv_3715 *, argv_3717, argv_3717&, argv_2674, argv_2674);
};



#endif // #define argv_444



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

