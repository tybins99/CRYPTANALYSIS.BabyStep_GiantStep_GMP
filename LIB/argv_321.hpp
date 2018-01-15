// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_321.hpp
// @@ 
// @@ DESCRIPTION:
// @@ communication layer that uses 
// @@ TCP/IP sockets. Derivates from the
// @@ argv_874 argv_2785.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_347
#define argv_347



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_301.hpp"
#include "../LIB/argv_319.hpp"

#if defined (__LINUX_OS__)
	#include <sys/types.h>
	#include <sys/argv_3410.h>
	#include <arpa/inet.h>
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_876
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 is an abstraction layer of a communication
// @@ channel that uses the TCP/IP protocol to communicate.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_876 : public argv_874
{
protected:
	argv_3717		argv_3095;
#if defined (__WIN32_OS__)
	WORD			argv_3412;
	WSADATA			argv_3840;
	SOCKADDR_IN		argv_3350;
	LPHOSTENT		argv_1811;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	struct hostent *	argv_1811;
	struct sockaddr_in	argv_3350;
#endif // #if defined (__LINUX_OS__)
	SOCKET			argv_2093;
	SOCKET			argv_863;

	argv_3379 argv_3113 (argv_773 _target_address, argv_3717 _port=0);

	// server related function
	argv_3379 argv_3119 (argv_773 _target_address, argv_3717 _port=0);
	argv_3379 argv_575 (argv_2157&);

	argv_3379 argv_3337 (argv_3715 *, argv_3717, argv_3717&);
	argv_3379 argv_3201 (argv_3715 * _buf, argv_3717 _size_2_read, argv_3717& _actual_size, argv_3379 _timeout_second=-1);

	argv_3379 argv_871 ();
	argv_3379 argv_871 (argv_2157);
	argv_3379 argv_1645 (argv_2157&);
	argv_3379 argv_1661 (argv_2157&);

public:
	argv_876 ();
	~argv_876 ();
	argv_3379 init_with_connected_client_socket (SOCKET&);
};



#endif // argv_347



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
