// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_303.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the constants
// @@ and functions, argv_1073 structures that are
// @@ common to each possible test.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_366
#define argv_366



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_299.hpp"
#include "../LIB/argv_316.hpp"
#include "../LIB/argv_317.hpp"
#include <iostream>
#include <string>
#include <map>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ function pointer definition for a test function
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3379 (* argv_1532) (argv_865 *, int, char **);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions that argv_1130 the parameters types and number
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	void argv_1157  (argv_865 *);
	void argv_1158  (argv_865 *);
	void argv_1161  (argv_865 *);
	void argv_1162  (argv_865 *);
	void argv_1163  (argv_865 *);
	void argv_1164  (argv_865 *);
	void argv_1165  (argv_865 *);
	void argv_1166  (argv_865 *);
	void argv_1167  (argv_865 *);
	void argv_1168  (argv_865 *);
	void argv_1159 (argv_865 *);
	void argv_1160 (argv_865 *);
#endif // #if defined (__WIN32_OS__) 


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ function that argv_1789 the dispatching of all tests
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 main_test (int, char **, map<argv_3717, argv_1532>&);

class argv_1038
{
public:
	argv_1532		argv_1602;
	int				argv_679;
	char **			argv_680;	
	string			argv_2132;
	string			argv_3348;
	argv_3716			argv_3349;
	argv_865 			argv_2146;
	argv_865	*		argv_2136;
	argv_3379			argv_1892;
	argv_3717			argv_3767; // to give a unique ID to each thread

	argv_1038 ();
	~argv_1038 ();
};


class argv_1037
{
private:
	map<argv_3717, argv_1532> argv_2164;
	map<argv_3717, argv_1532>::iterator argv_1918;

public:
	argv_1037 ();
	void reset ();
	argv_3379 argv_592 (argv_3717, argv_1532);
	argv_3379 argv_3278 (int, char **);
};


class argv_793
{
public:
	argv_865 *		argv_2135;	
	int			argv_679;
	char **		argv_680;
	argv_3379		argv_1893;
	argv_3379		argv_1894;
	argv_3379		argv_2743; // general use
	argv_3717		argv_706; // used in advanced tests

	argv_793 ();
};

void argv_2141 (FILE * _fp, argv_773 _msg, bool _echo_on=true, bool _add_eol=true);
void argv_2140 (FILE * _fp, argv_3379 _iret, argv_3717 _errno, bool _echo_on=true, bool _add_eol=true);
void argv_2137   (FILE * _fp, argv_3379 _iret, argv_773 _msg, bool _add_eol=true);
void argv_1133 (argv_773 _msg, argv_3717 _amount);

DWORD WINAPI argv_2044 (argv_2157 lParam);
argv_3379 argv_1315 (argv_865 *, argv_773, argv_773, bool&);


string test_err_2_string (argv_3379);


#endif // argv_366



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
