// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_327.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the argv_1073 structures
// @@ and functions to argv_2094 or create a given
// @@ plugin. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_427
#define argv_427



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_314.hpp"
#include "../LIB/argv_312.hpp"
#include "../LIB/argv_313.hpp"
#include "../LIB/argv_299.hpp"
#include "../LIB/argv_331.hpp"
#include "../LIB/argv_324.hpp"

#include <string>
#include <map>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_780
// @@
// @@ DESCRIPTION:
// @@ This simple argv_2785 permits to associate a variable's argv_2697
// @@ with it's argv_3807 as a string.
// @@ It is used to store parse results.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_780
{
public:
	string argv_3812;
	string argv_3806;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_980
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 contains all internal argv_1073 of a given plugin
// @@ (what is either private or protected).
// @@
// @@ NOTICE: the plugin argv_1073 argv_2785's fields are initialized
// @@         and reseted by the argv_979 argv_2785.
// @@         so that no constructor/reset function is provided.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_980
{
public:
	bool				init_done;
	bool				argv_1123;
	map<string, bool>	argv_2161;		// the names of needed plugins
	map<string, bool>::iterator argv_1918;

	map<string, bool>	argv_2163; // the names of exported symbols
	map<string, bool>::iterator argv_1919;
	map<string, bool>::iterator argv_1920;

	argv_3449    *	argv_3587;
	argv_767  *	argv_967;
	argv_774    *	argv_1070;
	argv_792	*	argv_1689;
	argv_1061	*	argv_3847;
	argv_763		argv_878;

	argv_3717				argv_3426;
	argv_3717				argv_1188;
	argv_3715 *				argv_3425;
	argv_3717				argv_3747;
	argv_3717				argv_3748;
	argv_3717				argv_1102;
	char				argv_3681[MAX_PATH];
	argv_3717				argv_1239;
	argv_3717				argv_1247;

	argv_980 ();
	~argv_980 ();
	void reset ();
};


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_979
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to create/argv_2094 a plugin.
// @@ A plugin is actually composed of a argv_1806 and a argv_714.
// @@ Furthermore in order to create a plugin, a description
// @@ argv_1314 must be furnished.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_979
{
private:
	argv_980	dset;

	argv_3379				argv_2959 (argv_794 *, argv_1026&, argv_773);
	argv_3379				argv_2839 (argv_3717, argv_3717, argv_773, argv_3717&);
	argv_3379				argv_2842 (argv_3717, argv_3717, argv_773, argv_3717&);
	argv_3379				argv_987 (argv_3717, argv_3717, argv_3717&, argv_773, argv_3717&);
	argv_3379				argv_988  (argv_3717, argv_3717, argv_3717&, argv_773, string&);
	void				argv_1140 (argv_773);
	argv_3379				argv_3285 (argv_773, FILE *);
	argv_3379				argv_3284 (argv_3717, FILE *);
	argv_3379				argv_3197 (argv_773, FILE *);
	argv_3379				argv_3104 (argv_773, vector<argv_780>&);
	argv_3379				argv_2844 (char *, string&, string&);
	void				argv_1136 (vector<argv_780>&);
	argv_3379				argv_584 (argv_773);
	argv_3379				argv_2846 (argv_3717,argv_3717, argv_773);

public:
	string				argv_2697;
	argv_3717				argv_1638;
	argv_3717				argv_3819;
	argv_3717				argv_3820;
	argv_3717				argv_3695;				      // plugin argv_3695
	argv_3717				argv_3592;			  // PE, TXT, ...
	argv_3717				argv_2050; // concerns the argv_714
	string				argv_1010;	  // concerns the argv_714
	argv_3717				argv_2049;  // concerns the argv_714
	string				argv_1009;     // concerns the argv_714
	argv_3717				argv_2742;
	argv_3715 *				argv_715;
	argv_3717				argv_716;
	argv_3717				argv_2746;
	argv_3379				argv_2960 (FILE *);
	map<string, argv_763 *> argv_2691; // the map used to argv_3249 symbols for this plugin

	argv_979 ();
	~argv_979 ();
	void				reset ();
	argv_3379				init (argv_792 *, argv_3449 *, argv_767 *, argv_774 *, argv_1061 *);
	argv_3379				argv_583 (argv_773);
	argv_3379				argv_2098 (argv_794 *, argv_1026&, argv_773);
	argv_3379				argv_2841 (argv_773);
	argv_3379				argv_3286 (argv_773, argv_773);
	argv_763 *		argv_1640 ();
	argv_3379				argv_1626 (map<string, argv_979 *>&);
	bool				argv_1652 (string&);
	bool				argv_1670 (string&);
};



#endif // argv_427



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
