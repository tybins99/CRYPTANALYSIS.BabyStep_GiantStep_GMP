// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_247.cpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_306.hpp"


argv_832::argv_832 () {
	reset ();
}

void argv_832::reset () {
	argv_2135					= argv_2766;
	argv_3095					= 0;
	inner_port_servname		= "127.0.0.1";
	argv_2825				= "";
	argv_985	= false;
	argv_3205			= argv_2766;
	argv_3343			= argv_2766;
	argv_3124				= false;
}

void argv_832::argv_1151 (argv_3379 _iret_success, argv_3379 _iret, argv_773 _operation) {
	char argv_3681[MAX_PATH];
	if (argv_2135 != argv_2766) {
		if (_iret == _iret_success) {
			argv_3409 (argv_3681, MAX_PATH, "%s (argv_2824:%s)...[SUCCESS]", _operation, argv_2825.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1086, argv_3681);
		}
		else {
			string serror = argv_1240 (_iret);
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: %s (argv_2824:%s)...[FAILED] - serror=%s", _operation, argv_2825.c_str(), serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1242, argv_3681);
		}
	}
}

void argv_832::argv_1146 (argv_773 _message) {
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "argv_832(argv_2824:%s) %s", argv_2825.c_str(), _message);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
}

argv_3379 argv_832::argv_869 () {
	argv_3379 argv_1892 = argv_1887;
	if (argv_985 == false) {
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_832::argv_869 - illegal call  when connection was not established !");
		argv_1892 = argv_1885;
	}
	else { // argv_869 the connection with the external client
		argv_2259.argv_870 ();
		argv_985	= false;
		argv_3124				= false;
	}
	return (argv_1892);
}

argv_3379 argv_832::argv_3341 () {
	argv_3379 argv_1892 = argv_1887;
	argv_1892 = argv_3343->argv_3335 (argv_2259);
	if (argv_1892 != argv_2901) {
		string serror = argv_1240 (argv_1892);
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_832::argv_3341 -  packet argv_3199 failed ! - errno = ", serror.c_str());
	}

	if (argv_1892 == argv_2901) { // remap error argv_877
		argv_1892 = argv_1887;
	}
	return (argv_1892);
}

argv_3379 argv_832::argv_1641 (argv_2157& _socket_ptr_as_void) {
	argv_3379 argv_1892 = argv_1887;
	argv_1892 = argv_2259.argv_1644 (_socket_ptr_as_void);
	return (argv_1892);
}

argv_3379 argv_832::argv_3196 () {
	argv_3379 argv_1892				= argv_1887;
	argv_3379 infinite_timeout	= -1;

	argv_1892 = argv_3205->reset ();
	if (argv_1892 != argv_2901) {
		string serror = argv_1240 (argv_1892);
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_832::argv_3196 -  packet reset failed ! - errno = ", serror.c_str());
	}
	else { // packet reseted succesfully
		// wait for a request from this external client
		argv_1892 = argv_3205->argv_3199 (argv_2259, infinite_timeout, false);
		if (argv_1892 != argv_2901) {
			string serror = argv_1240 (argv_1892);
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_832::argv_3196 -  packet argv_3199 failed ! - errno = ", serror.c_str());
		}
	}

	if (argv_1892 == argv_2901) { // remap error argv_877
		argv_1892 = argv_1887;
	}
	return (argv_1892);
}


argv_3379 argv_832::argv_3110 (argv_773 _owner, argv_3717 _port, argv_865 * _log_ptr, argv_1000 * _recv_pck_ptr, argv_1000 * _send_pck_ptr) {
	argv_3379 argv_1892 = argv_1887;
	if ((_log_ptr == argv_2766) || (_recv_pck_ptr == argv_2766) || (_send_pck_ptr == argv_2766)) {
		argv_1892 = argv_1886;
	}
	else if (argv_3124 == true) {
		argv_1892 = argv_1884;
	}
	else {
		argv_3205	= _recv_pck_ptr;
		argv_3343	= _send_pck_ptr;
		argv_2135			= _log_ptr;
		argv_3095			= _port;
		argv_2825		= _owner;

		argv_1146 ("preparing inner argv_3095");

		// bind the argv_3095 given as a parameter
		argv_1892 = argv_2259.argv_3112 (inner_port_servname.c_str(), argv_3095);
		argv_1151 (argv_2262, argv_1892, "argv_3112");
		if (argv_1892 != argv_2262) {
			argv_3717 argv_2033 = argv_2259.argv_1658 ();
			string serror = argv_1240 (argv_1892);
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_832::argv_3110 - argv_3112 FAILED ! - errno = ", serror.c_str());
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_832::argv_3110 - last argv_3410 error = ", argv_2033);
			argv_1892 = argv_1882;
		}
		else { // client argv_3124 succesfully
#if defined (__DEBUG_INNER_PORT__)
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "client argv_3124 succesfully on argv_3095 %u for '%s' (connection established)", _port, _owner);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_INNER_PORT__)
			argv_985	= true;
			argv_3124				= true;
		}
	}

	if (argv_1892 == argv_2262) {
		argv_1892 = argv_1887; // remap error argv_877
	}
	return (argv_1892);
}




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
