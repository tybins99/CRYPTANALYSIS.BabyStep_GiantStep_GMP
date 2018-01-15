// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_329.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the functions and argv_1073
// @@ structures necessary for the scan daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_445
#define argv_445



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#include "../LIB/argv_301.hpp"
#include "../LIB/argv_295.hpp"
#include "../LIB/argv_305.hpp"
#include "../LIB/argv_292.hpp"
#include "../LIB_ARCHIVE/argv_635.hpp"
#include "../LIB_ARCHIVE/argv_648.hpp"
#include "../LIB_AVX/argv_3417.hpp"
#include "../LIB_AVX/argv_3307.hpp"
#include "../LIB_AVX/argv_3774.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2217  5000 


// at thread creation argv_3678, these argv_1073 are saved up so that we can monitor
// the thread's death later.
class argv_1039
{
public:
	string		argv_2697;
	DWORD		argv_3634;
	HANDLE		argv_3633;
};


class Cscan_dameon_log_set
{
public:
	argv_865					argv_2130;
	argv_865					argv_2126;
	argv_865					argv_2127;
	argv_865					argv_2139;
	argv_865					argv_2138;
	argv_865					argv_2145;
};

class argv_1032
{
public:
	argv_765			argv_924;
	Carchive_creator		argv_635;
	Carchive_extractor		argv_648;
	Cspyware_manager		argv_3417;
	Cscan_gateway			argv_3307;
	Cupdate_manager			argv_3774;
};


class Cscan_daemon_data_set
{
public:
	string	internal_servname;
	string	argv_1287;

	argv_3717	argv_1285;
	argv_3717	argv_1286;
	argv_3717	argv_1284;
	argv_3717	argv_1288;

	argv_3717	internal_archive_creator_port;
	argv_3717	internal_archive_extractor_port;
	argv_3717	internal_spyware_manager_port;
	argv_3717	internal_scan_gateway_port;
	argv_3717	internal_update_manager_port;
	argv_3717	internal_admin_port;

	argv_3717	argv_2209;

	string	argv_3273;
	string	argv_1939;
	string	argv_626;
	string	argv_625;
};


class argv_1031
{
public:
	Cscan_daemon_data_set		data_set;
	argv_1032	inner_objects;
	Cscan_dameon_log_set		log_set;
	vector<argv_864>			argv_3799;
};


class argv_1030 : public argv_776
{
private:
	argv_1031			argv_1238;
		
	vector<argv_876>		argv_3800;
	vector<argv_1039>	argv_3805;
	argv_1039			argv_939; 

	argv_3379						argv_2045 (argv_773 _name, argv_2157 _callback_ptr, argv_2157 _param_ptr, bool _is_com_manager=false);
	argv_3379						argv_2041 ();
	argv_3379						argv_2039 ();
	argv_3379						argv_2040 ();
	argv_3379						argv_2043 ();
	argv_3379						argv_2042 ();
	argv_3379						argv_2046 ();

	argv_3379						argv_2038 ();
	argv_3379						argv_3111 ();
	argv_3379						argv_3117 (argv_773, argv_773, argv_3717, argv_3715);
	void						argv_1150 (argv_773, argv_3379, argv_3379);

	argv_3379						argv_1296 ();
	void						argv_1155 ();
	argv_3379						argv_1017 ();
	argv_3379						argv_2018 ();
	argv_3379						argv_3832 (argv_773, HANDLE, argv_3379);
	argv_3379						argv_3831 ();
	argv_3379						argv_2813 ();
	argv_3379						argv_2016 (argv_831&);

public:
	void						reset ();
	argv_1030 ();
	~argv_1030 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ necessary functions forward declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#if defined (__WIN32_OS__) 
	typedef unsigned long					(__stdcall * argv_1607)	(void *);
	void	WINAPI	service_main			(DWORD argv_679, LPTSTR argv_680[]);
	void			argv_3351	(DWORD);
#endif // #if defined (__WIN32_OS__) 



#endif // argv_445



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
