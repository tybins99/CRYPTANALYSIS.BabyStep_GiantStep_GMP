// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_290.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the argv_1073 structures used
// @@ by the event loop to argv_1789 clients
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_290.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_761	
// @@
// @@ FUNCTION		:	argv_761
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
// @@ Normal constructor of the argv_761 argv_2785.
// @@ it resets all fields of the argv_2785 to their initial values.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_761::argv_761 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_761	
// @@
// @@ FUNCTION		:	~argv_761
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
// @@ destructor of the 'argv_761' argv_2785.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_761::~argv_761 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_761	
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
// @@ This function permits to reset the client's argv_1073 to
// @@ it's initial argv_3460.
// @@ all possible awaiting packets are discarded and destroyed
// @@ from the argv_3335 argv_3191.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_761::reset () {
	list<argv_1000 *>::iterator iter_tmp;
	// free all packets that were enqueued into the argv_3335 argv_3191
	for (iter_tmp=argv_3344.begin() ; iter_tmp != argv_3344.end() ; ++iter_tmp) {
		delete (*iter_tmp);
	}

	// clear the packet list
	argv_3344.clear ();

	argv_3195	= false;
	argv_3839	= false;
	argv_3823 = true;
	argv_2033	= argv_1264;
	argv_1637	= 0;
	argv_2889.reset ();
	argv_2885.reset ();
	argv_2885.argv_3362 ("C:");
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_761	
// @@
// @@ FUNCTION		:	argv_1677	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _size: argv_3717& : size of the argv_3335 argv_3191.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : argv_845 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute and retrieve the
// @@ size of the argv_3335 argv_3191.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_761::argv_1677 (argv_3717& _size) {
	argv_3379 argv_1892 = argv_845;
	_size = argv_3344.size ();
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_761	
// @@
// @@ FUNCTION		:	argv_1610	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _pck_ptr: argv_1000 *&: argv_595 of the retrieved packet.
// @@    argv_2766 if the retrieval failed. 
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_845 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1292 the next packet from
// @@ the argv_3335 argv_3191. If the argv_3335 argv_3191 is empty, the function
// @@ fails and the '_pck_ptr' parameter is set to argv_2766.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_761::argv_1610 (argv_1000 *& _pck_ptr) {
	argv_3379 argv_1892 = argv_845;
	_pck_ptr = argv_2766;
	if (argv_3344.size () == 0) {
		argv_1892 = argv_843;
	}
	else { // pre-conditions are OK
		_pck_ptr = argv_3344.argv_1610 ();
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_761	
// @@
// @@ FUNCTION		:	pop_front
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_845 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to discard the argv_1610 packet from
// @@ the argv_3335 argv_3191. Notice that if the argv_3335 argv_3191 is empty,
// @@ the operation fails.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_761::pop_front () {
	argv_3379 argv_1892 = argv_845;
	if (argv_3344.size () == 0) {
		argv_1892 = argv_843;
	}
	else { // pre-conditions are OK
		argv_1000 * argv_2884 = argv_3344.argv_1610 ();
		argv_3344.pop_front ();
		delete argv_2884;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_761	
// @@
// @@ FUNCTION		:	push_back	
// @@
// @@ INPUT			:	
// @@ _pck_ptr: argv_1000 *: argv_595 of the packet to argv_576 to the
// @@   argv_3335 argv_3191.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_845 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_576 a new packet to the argv_3335 argv_3191.
// @@ Notice that if the argv_3335 argv_3191 is full, the function will fail.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_761::push_back (argv_1000 * _pck_ptr) {
	argv_3379 argv_1892 = argv_845;
	if (argv_3344.size () >= argv_2215) {
		argv_1892 = argv_844;
	}
	else { // pre-conditions are OK
		argv_3344.push_back (_pck_ptr);	
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
