// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_315.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions that permits the general loader
// @@ argv_2785 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_426
#define argv_426



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_311.hpp"
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_316.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1063
// @@
// @@ DESCRIPTION:
// @@ This class is an abstraction layer that eventually
// @@ permits to use the functions exported by a given DLL
// @@ or a shared argv_2785.
// @@
// @@ this class is only here for convenience
// @@ it permits to group the functions exported
// @@ by the DLL in a unique entity, and thus you just have
// @@ to initialize it once, and then
// @@ use it without any burden.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1063
{
protected:
	bool				init_done;
	argv_3717				argv_2054;
	argv_842			argv_2055;

	void				init_one_function (argv_792 *, argv_773, argv_2157 *, argv_3379& _iret);

public:

	argv_1063 ();
	virtual				~argv_1063 () {;}
	virtual argv_3379		reset ();
	virtual argv_3379		init (argv_792 *, argv_773) = 0;
};



#endif // argv_426



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
