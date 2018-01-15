// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_310.hpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_420
#define argv_420



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
#pragma warning(disable: 4786)
#pragma warning(disable: 4503)
#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ include files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <vector>
#if defined (__WIN32_OS__) 
	#include <Windows.h>
#endif // #if defined (__WIN32_OS__) 

#include "../LIB/argv_296.hpp"
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_316.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



class argv_1019
{
private:
	map<string, bool>::iterator argv_2160;
	argv_3717						argv_2180; 
	bool						argv_2162;
	map<string, bool>			argv_2184;

public:
	argv_1019 ();
	void reset ();

	void init (argv_3717, bool);
	bool argv_591 (argv_773);
	void argv_1681 (argv_3717&, bool&);
	bool argv_1655 (string&); 
	bool argv_1673 (string&);
};



class argv_1020
{
public:
	argv_3717	argv_3695;
	argv_3717	argv_3592;
	string	argv_3488;
	argv_2157	argv_3479;

	void set (argv_3717, argv_3717, argv_773, argv_2157);
};


// single: kernel & tool plugins
// multiple: plugins that can exists in multiple instances.
// a vector contains all possible multiple resolved symbols
// and the 'm_iter_by_type' and 'm_iter_by_target' map contains
// the indexes of the concerned groups.
/*
class argv_1021
{
private:
	vector<argv_1020>						m_v_resolved_entry;
	map<argv_3717, vector<argv_3717> >					m_v_by_type;
	map<argv_3717, vector<argv_3717> >::iterator			m_iter_by_type;

	map<argv_3717, vector<argv_3717> >					m_v_by_target;
	map<argv_3717, vector<argv_3717> >::iterator			m_iter_by_target;

	map<argv_3717, map<string, argv_1020> >	argv_2175; 

public:
	argv_1021 ();
	void reset ();
	argv_3379 argv_586 (argv_3717, argv_3717, argv_773, argv_2157, bool);
	argv_3379 argv_588 (argv_3717, argv_3717, argv_773, argv_2157);
	argv_3379 argv_587 (argv_3717, argv_3717, argv_773, argv_2157);

	argv_3379 get_first_group_by_type (vector<argv_3717>&);
	argv_3379 get_next_group_by_type (vector<argv_3717>&);

	argv_3379 get_first_group_by_target (vector<argv_3717>&);
	argv_3379 get_next_group_by_target (vector<argv_3717>&);

	argv_3379 lookup_one_grouped_symbol (argv_3717, argv_3717&, argv_3717&, string&, argv_2157&);
	argv_3379 argv_2151 (argv_3717, argv_773, argv_2157&);
};*/

class argv_1021
{
private:
	map<argv_3717, map<string, argv_1020> >			argv_2175; 

	map<argv_3717, map<string, argv_1020> >			argv_2174; 
	map<argv_3717, map<string, argv_1020> >::iterator	argv_2167;
	map<string, argv_1020>::iterator				argv_2166;	

	argv_3379 argv_588 (argv_792 *, argv_3717, argv_3717, argv_773, argv_2157);
	argv_3379 argv_587 (argv_792 *, argv_3717, argv_3717, argv_773, argv_2157);

public:
	argv_1021 ();
	void reset ();
	argv_3379 argv_586 (argv_792 *, argv_3717, argv_3717, argv_773, argv_2157, bool);
	argv_3379 argv_2151 (argv_3717, argv_773, argv_2157&);

	argv_3379 argv_2372 ();
	argv_3379 argv_2373 ();

	argv_3379 argv_1653 (argv_1020&);
	argv_3379 argv_1671 (argv_1020&);
};

#endif // argv_420
