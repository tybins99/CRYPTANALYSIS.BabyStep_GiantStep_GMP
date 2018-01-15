// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_300.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all argv_1073 structures and
// @@ objects that permits to have an event-driven
// @@ TCP/IP based loop to create an application.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_362
#define argv_362



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_325.hpp"
#include "../LIB/argv_321.hpp"
#include "../LIB/argv_297.hpp"
#include "../LIB/argv_309.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C functions called by the event loop
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_2756		(argv_761 *, argv_3717, bool&);
argv_3379 argv_2887	(argv_761 *, argv_3717, bool&);
argv_3379 argv_2891	(argv_761 *, argv_3717, bool&);
argv_3379 argv_2243		(argv_761 *, argv_3717, bool&);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_790
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 embeds the event loop that reacts to
// @@ all possible events on sockets.
// @@ It implements the functions that are called by the
// @@ event loop when an event occurs on a given argv_3410.
// @@
// @@ it uses a kernel manager to hide the mechanisms and
// @@ create an abstraction layer.
// @@ The first kernel manager is allocated and argv_3124 by the
// @@ gateway itself, but when an update is argv_1185, the admin thread
// @@ creates and argv_3110 a new kernel manager, and sends the argv_595
// @@ of this new kernel to the gateway.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_790
{
private:
	argv_787	argv_1269;
	argv_865 *				argv_2135;
	argv_786			argv_1268;
	vector<SOCKET *>	argv_3799;
	argv_761 *		argv_840;
	char				argv_3681[MAX_PATH];
	bool				argv_1320;
	argv_3715				argv_3794;
	string				argv_3683;
	string				argv_1300;

	string				argv_3273;
	string				argv_1939;
	argv_838	*	argv_1962;

	argv_1000	*			argv_2884;

	bool				argv_3318;
	bool				infected;
	argv_1004				argv_3827;
	bool				argv_1196;
	bool				argv_1194;
	bool				argv_1197;

	argv_3379				argv_3140 (argv_761 *, argv_3717, bool&);
	argv_3379				argv_3141 (argv_761 *, argv_3717, bool&);
	argv_3379				argv_3130 (argv_761 *, argv_3717, bool&);
	argv_3379				argv_3135 (argv_761 *, argv_3717, bool&);
	argv_3379				argv_3143 (argv_761 *, argv_3717, bool&);
	argv_3379				argv_3142 (argv_761 *, argv_3717, bool&);
	argv_3379				argv_1386 (argv_761 *, argv_3717, bool&);
	argv_3379				argv_1388 (argv_761 *, argv_3717, bool&, argv_3379);
	argv_3379				argv_813 (argv_761 *, argv_3717);
	argv_3379				argv_3306 (argv_773, bool);
	argv_3379				argv_3356 (argv_3717&);
	argv_3379				argv_3338 (argv_761 *, argv_3717, argv_773);
	argv_3379				argv_1154 ();
	argv_3379				argv_3138 (argv_773, argv_761 *, argv_3717, argv_3379);

public:
	argv_790 ();
	void				reset ();
	argv_3379				argv_3278 (argv_865 *, argv_3717, vector<argv_864>&, argv_773, argv_773);

	argv_3379				argv_2755	(argv_761 *, argv_3717, bool&);
	argv_3379				argv_2886	(argv_761 *, argv_3717, bool&);
	argv_3379				argv_2890	(argv_761 *, argv_3717, bool&);
	argv_3379				argv_2242		(argv_761 *, argv_3717, bool&);
};



#endif // argv_362



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
