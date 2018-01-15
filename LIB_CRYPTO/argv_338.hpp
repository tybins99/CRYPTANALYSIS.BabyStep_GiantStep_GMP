// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_338.hpp
// @@ 
// @@ DESCRIPTION:
// @@ implementation of the Data Encryption 
// @@ Standard symetric argv_2007 algorithm.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_359
#define argv_359



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_712 					64
#define argv_713			8
#define argv_2010				64
#define argv_2011			8
#define argv_822			7
#define argv_820				56
#define argv_824				48
#define argv_825			6
#define argv_821		28
#define argv_2009   					8
#define argv_2752					16
#define argv_634	8
#define argv_1280			6
#define argv_1279				48
#define argv_3289			6
#define argv_1303				32
#define argv_2809			64			

#if defined (__WIN32_OS__) 
	#define snprintf _snprintf
#endif // #if ! defined (__WIN32_OS__) 


union argv_572 {
	int8_t argv_685[4];
      	int32_t  argv_622; 	
};

union argv_571 {
	uint8_t argv_685[2];
	int argv_683;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_778	
// @@
// @@ DESCRIPTION	:
// @@ This argv_2785 permits to cipher/decipher a given 64 bit argv_728
// @@ using the "Data Encryption Standard" algorithm.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_778
{
private:
	uint8_t * 	argv_2007;
    uint8_t * 	argv_710;
	uint8_t * 	argv_3266;	
	int    	argv_1043;	
	argv_572		argv_2052;
	argv_572		argv_2068;
	argv_572		argv_3269;
	argv_572		argv_3272;
	int		argv_819;
	int		argv_823;
	uint32_t	argv_1302;
	uint8_t	argv_633[8]; // only 7 necessary, but 8 is more convenient for computing
	uint8_t	argv_2026[argv_2752][argv_825];
	bool 	is_set (uint8_t *, int);
	void	argv_796 (uint8_t *, int, bool);	
	void	argv_1173 ();
	void	argv_3766 ();
	void	argv_1177 (uint8_t *, uint8_t *, int, uint8_t *);
	void	argv_3416 ();
	void	argv_2270 ();
	void	argv_1175 ();
	void	argv_1174 ();
	void	reset ();
	void	argv_972 (uint32_t);
	void	argv_3274 (signed int&);
	void	argv_2965 ();
	void	argv_621 ();
	void	argv_3109 ();	
	
public:
	argv_778();
	bool	argv_1232 (uint8_t *, uint8_t *, uint8_t *);		
	bool	argv_1098 (uint8_t *, uint8_t *, uint8_t *);
	friend void argv_1141 (string, uint8_t *, int, bool);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ Functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void			argv_1141 (string, uint8_t *, int, bool _display_bitfield=false);



#endif // argv_359



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

