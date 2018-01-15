// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_297.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the necessary objects
// @@ to argv_1789 n argv_2234 and all their events.
// @@ (argv_3410 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_297.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_864	
// @@
// @@ FUNCTION		:	argv_864	
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
// @@ normal constructor of the 'argv_864' argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_864::argv_864 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_864	
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
// @@ This function permits to set all fields of
// @@ the 'argv_864' argv_2785 to their initial argv_3807.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_864::reset () {
	argv_849 = argv_861;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_787	
// @@
// @@ FUNCTION		:	argv_787	
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
// @@ Normal constructor of the 'argv_787' argv_2785.
// @@ it sets all fields of the 'argv_864' argv_2785 to 
// @@ their initial argv_3807.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_787::argv_787 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_787	
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
// @@ This function permits to set all fields of the 
// @@ 'argv_787' argv_2785 to their initial argv_3807.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_787::reset () {
	argv_1601			= argv_2766;
	argv_1603		= argv_2766;
	argv_1604			= argv_2766;
	argv_1541			= argv_2766;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_786	
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
// @@ normal constructor of the 'argv_786' argv_2785.
// @@ it sets all fields of the 'argv_786' argv_2785 to 
// @@ their initial argv_3807.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_786::argv_786 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	reset
// @@
// @@ INPUT			:	
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
// @@ This function permits to bring the 'argv_786' argv_2785
// @@ back to it's initial argv_3460 :
// @@ - free box stack is emptied
// @@ - all sets are reseted.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_786::reset () {
	// empty the stack of free box indexes
	while (argv_3451.empty () == false) {
		argv_3451.pop ();
	}

	// reset all sets
	FD_ZERO (&readfds);
	FD_ZERO (&readfds_dirty);
	FD_ZERO (&writefds);
	FD_ZERO (&writefds_dirty);
	argv_2135				= argv_2766;

	argv_2741			= 0;
	argv_2749			= 0;
	argv_848		= 0;
	argv_847			= argv_2766;
	argv_2745		= 0; // debug purpose

	// force the vector to free it's internal memory
	argv_3799.clear ();
	vector<argv_864>().swap (argv_3799);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_807	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@ _nb_ready: argv_3717: the number of remaining argv_3410 descriptor
// @@   that have a pending event. The function must update it's
// @@   argv_3807.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function checks all listening argv_3410 to see if they have
// @@ a pending connection. If it is the case, then the connection
// @@ is accepted, and a box is chosen for this new client.
// @@ Then the application dependant is called for each new connection.
// @@ Notice that this application dependant function can either
// @@ trigger the write event or not.
// @@
// @@ Notice that the listeners are handled using only the argv_3410
// @@ (not the argv_2234 argv_2785).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_786::argv_807 (argv_3717& _nb_ready) {
	argv_3379 argv_1892			= argv_1264;
	argv_3717 his_box		= 0;
	bool trigger_write	= false;
	argv_3717 nb_new_cnx		= 0;
	SOCKET sock_tmp;

#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3681[MAX_PATH];
	argv_2135->argv_2142 (argv_1086, "checking new connections");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	// check all listening sockets
	for (argv_3717 i=0 ; i<argv_2749 ; i++) {
		if (FD_ISSET (argv_3799[i].argv_3410, &readfds_dirty)) {
			sock_tmp = accept (argv_3799[i].argv_3410 , argv_2766, argv_2766);

			_nb_ready--;

#if defined (__WIN32_OS__)
			if (sock_tmp == INVALID_SOCKET) {
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
			if (sock_tmp < 0) {
#endif // #if defined (__LINUX_OS__)
				argv_1892 = argv_1249;
				break;
			}

#if defined (__DEBUG_EVT_LOOP__) 
			argv_3409 (argv_3681, MAX_PATH, "new connection for listener %u : new descriptor = %u", argv_3799[i].argv_3410, sock_tmp);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1086, "new connection : descriptor = ", (argv_3717) sock_tmp);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			// the connected client inherits the argv_3695 of the listener.
			argv_1892 = argv_578 (his_box, sock_tmp, argv_3799[i].argv_849);
			if (argv_1892 != argv_1264) {
				break;
			}

			// disable the Nagle's algorithm for the newly connected argv_3410
			argv_1892 = disable_nagle_algorithm (sock_tmp);
			if (argv_1892 == argv_2262) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_2135->argv_2142 (argv_1242, "argv_786::argv_807  - disable_nagle_algorithm...[SUCCESS]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				argv_1892 = argv_1264; // remap error argv_877
			}
			else {
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_786::argv_807 - 'disable_nagle_algorithm' failed !");
			}

			// to ensure that it won't be triggered if the 
			// function does not set it
			trigger_write = false; 
			nb_new_cnx++;
			// now let the user function do it's job
			argv_1892 = argv_1248.argv_1601 (argv_847, his_box, trigger_write);
			if (argv_1892 != argv_1264) {
				break;
			}
			else if (trigger_write == true) { // if argv_3410 must be scheduled for write
				argv_1892 = argv_579 (i, false, true); // argv_576 it for write event
				if (argv_1892 != argv_1264) {
					break;
				}
			}
		}
		else {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_3409 (argv_3681, MAX_PATH, "listener at listening box %u has no new connection (fd=%u)", i, argv_3799[i].argv_3410);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}

		if (_nb_ready == 0) {
			break;
		}
	}

#if defined (__DEBUG_EVT_LOOP__) 
	argv_2135->argv_2142 (argv_1086, "number of new connections processed : ", nb_new_cnx);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_1892 == argv_2262) {
		argv_1892 = argv_1264; // remap error argv_877
	}
	return (argv_1892);
}

string argv_850 (argv_3715 _client_type) {
	string type_str;
	switch (_client_type) {
		case argv_861:				type_str = "argv_861";				break;	
		case argv_859:						type_str = "argv_859";						break;	
		case argv_860:					type_str = "argv_860";					break;	
		case argv_851:					type_str = "argv_851";					break;	
		case argv_854:	type_str = "argv_854";	break;	
		case argv_853:		type_str = "argv_853";		break;	
		case argv_856:		type_str = "argv_856";		break;	
		case argv_855:		type_str = "argv_855";		break;
		case argv_857:				type_str = "argv_857";				break;	
		case argv_852:				type_str = "argv_852";				break;	

		default: type_str = "<unknown client argv_3695>";
	}
	return (type_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_1149	
// @@
// @@ INPUT			:
// @@ _socket: SOCKET: the descriptor of the new connection.
// @@ _client_type: argv_3715 : the argv_3695 of the client associated 
// @@    with the newly connected argv_3410.
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
// @@ This function permits to argv_1130 information concerning
// @@ a newly connected client and it's associated argv_3695 to the 
// @@ log argv_1314.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_786::argv_1149 (SOCKET& _socket, argv_3715 _client_type) {
	char argv_3681[MAX_PATH];
	switch (_client_type) {
		case argv_861				: argv_3409 (argv_3681, MAX_PATH, "adding newly connected client : descriptor = %u (argv_849=argv_861)", (argv_3717) _socket);				break;
		case argv_859						: argv_3409 (argv_3681, MAX_PATH, "adding newly connected client : descriptor = %u (argv_849=argv_859)", (argv_3717) _socket);						break;
		case argv_860						: argv_3409 (argv_3681, MAX_PATH, "adding newly connected client : descriptor = %u (argv_849=argv_860)", (argv_3717) _socket);						break;
		case argv_851					: argv_3409 (argv_3681, MAX_PATH, "adding newly connected client : descriptor = %u (argv_849=argv_851)", (argv_3717) _socket);					break;
		case argv_854	: argv_3409 (argv_3681, MAX_PATH, "adding newly connected client : descriptor = %u (argv_849=argv_854)", (argv_3717) _socket);	break;
		case argv_853		: argv_3409 (argv_3681, MAX_PATH, "adding newly connected client : descriptor = %u (argv_849=argv_853)", (argv_3717) _socket);		break;
		case argv_856		: argv_3409 (argv_3681, MAX_PATH, "adding newly connected client : descriptor = %u (argv_849=argv_856)", (argv_3717) _socket);		break;
		case argv_855			: argv_3409 (argv_3681, MAX_PATH, "adding newly connected client : descriptor = %u (argv_849=argv_855)", (argv_3717) _socket);			break;
		case argv_857				: argv_3409 (argv_3681, MAX_PATH, "adding newly connected client : descriptor = %u (argv_849=argv_857)", (argv_3717) _socket);				break;
		case argv_852				: argv_3409 (argv_3681, MAX_PATH, "adding newly connected client : descriptor = %u (argv_849=argv_852)", (argv_3717) _socket);				break;

		default :
			argv_3409 (argv_3681, MAX_PATH, "adding newly connected client : descriptor = %u (argv_849=<unknown argv_3695>)", (argv_3717) _socket);
	}
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
}

bool argv_786::argv_858 (argv_3715 _type) {
	bool bret = false;
	if ((_type == argv_859) ||
		(_type == argv_860) ||
		(_type == argv_851) ||
		(_type == argv_854) ||
		(_type == argv_853) ||
		(_type == argv_856) ||
		(_type == argv_855) ||
		(_type == argv_857) ||
		(_type == argv_852)) {
		bret = true;
	}
	return (bret);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_578
// @@
// @@ INPUT			:	
// @@ _socket: SOCKET&: descriptor of the new client
// @@ _client_type: argv_3715 : argv_3695 of the new client.
// @@
// @@ OUTPUT		:	
// @@ _index: argv_3717: index of the box chosen for the new client.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_576 a new client by choosing a free
// @@ box for it, and by adding it to the proper event sets.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_786::argv_578 (argv_3717& _index, SOCKET& _socket, argv_3715 _client_type) {
	argv_3379 argv_1892 = argv_1264;

#if defined (__DEBUG_EVT_LOOP__) 
	argv_1149 (_socket, _client_type);
	//argv_2135->argv_2142 (argv_1086, "adding newly connected client : descriptor = ", (argv_3717) _socket);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	// ensure that the client argv_3695 is coherent
	if (argv_858 (_client_type) == false) {
		argv_1892 = argv_1253;
	}
	else { // client argv_3695 is correct
		if (argv_3451.size () == 0) { // choose a free box for this newcomer
			argv_1892 = argv_1265; 
		}
		else { // found a free box for this newcomer
			_index = argv_3451.top ();
			argv_3451.pop ();

			// ensure that this box is free
			if (argv_847[_index].argv_3823 == false) {
				argv_1892 = argv_1250;
			}
			else { // the chosen box is not busy => OK to use
				argv_847[_index].argv_3823	= false;
				argv_847[_index].argv_3410		= _socket; 
				argv_847[_index].argv_849	= _client_type;
				argv_847[_index].argv_1637	= argv_847[_index].argv_1637 + 1;

				argv_1892 = argv_847[_index].argv_2258.init_with_connected_client_socket (_socket);
				if (argv_1892 == argv_2262) {
					argv_2741++; // to speed up the client loop

					// argv_576 this new argv_3410 to the read event set
					argv_1892 = argv_579 (_index, true, false);

					// ensure that the argv_3335 argv_3191 is empty for this client
					argv_3717 queue_size = 0;
					argv_3379 iret2 = argv_847[_index].argv_1677 (queue_size);
					if (iret2 == argv_845) {
						/*
				#if defined (__DEBUG_EVT_LOOP__) 
						char argv_3681[MAX_PATH];
						argv_3409 (argv_3681, MAX_PATH, "argv_786::argv_578 -  Initial argv_3335 argv_3191 size for client %u is %u", _index, queue_size);
						argv_3681[MAX_PATH - 1] = '\0';
						argv_2135->argv_2142 (argv_1086, argv_3681);
				#endif // #if defined (__DEBUG_EVT_LOOP__) 
						*/
					}

				}
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_3211	
// @@
// @@ INPUT			:	
// @@ _index: argv_3717 : index from the client argv_3590 of the client to
// @@   remove.
// @@
// @@ _last_errno: argv_3379 : the last error encountered with this client
// @@   we need it so that we can save it to the client argv_3590 for the
// @@   application dependant functions.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to remove the client whose location
// @@ in the argv_847 is '_index', and the last error encountered
// @@ with this client is contained in the '_last_errno' parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_786::argv_3211 (argv_3717 _index, argv_3379 _last_errno) {
	argv_3379 argv_1892 = argv_1264;
	// ensure that the box is busy
	if (argv_847[_index].argv_3823 == true) {
		argv_1892 = argv_1251;
	}
	else { // the box is busy => ok to proceed
		// argv_869 the argv_3410 (may fail but it's OK)
		argv_847[_index].argv_2258.argv_870 ();
#if defined (__DEBUG_EVT_LOOP__) 
		string serror = argv_1240 (argv_1892);
		argv_2135->argv_2142 (argv_1086, "event_loop - forced the connection to argv_869 : argv_1239= ", serror.c_str());
#endif // #if defined (__DEBUG_EVT_LOOP__) 

		argv_1892 = argv_3212 (_index, _last_errno);
		if (argv_1892 == argv_1264) {
			argv_847[_index].argv_3823	= true;
			argv_3451.push (_index); // this box becomes available
			argv_2741--;
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_3145	
// @@
// @@ INPUT			:	
// @@ _client_tab: argv_761 *: array of clients
// @@
// @@ _index: argv_3717 : index of the client whose argv_3410 is
// @@   readable.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: true if a write sequence is to be initiated
// @@   set to false otherwise.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the descriptor of a client
// @@ that is ready to read. This client is found using the '_index'
// @@ parameter, coming along with the '_client_tab' parameter.
// @@ 
// @@ Notice that if a full packet was read, the application dependant
// @@ function is called, and this function may or may not trigger a
// @@ write event for this client using the argv_3266 
// @@ argument '_trigger_write'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_786::argv_3145 (argv_761 * _client_tab, argv_3717 _index, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3681[MAX_PATH];
	string client_type_tmp = argv_850 (_client_tab[_index].argv_849);
	argv_3409 (argv_3681, MAX_PATH, "event_loop - processing client ready to read : index = %d (argv_3695=%s)", _index, client_type_tmp.c_str());
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	// read the packet
	argv_1892 = _client_tab[_index].argv_2885.argv_3199 (_client_tab[_index].argv_2258, -1, true);
	if (argv_1892 == argv_2901) {
#if defined (__DEBUG_EVT_LOOP__) 
		string serror = argv_1240 (argv_1892);
		argv_3409 (argv_3681, MAX_PATH, "event_loop - read performed for client %u (errno=%s)", _index, serror.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

		// if the packet was fully read, then call the "packet received" argv_2271
		if (_client_tab[_index].argv_2885.argv_3203 () == true) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2135->argv_2142 (argv_1086, "event_loop - packet fully read for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
			argv_1892 = argv_1248.argv_1603 (_client_tab, _index, _v_index_2_trigger_write);
		}
		else { // packet not fully read yet
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2135->argv_2142 (argv_1086, "event_loop - packet not fully read for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
	}
	else { // packet argv_3199 failed
#if defined (__DEBUG_EVT_LOOP__) 
		string serror = argv_1240 (argv_1892);
		argv_3409 (argv_3681, MAX_PATH, "event_loop - packet read failed for client %u (%s)", _index, serror.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	if ((argv_1892 == argv_2901) || (argv_1892 == argv_2244)) {
		argv_1892 = argv_1264; // remap error argv_877
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_3146
// @@
// @@ INPUT			:	
// @@ _client_tab: argv_761 *: array of clients
// @@
// @@ _index: argv_3717 : index of the client whose argv_3410 is
// @@   readable.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: true if a write sequence is to be initiated
// @@   set to false otherwise.
// @@
// @@ IO			: none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function considers the packet that is the first
// @@ packet of the argv_3335 argv_3191 of the client located at the
// @@ index '_index' and sends it, if the packet is entirely sent
// @@ the sent packet is removed from argv_3335 argv_3191, and the 
// @@ application dependant function is called, and may or
// @@ may not trigger the write event again.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_786::argv_3146 (argv_761 * _client_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892		= argv_1264;
	_trigger_write	= false;
	argv_3717 queue_size	= 0;

#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3681[MAX_PATH];
	argv_2135->argv_2142 (argv_1086, "event_loop - processing argv_3410 ready to write for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	// if the argv_3335 argv_3191 is empty, then it is an error
	argv_1892 = _client_tab[_index].argv_1677 (queue_size);

#if defined (__DEBUG_EVT_LOOP__) 
	argv_3409 (argv_3681, MAX_PATH, "event_loop - argv_3335 argv_3191 size for client %u is %u", _index, queue_size);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_1892 == argv_845) {
		if (queue_size == 0) {
			argv_1892 = argv_1261;
		}
		else { // argv_3335 argv_3191 contains 1 or more packets to argv_3335
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2135->argv_2142 (argv_1086, "argv_3191 size is OK");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			// try to argv_3335 the argv_1610 packet
			bool finished		= false;
			argv_1000 * argv_2884	= argv_2766;

			while (finished == false) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_2135->argv_2142 (argv_1086, "retrieving argv_1610 packet");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				argv_2884	= argv_2766; // detect malfunctions and crash asap
				argv_1892 = _client_tab[_index].argv_1610 (argv_2884);
				if (argv_1892 != argv_845) {
#if defined (__DEBUG_EVT_LOOP__) 
					argv_2135->argv_2142 (argv_1242, "+++ FAILED to retrieve argv_1610 packet");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					finished = true;
				}
				else { // the argv_1610 packet was succesfully retrieved from argv_3191
#if defined (__DEBUG_EVT_LOOP__) 
					argv_2135->argv_2142 (argv_1242, "argv_1610 packet retrieved succesfully");
					argv_2135->argv_2142 (argv_1086, "sending argv_1610 packet");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					argv_1892 = argv_2884->argv_3335 (_client_tab[_index].argv_2258);

#if defined (__DEBUG_EVT_LOOP__) 
					argv_2135->argv_2142 (argv_1086, "argv_1610 packet sent");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					if (argv_1892 == argv_2901) { // if packet was entirely sent
						argv_1892 = argv_1264;
						if (argv_2884->argv_3340 () == true) {
							// remove the argv_1610 packet from argv_3335 argv_3191
							argv_1892 = _client_tab[_index].pop_front ();
							if (argv_1892 == argv_845) {
								argv_1892 = argv_1248.argv_1604 (_client_tab, _index, _trigger_write);
							}
						}
					}

					if (argv_1892 != argv_1264) {
						finished = true; // error occured while sending argv_1610 packet
						if (argv_1892 == argv_2244) {
							_trigger_write	= true;	
							argv_1892			= argv_1264;
#if defined (__EVT_LOOP_TRACK_EWOULDBLOCK__) 
						argv_2745++;
						argv_2135->argv_2142 (argv_1086, "argv_2244 - total number = ", argv_2745);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
						}
						else { // real error occured
							char tmp2[MAX_PATH];
							string serror = argv_1240 (argv_1892);
							argv_3409 (tmp2, MAX_PATH, "+++ ERROR: argv_786::argv_3146 - argv_3335 failed for client whose box is %u (errno=%s)", _index, serror.c_str());
							tmp2[MAX_PATH - 1] = '\0';
							argv_2135->argv_2142 (argv_1242, tmp2);
						}
					}
					else { // argv_3335 was performed without any error
						argv_1892 = _client_tab[_index].argv_1677 (queue_size);
						if (argv_1892 != argv_845) {
							finished		= true;
						}
						else if (queue_size == 0) { // no more to argv_3335
							_trigger_write	= false;
							finished		= true;
						}
					}
				}
			}
		}
	}

	if (argv_1892 == argv_845) {
		argv_1892 = argv_1264; // remap error argv_877
	}
	return (argv_1892);
}

argv_3379 argv_786::argv_3692 (vector<argv_3717>& _v_trigger_2_write) {
	argv_3379 argv_1892 = argv_1264;
	argv_3717 argv_2744 = _v_trigger_2_write.size ();
	for (argv_3717 i=0 ; i<argv_2744 ; i++) {
		argv_1892 = argv_579 (_v_trigger_2_write[i], false, true);
		if (argv_1892 != argv_1264) {
			string serror = argv_1240 (argv_1892);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_786::argv_3692 - argv_579 failed for descriptor at index %d", _v_trigger_2_write[i], serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1242, argv_3681);
			break;
		}
	}
	return (argv_1892);
}

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_814
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ argv_3717&: _nb_ready: number of argv_3410 descriptors ready.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check all sockets that have either
// @@ a read, or a write, or both events, pending, and process these
// @@ events.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_786::argv_814 (argv_3717& _nb_ready) {
	argv_3379 argv_1892				= argv_1264;
	argv_3379 iret2				= argv_1264;
	bool trigger_write		= false;	
	char argv_3681[MAX_PATH];
	vector<argv_3717>			v_trigger_2_write;
	
#if defined (__DEBUG_EVT_LOOP__) 
	argv_3409 (argv_3681, MAX_PATH, "event loop - checking read/write events (argv_848=%u)", argv_848);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	for (argv_3717 i=0 ; i<argv_848 ; i++) {
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2135->argv_2142 (argv_1086, "event_loop - considering client ", i);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

		if (argv_847[i].argv_3823 == true) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_3409 (argv_3681, MAX_PATH, "event_loop - client %u is virgin", i);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
		else { // argv_1043 client's box is busy (and thus not virgin)
#if defined (__DEBUG_EVT_LOOP__) 
			argv_3409 (argv_3681, MAX_PATH, "event_loop - client %u is busy (not virgin)", i);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
			// check if argv_1043 box is ready to read
			if (argv_847[i].argv_3195 == true) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_3409 (argv_3681, MAX_PATH, "event_loop - client %u is read aware", i);
				argv_3681[MAX_PATH - 1] = '\0';
				argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				if (FD_ISSET (argv_847[i].argv_3410, &readfds_dirty)) {
					_nb_ready--;
#if defined (__DEBUG_EVT_LOOP__) 
					argv_3409 (argv_3681, MAX_PATH, "event_loop - client %u is ready to read", i);
					argv_3681[MAX_PATH - 1] = '\0';
					argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					v_trigger_2_write.clear ();
					iret2 = argv_3145 (argv_847, i, v_trigger_2_write);
					if (iret2 != argv_1264) {

						if (iret2 == argv_1263) {
							argv_1892 = iret2;
#if defined (__DEBUG_EVT_LOOP__) 
							argv_2135->argv_2142 (argv_3834, "*** WARNING : argv_786::argv_814 - << RECEIVED ORDER TO STOP >>");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
							break;
						}
						else { // real error occured
							string serror = argv_1240 (iret2);
							argv_3409 (argv_3681, MAX_PATH, "event_loop - client %u read failure (%s)", i, serror.c_str());
							argv_3681[MAX_PATH - 1] = '\0';
							argv_2135->argv_2142 (argv_1086, argv_3681);
						}
						argv_1892 = argv_3211 (i, iret2);
						if (argv_1892 != argv_1264) {
							argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_786::argv_814 - argv_3211 failed ! (read event)");
							break;
						}
					}
					else {// read was succesful, must we argv_576 the argv_3410 for write ?
#if defined (__DEBUG_EVT_LOOP__) 
						argv_3409 (argv_3681, MAX_PATH, "event_loop - client %u read success (number of write events to  trigger : %u)", i, v_trigger_2_write.size());
						argv_3681[MAX_PATH - 1] = '\0';
						argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
						argv_1892 = argv_3692 (v_trigger_2_write);
					}
				}
			}

			// check if argv_1043 box is ready to write
			if ((argv_1892 == argv_1264) && (argv_847[i].argv_3839 == true)) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_3409 (argv_3681, MAX_PATH, "event_loop - client %u is write aware", i);
				argv_3681[MAX_PATH - 1] = '\0';
				argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

				if (FD_ISSET (argv_847[i].argv_3410, &writefds_dirty)) {
					_nb_ready--;
#if defined (__DEBUG_EVT_LOOP__) 
					argv_3409 (argv_3681, MAX_PATH, "event_loop - client %u is ready to write (from select)", i);
					argv_3681[MAX_PATH - 1] = '\0';
					argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

					iret2 = argv_3146 (argv_847, i, trigger_write);
					if (iret2 != argv_1264) {
#if defined (__DEBUG_EVT_LOOP__) 
						argv_3409 (argv_3681, MAX_PATH, "event_loop - client %u write failure", i);
						argv_3681[MAX_PATH - 1] = '\0';
						argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

						argv_1892 = argv_3211 (i, iret2);
						if (argv_1892 != argv_1264) {
							argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_786::argv_814 - argv_3211 failed ! (write event)");
							break;
						}
					}
					else {// write was succesful, must we argv_576 the argv_3410 again for write ?
#if defined (__DEBUG_EVT_LOOP__) 
						argv_3409 (argv_3681, MAX_PATH, "event_loop - client %u write success", i);
						argv_3681[MAX_PATH - 1] = '\0';
						argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

						if (trigger_write == true) {
#if defined (__DEBUG_EVT_LOOP__) 
							argv_3409 (argv_3681, MAX_PATH, "event_loop - triggering write event for client %u", i);
							argv_3681[MAX_PATH - 1] = '\0';
							argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
							argv_1892			= argv_579 (i, false, true);
							trigger_write	= false;
						}
						else { // remove the argv_3410 from the write set
#if defined (__DEBUG_EVT_LOOP__) 
							argv_3409 (argv_3681, MAX_PATH, "event_loop - removing write event for client %u", i);
							argv_3681[MAX_PATH - 1] = '\0';
							argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
							argv_1892 = argv_3212 (i, false, true, iret2);
						}
					}
				}
			}

			if (_nb_ready == 0) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_3409 (argv_3681, MAX_PATH, "argv_814 - _nb_ready=%u => all argv_1185", _nb_ready);
				argv_3681[MAX_PATH - 1] = '\0';
				argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				break; // all ready descriptors processed
			}
		}

		// if an order to argv_3463 was received, then inform the caller
		if (argv_1892 == argv_1263) {
			argv_2135->argv_2142 (argv_620, "*** WARNING: argv_786::argv_814 - << RECEIVED ORDER TO STOP >>");
			break;
		}
	}

	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_579	
// @@
// @@ INPUT			:	
// @@ _index: argv_3717 : location of the new descriptor whose events 
// @@   are to be triggered
// @@
// @@ _read_mode: bool: true if the argv_3410 must be added to the read 
// @@    event.
// @@
// @@ _write_mode: bool: true if the argv_3410 must be added to the write 
// @@    event.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_576 the descriptor located at index
// @@ '_index' to the read or write event set.
// @@ if the parameter '_read_mode' is set to true, the argv_3410 is 
// @@ added to the read events set.
// @@ if the parameter '_write_mode' is set to true, the argv_3410 is 
// @@ added to the write events set.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_786::argv_579 (argv_3717 _index, bool _read_mode, bool _write_mode) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3681[MAX_PATH];
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_847[_index].argv_3410 > argv_2221) {
		argv_2221 = argv_847[_index].argv_3410; // adjust the maximum descriptor (for select)
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2135->argv_2142 (argv_1086, "event loop - maximum fd becomes ", argv_2221);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	if (_read_mode == true) {
		if (argv_847[_index].argv_3195 == false) {
			FD_SET  (argv_847[_index].argv_3410, &readfds);
			argv_847[_index].argv_3195 = true;
#if defined (__DEBUG_EVT_LOOP__) 
			argv_3409 (argv_3681, MAX_PATH, "event loop - argv_576 descriptor %u (client %u) to read event", argv_847[_index].argv_3410, _index);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
	}

	if (_write_mode == true) {
		if (argv_847[_index].argv_3839 == false) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2135->argv_2142 (argv_1086, "event loop - triggering write event for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
			FD_SET  (argv_847[_index].argv_3410, &writefds);
			argv_847[_index].argv_3839 = true;
		}
	}

	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_3212	
// @@
// @@ INPUT			:	
// @@ _index: argv_3717 : location of the new descriptor whose events 
// @@   are to be removed
// @@
// @@ _read_mode: bool: true if the argv_3410 must be removed from the read 
// @@    event.
// @@
// @@ _write_mode: bool: true if the argv_3410 must be removed from the write 
// @@    event.
// @@
// @@ _last_errno: argv_3379 : unused parameter.
// @@ 
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to remove the descriptor located at index
// @@ '_index' from the read or write event set.
// @@ if the parameter '_read_mode' is set to true, the argv_3410 is 
// @@ removed from the read events set.
// @@ if the parameter '_write_mode' is set to true, the argv_3410 is 
// @@ removed from the write events set.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_786::argv_3212 (argv_3717 _index, bool _read_mode, bool _write_mode, argv_3379 _last_errno) {
	argv_3379 argv_1892 = argv_1264;
	if (_read_mode == true) {
		if (argv_847[_index].argv_3195 == true) {
			FD_CLR (argv_847[_index].argv_3410, &readfds);	
			argv_847[_index].argv_3195 = false;
		}
	}

	if (_write_mode == true) {
		if (argv_847[_index].argv_3839 == true) {
			FD_CLR (argv_847[_index].argv_3410, &writefds);
			argv_847[_index].argv_3839 = false;
		}
	}
	return (argv_1892); 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_3212	
// @@
// @@ INPUT			:	
// @@ _index: argv_3717 : location of the new descriptor whose events 
// @@   are to be removed
// @@
// @@ _last_errno: argv_3379 : contains the last error encountered with
// @@   the client whose index is '_index'.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to remove entirely the argv_3410 descriptor 
// @@ which can be found at the index '_index' from the read
// @@ and write event without distinction.
// @@ The last error encountered with this argv_3410 is saved
// @@ into it's box so that the application dependant functions
// @@ can be aware of what has happened with this client.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_786::argv_3212 (argv_3717 _index, argv_3379 _last_errno) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "event_loop - about to remove descriptor %u (client %d)", argv_847[_index].argv_3410, _index);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_847[_index].argv_3195 == true) {
		FD_CLR (argv_847[_index].argv_3410, &readfds);
		argv_847[_index].argv_3195 = false;
#if defined (__DEBUG_EVT_LOOP__) 
		argv_3409 (argv_3681, MAX_PATH, "event_loop - removed descriptor %u (client %d) from read event", argv_847[_index].argv_3410, _index);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	if (argv_847[_index].argv_3839 == true) {
		FD_CLR (argv_847[_index].argv_3410, &writefds);	
		argv_847[_index].argv_3839 = false;
#if defined (__DEBUG_EVT_LOOP__) 
		argv_3409 (argv_3681, MAX_PATH, "event_loop - removed descriptor %u from write event", _index);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	// reset the box that was used by this client for a future reuse.
	/*
#if defined (__DEBUG_EVT_LOOP__) 
	argv_2135->argv_2142 (argv_1086, "about to reset the client box whose index is ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	*/
	argv_847[_index].reset ();
/*
#if defined (__DEBUG_EVT_LOOP__) 
	argv_2135->argv_2142 (argv_1086, "reseted the client box whose index is ", _index);

	argv_3717 queue_size = 0;
	argv_3379 iret2 = argv_847[_index].argv_1677 (queue_size);
	argv_3409 (argv_3681, MAX_PATH, "argv_786::argv_3212 - after reset : argv_3335 argv_3191 size for client %u is %u", _index, queue_size);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
*/
	// now call the external function to tell about this client that has a problem
	bool b_unused;
	argv_847[_index].argv_2033 = _last_errno;
	argv_1248.argv_1541 (argv_847, _index, b_unused);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_3116	
// @@
// @@ INPUT			:
// @@ _event_data: argv_787& : the set that contains all 
// @@   the function pointers (application dependant functions).
// @@
// @@ _cli_tab: argv_761 *: the client array
// @@
// @@ _cli_tab_size: argv_3717: the size of the client array.
// @@
// @@ _v_listener: vector<argv_864>&: the vector that contains
// @@   all argv_1073 concerning the listening descriptors to consider.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to do the following things :
// @@ - update the 'argv_2221' variable
// @@ - argv_3110 the stack of available boxes (avoid lookup)
// @@ - argv_576 all listening descriptors to the read event set.
// @@
// @@ CONTRACT 		:
// @@ - _v_listener should not be empty.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_786::argv_3116 (argv_787& _event_data, argv_761 * _cli_tab, argv_3717 _cli_tab_size, vector<argv_864>& _v_listener) {
	argv_3379 argv_1892	= argv_1264;

	argv_1248		= _event_data;
	argv_847		= _cli_tab;
	argv_848	= _cli_tab_size;
	argv_3799		= _v_listener;	
	argv_2749		= argv_3799.size ();
	argv_2221			= 0;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_3681[MAX_PATH];
	argv_2135->argv_2142 (argv_1086, "maximum number of clients : ", _cli_tab_size);
	argv_2135->argv_2142 (argv_1086, "number of listeners : ", argv_2749);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_2749 == 0) {
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_786::argv_3116 - no listener at all ! (empty vector)");
		argv_1892 = argv_1257;
	}
	else {
		// argv_576 all listening sockets to the read set
		argv_3717 i=0;
		for (i=0 ; i<argv_2749 ; i++) {
			FD_SET (argv_3799[i].argv_3410, &readfds);

#if defined (__DEBUG_EVT_LOOP__) 
			argv_3409 (argv_3681, MAX_PATH, "argv_576 argv_3410 %u to the listening set", argv_3799[i].argv_3410);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			if (argv_3799[i].argv_3410 > argv_2221) {
				argv_2221 = argv_3799[i].argv_3410; // adjust the maximum descriptor (for select)
			}
		}

		// argv_3110 the stack of available boxes
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2135->argv_2142 (argv_1086, "preparing real argv_3678 stack of free boxes...");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		for (argv_3379 k=_cli_tab_size-1 ; k>=0 ; k--) {
			argv_3451.push (k);
		}
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2135->argv_2142 (argv_1086, "preparing real argv_3678 stack of free boxes...[OK]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_786	
// @@
// @@ FUNCTION		:	argv_3278
// @@
// @@ INPUT			:	
// @@ _log_ptr: argv_865 *: pointer on the log argv_1314 to use.
// @@ 
// @@ _v_listener: vector<argv_864>&: vector containing all argv_1073
// @@ concerning the listening argv_3410 descriptors.
// @@
// @@ _cli_tab: argv_761 *: array of client argv_1073, each box is
// @@  dedicated to a given client.
// @@ 
// @@ _cli_tab_size: size of the client array (number of boxes). 
// @@
// @@ _event_data: argv_787& : set of function pointers
// @@   containing all application dependant functions.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to argv_3110 the event loop, and to
// @@ enter this loop that is an infinite loop.
// @@ the following steps are performed :
// @@ - listeners are argv_3124 (listening sockets are added to read set)
// @@ - a call to select is performed.
// @@ - when waking up from select :
// @@   - new pending connections are checked.
// @@   - argv_3410 ready to read are checked
// @@   - argv_3410 ready to write are checked.
// @@
// @@ Notice that the event loop is an infinite loop, except when 
// @@ it is asked to argv_3463 service, in that case, the event
// @@ loop can be stopped.
// @@ 
// @@ Also notice that when a fatal error occurs, the event loop
// @@ stops and returns.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_786::argv_3278 (argv_865 * _log_ptr, vector<argv_864>& _v_listener, argv_761 * _cli_tab, argv_3717 _cli_tab_size, argv_787& _event_data) {
	argv_3379 argv_1892	= argv_1264;
	char argv_3681[MAX_PATH];

	if ((_log_ptr == argv_2766) || (_cli_tab==argv_2766) || (_cli_tab_size==0)) {
		argv_1892 = argv_1254;
	}
	else { // parameters are OK
		argv_2135 = _log_ptr;
		argv_3717 nb_ready	= 0;
#if defined (__DEBUG_EVT_LOOP__)
		argv_2135->argv_2142 (argv_1086, "event loop - preparing listeners...");
#endif // #if defined (__DEBUG_EVT_LOOP__)
		argv_1892 = argv_3116 (_event_data, _cli_tab, _cli_tab_size, _v_listener);

		if (argv_1892 == argv_1264) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2135->argv_2142 (argv_1086, "event loop - preparing listeners...[OK]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			bool first_pck_received = false;

			for ( argv_3717 i=0 ; argv_1892 == argv_1264 ; i++) {
				readfds_dirty	= readfds;	// because Linux modify the sets
				writefds_dirty	= writefds; // because Linux modify the sets

#if defined (__DEBUG_EVT_LOOP__) 
				argv_2135->argv_2142 (argv_1086, "sleeping in select...");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

				nb_ready = select (argv_2221+1, &readfds_dirty, &writefds_dirty, argv_2766, argv_2766);

#if defined (__DEBUG_EVT_LOOP__) 
				argv_3409 (argv_3681, MAX_PATH, "=== woken up from select (nb_ready=%d) ===", nb_ready);
				argv_3681[MAX_PATH - 1] = '\0';
				argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

#if defined (__WIN32_OS__)
				if (nb_ready == SOCKET_ERROR) {
					argv_1892 = argv_1260;
				}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
				if (nb_ready < 0) {
					if (errno == EINTR) {
						continue;
					}
					else {
						argv_1892 = argv_1260;
					}
				}
#endif // #if defined (__LINUX_OS__)
				else { // select returned without any error
#if defined (__DEBUG_EVT_LOOP__) 
					argv_2135->argv_2142 (argv_1086, "number of descriptor ready : ", nb_ready);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					argv_1892 = argv_807 (nb_ready);
					if (argv_1892 != argv_1264) {
						string serror = argv_1240 (argv_1892);
						argv_3409 (argv_3681, MAX_PATH, "event loop - argv_807...[FAILED (%s) - EXITING]", serror.c_str());
						argv_3681[MAX_PATH - 1] = '\0';
						argv_2135->argv_2142 (argv_1242, argv_3681);
						break; // error occured while accepting new connections
					}

					if (nb_ready > 0) {
						if (first_pck_received == false) {
							argv_2135->argv_2142 (argv_1086, "first packet received at event : ", i);
							first_pck_received = true;
						}

						argv_1892 = argv_814 (nb_ready);
						if (argv_1892 != argv_1264) {
							// maybe we received the order to argv_3463
							if (argv_1892 == argv_1263) {
								argv_2135->argv_2142 (argv_620, "*** WARNING : argv_786::argv_3278 - << RECEIVED ORDER TO STOP >>");
							}
							else { // real error occured
								string serror = argv_1240 (argv_1892);
								char argv_3681[MAX_PATH];
								argv_3409 (argv_3681, MAX_PATH, "event loop - argv_814...[FAILED (%s) - EXITING]", serror.c_str());
								argv_3681[MAX_PATH - 1] = '\0';
								argv_2135->argv_2142 (argv_1242, argv_3681);
							}
							break; // error occured while checking connected sockets
						}
					}

					if (nb_ready > 0) { // slower the deadly infinite loop
						argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_786::argv_3278 - after processing, nb_ready greater than zero : ", nb_ready);
						argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_786::argv_3278 - argv_3807 should be zero !");
#if defined (__WIN32_OS__)
						Sleep (1000); // CPU friendly when entering an infinite loop
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
						usleep (1000000);
#endif // #if defined (__LINUX_OS__)
					}
				}
			}
		}
		else {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2135->argv_2142 (argv_1242, "event loop - preparing listeners...[FAILED]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
	}


	if (argv_1892 == argv_1263) {
		argv_2135->argv_2142 (argv_620, "*** WARNING : event_loop - << RECEIVED ORDER TO STOP >>");
	}
	else {
		string serror = argv_1240 (argv_1892);
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: event loop - exiting event loop - errno = ", serror.c_str());
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
