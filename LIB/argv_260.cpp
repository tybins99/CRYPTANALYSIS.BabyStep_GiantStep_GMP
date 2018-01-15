// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_260.cpp
// @@ 
// @@ DESCRIPTION:
// @@ abstraction layer for local and remote
// @@ inter process communications
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_319.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	reset		
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
// @@ This function permits to reset all fields of
// @@ the argv_874 argv_2785 to their initial argv_3807.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_874::reset () {
	argv_1915		= false;
	argv_1907		= false;
	argv_1898	= false;
	argv_2033		= 0;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	argv_874		
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
// @@ Normal constructor of the 'argv_874' argv_2785.
// @@ it argv_3124 the argv_874 argv_2785 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_874::argv_874 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	~argv_874		
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
// @@ destructor of the argv_874 argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_874::~argv_874 () {

}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	argv_1658			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : the last error encountered with the argv_874 argv_2785.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last error 
// @@ encountered with the argv_874 argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_874::argv_1658 () {
	return (argv_2033);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	argv_3112			
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
// @@ argv_3379 : argv_2262 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3110 a TCP client using the
// @@ server argv_2697 and server argv_3095 (cf parameters) and to perform
// @@ the connection to this server.
// @@
// @@ CONTRACT 		:	
// @@ - client must not have been argv_3124 before this call.
// @@ - client must not be connected prior to this call.
// @@ - argv_2234 argv_2785 must not be a server entity.
// @@ - '_target_address' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_874::argv_3112 (argv_773 _target_address, argv_3717 _port) {
	argv_3379 argv_1892 = argv_2262;
	if (argv_1907 == true) {
		argv_1892 = argv_2246;
	}
	else if (argv_1898 == true) {
		argv_1892 = argv_2245;
	}
	else if (argv_1915 == true) {
		argv_1892 = argv_2237;
	}
	else if (_target_address == argv_2766) {
		argv_1892 = argv_2249;
	}
	else { // ok to proceed
		argv_1892 = argv_3113 (_target_address, _port);
		if (argv_1892 != argv_2262) {
			reset ();		
		}
		else { // preparation succeeded
			argv_1907		= true;
			argv_1915		= false;
			argv_1898	= true;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	argv_870				
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to tear down the previously
// @@ established connection, then the argv_874 argv_2785 is resetted
// @@ so that it can be ready for use.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_874' argv_2785 must have been argv_3124 before this call.
// @@ - 'argv_874' argv_2785 must be connected prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_874::argv_870 () {
	argv_3379 argv_1892 = argv_2262;
	if (argv_1907 == false) {
		argv_1892 = argv_2248;
	}
	else if (argv_1898 == false) {
		argv_1892 = argv_2247;
	}
	else { // ok to proceed, argv_3460 is correct
		argv_1892 = argv_871 ();
		reset (); // reset
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	argv_870				
// @@
// @@ INPUT			:
// @@ _descriptor: argv_2157: pointer on the descriptor to argv_869.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_869 the connection that was
// @@ previously established with the descriptor given as 
// @@ the parameter '_descriptor'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_874::argv_870 (argv_2157 _descriptor) {
	argv_3379 argv_1892 = argv_871 (_descriptor);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	argv_3118				
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
// @@ argv_3379 : argv_2262 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to bind the argv_3095 '_port' on the 
// @@ network card interface whose IP is given by the 
// @@ '_target_address' parameter, so that the server will then
// @@ be ready to receive new incoming connections.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_874' argv_2785 must not have been argv_3124 yet before.
// @@ - 'argv_874' must not be connected prior to this call.
// @@ - '_target_address' parameter must not be a argv_2766 pointer. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_874::argv_3118 (argv_773 _target_address, argv_3717 _port) {
	argv_3379 argv_1892 = argv_2262;
	if (argv_1907 == true) {
		argv_1892 = argv_2246;
	}
	else if (argv_1898 == true) {
		argv_1892 = argv_2245;
	}
	else if (_target_address == argv_2766) {
		argv_1892 = argv_2249;
	}
	else { // ok to proceed
		argv_1892 = argv_3119 (_target_address, _port);
		if (argv_1892 == argv_2262) {
			argv_1907 = true;
			argv_1915	= true;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	argv_574				
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _descriptor: argv_2157&: the newly connected client argv_3410.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to a argv_874 argv_2785 initialized
// @@ as a server to accept a new connection and to return
// @@ the newly connected argv_3410 via the argv_3266 
// @@ parameter '_descriptor'.
// @@
// @@ CONTRACT 		:
// @@ - 'argv_874' argv_2785 must not have been argv_3124 yet.
// @@ - 'argv_874' must have been argv_3124 as a server prior to
// @@   this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_874::argv_574 (argv_2157& _descriptor) {
	argv_3379 argv_1892 = argv_2262;
	if (argv_1907 == false) {
		argv_1892 = argv_2248;
	}
	else if (argv_1915 == false) {
		argv_1892 = argv_2237;
	}
	else if (argv_1898 == true) {
		// for now the server accepts only argv_2806 connection from
		// a given client for simplicity of the primary tests.
		argv_1892 = argv_2245;
	}
	else { // ok to proceed, argv_3460 is correct
		argv_1892 = argv_575 (_descriptor);
		if (argv_1892 == argv_2262) { // connection was succesful
			argv_1898 = true;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	argv_1644				
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
// @@ argv_3379 : argv_2262 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the descriptor associated
// @@ with the argv_874 argv_2785, this descriptor being returned via
// @@ the '_descriptor_ptr' argv_3266 argument.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_874' argv_2785 must be connected prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_874::argv_1644 (argv_2157& _descriptor_ptr) {
	argv_3379 argv_1892 = argv_2262;
	if (argv_1898 == false) {
		argv_1892 = argv_2247;
	}
	else {
		argv_1892 = argv_1645 (_descriptor_ptr);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	argv_1660				
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
// @@ argv_3379 : argv_2262 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the descriptor associated
// @@ with the argv_874 argv_2785 when this argv_2785 is a server that 
// @@ was previously argv_3124 to listen.
// @@ this descriptor being returned via the '_descriptor_ptr' 
// @@ argv_3266 argument.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_874' argv_2785 must have been argv_3124 prior to this call.
// @@ - 'argv_874' must be a server argv_2785 (cf preparation).
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_874::argv_1660 (argv_2157& _descriptor_ptr) {
	argv_3379 argv_1892 = argv_2262;
	if (argv_1915 == false) {
		argv_1892 = argv_2237;
	}
	else if (argv_1907 == false) {
		argv_1892 = argv_2248;
	}
	else { // all pre-conditions are met
		argv_1892 = argv_1661 (_descriptor_ptr);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	argv_3336				
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
// @@ argv_3379 : argv_2262 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3335 '_size' argv_739 toward the 
// @@ connection, the argv_739 to argv_3335 being located at the argv_595
// @@ pointed to by the '_buf' parameter.
// @@
// @@ CONTRACT 		:	
// @@ - '_buf' parameter must not be a argv_2766 pointer.
// @@ - '_size' parameter must not be zero.
// @@ - 'argv_874' must have been connected prior to this call, either
// @@   as a server, or as a client.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_874::argv_3336 (argv_3715 * _buf, argv_3717 _size, argv_3717& _actual_nb_sent) {
	argv_3379 argv_1892 = argv_2262;
	if ((_buf == argv_2766) || (_size == 0)) {
		argv_1892 = argv_2249;	
	}
	else if (argv_1898 == false) {
		argv_1892 = argv_2247;
	}
	else { // argv_3460 is correct => ok to proceed
		argv_1892 = argv_3337 (_buf, _size, _actual_nb_sent);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_874	
// @@
// @@ FUNCTION		:	argv_3200				
// @@
// @@ INPUT			:
// @@ _buf: argv_3715 *: argv_595 of the first byte of the argv_728 containing
// @@   the argv_1073 to be sent.
// @@
// @@ _size_2_read: argv_3717 : number of argv_739 to read via the connection.
// @@
// @@ _timeout_second: argv_3379: the timeout associated with the read operation
// @@   on the argv_1043 argv_2234 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	
// @@ _actual_size: argv_3717& : actual number of argv_739 read (can be lower
// @@  than '_size' in case of non-blocking sockets.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_2262 if operation was succesful,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive '_size_2_read' argv_739 from
// @@ the connection established. Notice that when the argv_3410
// @@ are in non-blocking mode, the number of argv_739 actually
// @@ received may be lower than '_size_2_read', so the actual
// @@ number of argv_739 read must be returned via the 
// @@ '_actual_size' argument.
// @@
// @@ CONTRACT 		:	
// @@ - '_buf' parameter must not be a argv_2766 pointer.
// @@ - '_size' parameter must not be zero.
// @@ - 'argv_874' must have been connected prior to this call, either
// @@   as a server, or as a client.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_874::argv_3200 (argv_3715 * _buf, argv_3717 _size_2_read, argv_3717& _actual_size, argv_3379 _timeout_second) {
	argv_3379 argv_1892 = argv_2262;
	if (_buf == argv_2766) {
		argv_1892 = argv_2249;	
	}
	else if (argv_1898 == false) {
		argv_1892 = argv_2247;
	}
	else { // argv_3460 is correct => ok to proceed
		argv_1892 = argv_3201 (_buf, _size_2_read, _actual_size, _timeout_second);
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
