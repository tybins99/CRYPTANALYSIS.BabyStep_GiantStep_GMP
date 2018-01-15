// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: obj_loader_2.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all argv_1073 structure and
// @@ functions necessary for the coff loader
// @@ argv_2785 to work properly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_438
#define argv_438



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_314.hpp"
#include "../LIB/argv_331.hpp"
#include "../LIB/argv_312.hpp"
#include "../LIB/argv_313.hpp"
#include "../LIB/argv_299.hpp"
#include "../LIB/argv_334.hpp"

#include <vector>
#include <string>
#include <map>




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ CLASS: argv_762
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to convert COFF internal values to the 
// @@ corresponding human-readable string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_762
{
private:

public:
	string argv_3467 (argv_3715);
	string invalid_section_2_string (argv_3378);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ CLASS: argv_1035
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to store information concerning a given
// @@ symbol.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1035
{
public:
	argv_3717  argv_3808;
	argv_3378  argv_3330;
	argv_3716  argv_3696;
	argv_3715  argv_3468;

	void argv_1130 (argv_792 *, argv_773, bool);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ CLASS: argv_763
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to argv_2094 a COFF argv_1314 and argv_3249 
// @@ all necessary symbols. 
// @@
// @@ Notice that the OBJ argv_1314 is mmaped by the caller and that
// @@ the symbols resolved use only the virtual memory to perform
// @@ the argv_2094 and solve relocations so that the obj mmapped argv_1314
// @@ can be closed after argv_2094.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_763
{
private:
	map<string, argv_1035>	argv_2183;
	bool				init_done;
	bool				argv_2117;
	argv_3449    *	argv_3587;
	argv_767  *	argv_967;
	argv_774    *	argv_1070;
	argv_792	*	argv_1689;
	argv_1061	*	argv_3848;
	argv_3715			*	argv_1335;
	argv_3715			*	argv_3326;
	argv_3715			*	argv_3328;
	argv_3715			*	argv_3472;
	argv_3715			*	argv_3489;
	argv_3717				argv_1334;
	argv_3715			*	argv_1235;
	argv_1820	argv_1819;
	argv_3715				argv_3373[9]; // used when extracting the symbol's argv_2697.

	argv_3379				argv_2198 (argv_1829 *, argv_773, argv_3715 *&);
	argv_3379				argv_2850 (argv_3717, argv_773, argv_1821 *, argv_3715 *, argv_3715 *);
	argv_3715 *				argv_1299 (argv_3717, argv_3490 *&, bool&);
	bool				argv_3484 (argv_773, argv_3717&);
	bool				argv_3485 (map<string, argv_1035>::iterator&);
	bool				argv_3486 (map<string, argv_1035>::iterator&);
	bool				argv_1631 (argv_773, string&, bool&);
	bool				argv_2705 (argv_3715 *);
	argv_3379				argv_2101 ();
	argv_3379				argv_2115 ();
	bool				argv_3487 (argv_773, map<string, argv_1035>::iterator&);
	argv_3379				argv_3250 (map<string, argv_1035>::iterator&, argv_1829 *, argv_773, argv_773, argv_773, map<string, argv_763 *>&, argv_3715 *&, argv_3715 *);
	argv_3379				argv_3252 (map<string, argv_1035>::iterator&, argv_773, argv_773, argv_773, map<string, argv_763 *>&, argv_3715 *&, argv_3715 *);
	argv_3379				argv_3253 (map<string, argv_1035>::iterator&, argv_1829 *, argv_773, argv_773, argv_773, map<string, argv_763 *>&, argv_3715 *&, argv_3715 *);
	argv_3379				argv_3251 (map<string, argv_1035>::iterator&, argv_773, argv_773, argv_773, map<string, argv_763 *>&, argv_3715 *&, argv_3715 *);
	void				argv_1145 (argv_3715 *, argv_773, argv_773);
	void				argv_1148 (argv_773, argv_773, bool, bool, bool);

public:
	argv_763 ();
	~argv_763 ();
	void				reset ();
	argv_3379				init (argv_792 *, argv_3449 *, argv_767 *, argv_774 *, argv_3715 *, argv_3717, argv_1061 *);
	argv_3379				argv_2094 ();
	argv_3379				argv_3249 (argv_773, argv_773, argv_773, map<string, argv_763 *>&, argv_3715 *&, argv_3715 * _father_addr=argv_2766);
	void				argv_1144 ();
	void				argv_1147 (bool);
};



#endif // argv_438