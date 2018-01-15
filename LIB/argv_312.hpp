// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_312.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions that permits the loader argv_962
// @@ argv_2785 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_422
#define argv_422



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
#pragma warning(disable: 4786)
#pragma warning(disable: 4503)
#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <map>
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_315.hpp"
#include "../LIB/argv_314.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ Function pointers definition
// @@
// @@ - argv_1407: pointer on a function that permits to
// @@   argv_962 a given argv_728.
// @@
// @@ - argv_1539: pointer on a function that permits to
// @@   argv_3744 a given argv_728.
// @@
// @@ Notice that the compression/decompression will occur in memory,
// @@ so the argv_1314 is supposed to have been memory mapped,
// @@ or projected to virtual memory.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3379 (* argv_1407)   (argv_3449 *, argv_3717, argv_3717, argv_3717&, argv_3717&);
typedef argv_3379 (* argv_1539) (argv_3449 *, argv_3717, argv_3717, argv_3717&, argv_3717&);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_767
// @@
// @@ DESCRIPTION:
// @@ This class is an abstraction layer that eventually
// @@ permits to use the argv_962/argv_3744 functions
// @@ exported by the compression related DLL.
// @@
// @@ this class is only here for convenience
// @@ it permits to group the functions exported
// @@ by the DLL in a unique entity, and thus you just have
// @@ to initialize it once, and then
// @@ use it without any burden.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_767 : public argv_1063
{
private:

public:
	argv_1407		argv_965;
	argv_1539	argv_3746;

	argv_767 ();

	argv_3379 reset ();
	argv_3379 init (argv_792 *, const char *);
};



#endif // argv_422



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
