// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_262.cpp
// @@ 
// @@ DESCRIPTION:
// @@ communication layer that uses 
// @@ TCP/IP sockets. Derivates from the
// @@ argv_874 argv_2785.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_321.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:	argv_876		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the 'argv_876' argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_876::argv_876 () {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:	~argv_876		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Destructor of the 'argv_876' argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_876::~argv_876 () {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:	argv_3113		
// @@
// @@ INPUT			:	
// @@ _target_address: argv_773: argv_2697 or IP of the server where to
// @@   connect to.
// @@
// @@ _port: argv_3717: argv_3095 of the server where to connect to.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 a TCP client using the
// @@ server argv_2697 and server argv_3095 (cf parameters) and to perform
// @@ the connection to this server.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_876::argv_3113 (argv_773 _target_address, argv_3717 _port) {
	argv_3379 argv_1892 = argv_2262;

#if defined (__WIN32_OS__) 
	argv_3412 = MAKEWORD (1,1);
#endif // #if defined (__WIN32_OS__) 

	argv_863 = argv_3410 (AF_INET, SOCK_STREAM, IPPROTO_TCP);

#if defined (__WIN32_OS__) 
	if (argv_863 == INVALID_SOCKET) {
		argv_2033 = WSAGetLastError ();
		argv_1892 = argv_2261;
	}
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	if (argv_863 < 0) {
		argv_2033	= errno;
		argv_1892		= argv_2261;
	}
#endif // #if defined (__LINUX_OS__)
	else { // argv_3410 created succesfully
		argv_1811 = gethostbyname (_target_address); // Store information about the server
		if (! argv_1811) {
#if defined (__WIN32_OS__) 
			argv_2033 = WSAGetLastError ();
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
			argv_2033 = errno;
#endif //#if defined (__LINUX_OS__)
			argv_1892 = argv_2238;
		}
		else { // host resolved
			// Fill a SOCKADDR_IN struct with argv_595 information
			argv_3350.sin_family		= AF_INET;
#if defined (__WIN32_OS__) 
			argv_3350.sin_addr.s_addr	= inet_addr (_target_address);
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
			inet_pton (AF_INET, _target_address, &argv_3350.sin_addr.s_addr);
#endif // #if defined (__LINUX_OS__)
			argv_3350.sin_port			= htons (_port);

			// Connect to the server
#if defined (__WIN32_OS__) 
			argv_3379 nret = connect (argv_863, (LPSOCKADDR) &argv_3350, sizeof(struct sockaddr));

			if (nret == SOCKET_ERROR) {
				argv_2033 = WSAGetLastError ();
				argv_1892 = argv_2240;
			}
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
			argv_3379 nret = connect (argv_863, (struct sockaddr *) &argv_3350, sizeof(struct sockaddr));

			if (nret < 0) {
				argv_2033 = errno;
				argv_1892 = argv_2240;
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:	argv_3119		
// @@
// @@ INPUT			:
// @@ _target_address: argv_773: IP to use when binding the argv_3095.
// @@
// @@ _port: argv_3717: argv_3095 to bind to receive new connections.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to bind the argv_3095 '_port' on the 
// @@ network card interface whose IP is given by the 
// @@ '_target_address' parameter, so that the server will then
// @@ be ready to receive new incoming connections.
// @@
// @@
// @@ if the parameter "_target_address" is the string "INADDR_ANY", 
// @@ then the INADDR_ANY argv_595 is bound.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_876::argv_3119 (argv_773 _target_address, argv_3717 _port) {
	argv_3379 argv_1892	= argv_2262;
	argv_3095		= _port;
#if defined (__WIN32_OS__)
	argv_3412 = MAKEWORD(1, 1); // We'd like Winsock version 1.1
#endif //#endif // #if defined (__WIN32_OS__)

	argv_2093 = argv_3410 (AF_INET, SOCK_STREAM, IPPROTO_TCP);

#if defined (__LINUX_OS__)
	argv_694 (argv_2093);
#endif // #if defined (__LINUX_OS__)

#if defined (__WIN32_OS__)
	if (argv_2093 == INVALID_SOCKET) {
		argv_2033	= WSAGetLastError ();
		argv_1892		= argv_2261;
	}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (argv_2093 < 0) {
		argv_2033	= errno;
		argv_1892		= argv_2261;
	}
#endif // #if defined (__LINUX_OS__)
	else { // listening argv_3410 created succesfully
		argv_3350.sin_family	= AF_INET;
		string wildcard_address = "INADDR_ANY";
		string his_address		= _target_address;
		if (his_address == wildcard_address) { // if no argv_595 is given, we bind the first card
			argv_3350.sin_addr.s_addr	= INADDR_ANY;
		}
		else {
			argv_3350.sin_addr.s_addr	= inet_addr (_target_address);
		}
		argv_3350.sin_port			= htons (argv_3095);		
		// Bind the argv_3410 to our local server argv_595
#if defined (__WIN32_OS__)
		argv_3379 nret = bind (argv_2093, (LPSOCKADDR)&argv_3350, sizeof(struct sockaddr));
		if (nret == SOCKET_ERROR) {
			argv_2033	= WSAGetLastError ();
			argv_1892		= argv_2236;
		}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
		argv_3379 nret = bind (argv_2093, (struct sockaddr *) &argv_3350, sizeof(struct sockaddr));
		if (nret < 0) {
			argv_2033	= errno;
			argv_1892		= argv_2236;
		}
#endif // #if defined (__LINUX_OS__)
		else { // bind succeeded
			nret = listen (argv_2093, SOMAXCONN); // Up to 10 connections may wait at any
#if defined (__WIN32_OS__)
			if (nret == SOCKET_ERROR) {
				argv_2033	= WSAGetLastError ();
				argv_1892		= argv_2250;
			}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
			if (nret < 0) {
				argv_2033	= errno;
				argv_1892		= argv_2250;
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:	argv_575			
// @@
// @@ INPUT			:
// @@
// @@ OUTPUT		:	
// @@ _descriptor: argv_2157&: the newly connected client argv_3410.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to a argv_876 argv_2785 initialized
// @@ as a server to accept a new connection and to return
// @@ the newly connected argv_3410 via the argv_3266 
// @@ parameter '_descriptor'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_876::argv_575 (argv_2157& _descriptor) {
	argv_3379 argv_1892 = argv_2262;
	argv_863 = accept (argv_2093, argv_2766, argv_2766);

#if defined (__WIN32_OS__)
	if (argv_863 == INVALID_SOCKET) {
		argv_2033	= WSAGetLastError ();
		argv_1892		= argv_2235;
	}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	if (argv_863 < 0) {
		argv_2033	= errno;
		argv_1892		= argv_2235;
	}
#endif // #if defined (__LINUX_OS__)
	else { // accept succeeded
		_descriptor = (argv_2157) &argv_863;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:
// @@ _buf: argv_3715 *: argv_595 of the first byte of the argv_728 containing
// @@   the argv_1073 to be sent.
// @@
// @@ _size: argv_3717 : size of the argv_728 to argv_3335 via the connection.
// @@
// @@ OUTPUT		:	
// @@ _actual_nb_sent: argv_3717& : actual number of argv_739 sent (can be lower
// @@  than '_size' in case of non-blocking sockets.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3335 '_size' argv_739 toward the 
// @@ connection, the argv_739 to argv_3335 being located at the argv_595
// @@ pointed to by the '_buf' parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_876::argv_3337 (argv_3715 * _buf, argv_3717 _amount_2_send, argv_3717& _actual_nb_sent) {
	argv_3379 argv_1892 = argv_2262;

	//MessageBox (argv_2766, "argv_876::argv_3337 - pause before calling 'argv_3335'", "", MB_ICONWARNING);

#if defined (__LINUX_OS__)
	bool finished = false;
	while( ! finished )  {
#endif //#if defined (__LINUX_OS__)
		_actual_nb_sent = argv_3335 (argv_863, (char *) _buf, _amount_2_send, 0);
#if defined (__WIN32_OS__)
		if (_actual_nb_sent == SOCKET_ERROR) {
			_actual_nb_sent = 0;
			DWORD argv_1239	= WSAGetLastError ();

			if (argv_1239 == WSAEWOULDBLOCK) {
				argv_1892 = argv_2244;
			}
			else if (argv_1239 == WSAECONNRESET) {
				argv_1892 = argv_2257;
			}
			else {
				argv_2033	= argv_1239;
				argv_1892		= argv_2256;
			}
		}
#endif //#if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (_actual_nb_sent < 0) {
			if( errno != EINTR )  { // real error occured
				if (errno == EWOULDBLOCK) {
					argv_1892 = argv_2244;
					finished = true;
				}
				else {
					argv_2033	= errno;
					argv_1892		= argv_2256;
					finished	= true;
				}
			}
		}
		else {
			finished = true;
		}
	}
#endif // #if defined (__LINUX_OS__)
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:	argv_3201			
// @@
// @@ INPUT			:
// @@ _buf: argv_3715 *: argv_595 of the first byte of the argv_728 containing
// @@   the argv_1073 to be sent.
// @@
// @@ _size_2_read: argv_3717 : number of argv_739 to read via the connection.
// @@
// @@ _timeout_second: argv_3379: the timeout associated with the read operation
// @@   on the argv_1043 argv_2234 argv_3410 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	
// @@ _actual_size: argv_3717& : actual number of argv_739 read (can be lower
// @@  than '_size' in case of non-blocking sockets.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive '_size_2_read' argv_739 from
// @@ the connection established. Notice that when the argv_3410
// @@ are in non-blocking mode, the number of argv_739 actually
// @@ received may be lower than '_size_2_read', so the actual
// @@ number of argv_739 read must be returned via the 
// @@ '_actual_size' argument.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_876::argv_3201 (argv_3715 * _buf, argv_3717 _amount_2_recv, argv_3717& _actual_size, argv_3379 _timeout_second) {
	argv_3379 argv_1892 = argv_2262;

	argv_3379 nb_ready			= 0;
	bool is_finished		= false;
	bool is_infinite		= false;
	if (_timeout_second < 0) {
		is_infinite = true;	
	}
	fd_set			readfds;
	struct timeval	tv;
	tv.tv_sec				= _timeout_second; // expressed in second
	tv.tv_usec				= 0;
	argv_3717 tmp_total_nb_read	= 0;
	argv_3717 tmp_nb_remaining	= _amount_2_recv;
	argv_3717 tmp_nb_read		= 0;
	_actual_size			= 0;

	while ((is_finished == false) && (argv_1892 == argv_2262))  {
		FD_ZERO (&readfds);
		FD_SET  (argv_863, &readfds);
		tv.tv_sec	= _timeout_second; // expressed in second
		tv.tv_usec	= 0;

		if (is_infinite == false) { 
			nb_ready = select (argv_863 + 1, &readfds, argv_2766, argv_2766, &tv);
		}
		else {
			nb_ready = select (argv_863 + 1, &readfds, argv_2766, argv_2766, argv_2766);
		}

#if defined (__WIN32_OS__)
		if (nb_ready == SOCKET_ERROR)  { // select error
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (nb_ready  < 0) { // select error
#endif // #if defined (__LINUX_OS__)
			argv_1892 = argv_2255;
		}
		else if (nb_ready == 0) { // select timed out
			argv_1892 = argv_2252;
		}

		if (argv_1892 == argv_2262) {
			tmp_nb_read = argv_3199 (argv_863, (char *) &_buf[tmp_total_nb_read], tmp_nb_remaining, 0);

#if defined (__WIN32_OS__)
			if (tmp_nb_read == SOCKET_ERROR) {
				DWORD argv_1239 = WSAGetLastError ();
				if (argv_1239 == WSAEWOULDBLOCK) {
					argv_1892 = argv_2244;
				}
				else if (argv_1239 == WSAECONNRESET) {
					argv_1892 = argv_2254;
				}
				else { // real error occured
					argv_2033	= argv_1239;
					argv_1892		= argv_2253;
				}
			}
			else if (tmp_nb_read == 0) { // argv_3410 gracefully closed by peer
				argv_1892 = argv_2254;
			}
			else {
				tmp_nb_remaining	= tmp_nb_remaining -  tmp_nb_read;
				tmp_total_nb_read	= tmp_total_nb_read + tmp_nb_read;
				_actual_size		= _actual_size + tmp_nb_read;
				if (tmp_nb_remaining <= 0) {
					is_finished = true;
				}
			}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
			if (_actual_size <= 0)  { 
				if (errno == EINTR)  {
					continue;
				}
				else if ((errno == EAGAIN) || (errno == EWOULDBLOCK)) {
					argv_1892		= argv_2244;
				}
				else if (_actual_size == 0) {
					argv_1892		= argv_2254;
				}
				else {
					argv_2033	= errno;
				}
			}
			else {
				tmp_nb_read
				tmp_nb_remaining	= tmp_nb_remaining -  tmp_nb_read;
				tmp_total_nb_read	= tmp_total_nb_read + tmp_nb_read;
				_actual_size		= _actual_size + tmp_nb_read;
				if (tmp_nb_remaining <= 0) {
					is_finished = true;
				}
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:	argv_871		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to tear down the previously
// @@ established connection, then the argv_874 argv_2785 is resetted
// @@ so that it can be ready for use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_876::argv_871 () {
	argv_3379 argv_1892 = argv_2262;
#if defined (__WIN32_OS__)
		closesocket (argv_863);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (argv_869 (argv_863) < 0) {
			argv_1892 = argv_2260;
		}
#endif // #if defined (__LINUX_OS__)
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:
// @@ _descriptor: argv_2157: pointer on the descriptor to argv_869.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_869 the connection that was
// @@ previously established with the descriptor given as 
// @@ the parameter '_descriptor'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_876::argv_871 (argv_2157 _descriptor) {
	argv_3379 argv_1892 = argv_2262;
	SOCKET * socket_ptr = (SOCKET *) _descriptor;
#if defined (__WIN32_OS__)
	if (closesocket (*socket_ptr) != 0) {
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (argv_869 (*socket_ptr) < 0) {
#endif // #if defined (__LINUX_OS__)
		argv_1892 = argv_2260;
	}
	return (argv_1892);
}




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:	argv_1645			
// @@
// @@ INPUT			:
// @@
// @@ OUTPUT		:	
// @@ _descriptor_ptr: argv_2157&: argv_595 of the descriptor associated
// @@   with the argv_874 argv_2785.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the descriptor associated
// @@ with the argv_874 argv_2785, this descriptor being returned via
// @@ the '_descriptor_ptr' argv_3266 argument.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_876::argv_1645 (argv_2157& _descriptor_ptr) {
	argv_3379 argv_1892 = argv_2262;
	_descriptor_ptr = (argv_2157) &argv_863;
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:	argv_1661		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _descriptor_ptr: argv_2157&: argv_595 of the descriptor associated
// @@   with the argv_874 argv_2785.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the descriptor associated
// @@ with the argv_876 argv_2785 when this argv_2785 is a server that 
// @@ was previously argv_3124 to listen.
// @@ this descriptor being returned via the '_descriptor_ptr' 
// @@ argv_3266 argument.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_876::argv_1661 (argv_2157& _descriptor_ptr) {
	argv_3379 argv_1892 = argv_2262;
	_descriptor_ptr = (argv_2157) &argv_2093;
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_876	
// @@
// @@ FUNCTION		:	init_with_connected_client_socket			
// @@
// @@ INPUT			:
// @@ _sock: SOCKET&: the argv_3410 to use to initialize the client.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to associate a client argv_3410 that
// @@ was previously connected to a given server with a 
// @@ argv_876 argv_2785 to permit the usage of the 
// @@ argv_876 member functions.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_876' argv_2785 must have been argv_3124 prior to 
// @@   this call.
// @@ - 'argv_876' argv_2785 must not have an established 
// @@   connection prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_876::init_with_connected_client_socket (SOCKET& _sock) {
	argv_3379 argv_1892 = argv_2262;
	if (argv_1907 == true) {
		argv_1892 = argv_2246;
	}
	else if (argv_1898 == true) {
		argv_1892 = argv_2245;
	}
	else {
		argv_1907		= true;	
		argv_1898	= true;
		argv_1915		= false;
		argv_863			= _sock;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
