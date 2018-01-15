// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: complex_list.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the declaration of the
// @@ functions related to the complex list argv_2785.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_435
#define argv_435



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
	#pragma warning(disable: 4503)
	#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 


#include <map>
#include "../LIB/argv_296.hpp"
#include "../LIB_CRYPTO/argv_339.hpp"
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_323.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



typedef map<string, argv_828 *>::iterator argv_3694;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1058
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to store a set of horizontal list.
// @@ Each horizontal list contains the list of resolved symbols.
// @@ The vertical list being a list of list of resolved symbols.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1058
{
private:
	map<string, argv_828 *>			argv_2173;
	argv_3694						argv_2165;

public:
	argv_1058 ();
	void reset ();

	argv_3379 argv_2123 (argv_773, argv_2157&);

	argv_3379 argv_1667 (argv_3717& _nb_elem);
	argv_3379 argv_1666 (argv_773 _symbol, argv_2157&, argv_3717&);

	argv_3379 argv_1654 (argv_773, argv_2157&, argv_2157 *);
	argv_3379 argv_1672 (argv_773, argv_2157&, argv_2157 *);

	argv_3379 argv_590 (argv_773 _symbol_name);
	argv_3379 argv_589 (argv_2157&, argv_773, argv_2157);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_766
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to store all the symbols and solved symbols
// @@ for a given plugin argv_3695.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_766
{
private:
	argv_1058 * argv_2168; // array initialyzed according to the number of types
	
public:
	argv_766 ();
	argv_3379 init (argv_3717);
	void reset ();

	argv_3379 argv_2123 (argv_3717 _plugin_type, argv_773, argv_2157&);

	argv_3379 argv_1667 (argv_3717 _plugin_type, argv_3717& _nb_elem);
	argv_3379 argv_1666 (argv_3717 _plugin_type, argv_773 _symbol, argv_2157&, argv_3717&);

	argv_3379 argv_1654 (argv_3717, argv_773, argv_2157&, argv_2157 *);
	argv_3379 argv_1672 (argv_3717, argv_773, argv_2157&, argv_2157 *);

	argv_3379 argv_590 (argv_3717, argv_773 _symbol_name);
	argv_3379 argv_589 (argv_2157&, argv_3717, argv_773, argv_2157);
};



#endif // argv_435



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
