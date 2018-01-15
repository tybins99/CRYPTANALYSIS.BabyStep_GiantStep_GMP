// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_305.hpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_415
#define argv_415




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_316.hpp"
#include "../LIB/argv_328.hpp"
#include "../LIB/argv_306.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;


class argv_760
{
protected:
	argv_3715			outer_type;
	argv_3715			inner_type;
	argv_3717			argv_1054;
	argv_3717			argv_1053;
	argv_3717			argv_1046;
	argv_3717			argv_1045;

	argv_758		argv_699;
	bool			argv_744;			// permits to argv_3463 the argv_2785
	bool			argv_3466;		// permits to argv_3463 the argv_2785
	bool			interrupt_flag;			// the OR of 2 other conditions

	bool			argv_3771;
	argv_3717			argv_3772;

public:
	argv_760 ();
	virtual			~argv_760 ();
	void			argv_745 (argv_3717, argv_3717);
	void			argv_3216 ();
	void			argv_3364 (argv_3717);
	void			argv_1656 (bool&, bool&, bool&, argv_3717&);
	void			argv_3248 ();
	void			reset ();
};

// You can notice that there exists a 'cancel_current_operation' field
// This field can be accessed and modified by the thread creator. This is
// possible because the thread creator instanciantes the argv_2785, then
// creates a thread giving the instanciated argv_2785's argv_595 to this
// thread, thus even if the argv_2785 runs in a separate thread, the thread
// creator can still have access to the argv_2785.
class argv_831 : public argv_760
{
protected:
	bool			argv_3124;
	string			argv_2824;
	argv_865 *			argv_2135;
	argv_832		inner_port;
	argv_1000			argv_3204;
	argv_1000			argv_3342;

	void			argv_1152 ();
	void			argv_1150 (argv_3379, argv_3379, argv_773);
	argv_3379			argv_3198 ();
	virtual argv_3379	argv_3142 (argv_3715);
	virtual argv_3379	argv_1176 ();
	argv_3379			forge_payload (argv_3715, argv_1000 *, vector<argv_772>&);
	argv_3379			insert_atom_vector (vector<argv_772>&);
	argv_3379			argv_3132 (bool, bool, argv_3715, argv_773);

public:

	argv_831 ();
	virtual			~argv_831 ();
	void			reset ();
	argv_3379			argv_3110 (argv_773, argv_3717, argv_865 *);
	argv_3379			argv_3278 (argv_773, argv_3717, argv_865 *);

	argv_3379			argv_3341 ();
	argv_3379			format_and_send_result (argv_773, argv_3715, argv_1000 *);
	argv_3379			argv_1382 (argv_3715, vector<argv_772>&, argv_773, argv_3715);
	argv_3379			argv_1298 ();
	argv_3379			argv_3194 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



#endif // argv_415
