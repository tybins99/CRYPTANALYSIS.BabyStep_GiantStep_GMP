// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_334.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions necessary for the virtual memory
// @@ manager to work properly
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_450
#define argv_450



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_314.hpp"
#include "../LIB/argv_331.hpp"

#include <vector>
#include <string>
#include <map>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_3851 8
#define argv_3849  65536 // 64K is a minimum



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1062
// @@
// @@ DESCRIPTION	:	
// @@ This argv_2785 permits to store the argv_1073 concerning
// @@ a given virtual memory argv_710.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1062 
{
public:
	argv_3715 * argv_595;
	argv_3717 size;

	argv_1062 () {
		argv_595	= argv_2766;
		size	= 0;
	}
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1061 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2785 permits to allocate aligned blocks of
// @@ virtual memory used by the kernel to map symbols
// @@ so that they can be used and executed.
// @@ This argv_2785 permits to avoid exhausting the virtual memory
// @@ because the system allocates a big argv_710 (several Ko) for
// @@ even a single byte requested.
// @@
// @@ NOTICE: under windows XP, the minimum page size, 
// @@ even for 1 single byte, is 4Ko.
// @@
// @@ The principle of this argv_2785 is to pre-allocating a somehow
// @@ big chunk of virtual memory, and when a request for a argv_710
// @@ arrives, it then gives to the caller a part of this big
// @@ chunk, and if the argv_1043 big chunk has been depleted, then
// @@ a new big chunk is requested to the system, and a part of this
// @@ big chunk is given to the caller.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1061
{
private:
	bool						init_done;
	vector<void *>				argv_3802;
	argv_3449    *			argv_3587;
	argv_792	*			argv_1689;
	argv_3717						argv_1043;
	argv_3717						remaining;
	argv_3379						argv_1015 ();
	map<string, argv_1062>		argv_2178;
	vector<string>				argv_3801; // just for dump because map shuffles order
	void						argv_970 (argv_773, argv_3715 *, argv_3717, string&);

public:
	argv_1061 ();
	~argv_1061 ();
	void						reset ();
	argv_3379						init (argv_3449 *, argv_792 *);
	argv_3379						argv_3215 (argv_773, argv_3715 *, argv_3717, bool&, void **);
	argv_3379						argv_1193 (argv_773);
	argv_3379						argv_3480 (argv_773, argv_3715 *, argv_3717, bool&, argv_3715 *&, argv_3717&);
	argv_3379						argv_3481 (argv_773, argv_3715 *, argv_3717, bool&, argv_3715 *&, argv_3717&);
};



#endif // argv_450



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
