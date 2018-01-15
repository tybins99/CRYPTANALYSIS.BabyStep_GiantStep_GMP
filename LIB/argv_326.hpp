// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_326.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures and
// @@ functions necessary for a packet to be filled
// @@ in using argv_3695 independant functions.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_441
#define argv_441



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2211 65536



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_3695 casting argv_2785
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
union argv_3704  {
  argv_3715 argv_689;
  argv_3716 argv_690;
  argv_3717 argv_691;
  char argv_685[4];
};


class argv_1000;


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1001	 
// @@
// @@ DESCRIPTION	:
// @@ This argv_2785 permits to store/retrieve different argv_1073 types
// @@ to the argv_728 associated with a given packet.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1001
{
private:
	argv_1001 (const argv_1001&);	// forbid argv_2785 binary copy
	argv_1001& operator= (const argv_1001&);	

	bool		argv_3823;
    argv_3715 *		argv_733;
    argv_3715 *		argv_730;
    argv_3715 *		argv_731;
	argv_3704	argv_3703;

public:
	void	reset ();
	argv_1001 ();
	argv_3379	init (argv_3715 *, argv_3717);
	argv_3379	argv_1680 (argv_3717&);

	argv_3379	insert (argv_3715);
	argv_3379	argv_1292 (argv_3715&);

	argv_3379	insert (argv_3716);
	argv_3379	argv_1292 (argv_3716&);

	argv_3379	insert (argv_3717);
	argv_3379	argv_1292 (argv_3717&);

	argv_3379	insert (argv_773);
	argv_3379	insert (const string&);
	argv_3379	argv_1292 (string&);

	argv_3379	insert_buffer (argv_3715 *, argv_3717);
	argv_3379	insert_fake_buffer (argv_3717);
	argv_3379	argv_1293 (argv_3715 *, argv_3717);

	void	argv_1014 (argv_1001&);
	void	argv_1132 (argv_773, FILE *);
	void	argv_1132 (argv_773, FILE *, argv_3717);
	argv_3715 *	argv_1643 ();

	friend class argv_1000;
};


#endif // argv_441



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
