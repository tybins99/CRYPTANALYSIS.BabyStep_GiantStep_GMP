// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_241.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all argv_1073 structures and
// @@ objects that permits to have an event-driven
// @@ TCP/IP based loop to create an application.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_300.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variable
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_790 * argv_1621 = argv_2766;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C functions called by the event loop
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_2756	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client that has just connected.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_595 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ connects itself.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_2756 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1621->argv_2755 (_cli_tab, _index, _trigger_write);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_2887	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client that has just finished
// @@   reading a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_595 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to read a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_2887 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1621->argv_2886 (_cli_tab, _index, _trigger_write);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_2891	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client that has just finished
// @@   sending a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_595 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to write a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_2891 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1621->argv_2890 (_cli_tab, _index, _trigger_write);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_2243	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client that has a pending error.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_595 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has a pending error.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_2243 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1621->argv_2242 (_cli_tab, _index, _trigger_write);
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C++ functions associated with argv_3410 events
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_2755		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client that has just connected.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ connects itself.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_2755 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_GATEWAY__)
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "argv_790::argv_2755 - new client at box %u (sockfd=%u)", _index, _cli_tab[_index].argv_3410);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_2763, argv_3681);
#endif // #if defined (__DEBUG_GATEWAY__)

	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_2886		
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client that has just finished
// @@   reading a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to read a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_2886 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_GATEWAY__)
	argv_2135->argv_2142 (argv_2763, "argv_790::argv_2886");
#endif // #if defined (__DEBUG_GATEWAY__)
	// log the packet into the log argv_1314
	argv_1320	= false;
	argv_3794		= argv_2940;
	argv_3683	= "";
	argv_1892 = _cli_tab[_index].argv_2885.argv_1675 (argv_1320, argv_3794, argv_3683);
	if (argv_1892 != argv_2901) { // failed to argv_1292 receive report for this client
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_2886 - failed to argv_1292 receive report !");	
	}
	else { // receive report extracted succesfully
		string user_type_str = argv_3795 (argv_3794);

		if (argv_1320 == false) { // a argv_1073 packet was received
#if defined (__DEBUG_GATEWAY__)
			argv_3409 (argv_3681, MAX_PATH, "argv_790::argv_2886 - a argv_1073 packet was received (argv_3794=%s)", user_type_str.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_2763, argv_3681);
#endif // #if defined (__DEBUG_GATEWAY__)
		}
		else { // a argv_1314 was received
#if defined (__DEBUG_GATEWAY__)
			argv_3409 (argv_3681, MAX_PATH, "argv_790::argv_2886 - a argv_1314 packet was received (argv_3794=%s), argv_3683='%s'", user_type_str.c_str(), argv_3683.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_2763, argv_3681);
#endif // #if defined (__DEBUG_GATEWAY__)
		}

		argv_1892 = argv_3142 (_cli_tab, _index, _trigger_write);
		if (argv_1892 != argv_1264) {
			if (argv_1892 == argv_1263) {
				argv_2135->argv_2142 (argv_620, "*** WARNING : argv_790::argv_2886 - << RECEIVED ORDER TO STOP >>");
			}
			else { // real error occured
				string serror = argv_1240 (argv_1892);
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_2886 failed ! - errno = ", serror.c_str());
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_2890		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client that has just finished
// @@   sending a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to write a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_2890 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_GATEWAY__)
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "argv_790::argv_2890 - packet fully sent for client whose box is %u (sockfd=%u)", _index, _cli_tab[_index].argv_3410);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_2763, argv_3681);
#endif // #if defined (__DEBUG_GATEWAY__)
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_2242	
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client that has a pending error.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has a pending error.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_2242 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_GATEWAY__)
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "argv_790::argv_2242 - error occured with client whose box is %u (sockfd=%u)", _index, _cli_tab[_index].argv_3410);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_2763, argv_3681);
#endif // #if defined (__DEBUG_GATEWAY__)
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_1154		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1130 to log argv_1314 the scan argv_3266
// @@ for a given argv_1314.
// @@ 
// @@ Notice that this function is disabled if the gateway is not
// @@ in debug mode.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_1154 () {
	argv_3379 argv_1892		= argv_1264;
#if defined (__DEBUG_GATEWAY__)
	char argv_3681[MAX_PATH];
	string total_msg = "";

	if (argv_3318 == false) { argv_3409 (argv_3681, MAX_PATH, "|scan FAILED"); }
	else { argv_3409 (argv_3681, MAX_PATH, "|scan SUCCESS"); }
	argv_3681[MAX_PATH - 1] = '\0';
	total_msg += argv_3681;	

	if (infected == false) { argv_3409 (argv_3681, MAX_PATH, "|no virus found"); }
	else { argv_3409 (argv_3681, MAX_PATH, "|virus FOUND"); }
	argv_3681[MAX_PATH - 1] = '\0';
	total_msg += argv_3681;	

	if (infected == true) {
		if (argv_1196 == false) { argv_3409 (argv_3681, MAX_PATH, "|dysinfection NOT POSSIBLE"); }
		else { argv_3409 (argv_3681, MAX_PATH, "|dysinfection POSSIBLE"); }
		argv_3681[MAX_PATH - 1] = '\0';
		total_msg += argv_3681;	
	}

	if (infected == true) {
		if (argv_1194 == false) { argv_3409 (argv_3681, MAX_PATH, "|dysinfection NOT DONE"); }
		else { argv_3409 (argv_3681, MAX_PATH, "|dysinfection DONE"); }
		argv_3681[MAX_PATH - 1] = '\0';
		total_msg += argv_3681;	
	}

	if (infected == true) {
		if (argv_1197 == false) { argv_3409 (argv_3681, MAX_PATH, "|dysinfection FAILED"); }
		else { argv_3409 (argv_3681, MAX_PATH, "|dysinfection SUCCESS"); }
		argv_3681[MAX_PATH - 1] = '\0';
		total_msg += argv_3681;	
	}

	if (infected == true) {
		argv_3409 (argv_3681, MAX_PATH, "|virus argv_2697 : '%s'", argv_3827);
		argv_3681[MAX_PATH - 1] = '\0';
		total_msg += argv_3681;	
	}
	argv_2135->argv_2142 (argv_2763, total_msg.c_str());
#endif // #if defined (__DEBUG_GATEWAY__)
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_3306		
// @@
// @@ INPUT			:
// @@ _filename: argv_773 : argv_2697 of the argv_1314 to scan.	
// @@
// @@ _dysinfect : bool: true if the argv_1314, in case of infection,
// @@   must be dysinfected, false otherwise.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to scan the argv_1314 whose argv_2697 is 
// @@ contained in the '_filename' parameter, if the '_dysinfect'
// @@ parameter is set to true, and if the argv_1314 is infected, then
// @@ a dysinfection of the argv_1314 is attempted.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_3306 (argv_773 _filename, bool _dysinfect) {
	argv_3379 argv_1892		= argv_1264;
	argv_3318	= false;

#if defined (__BYPASS_KERNEL__)
	argv_1892 = argv_1981;
	infected				= false;
	argv_1196		= false;
	argv_1194			= false;
	argv_1197		= false;
#else 

	argv_1892 = argv_1962->argv_3306 (_filename, _dysinfect, infected, argv_1196, argv_3827, argv_1194, argv_1197);

#endif // #if defined (__BYPASS_KERNEL__)

	if (argv_1892 == argv_1981) {
#if defined (__DEBUG_GATEWAY__)
		argv_2135->argv_2142 (argv_2763, "gateway - argv_3306...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
		argv_1892 = argv_1264; // remap error argv_877
		argv_3318 = true;
	}
	else {
		string serror = argv_1240 (argv_1892);
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: gateway : failed to scan argv_1314 '%s' (%s)", _filename, serror.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1242, argv_3681);
	}
	argv_1154 ();
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_3356		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _answer_type: argv_3717& : argv_3695 of the answer packet to argv_3335.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the argv_3695 of the answer
// @@ packet to argv_3335 using the argv_3695 of the received packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_3356 (argv_3717& _answer_type) {
	argv_3379 argv_1892		= argv_1264;
	_answer_type	= argv_2940;
	// set the answer's argv_3695
	if (argv_3794 == argv_2928) {
		_answer_type = argv_2929;
	}
	else if (argv_3794 == argv_2924) {
		_answer_type = argv_2925;	
	}
	else if (argv_3794 == argv_2930) {
		_answer_type = argv_2931;	
	}
	else if (argv_3794 == argv_2926) {
		_answer_type = argv_2927;	
	}
	else if (argv_3794 == PCK_TYPE_UPDATE) {
		_answer_type = argv_2942;	
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_3338		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client concerned by the operation.
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
// @@ This function permits to argv_3335 the dysinfected argv_1314
// @@ back to the remote client.
// @@ NOTICE : we don't need to trigger the write event as it will
// @@          have already been triggered by the 'argv_1386' 
// @@          function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_3338 (argv_761 * _cli_tab, argv_3717 _index, argv_773 _dysinfected_filename) {
	argv_3379 argv_1892 = argv_1264;

#if defined (__DEBUG_GATEWAY__)
	argv_2135->argv_2142 (argv_2763, "sending the dysinfected argv_1314 to the client");
#endif // #if defined (__DEBUG_GATEWAY__)

	// former packet will be deallocated by the event loop 
	argv_2884 = new (std::nothrow) argv_1000; // create a new packet for argv_3335

	if (argv_2884 == argv_2766) {
		argv_1892 = argv_1256;
	}
	else { // new argv_3335 packet was succesfully allocated
		// argv_3110 the packet to argv_3335 the argv_1314 to the client
		bool must_delete_file = false;
		argv_1892 = argv_2884->argv_3123 (_dysinfected_filename, _cli_tab[_index].argv_2258, argv_2927, must_delete_file);

		if (argv_1892 != argv_2901) {
			delete argv_2884; 		
		}
		else { // the argv_1314 to argv_3335 was argv_3124 succesfully
			argv_1892 = _cli_tab[_index].push_back (argv_2884); // argv_576 packet to the argv_3335 argv_3191
			if (argv_1892 != argv_845) { // the addition to the argv_3335 argv_3191 failed
				string serror = argv_1240 (argv_1892);
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_3338 - push_back failed ! - errno = ", serror.c_str());
			}
		}
	}

	if ((argv_1892 == argv_2901) || (argv_1892 == argv_845)) {
		argv_1892 = argv_1264;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_1388		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to inform an update client about the
// @@ kernel's update argv_3266.
// @@ it performs the following steps :
// @@ - allocate a new binary packet.
// @@ - set the packet argv_3695.
// @@ - insert the argv_3266 of the update operation into the packet :
// @@   - 0=failure, 1=success (coded using a argv_3715).
// @@ - argv_2830 the binary packet.
// @@ - push back this packet onto the argv_3335 argv_3191 of the concerned
// @@   client.
// @@ - set the '_trigger_write' to true so that a write operation
// @@   can occur for the concerned client.
// @@
// @@ NOTICE : it is up to the event loop to free the allocated 
// @@          packet after sending it.
// @@ 
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_1388 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write, argv_3379 _iret) {
	argv_3379 argv_1892 = argv_1264;

	// former packet will be deallocated by the event loop 
	argv_2884 = new (std::nothrow) argv_1000; // create a new packet for argv_3335
	if (argv_2884 == argv_2766) {
		argv_1892 = argv_1256;
	}
	else {
		argv_3717 answer_type	= argv_2940;
		// set the answer's argv_3695
		argv_1892 = argv_3356 (answer_type);
		if (argv_1892 != argv_1264) {
			argv_1892 = argv_1262;
		}
		else { // answer argv_3695 setting was succesful
			argv_1892 = argv_2884->argv_3363 (answer_type);
			if (argv_1892 != argv_2901) {
				string serror = argv_1240 (argv_1892);	
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: gateway : argv_1388 : argv_1000::argv_3363 failed ! - errno = ", serror.c_str());
			}
			else { // packet argv_3695 set succesfully
				argv_3715 argv_3807 = 0; // previous operation failed
				if (_iret == argv_1264) {
					argv_3807 = 1;
				}
				argv_1892 = argv_2884->insert (argv_3807);

				if (argv_1892 != argv_2901) {
					string serror = argv_1240 (argv_1892);	
					argv_2135->argv_2142 (argv_1242, "+++ ERROR: gateway : argv_1388 : argv_1000::insert failed ! - errno = ", serror.c_str());
				}
				else { // argv_1073 inserted succesfully
					argv_1892 = argv_2884->argv_2830 ();
					if (argv_1892 !=  argv_2901) {
						string serror = argv_1240 (argv_1892);	
						argv_2135->argv_2142 (argv_1242, "+++ ERROR: gateway : argv_1388 : argv_1000::argv_2830 failed ! - errno = ", serror.c_str());
					}
					else { // packet packed succesfully
						argv_1892 = _cli_tab[_index].push_back (argv_2884);
						if (argv_1892 == argv_845) {
							// packet added to this client's argv_3335 argv_3191 succesfully
							_trigger_write	= true; // tell the event loop to argv_3457 sending
						}
						else { // could not deposit packet onto the argv_3335 argv_3191
							string serror = argv_1240 (argv_1892);	
							argv_2135->argv_2142 (argv_1242, "+++ ERROR: gateway : argv_1388 : push_back failed ! - errno = ", serror.c_str());
						}
					}
				}
			}
		}
		// notice that it is up to the event loop to free the allocated packet !
	}

	if ((argv_1892 == argv_2901) || (argv_1892 == argv_845)) {
		argv_1892 = argv_1264;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_1386		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function prepares a packet that was previously allocated
// @@ by another function. the packet's content reflects the scan
// @@ argv_3266 and is composed of the following fields :
// @@ - scan success			: argv_3715 (0= success, 1..n=failed)
// @@ - virus_found_flag		: argv_3715 (0= not infected, 1=infected)
// @@ - argv_1199	: argv_3715 (0= not possible, 1=possible)
// @@ - argv_1198		: argv_3715 (0=not argv_1185, 1=argv_1185)
// @@ - dysinfection_result	: argv_3715 (0=failed, 1=success)
// @@ {- argv_3827			    : string (present only if a virus 
// @@    was found, empty if infected_flag=0) }
// @@
// @@ Notice that the answer packet may be followed by a argv_1314 in 
// @@ case the scan was remote and the argv_1314 was infected and the 
// @@ dysinfection was possible (argv_1185 by another function).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_1386 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892			= argv_1264;
	argv_3717 answer_type	= argv_2940;
	// set the answer's argv_3695
	argv_1892 = argv_3356 (answer_type);
	if (argv_1892 != argv_1264) {
		string serror = argv_1240 (argv_1892);
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_1386 - argv_3356 failed ! - errno = ", serror.c_str());
		argv_1892 = argv_1262;
	}
	else { // answer argv_3695 setting was succesful
		argv_1892 = argv_2884->argv_3363 (answer_type);
		if (argv_1892 != argv_2901) { 
			string serror = argv_1240 (argv_1892);
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_1386 - argv_3363 failed ! - errno = ", serror.c_str());
		}
		else { // argv_3695 of the new packet set succesfully
			// we assume that no virus was found and thus that dysinfection was not argv_1185.
			argv_3715 scan_success_UI08			= (argv_3715) argv_3318;
			argv_3715 virus_found_flag_UI08		= (argv_3715) infected;
			argv_3715 dysinfection_possible_UI08	= (argv_3715) argv_1196;
			argv_3715 dysinfection_done_UI08		= (argv_3715) argv_1194;
			argv_3715 dysinfection_result_UI08	= (argv_3715) argv_1197;

			// insert the flag that tells whether the scan was succesful or not
			argv_1892 = argv_2884->insert (scan_success_UI08);

			if (argv_1892 == argv_2901) { // field 1 inserted succesfully
				argv_1892 = argv_2884->insert (virus_found_flag_UI08);
			}

			if (argv_1892 == argv_2901) { // field 1,2 inserted succesfully
				argv_1892 = argv_2884->insert (dysinfection_possible_UI08);
			}
			if (argv_1892 == argv_2901) { // field 1,2,3 inserted succesfully
				argv_1892 = argv_2884->insert (dysinfection_done_UI08);
			}
			if (argv_1892 == argv_2901) { // field 1,2,3,4 inserted succesfully
				argv_1892 = argv_2884->insert (dysinfection_result_UI08);
			}
			// insert the virus argv_2697 if the argv_1314 was infected
			if ((argv_1892 == argv_2901) && (infected == true)) {
				argv_1892 = argv_2884->insert (argv_3827);
			}

			if (argv_1892 == argv_2901) { // field 1,2,3,4,5 inserted succesfully
				argv_1892 = argv_2884->argv_2830 ();
			}

			if (argv_1892 == argv_2901) { // packet packed succesfully
				argv_1892 = _cli_tab[_index].push_back (argv_2884); // argv_576 packet to the argv_3335 argv_3191
				if (argv_1892 == argv_845) {
					_trigger_write	= true; // tell the event loop to argv_3457 sending
				}
				else {
					string serror = argv_1240 (argv_1892);
					argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_1386 - push_back failed ! - errno = ", serror.c_str());
				}
			}
		}
	}

	if ((argv_1892 == argv_2901) || (argv_1892 == argv_845)) { 
		argv_1892 = argv_1264; // remap error argv_877
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_3138		
// @@
// @@ INPUT			:	
// @@ 
// @@ _source: argv_773: source of the error
// @@
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the failure that may occur
// @@ when preparing a packet to argv_3335 to the client.
// @@ The following steps are argv_1185 :
// @@ - the allocated packet is deallocated.
// @@ - the connection with this client is forcibly closed.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_3138 (argv_773 _source, argv_761 * _cli_tab, argv_3717 _index, argv_3379 _iret) {
	argv_3379 argv_1892 = argv_1264;
	char argv_3681[MAX_PATH];
	string serror = argv_1240 (_iret);
	argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: %s...[FAILED] - errno = %s", _source, serror.c_str());
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1242, argv_3681);

	// delete the packet
	if (argv_2884 != argv_2766) {
		delete argv_2884;
		argv_2884 = argv_2766;
	}

	// argv_869 the connection with this client
	argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_1386 failed => terminating client connection");
	_cli_tab[_index].argv_2258.argv_870 ();

	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_3135		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function extracts a argv_1364 from a received packet.
// @@ this argv_1364 is the argv_2697 of a argv_1314 that must be present
// @@ on the local argv_1314 system. 
// @@ Then using this argv_1364, a scan is performed, and the
// @@ scan argv_3266 is sent to the local client that has requested
// @@ the operation.
// @@ The following steps are performed :
// @@ - a string is extracted from the received packet
// @@ - depending on the received packet argv_3695, we can determine
// @@   whether a dysinfection should be performed or not in case
// @@   of infection.
// @@ - a scan of this local argv_1314 is performed.
// @@ - a new packet containing the scan argv_3266 is allocated
// @@ - the new packet is filled to reflect the scan argv_3266
// @@ - this new packet is pushed onto the argv_3335 argv_3191 of the
// @@   concerned local client using the '_index' parameter.
// @@ - a write event is triggered for the concerned client.
// @@
// @@ Notice : it is up to the event loop to free the allocated 
// @@   packet after sending it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// the local packet contains the following fields :
// - argv_1364 (string)
argv_3379 argv_790::argv_3135 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_GATEWAY__)
	argv_2135->argv_2142 (argv_2763, "processing a local argv_1314");
#endif // #if defined (__DEBUG_GATEWAY__)
	// argv_1292 the 'argv_1364' field from the received packet
	argv_1892 = argv_840[_index].argv_2885.argv_1292 (argv_1300);
	if (argv_1892 != argv_2901) {
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_3135 - argv_1000::argv_1292 failed !");
	}
	else {
#if defined (__DEBUG_GATEWAY__)
		argv_2135->argv_2142 (argv_2763, "local argv_1314 to scan : ", argv_1300.c_str());
#endif // #if defined (__DEBUG_GATEWAY__)

		// scan the local argv_1314
		bool must_dysinfect = false;
		if (argv_3794 == argv_2924) {
			must_dysinfect = true;	
		}

		argv_1892 = argv_3306 (argv_1300.c_str(), must_dysinfect);
		if (argv_1892 != argv_1264) {
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: gateway - argv_3135 : argv_3306 failed !");
		}
		else {
#if defined (__DEBUG_GATEWAY__)
			argv_2135->argv_2142 (argv_2763, "local argv_1314 scanned...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
		}

		argv_2884 = new (std::nothrow) argv_1000; // create a new packet for argv_3335
		if (argv_2884 == argv_2766) {
			argv_1892 = argv_1256;
		}
		else { // new packet allocated succesfully
			argv_1892 = argv_1386 (_cli_tab, _index, _trigger_write);
			if (argv_1892 != argv_1264) {
				argv_3138 ("argv_790::argv_3135 - argv_1386", _cli_tab, _index, argv_1892);
			}
		}
		// notice that it is up to the event loop to free the allocated packet !
	}

	if (argv_1892 == argv_2901) {
		argv_1892 = argv_1264; // remap error argv_877
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_3143		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to scan a argv_1314 that was sent by 
// @@ a remote client. The argv_1314 to scan is saved to a temporary
// @@ argv_1314 by a previous function, and it's this temporary argv_1314
// @@ that is scanned.
// @@ Then using this argv_1364, a scan is performed, and the
// @@ scan argv_3266 is sent to the local client that has requested
// @@ the operation.
// @@ The following steps are performed :
// @@ - depending on the received packet argv_3695, we can determine
// @@   whether an dysinfection should be performed or not in case
// @@   of infection.
// @@ - a scan of this temporary argv_1314 is performed.
// @@ - a new packet containing the scan argv_3266 is allocated
// @@ - the new packet is filled to reflect the scan argv_3266
// @@ - this new packet is pushed onto the argv_3335 argv_3191 of the
// @@   concerned local client using the '_index' parameter.
// @@ - a write event is triggered for the concerned client.
// @@
// @@ Notice : 
// @@  - it is up to the event loop to free the allocated 
// @@    packet after sending it.
// @@ 
// @@ - the remote packet has no field to be extracted as all was
// @@   already argv_1185 by the argv_3199 function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_3143 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_GATEWAY__)
	argv_2135->argv_2142 (argv_2763, "processing a remote argv_1314");
	argv_2135->argv_2142 (argv_2763, "remote argv_1314 to scan saved to temporary argv_1314 : ", argv_3683.c_str());
#endif // #if defined (__DEBUG_GATEWAY__)

	// scan the temporary argv_1314
	bool must_dysinfect = false;
	if (argv_3794 == argv_2926) {
		must_dysinfect = true;	
	}
	argv_1892 = argv_3306 (argv_3683.c_str(), must_dysinfect);
	if (argv_1892 != argv_1264) {
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: gateway - argv_3143 : argv_3306 failed !");
	}

	argv_2884 = new (std::nothrow) argv_1000; // create a new packet for argv_3335
	if (argv_2884 == argv_2766) {
		argv_1892 = argv_1256;
	}
	else { // new packet allocated succesfully
#if defined (__DEBUG_GATEWAY__)
		argv_2135->argv_2142 (argv_1086, "scan argv_3266 packet allocated succesfully");
#endif // #if defined (__DEBUG_GATEWAY__)
		argv_1892 = argv_1386 (_cli_tab, _index, _trigger_write);

		if (argv_1892 != argv_1264) {
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_3143 - argv_1386 failed !!");
			argv_3138 ("argv_790::argv_3143 - argv_1386", _cli_tab, _index, argv_1892);
		}
		else {
#if defined (__DEBUG_GATEWAY__)
			argv_2135->argv_2142 (argv_1086, "argv_790::argv_3143 - argv_1386...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
			
			if ((infected==true) && (argv_1196==true) && (argv_1194==true) && (argv_1197==true)) {
#if defined (__DEBUG_GATEWAY__)
				argv_2135->argv_2142 (argv_1086, "argv_790::argv_3143 - argv_1314 infected, dysinfection argv_1185 => need to argv_3335 the clean argv_1314 to the client");
#endif // #if defined (__DEBUG_GATEWAY__)
				argv_1892 = argv_3338 (_cli_tab, _index, argv_3683.c_str());
				if (argv_1892 != argv_1264) {
					argv_3138 ("argv_790::argv_3143 - argv_3338", _cli_tab, _index, argv_1892);
				}
			}
		}
		// notice that it is up to the event loop to free the allocated packet !
	}

	// delete the temporary received argv_1314 if the operation was a failure
	if (argv_1892 != argv_1264) {
		argv_2135->argv_2142 (argv_3834, "*** WARNING: argv_790::argv_3143 - operation could not succeed ! - deleting temporary argv_1314 : ", argv_3683.c_str());
		if (argv_1116 (argv_3683.c_str()) == false) {
			argv_2135->argv_2142 (argv_3834, "*** WARNING : argv_790::argv_3143 - failed to delete argv_1314 : ", argv_3683.c_str());
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_813	
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to ensure that no protocol violation 
// @@ occured when receiving a given packet.
// @@ we can have 3 different client types :
// @@ - local clients
// @@ - remote clients
// @@ - admin clients
// @@ For each category of clients, there is a different protocol
// @@ so for security reasons, we need to ensure that the argv_2271 
// @@ received from a given argv_3410 is allowed for this client argv_3695. 
// @@ this function permits to ensure that the user argv_3695 of the 
// @@ received packet is coherent with the client argv_3695.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_813 (argv_761 * _cli_tab, argv_3717 _index) {
	argv_3379 argv_1892 = argv_1264;
	if (_cli_tab[_index].argv_849 == argv_859) {
		if ((argv_3794 != argv_2928) && (argv_3794 != argv_2924)) {
			argv_1892 = 	argv_1258;
		}
	}
	else if (_cli_tab[_index].argv_849 == argv_860) {
		if ((argv_3794 != argv_2930) && (argv_3794 != argv_2926)) {
			argv_1892 = 	argv_1258;
		}
	}
	else if (_cli_tab[_index].argv_849 == CLIENT_TYPE_ADMIN) {
		if ((argv_3794 != PCK_TYPE_UPDATE) && (argv_3794 != argv_2938)) {
			argv_1892 = 	argv_1258;
		}
	}
	else if (_cli_tab[_index].argv_849 == argv_861) { 
		argv_1892 = argv_1253;
	}
	else { // unknown client argv_3695 !
		argv_1892 = argv_1266;
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_3140		
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the packet whose argv_3695 is
// @@ argv_2938. The aim of this packet argv_3695 is to
// @@ argv_3463 the gateway. The mechanism used to argv_3463 it is to 
// @@ return and propagate a dedicated error argv_877 :
// @@ argv_1263. This error argv_877, when encountered
// @@ by any other function, will be propagated so that the 
// @@ gateway can eventually argv_3463 and return.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_3140 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_GATEWAY__)
	argv_2135->argv_2142 (argv_2763, "argv_790::argv_3140");
#endif // #if defined (__DEBUG_GATEWAY__)
	argv_1892 = argv_1263;
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_3141		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the packet whose argv_3695 is
// @@ PCK_TYPE_UPDATE. The aim of this packet argv_3695 is to permit
// @@ to update the kernel without stopping the service.
// @@ The PCK_TYPE_UPDATE packet contains the argv_595 of a new
// @@ kernel manager that was argv_3124 by the admin part.
// @@ it does the following steps :
// @@ - argv_1292 the argv_595 of the kernel manager argv_3124 by the 
// @@   admin part from the received packet.
// @@ - argv_3374 argv_1043 kernel.
// @@ - argv_1127 argv_1043 kernel.
// @@ - save up the argv_595 of the new kernel for use.
// @@ - format and argv_3335 a new packet to the concerned update client
// @@   by :
// @@   - allocating a new packet.
// @@   - fill it with the update argv_3266.
// @@   - deposit it to the argv_3335 argv_3191 of the concerned client.
// @@   - trigger a write event for this client.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_3141 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_GATEWAY__)
	argv_2135->argv_2142 (argv_2763, "argv_790::argv_3141");
#endif // #if defined (__DEBUG_GATEWAY__)

	// argv_1292 the argv_595 of the new kernel (ready for use)
	argv_3717 new_kernel_addr = 0;
	argv_1892 = argv_840[_index].argv_2885.argv_1292 (new_kernel_addr);
	if (argv_1892 != argv_2901) {
		string serror = argv_1240 (argv_1892);
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_3141 - argv_1000::argv_1292 failed ! - errno = ", serror.c_str());
	}
	else { // new kernel's argv_595 extraction success
#if defined (__DEBUG_GATEWAY__)
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "gateway : argv_3141 : received adress of new kernel : 0x%X", new_kernel_addr);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_GATEWAY__)

		// argv_3374 argv_1043 kernel
		argv_1892 = argv_1962->argv_3375 ();
		if (argv_1892 != argv_1981) {
			string serror = argv_1240 (argv_1892);
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_3141 - argv_838::argv_3375 failed ! - errno = ", serror.c_str());
		}

		// argv_1127 argv_1043 kernel
		if (argv_1892 == argv_1981) {
#if defined (__DEBUG_GATEWAY__)
			argv_2135->argv_2142 (argv_1086, "gateway - argv_3141 : argv_3375...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
			argv_1892 = argv_1962->argv_1129 ();
			if (argv_1892 != argv_1981) {
				string serror = argv_1240 (argv_1892);
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_3141 - argv_838::argv_1129 failed ! - errno = ", serror.c_str());
			}
		}

		if (argv_1892 == argv_1981) {
#if defined (__DEBUG_GATEWAY__)
			argv_2135->argv_2142 (argv_1086, "gateway - argv_3141 : argv_1129...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
			delete argv_1962; // deallocate argv_1043 kernel
			// save up the argv_595 of the new kernel
			argv_1962 = (argv_838 *) new_kernel_addr;
#if defined (__DEBUG_GATEWAY__)
			argv_2135->argv_2142 (argv_1086, "gateway - argv_3141: new kernel's argv_595 saved...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
		}
	}

	if (argv_1892 == argv_1981) { // remap error argv_877
		argv_1892 = argv_1264;
	}

	// argv_3335 an answer anyway
	argv_3379 iret2 = argv_1388 (_cli_tab, _index, _trigger_write, argv_1892);
	if (iret2 != argv_1264) {
		string serror = argv_1240 (iret2);
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: gateway : argv_3141 : argv_1388 failed ! - errno = ", serror.c_str());
	}
	else { // answer packet sent succesfully
#if defined (__DEBUG_GATEWAY__)
		argv_2135->argv_2142 (argv_1086, "gateway - argv_3141 : answer sent to admin client...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
	}

	if (argv_1892 == argv_1981) {
		argv_1892 = iret2; // don't override a previous error (if any)		 
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_3130		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function is a dispatcher that permits to call the proper
// @@ function to argv_1789 the received packet depending on it's argv_3695.
// @@ Notice that the packet's argv_3695  must pertain to the set of
// @@ possible types for an admin packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_3130 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1264;
#if defined (__DEBUG_GATEWAY__)
	argv_2135->argv_2142 (argv_2763, "argv_790::argv_3130");
#endif // #if defined (__DEBUG_GATEWAY__)

	switch (argv_3794) {
		case argv_2938:
			argv_1892 = argv_3140 (_cli_tab, _index, _trigger_write);
			break;

		case PCK_TYPE_UPDATE:
			argv_1892 = argv_3141 (_cli_tab, _index, _trigger_write);
			break;
	}

	if (argv_1892 != argv_1264) {
		if (argv_1892 == argv_1263) {
			argv_2135->argv_2142 (argv_620, "*** WARNING: argv_790::argv_3130 - << RECEIVED ORDER TO STOP >>");
		}
		else { // real error occured
			string serror = argv_1240 (argv_1892);
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_3130 failed ! - errno = ", serror.c_str());
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_3142		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_761 *: array of client argv_1073.
// @@
// @@ _index: argv_3717 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_1264 if success,
// @@        another argv_3807 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function is a dispatcher that permits to call the proper
// @@ function to argv_1789 the received packet depending on it's argv_3695.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_3142 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_1264;

	// ensure that the packet argv_3695 is correct
	if ((argv_3794 != argv_2928) && (argv_3794 != argv_2924) &&
		(argv_3794 != argv_2930) && (argv_3794 != argv_2926) &&
		(argv_3794 != PCK_TYPE_UPDATE) && (argv_3794 != argv_2938)) {
		argv_1892 = argv_1255;
	}
	else { // user packet argv_3695 is coherent with the application
		// ensure that the packet argv_3695 is coherent with the client argv_3695
		argv_1892 = argv_813 (_cli_tab, _index);
		if (argv_1892 == argv_1264) {
			// ensure that the packet user argv_3695 matches the packet system argv_3695
			if (argv_1320 == false) {
				if ((argv_3794 != argv_2928) && 
					(argv_3794 != argv_2924) && 
					(argv_3794 != PCK_TYPE_UPDATE) && 
					(argv_3794 != argv_2938)) {
					argv_1892 = argv_1252;
				}
				else if ((argv_3794 == argv_2928) || (argv_3794 == argv_2924)) { 
					argv_1892 = argv_3135 (_cli_tab, _index, _trigger_write);
				}
				else if ((argv_3794 == PCK_TYPE_UPDATE) || (argv_3794 == argv_2938)) {
					argv_1892 = argv_3130 (_cli_tab, _index, _trigger_write);
				}
			}
			else { // a argv_1314 was received
				if ((argv_3794 != argv_2930) && (argv_3794 != argv_2926)) {
					argv_1892 = argv_1252;
				}
				else { // user packet argv_3695 is coherent with the system packet argv_3695
					argv_1892 = argv_3143 (_cli_tab, _index, _trigger_write);
				}
			}
		}
	}

	// reset the receive packet for this client so that it can be reused
	if (argv_1892 == argv_1264) {
		argv_1892 = _cli_tab[_index].argv_2885.reset ();
	}

	if (argv_1892 == argv_2901) {
		argv_1892 = argv_1264; // remap error argv_877
	}

	if (argv_1892 != argv_1264) {
		if (argv_1892 == argv_1263) {
			argv_2135->argv_2142 (argv_620, "*** WARNING : argv_790::argv_3142 - << RECEIVED ORDER TO STOP >>");
		}
		else {
			string serror = argv_1240 (argv_1892);
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_3142 failed ! - errno = ", serror.c_str());
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	reset		
// @@
// @@ INPUT			:	none	
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
// @@ This function permits to bring back the argv_790 argv_2785
// @@ to it's original argv_3460.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_790::reset () {
	argv_2135								= argv_2766;
	argv_1269.argv_1601	= argv_2756;
	//argv_1269.argv_1603	= argv_2887;
	argv_1269.argv_1604		= argv_2891;
	argv_1269.argv_1541		= argv_2243;

	argv_3799.clear ();
	argv_1268.reset ();

	if (argv_840 != argv_2766) {
		delete [] argv_840;
		argv_840 = argv_2766;
	}

	if (argv_1962 != argv_2766) {
		delete argv_1962;
		argv_1962 = argv_2766;
	}

	argv_1320		= false;
	argv_3794			= argv_2940;
	argv_3683		= "";
	argv_1300	= "";
	argv_3273			= "";
	argv_1939		= "";
	argv_2884				= argv_2766;
	
	argv_3318		= false;
	infected			= false;
	argv_3827			= argv_2766;
	argv_1196	= false;
	argv_1194		= false;
	argv_1197	= false;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_790		
// @@
// @@ INPUT			:	none		
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
// @@ Normal constructor of the argv_790 argv_2785.
// @@ it permits to set up all fields to their initial argv_3460.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_790::argv_790 () {
	argv_840				= argv_2766;
	argv_1962	= argv_2766;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_790	
// @@
// @@ FUNCTION		:	argv_3278		
// @@
// @@ INPUT			:
// @@ _log_ptr: argv_865 *: argv_595 of the log argv_1314 to use.
// @@ 
// @@ _max_nb_client: argv_3717 : size of the client array to allocate.	
// @@
// @@ _v_listener: vector<argv_864>&: vector containing all the argv_1073
// @@   concerning the listening argv_3410 descriptors.
// @@
// @@ _root_folder: argv_773 : base directory of the kernel.
// @@
// @@ _kernel_dll_name: argv_773: argv_2697 of the kernel's DLL argv_1314.
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
// @@ This function permits to argv_3278 the gateway that is activated
// @@ by events sent by the event loop located in the kernel.
// @@ it performs the following steps :
// @@ - allocate the client array using the '_max_nb_client' parameter.
// @@ - allocate a new kernel manager.
// @@ - construct the new kernel manager.
// @@ - argv_717 the new kernel manager.
// @@ - argv_3278 the event loop.
// @@ 
// @@ Notice that the event loop is given a bunch of function 
// @@ pointers so that the gateway can be notified of events 
// @@ by the event loop.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_790::argv_3278 (argv_865 * _log_ptr, argv_3717 _max_nb_client, vector<argv_864>& _v_listener, argv_773 _root_folder, argv_773 _kernel_dll_name) {
	argv_3379 argv_1892 = argv_1622;
#if defined (__BYPASS_KERNEL__)
	MessageBox (argv_2766, "the kernel will be bypassed ! (__BYPASS_KERNEL__ flag set)", "", MB_ICONWARNING);		
#endif // #if defined (__BYPASS_KERNEL__)


	if ((_log_ptr == argv_2766) || (_max_nb_client == 0) || (_root_folder == argv_2766) || (_kernel_dll_name == argv_2766)) {
		argv_1892 = argv_1619;
	}
	else { // parameters are OK
		argv_1621		= this; // will permit C functions to call C++ argv_2785
		argv_2135			= _log_ptr;
		argv_3273		= _root_folder;
		argv_1939	= _kernel_dll_name;
#if defined (__DEBUG_GATEWAY__)
		argv_2135->argv_2142 (argv_2763, "gateway...[STARTING]");
#endif // #if defined (__DEBUG_GATEWAY__)
		// argv_3110 the client array
		argv_840 = new (std::nothrow) argv_761[_max_nb_client];
		if (argv_840 == argv_2766) {
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: gateway : failed to allocate client argv_3590 !");
			argv_1892 = argv_1620;
		}
		else { // memory allocation succeeded
#if defined (__DEBUG_GATEWAY__)
			argv_2135->argv_2142 (argv_2763, "gateway - client array allocated succesfully");
			argv_2135->argv_2142 (argv_2763, "gateway - constructing the kernel...");
#endif // #if defined (__DEBUG_GATEWAY__)
			// ensure that conditions are met to allocate a new kernel manager
			if (argv_1962 != argv_2766) {
				argv_1892 = argv_1618;
			}
			else { // allocate the kernel manager
				argv_1962 	= new (std::nothrow) argv_838;
				if (argv_1962 == argv_2766) {
					argv_2135->argv_2142 (argv_1242, "+++ ERROR: gateway : failed to allocate kernel manager !");
					argv_1892 = argv_1620;
				}
				else { // kernel manager succesfuly allocated
					// construct the kernel
					argv_1892 = argv_1962->construct_kernel (argv_3273.c_str(), argv_1939.c_str(), argv_2135);
					if (argv_1892 != argv_1981) {
						string serror = argv_1240 (argv_1892);
						argv_2135->argv_2142 (argv_1242, "+++ ERROR: gateway - argv_3278 : construct_kernel failed ! - ", serror.c_str());
					}
					else { // kernel created succesfully
#if defined (__DEBUG_GATEWAY__)
						argv_2135->argv_2142 (argv_2763, "gateway - kernel constructed succesfully");
#endif // #if defined (__DEBUG_GATEWAY__)

						// argv_717 the kernel
						argv_1892 = argv_1962->argv_721 ();
						if (argv_1892 != argv_1981) { // kernel built and booted succesfully
							argv_2135->argv_2142 (argv_1242, "+++ ERROR: gateway - kernel argv_717 failed !");
						}
						else { // kernel ready => argv_3457 the event loop
#if defined (__DEBUG_GATEWAY__)
							argv_2135->argv_2142 (argv_2763, "gateway - kernel booted succesfully");
							argv_2135->argv_2142 (argv_2763, "gateway - launching event loop");
#endif // #if defined (__DEBUG_GATEWAY__)
							argv_1892 = argv_1268.argv_3278 (argv_2135, _v_listener, &argv_840[0], _max_nb_client, argv_1269);
							if (argv_1892 == argv_1264) {
								argv_1892 = argv_1622; // remap error argv_877
							}
							else { // event loop returned
								if (argv_1892 == argv_1263) {
									argv_2135->argv_2142 (argv_620, "*** WARNING : argv_790::argv_3278 - << RECEIVED ORDER TO STOP >>");
									argv_3379 iret2 = argv_1962->argv_3375 ();
									if (iret2 != argv_1981) {
										string serror = argv_1240 (iret2);
										argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_3278 - argv_3375 failed ! - errno = ", serror.c_str());
									}
									else {
										argv_2135->argv_2142 (argv_2763, "gateway - kernel manager argv_3374...[SUCCESS]");
										iret2 = argv_1962->argv_1129 ();
										if (iret2 != argv_1981) {
											string serror = argv_1240 (iret2);
											argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_3278 - argv_1129 failed ! - errno = ", serror.c_str());
										}
										else { // kernel manager destructed succesfully
											argv_2135->argv_2142 (argv_2763, "gateway - kernel manager argv_1127...[SUCCESS]");
										}
									}
								}
								else { // real error occured
									string serror = argv_1240 (argv_1892);
									argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_790::argv_3278 - event loop argv_3278 failed ! - errno = ", serror.c_str());
								}
							}
						}
					}
				}
			}
		}
	}

	return (argv_1892);		
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


