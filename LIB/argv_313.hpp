// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_313.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions that permits the loader cypher
// @@ argv_2785 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_423
#define argv_423



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
#include "../LIB_CRYPTO/argv_340.hpp"
#include "../LIB_CRYPTO/argv_343.hpp"


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_3379 (* argv_1413)	(argv_3449 *, argv_794 *, argv_1025&, argv_3717, argv_3717, argv_3717&, argv_3717&);
typedef argv_3379 (* argv_1414) (argv_3449 *, argv_794 *, argv_1026&, argv_3717, argv_3717, argv_3717&, argv_3717&);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_774
// @@
// @@ DESCRIPTION:
// @@ This class is an abstraction layer that eventually
// @@ permits to use the cipher/decipher functions
// @@ exported by the compression related DLL.
// @@
// @@ this class is only here for convenience
// @@ it permits to group the functions exported
// @@ by the DLL in a unique entity, and thus you just have
// @@ to initialize it once, and then
// @@ use it without any burden.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_774 : public argv_1063
{
private:

public:
	argv_1413		argv_1065;
	argv_1414		argv_1101;

	argv_774 ();

	argv_3379 reset ();
	argv_3379 init (argv_792 *, const char *);
};



#endif // argv_423



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
