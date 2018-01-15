#ifndef argv_448
#define argv_448


#include "../LIB/argv_314.hpp"
#include "../LIB/argv_299.hpp"

#include "../COMMON_PLUGIN/pe_type_detector.hpp"


typedef argv_3379 (* argv_1544)	(argv_2157, argv_2157&);
typedef void (* argv_1547) (argv_2157, argv_2157);
typedef argv_3379 (* argv_1560)				(argv_2157, argv_3715 *, argv_3717, bool&, argv_2157&);

typedef argv_3379 (* argv_1605)				(argv_2157 _kernel_data_ptr, argv_3715 *, argv_3717, bool&, argv_2157&);
typedef argv_3379 (* argv_1552)			(argv_2157, argv_2157, char *&, argv_3717&);
typedef argv_3379 (* argv_1548)					(argv_2157, argv_3715 *, argv_3717&, argv_2157, argv_3379&);

typedef argv_3379 (* argv_1542)					(argv_2157, argv_773);
typedef argv_3379 (* argv_1545)					(argv_2157);



class Ccallback_set
{
private:
	void	argv_808 (argv_865 *, argv_2157, argv_773, bool&);

public:
	argv_1542					argv_1408;
	argv_1545					argv_1416;	
	argv_1544	argv_1412;
	argv_1547	argv_1420;
	argv_1560					argv_1465;
	argv_1605				argv_1535;
	argv_1552			argv_1435;
	argv_1548					argv_1421;

	Ccallback_set ();
	bool argv_802 (argv_865 *);
};

class argv_1042 
{
private:
	argv_3715 *			argv_1319;
	argv_3717			argv_1334;

	argv_792	argv_1688;
	argv_1036	argv_3582;
	argv_3405	argv_1936;
	argv_789	argv_1318;
	bool			init_done;
	Ccallback_set	callback_set;
	bool			argv_3120 ();
	bool			argv_3122 (argv_773, argv_773, argv_773);
	bool			argv_3102 ();
	bool			argv_2963 (argv_773, argv_2157&, bool);

public:
	argv_1042 ();

	bool init (argv_773, argv_773, argv_2157&);
	~argv_1042 ();

	void init_callback__construct					(argv_1542);
	void init_callback__destruct					(argv_1545);		
	void init_callback__create_scan_result_atom		(argv_1544);
	void init_callback__destruct_scan_result_atom	(argv_1547);
	void init_callback__match_type					(argv_1560);
	void init_callback__scan_buffer					(argv_1605);
	void init_callback__get_scan_report				(argv_1552);
	void init_callback__dysinfect					(argv_1548);

	bool argv_3306 (argv_773, argv_773, argv_773, bool);
};

#endif // __MAIN_PE_FAKE_SCAN_FLAG__