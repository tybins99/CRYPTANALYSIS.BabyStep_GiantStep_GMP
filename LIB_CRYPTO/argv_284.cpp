// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_340.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all argv_1073 structures and
// @@ functions necessary to use the gmp library
// @@ as a dynamic library.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_340.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_794	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the 'argv_794' argv_2785.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_794::argv_794 () {
	argv_1791 = NULL;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	reset	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits reset the argv_2785
// @@ to it's initial argv_3460.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_794::reset () {
	argv_3768 ();
	argv_1483					= NULL;
	argv_1469				= NULL;
	argv_1497				= NULL;
	argv_1481				= NULL;
	argv_1471					= NULL;
	argv_1493				= NULL;

	argv_1473			= NULL;
	argv_1494					= NULL;
	argv_1489				= NULL;
	argv_1472				= NULL;	
	argv_1467				= NULL;	
	argv_1466					= NULL;
	argv_1479					= NULL;	
	argv_1468			= NULL;	
	argv_1485				= NULL;	
	argv_1437		= NULL;

	argv_1438			= NULL;
	argv_1505				= NULL;
	argv_1487					= NULL;
	argv_1488					= NULL;
	argv_1502				= NULL;
	argv_1501					= NULL;
	fp_mpz_set					= NULL;
	argv_1478				= NULL;
	fp_mpz_init_set				= NULL;
	argv_1474				= NULL;
	argv_1477				= NULL;

	argv_1504				= NULL;
	argv_1475			= NULL;
	argv_1495		= NULL;
	argv_1496				= NULL;
	argv_1484			= NULL;
	argv_1486				= NULL;
	argv_1492			= NULL;
	argv_1503			= NULL;
	argv_1498				= NULL;
	argv_1470				= NULL;
	argv_1480				= NULL;
	argv_1499			= NULL;	
	argv_1476				= NULL;
	argv_1490				= NULL;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_2104	
// @@
// @@ INPUT			:
// @@ _filename: const char *: argv_2697 of the gmp DLL to argv_2094.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1747 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to open the GMP DLL and
// @@ to argv_2094 all the necessary GMP functions.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_794::argv_2104 (const char * _filename) {
	int32_t argv_1892 = argv_1747;
#if defined (__WIN32_OS__) 
	argv_1791 = LoadLibrary (_filename);
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	argv_1791 = dlopen (_filename, RTLD_NOW);
#endif // #if defined (__LINUX_OS__)

	if (argv_1791 == NULL) {
		argv_1892 = argv_1732;
	}
	else {
		argv_1892 = argv_2106 ();	

		if (argv_1892 == argv_1747) {
			argv_1892 = init_random_generator ();
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_2109	
// @@
// @@ INPUT			:
// @@ _function_name: const char *: argv_2697 of the function to lookup from
// @@   the GMP DLL.	
// @@
// @@ OUTPUT		:
// @@ _extracted_address: void *&: the argv_595 of the function
// @@  	whose argv_595 was retrieved from the GMP DLL.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1747 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the argv_595 of the function
// @@ from the GMP DLL whose argv_2697 is given as the '_function_name' 
// @@ parameter, if found, the argv_3266 is saved into the 
// @@ '_extracted_address' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_794::argv_2109 (const char * _function_name, void *& _extracted_address) {
	int32_t argv_1892 = argv_1747;

#if defined (__WIN32_OS__)
	_extracted_address = (LPVOID) GetProcAddress (argv_1791, _function_name);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	_extracted_address = (LPVOID) dlsym (argv_1791, _function_name);
#endif // #if defined (__LINUX_OS__)

	if (_extracted_address == NULL) {
		argv_1892 = argv_1731;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_1658	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string : the last GMP error as a string.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last GMP error
// @@ as a string.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_794::argv_1658 () {
	return (argv_2034);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_2107	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1747 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the argv_595 of the first
// @@ half of the GMP functions that we need.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_794::argv_2107 () {
	int32_t argv_1892 = argv_1747;

	void * extracted_address = NULL;
	argv_1892 = argv_2109 ("__gmpz_init", extracted_address);
	if (argv_1892 == argv_1747) {
		argv_1483 = (argv_1578) extracted_address;
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_clear", extracted_address);
		if (argv_1892 == argv_1747) {
			argv_1469 = (argv_1564) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_set_ui", extracted_address);
		if (argv_1892 == argv_1747) {
			argv_1497 = (argv_1592) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_get_str", extracted_address);
		if (argv_1892 == argv_1747) {
			argv_1481 = (argv_1576) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_cmp", extracted_address);
		if (argv_1892 == argv_1747) {
			argv_1471 = (argv_1566) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_out_str", extracted_address);
		if (argv_1892 == argv_1747) {
			argv_1493 = (argv_1588) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_congruent_p", extracted_address);
		if (argv_1892 == argv_1747) {
			argv_1473 = (argv_1568) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_powm", extracted_address);
		if (argv_1892 == argv_1747) {
			argv_1494 = (argv_1589) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_mul_2exp", extracted_address);
		if (argv_1892 == argv_1747) {
			argv_1489 = (argv_1584) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_cmp_ui", extracted_address);
		if (argv_1892 == argv_1747) {
			argv_1472 = (argv_1567) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_add_ui", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1467 = (argv_1562) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_add", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1466 = (argv_1561) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_set_str", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1496 = (argv_1591) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_init_set_str", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1484 = (argv_1579) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_invert", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1486 = (argv_1581) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_nextprime", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1492 = (argv_1587) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_ui_pow_ui", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1503 = (argv_1598) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_setbit", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1498 = (argv_1593) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_clrbit", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1470 = (argv_1565) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_gcd_ui", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1480 = (argv_1575) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_sqrt", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1500 = (argv_1595) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_neg", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1491 = (argv_1586) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_get_ui", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1482 = (argv_1577) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_fdiv_qr", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1476 = (argv_1571) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_mul_ui", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1490 = (argv_1585) extracted_address;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_2108	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1747 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the argv_595 of the second
// @@ half of the GMP functions that we need.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_794::argv_2108 () {
	int32_t argv_1892 = argv_1747;

	void * extracted_address = NULL;
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_gcd", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1479 = (argv_1574) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_cdiv_q_2exp", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1468 = (argv_1563) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_inp_str", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1485 = (argv_1580) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmp_randinit_default", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1437 = (argv_1553) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmp_randseed_ui", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1438 = (argv_1554) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_urandomm", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1505 = (argv_1600) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_mod", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1487 = (argv_1582) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_mul", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1488 = (argv_1583) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_sub_ui", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1502 = (argv_1597) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_sub", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1501 = (argv_1596) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_set", extracted_address);
		if (argv_1892 == argv_1747) {
			 fp_mpz_set = (fptr_mpz_set) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_fdiv_ui", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1478 = (argv_1573) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_init_set", extracted_address);
		if (argv_1892 == argv_1747) {
			 fp_mpz_init_set = (fptr_mpz_init_set) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_fdiv_q", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1474 = (argv_1569) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_fdiv_r", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1477 = (argv_1572) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_urandomb", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1504 = (argv_1599) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_fdiv_q_2exp", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1475 = (argv_1570) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_probab_prime_p", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1495 = (argv_1590) extracted_address;
		}
	}
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2109 ("__gmpz_sizeinbase", extracted_address);
		if (argv_1892 == argv_1747) {
			 argv_1499 = (argv_1594) extracted_address;
		}
	}
	
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_2106	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1747 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the argv_595 of the first half
// @@ and of the second half of the GMP functions that we need so that
// @@ the argv_794 can be ready to work.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_794::argv_2106 () {
	int32_t argv_1892 = argv_1747;
	argv_1892 = argv_2107 ();
	if (argv_1892 == argv_1747) {
		argv_1892 = argv_2108 ();
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_3768	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1747 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to unload the GMP DLL after it was
// @@ argv_2117.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_794::argv_3768 () {
	int32_t argv_1892 = argv_1747;
	if (argv_1791 != NULL) {
#if defined (__WIN32_OS__)
		if (FreeLibrary (argv_1791) == 0) {
			argv_1892 = argv_1722;
		}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
		if (dlclose (argv_1791) != 0) {
			argv_1892 = argv_1722;
		}
#endif // #if defined (__LINUX_OS__)
		argv_1791 = NULL;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	init_random_generator	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1747 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 the pseudo-random argv_1639
// @@ before it's first use.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_794::init_random_generator () {
	int32_t argv_1892 = argv_1747;
	argv_1437 (argv_3192);

#if defined (__WIN32_OS__)
	SYSTEMTIME	argv_3677;
	GetLocalTime (&argv_3677);
	argv_1438 (argv_3192, argv_3677.wMilliseconds);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	struct timeval argv_3589;
	gettimeofday (&argv_3589, NULL);
	argv_1438 (argv_3192, argv_3589.tv_usec);
#endif // #if defined (__LINUX_OS__)
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_1169	
// @@
// @@ INPUT			:	
// @@ _name: const char *: symbolic argv_2697 of the variable to argv_1130.
// @@
// @@ _var: argv_2674 : the argv_3807 of the variable to argv_1130.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1130 the content of the variable
// @@ whose argv_3807 is contained into the '_var' parameter, the symbolic 
// @@ variable's argv_2697 being contained into the '_name' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_794::argv_1169 (const char * _name, argv_2674 _var) {
	char * as_string = NULL;
	as_string = argv_1481 (NULL, 10, _var);	
	cerr << _name << " : " << as_string << endl;
	free (as_string);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_2273	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _a: argv_2674 : 
// @@	
// @@ RETURN VALUE	:	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// false argv_3376 n est probablement premier
// true argv_3376 il est composite
bool argv_794::argv_2273 (argv_2674 _a, argv_2674 _n) {
	bool bret				= false;
	unsigned long int unite = 1;
	argv_2674 m;
	argv_2674 n_minus_one;
	argv_2674 two;
	argv_2674 modulo_result;
	argv_2674 y;
	argv_2674 b;

	argv_1483 (n_minus_one);
	argv_1483 (modulo_result);
	argv_1483 (two);
	argv_1483 (b);
	argv_1483 (y);

	argv_1502 (n_minus_one, _n, 1);	// argv_3110 n-1
	fp_mpz_init_set (m, n_minus_one);		// m = n-1;
	argv_1497 (y, 1);					// int y = 1;
	argv_1497 (two, 2);

	while (argv_1472 (m, 0) != 0) {
		argv_1487 (modulo_result, m, two);
		if (argv_1472 (modulo_result, 1)==0) {	// if (m%2 == 1) { 
			argv_1488 (y, y, _a);
			argv_1487 (y, y, _n);		// y = (y*a) % n;
			argv_1502 (m, m, 1);	// m = m-1;
		}
		else {
			fp_mpz_set (b, _a);		// int b = a;
			argv_1488 (_a, _a, _a);		
			argv_1487 (_a, _a, _n);	// a= (a*a) % n

			if ((argv_1472 (_a,unite) == 0) && (argv_1472 (b,unite) != 0) && (argv_1471(b,n_minus_one)!=0)) {
				// b est une racine carre non triviale de 1
				bret = true;        // n est compose'
				break;
			}
			argv_1474 (m, m, two);
		}
	}

	if (bret == false) {
		if (argv_1472 (y, unite) != 0) {
			bret = true;            // n est compose'
		}
		else {
			bret = false;
		}
	}

	argv_1469 (n_minus_one);
	argv_1469 (m);
	argv_1469 (modulo_result);
	argv_1469 (two);
	argv_1469 (b);
	argv_1469 (y);

	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_2272	
// @@
// @@ INPUT			:
// @@ _nb_attempt: uint32_t: the number of tests to be performed before
// @@   considering	that the test is a success.
// @@
// @@ OUTPUT		:	
// @@ n: argv_2674: the number whose primality is to be tested.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if n is probably prime,
// @@       false otherwise (if n is composite).
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the Miller-Rabin primality 
// @@ test to the 'n' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_794::argv_2272 (argv_2674 n, uint32_t _nb_attempt) {
	bool bret = false;
	argv_2674 a;
	argv_1483 (a);

	for (uint32_t i=0; i<_nb_attempt; i++) {
		do {
			argv_1505 (a, argv_3192, n);
		}
		while (argv_1472 (a,0) == 0);

		if (argv_2273 (a,n)) { 
			bret = true;
			break;
		}
    }
	argv_1469 (a);
    return bret;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_1629	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _min_inclusive: the minimum argv_3807 for the generated number.
// @@ 
// @@ _max_inclusive: the maximum argv_3807 for the generated number.	
// @@
// @@ _result: argv_2674: the generated pseudo-radom number.
// @@
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a pseudo-random number
// @@ within the range [_min_inclusive..._max_inclusive], the
// @@ argv_3266 being stored into the '_result' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_794::argv_1629  (argv_2674 _min_inclusive, argv_2674 _max_inclusive, argv_2674 _result) {
	argv_2674 delta;
	argv_1483 (delta);
	// compute the allowed maximum delta = max - min
	argv_1501 (delta, _max_inclusive, _min_inclusive);
	// correct the delta because the rand function generates a number in [0..n-1]
	argv_1467 (delta, delta, 1);

	// generate a random delta using the allowed maximum delta
	argv_1505 (_result, argv_3192, delta);
	
	// argv_576 the minimum boundary to the random delta generated
	argv_1466 (_result, _result, _min_inclusive);
	argv_1469 (delta);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_1630	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _nb_bit : uint32_t: the size in bit of the prime number to generate.
// @@	
// @@ _result: argv_2674 : the argv_3266 of the argv_1637.
// @@
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate randomly a prime number 
// @@ whose size in bit is given by the '_nb_bit' parameter, the
// @@ argv_3266 being saved into the '_result' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_794::argv_1630 (uint32_t _nb_bit, argv_2674 _result) {
	argv_2674 bit_value;
	argv_2674 two;
	argv_1483 (bit_value);
	argv_1483 (two);

	argv_1497 (two, 2);

	// generate a random number whose size in bit is '_nb_bit'
	for (uint32_t i=0 ; i<_nb_bit ; i++) {
		if (i==(_nb_bit-1)) { // in order to have the same magnitude for all generated numbers
			argv_1498 (_result, i);
		}
		else {
			argv_1505 (bit_value, argv_3192, two);
			if (argv_1472 (bit_value, 0) == 0) {
				argv_1470 (_result, i);
			}
			else if (argv_1472 (bit_value, 1) == 0) {
				argv_1498 (_result, i);
			}
		}
	}
	
	// find the next prime for the generated number
	argv_1492 (_result , _result);

	argv_1469 (bit_value);
	argv_1469 (two);	
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_1914	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _challenger: argv_2674: the number whose primality is to be tested.
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the number contained into the '_challenger' 
// @@        parameter is probably prime,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether the number contained 
// @@ into the '_challenger' parameter is probably prime or not.
// @@ Notice that the number of attempts is fixed to 20, in other
// @@ words the number is considered probably prime if the primality
// @@ test succeeds at least 20 times.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_794::argv_1914 (argv_2674 _challenger) {
	bool bret = false;
	uint32_t nb_attempt = 20;
	int retcode = argv_1495 (_challenger, nb_attempt);
	if ((retcode ==2) || (retcode ==1)) {
		bret = true;
	}
	return (bret);
}
/*
bool argv_794::argv_1914 (argv_2674 _challenger) {
	bool bret = false;

	uint32_t nb_attempt = 20;
	if (argv_2272 (_challenger, nb_attempt) == false) {
		bret = true;
	}
	return (bret);
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_1627	
// @@
// @@ INPUT			:	
// @@ _max: uint32_t: the number of primes to generate.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate the first n primes
// @@ n being given by the '_max' parameter.
// @@ Notice that this function is mainly used to debug the argv_2785.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_794::argv_1627 (uint32_t _max) {
	string s1; 
	argv_2674 i;
	argv_1483 (i);
	argv_1497 (i, 4);

	int nb_displayed = 0;
	while (argv_1472 (i, _max) != 0) {
		if (argv_1914 (i) == true) {
			s1 = argv_3813 (i);	
			cerr << s1 << " ";
			nb_displayed++;
			if (nb_displayed == 32) {
				cerr << endl;
				nb_displayed = 0;
			}
		}
		argv_1467 (i, i, 1);
	}
	argv_1469 (i);
	cerr << endl;
}
/*
void argv_794::argv_1632 (uint32_t _key_size_in_bit, argv_2674 _p, argv_2674 _q) {
	bool strong_prime	= false;
	uint32_t nb_lap			= 0;

	cerr << "argv_2007 size : " << _key_size_in_bit << " argv_709" << endl;
	// find first prime
	do {
		argv_1504 (_p, argv_3192, _key_size_in_bit);
		nb_lap++;
	}
	while (argv_1914 (_p) == false);
	cerr << "found first prime after " << nb_lap << " laps" << endl;

	// find next prime if necessary
	while (strong_prime == false) {
		if (argv_1916 (_p, _q) == true) {
			strong_prime = true;
		}
		else {
			argv_1492 (_p, _p);
		}
		nb_lap++;
	}

	cerr << "found strong prime after " << nb_lap << " laps" << endl;
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_1632	
// @@
// @@ INPUT			:
// @@ _key_size_in_bit: the size of the argv_2007.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _p: argv_2674: the first parameter of the equation.
// @@
// @@ _q: argv_2674: the second parameter of the equation.	
// @@
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a string prime number whose
// @@ size in bit is given by the '_key_size_in_bit' parameter.
// @@ The argv_3266 is stored into '_p', however, we 
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_794::argv_1632 (uint32_t _key_size_in_bit, argv_2674 _p, argv_2674 _q) {
	bool strong_prime = false;

	uint32_t nb_lap			= 0;

	cerr << "argv_2007 size : " << _key_size_in_bit << " argv_709" << endl;
	// find first prime
	do {
		argv_1504 (_p, argv_3192, _key_size_in_bit);
		nb_lap++;
	}
	while (argv_1914 (_p) == false);
	cerr << "found first prime after " << nb_lap << " laps" << endl;

	nb_lap = 0;
	while (strong_prime == false) {
		if ((argv_1914 (_p) == true) && (argv_1916 (_p, _q) == true)) {
			strong_prime = true;
		}
		else {
			argv_1467 (_p, _p, 2);
		}
		nb_lap++;
	}

	//cerr << "found second prime after " << nb_lap << " laps" << endl;
}

/*
void argv_794::argv_1632 (uint32_t _key_size_in_bit, argv_2674 _p, argv_2674 _q) {
	bool strong_prime = false;

	uint32_t nb_lap = 0;
	while (strong_prime == false) {
		argv_1504 (_p, argv_3192, _key_size_in_bit);

		if (argv_1914 (_p) == true) {
			if (argv_1916 (_p, _q) == true) {
				strong_prime = true;
			}
		}
		nb_lap++;
	}

	cerr << "found after " << nb_lap << " laps" << endl;
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_1370	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _q: argv_2674: first parameter of the equation.
// @@
// @@ _p: argv_2674: second parameter of the equation.
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if a primitive root was succesfully found,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to find the primitive root of the 
// @@ _q parameter, 
// @@ it should be a argv_1639 for q, which means it needs to 
// @@ be relatively prime to q-1.   
// @@ Usually a small prime like 2, 3 or 5 will work. 
// @@ example: 2 is a primitive root argv_2370 5 because :
// @@ (2exp 0) mod 5 = 1
// @@ (2exp 1) mod 5 = 2
// @@ (2exp 2) mod 5 = 4
// @@ (2exp 3) mod 5 = 3
// @@ (2exp 4) mod 5 = 1
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// 1: exp
// 2: argv_2370
// 3: argv_3266
bool argv_794::argv_1370 (argv_2674 _q, argv_2674 _p, argv_2674 _generator) {
	bool bret = false; // not found yet
	argv_2674 argv_3681;
	argv_2674 two;
	argv_1483 (argv_3681);
	argv_1483 (two);
	argv_1497 (two, 2);

	uint32_t max = 32;
	for (uint32_t i=0 ; i<max ; i++) {
		argv_1497 (_generator, (2*i)+3); // 3,5,7...(all odd numbers from 3)
		argv_1494   (argv_3681, _generator, _q, _p);	// argv_3681 = g^q mod p

		if (argv_1472 (argv_3681, 1) != 0) {
			argv_1494 (argv_3681, _generator, two, _p);	// argv_3681 = g^2 mod p 

			if (argv_1472 (argv_3681, 1) != 0) { // found a argv_1639
				bret = true;
				break;
			}
		}
	}

	argv_1469 (argv_3681);
	argv_1469 (two);
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_1916	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _p: argv_2674: the number to be checked.
// @@
// @@ _q: argv_2674: the second part of the equation.
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if '_p' is a strong prime, 
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given number is
// @@ a strong prime or not.
// @@ For a "strong" prime p, p is prime, and (p-1)/2 is also prime.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_794::argv_1916 (argv_2674 _p, argv_2674 _q) {
	bool bret = false;

	// 1. p itself must be a prime number !
	fp_mpz_set (_q, _p);
	argv_1502 (_q, _p, 1);
	argv_1475 (_q, _q, 2);	// q = (p-1)/2
/*
	{
		string p_str = argv_3813 (_p);
		string q_str = argv_3813 (_q);
		//cerr << "p=" << p_str << " => q=" << q_str << endl;
	}
*/
	if (argv_1914 (_q) == true) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_794	
// @@
// @@ FUNCTION		:	argv_3813	
// @@
// @@ INPUT			:
// @@ _display_in_hexa: bool: true if the variable's argv_3807 is to be
// @@    displayed in hexa, false otherwise.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _var : argv_2674: the variable whose content is to be converted
// @@   to a string. 
// @@	
// @@ RETURN VALUE	:	
// @@ string: the argv_3807 of the variable '_var' converted to a string.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert the variable _var's argv_3807 
// @@ to a string and return the argv_3266.
// @@ We can also choose to argv_1130 in hexa if necessary.
// @@
// @@ WARNING:
// @@ because the function 'argv_2596' generates a memory leak
// @@ if we pass a NULL argv_3807 as the first parameter, we must never
// @@ use this function directly, instead we use this wrapper.
// @@ 
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_794::argv_3813 (argv_2674 _var, bool _display_in_hexa) {
	char argv_3681[argv_2207];	
	int base = 10;
	if (_display_in_hexa == true) {
		base = 16;
	}
	argv_1481 (argv_3681, base, _var);
	return (argv_3681);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
