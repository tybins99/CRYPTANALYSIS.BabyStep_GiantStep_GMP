// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_233.cpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_292.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variable
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_765 * argv_934 = argv_2766;



argv_3379 argv_2756 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_934->argv_2755 (_cli_tab, _index, _trigger_write);
	return (argv_1892);
}

argv_3379 argv_2887 (argv_761 * _cli_tab, argv_3717 _index, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892 = argv_934->argv_2886 (_cli_tab, _index, _v_index_2_trigger_write);
	return (argv_1892);
}

argv_3379 argv_2891 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_934->argv_2890 (_cli_tab, _index, _trigger_write);
	return (argv_1892);
}


argv_3379 argv_2243 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_934->argv_2242 (_cli_tab, _index, _trigger_write);
	return (argv_1892);
}

argv_765::argv_765 () {
	argv_840 = argv_2766;
	reset ();
}

void argv_765::argv_1150 (argv_3379 _success_result, argv_3379 _result, argv_773 _opa) {
	char argv_3681[MAX_PATH];
	if (_result == _success_result) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3409 (argv_3681, MAX_PATH, "%s...[SUCCESS]", _opa);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	}
	else {
		if (_result == argv_1263) {
			argv_3409 (argv_3681, MAX_PATH, "*** WARNING : %s...[received order to argv_3463]", _opa);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_3834, argv_3681);
		}
		else {
			string serror = argv_1240 (_result);
			argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: %s...[FAILED] - argv_1239=%s", _opa, serror.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1242, argv_3681);
		}
	}
}


void argv_765::reset () {
	argv_1268.reset ();
	argv_841						= 0;
	argv_2135								= argv_2766;

	argv_643					= argv_2766;
	argv_658				= argv_2766;
	argv_3418					= argv_2766;

	argv_1269.argv_1601	= argv_2756;
	argv_1269.argv_1603	= argv_2887;
	argv_1269.argv_1604		= argv_2891;
	argv_1269.argv_1541		= argv_2243;

	index_inner_archive_creator			= -1;	
	index_inner_archive_extractor		= -1;	
	index_inner_spyware_manager			= -1;	
	index_inner_scan_gateway			= -1;
	index_inner_update					= -1;
	index_inner_admin					= -1;

	if (argv_840 != argv_2766) {
		delete [] argv_840;
		argv_840 = argv_2766;
	}
}

// save the index of the concerned client to avoid lookup at runtime.
argv_3379 argv_765::argv_3357 (argv_761 * _cli_tab, argv_3379 _index, argv_3379& _cache, argv_773 _name) {
	argv_3379 argv_1892 = argv_938;
	if (_cache >= 0) {
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: argv_765::argv_3357 - for inner client '%s': illegal when connection established (new_index=%d,previous_index=%d)", _name, _index, _cache);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1242, argv_3681);
		argv_1892 = argv_929;
	}
	else { // the cache is virgin => ok to set it
		_cache = _index;
	}
	return (argv_1892);
}

argv_3379 argv_765::argv_2755 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_938;
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "argv_765::argv_2755 - new client at box %u (sockfd=%u)", _index, _cli_tab[_index].argv_3410);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_2763, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	// update the cache if necessary
	if (_cli_tab[_index].argv_849 == argv_854) {
		argv_1892 = argv_3357 (_cli_tab, _index, index_inner_archive_extractor, "argv_854");
	}
	else if (_cli_tab[_index].argv_849 == argv_853) {
		argv_1892 = argv_3357 (_cli_tab, _index, index_inner_archive_creator, "argv_853");
	}
	else if (_cli_tab[_index].argv_849 == argv_856) {
		argv_1892 = argv_3357 (_cli_tab, _index, index_inner_spyware_manager, "argv_856");
	}
	else if (_cli_tab[_index].argv_849 == argv_855) {
		argv_1892 = argv_3357 (_cli_tab, _index, index_inner_scan_gateway, "argv_855");
	}
	else if (_cli_tab[_index].argv_849 == argv_852) {
		argv_1892 = argv_3357 (_cli_tab, _index, index_inner_admin, "argv_852");
	} 
	else if (_cli_tab[_index].argv_849 == argv_857) {
		argv_1892 = argv_3357 (_cli_tab, _index, index_inner_update, "argv_857");
	}

	if (argv_1892 == argv_938) { // remap error argv_877
		argv_1892 = argv_1264;
	}
	return (argv_1892);
}

argv_3379 argv_765::argv_2242 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_938;
	if (argv_1892 == argv_938) { // remap argv_1239 for the caller
		argv_1892 = argv_1264;
	}
	return (argv_1892);
}

argv_3379 argv_765::argv_2890 (argv_761 * _cli_tab, argv_3717 _index, bool& _trigger_write) {
	argv_3379 argv_1892 = argv_938;
	if (argv_1892 == argv_938) { // remap argv_1239 for the caller
		argv_1892 = argv_1264;
	}
	return (argv_1892);
}

bool argv_765::argv_846 (argv_761 * _cli_tab, argv_3717 _index) {
	bool bret = false;
	if ((_cli_tab[_index].argv_849 == argv_859) ||
		(_cli_tab[_index].argv_849 == argv_860) ||
		(_cli_tab[_index].argv_849 == argv_851)) {
		bret = true;
	}
	return (bret);
}

argv_3379 argv_765::argv_1103 (argv_761 * _cli_tab, argv_3717 _index, argv_3715& _outer_type) {
	argv_3379 argv_1892 = argv_938;
	switch (_cli_tab[_index].argv_849) {
		case argv_859: 
			_outer_type = argv_2917;
			break;

		case argv_860:
			_outer_type = argv_2918;
			break;

		case argv_851:
			_outer_type = argv_2914;
			break;

		default:
			argv_1892 = argv_933;
	}
	return (argv_1892);	
}

argv_3379 argv_765::argv_1393 (argv_761 * _cli_tab, argv_3717 _src_index, argv_3717 _dest_index, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892 = argv_938;
	argv_1000 * argv_3343 = new (std::nothrow) argv_1000;
	if (argv_3343 == argv_2766) { // allocate a new packet for the destination's argv_3335 argv_3191
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1393 - memory allocation failed !");
		argv_1892 = argv_932;
	}
	else {
		argv_3715 outer_type;
		argv_1892 = argv_1103 (_cli_tab, _src_index, outer_type);
		if (argv_1892 != argv_938) {
			string serror = argv_1240 (argv_1892);	
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1393 - argv_1103 failed ! - argv_1239 = ", serror.c_str());
		}
		else { 
#if defined (__DEBUG_COM_MANAGER__)
			string client_type_str = argv_850 (_cli_tab[_src_index].argv_849);
			string outer_type_str = argv_3795 (outer_type);
			char argv_3681[MAX_PATH];
			argv_3409 (argv_3681, MAX_PATH, "received a naked packet from client argv_3695 %s => outer packet argv_3695 will be %s", client_type_str.c_str(), outer_type_str.c_str ());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1086, argv_3681);
			argv_3409 (argv_3681, MAX_PATH, "forging a rich packet [src_index=%d|src_gen=%u|dest_index=%d|dest_gen=%u]", _src_index, _cli_tab[_src_index].argv_1637, _dest_index, _cli_tab[_dest_index].argv_1637);
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
			argv_1892 = _cli_tab[_src_index].argv_2885.argv_1383 (argv_3343, outer_type, _src_index, _cli_tab[_src_index].argv_1637, _dest_index, _cli_tab[_dest_index].argv_1637);
			if (argv_1892 != argv_2901) {
				string serror = argv_1240 (argv_1892);	
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1393 - argv_1383 failed ! - argv_1239 = ", serror.c_str());
			}
			else { // argv_576 the outer packet to the destination argv_3335 argv_3191
				argv_1892 = _cli_tab[_dest_index].push_back (argv_3343); 
				if (argv_1892 != argv_845) { // the addition to the argv_3335 argv_3191 failed
					string serror = argv_1240 (argv_1892);
					argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1393 - push_back failed ! - errno = ", serror.c_str());
				}
				else { // schedule a write event for the target client 
					_v_index_2_trigger_write.push_back (_dest_index);
				}
			}
		}
	}
	return (argv_1892);
}

argv_3379 argv_765::argv_1389 (argv_761 * _cli_tab, argv_3717 _src_index, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892 = argv_938;

	// check whether the argv_1043 operation should be stopped or not
	argv_3715 packet_type;
	_cli_tab[_src_index].argv_2885.argv_1685 (packet_type);
	argv_806 (_cli_tab, _src_index, index_inner_archive_creator, packet_type);

	// the packet is forwarded anyway
#if defined (__DEBUG_COM_MANAGER__)
	argv_2135->argv_2142 (argv_1086, "forwarding packet to archive creator");
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_1892 = argv_1393 (_cli_tab, _src_index, index_inner_archive_creator, _v_index_2_trigger_write);
	return (argv_1892);
}

argv_3379 argv_765::argv_1390 (argv_761 * _cli_tab, argv_3717 _src_index, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892 = argv_938;

	// check whether the argv_1043 operation should be stopped or not
	argv_3715 packet_type;
	_cli_tab[_src_index].argv_2885.argv_1685 (packet_type);
	argv_806 (_cli_tab, _src_index, index_inner_archive_extractor, packet_type);

#if defined (__DEBUG_COM_MANAGER__)
	argv_2135->argv_2142 (argv_1086, "forwarding packet to archive extractor");
#endif // #if defined (__DEBUG_COM_MANAGER__)

	argv_1892 = argv_1393 (_cli_tab, _src_index, index_inner_archive_extractor, _v_index_2_trigger_write);
	return (argv_1892);
}

argv_3379 argv_765::argv_1392 (argv_761 * _cli_tab, argv_3717 _src_index, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892 = argv_938;

	// check whether the argv_1043 operation should be stopped or not
	argv_3715 packet_type;
	_cli_tab[_src_index].argv_2885.argv_1685 (packet_type);
	argv_806 (_cli_tab, _src_index, index_inner_spyware_manager, packet_type);

#if defined (__DEBUG_COM_MANAGER__)
	argv_2135->argv_2142 (argv_1086, "forwarding packet to spyware manager");
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_1892 = argv_1393 (_cli_tab, _src_index, index_inner_spyware_manager, _v_index_2_trigger_write);
	return (argv_1892);
}

argv_3379 argv_765::argv_1391 (argv_761 * _cli_tab, argv_3717 _src_index, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892 = argv_938;
#if defined (__DEBUG_COM_MANAGER__)
	argv_2135->argv_2142 (argv_1086, "forwarding packet to scan gateway");
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_1892 = argv_1393 (_cli_tab, _src_index, index_inner_scan_gateway, _v_index_2_trigger_write);
	return (argv_1892);
}

bool argv_765::argv_1901 (argv_3715 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_2908) ||
		(_payload_type == argv_2906)) {
		bret = true;
	}
	return (bret);
}

bool argv_765::argv_1902 (argv_3715 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_2911) ||
		(_payload_type == argv_2907)) {
		bret = true;
	}
	return (bret);
}

bool argv_765::argv_1904 (argv_3715 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_2935) ||
		(_payload_type == argv_2937)) {
		bret = true;
	}
	return (bret);
}

bool argv_765::argv_1903 (argv_3715 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_2928) ||
		(_payload_type == argv_2924) ||
		(_payload_type == argv_2930) ||
		(_payload_type == argv_2926)) {
		bret = true;
	}
	return (bret);
}

// with a naked packet, we have to use the packet argv_3695 for routing
// but for rich packet, we don't need to use the packet argv_3695, instead
// we use the src/dest information, and the destination client's argv_3695
// to determine which shape to choose for the destination packet.
argv_3379 argv_765::argv_3136 (argv_761 * _cli_tab, argv_3717 _src_index, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892 = argv_938;

	// argv_1292 the packet argv_3695 to determine where to route it
	argv_3715 argv_3794 = argv_2940;
	_cli_tab[_src_index].argv_2885.argv_1685 (argv_3794);
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3681[MAX_PATH];
	string user_type_str = argv_3795 (argv_3794);
	argv_3409 (argv_3681, MAX_PATH, "received naked packet argv_3695 '%s'", user_type_str.c_str());
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if (argv_1901 (argv_3794) == true) {
		argv_1892 = argv_1389 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else if (argv_1902 (argv_3794) == true) {
		argv_1892 = argv_1390 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else if (argv_1904 (argv_3794) == true) {
		argv_1892 = argv_1392 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else if (argv_1903 (argv_3794) == true) {
		argv_1892 = argv_1391 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else { // unhandled naked packet received
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_3136 - received unhandled packet : argv_3695 was : ", (argv_3717) argv_3794);
		argv_1892 = argv_940;
	}

	if (argv_1892 == argv_845) { // remap error argv_877
		argv_1892 = argv_938;
	}
	return (argv_1892); 
}

argv_3379 argv_765::argv_815 (argv_761 * _cli_tab, argv_3717 _src_index, argv_3717 _src_generation, argv_3717 _dest_index, argv_3717 _dest_generation) {
	argv_3379 argv_1892 = argv_938;
	if (_src_index >= argv_841) {
		argv_1892 = argv_937;
	}
	else if (_dest_index >= argv_841) {
		argv_1892 = argv_928;
	}
	else if (_cli_tab[_src_index].argv_3823 == true) {
		argv_1892 = argv_935;
	}
	else if (_cli_tab[_dest_index].argv_3823 == true) {
		argv_1892 = argv_926;
	}
	else if (_src_generation != _cli_tab[_src_index].argv_1637) {
		argv_1892 = argv_936;	
	}
	else if (_dest_generation != _cli_tab[_dest_index].argv_1637) {
		argv_1892 = argv_927;
	}
	return (argv_1892);
}

argv_3379 argv_765::argv_1297 (argv_761 * _cli_tab, argv_3717 _index, argv_3715& _outer_type, argv_3717& _src_index, argv_3717& _src_generation, argv_3717& _dest_index, argv_3717& _dest_generation, argv_3715& _payload_type) {
	argv_3379 argv_1892 = argv_938;

	// read the outer packet argv_3695.
	_cli_tab[_index].argv_2885.argv_1685 (_outer_type);

	// argv_1292 the source index
	argv_1892 = _cli_tab[_index].argv_2885.argv_1292 (_src_index);
	if (argv_1892 != argv_2901) {	
		string serror = argv_1240 (argv_1892);
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1297 - field 1 extraction failed ! - argv_1239 = ", serror.c_str());	
	}
	else { // argv_1292 the source argv_1637
		argv_1892 = _cli_tab[_index].argv_2885.argv_1292 (_src_generation);
		if (argv_1892 != argv_2901) {	
			string serror = argv_1240 (argv_1892);
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1297 - field 2 extraction failed ! - argv_1239 = ", serror.c_str());	
		}
		else { // argv_1292 the dest index
			argv_1892 = _cli_tab[_index].argv_2885.argv_1292 (_dest_index);
			if (argv_1892 != argv_2901) {	
				string serror = argv_1240 (argv_1892);
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1297 - field 3 extraction failed ! - argv_1239 = ", serror.c_str());
			}
			else { // argv_1292 the dest argv_1637
				argv_1892 = _cli_tab[_index].argv_2885.argv_1292 (_dest_generation);
				if (argv_1892 != argv_2901) {	
					string serror = argv_1240 (argv_1892);
					argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1297 - field 3 extraction failed ! - argv_1239 = ", serror.c_str());
				}
				else { // argv_1292 the payload argv_595
					argv_1892 = _cli_tab[_index].argv_2885.argv_1292 (_payload_type);
					if (argv_1892 != argv_2901) {	
						string serror = argv_1240 (argv_1892);
						argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1297 - field 4 extraction failed ! - argv_1239 = ", serror.c_str());
					}
				}
			}
		}
	}

	if (argv_1892 == argv_2901) { // remap error argv_877
#if defined (__DEBUG_COM_MANAGER__)
		string outer_type_str	= argv_3795 (_outer_type);
		string payload_type_str	= argv_3795 (_payload_type);
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "parsed rich packet : [outer_type=%s|src_index=%u|src_gen:%u|dest_index=%u|dest_gen=%u|payload_type=%s]", outer_type_str.c_str(), _src_index, _src_generation, _dest_index, _dest_generation, payload_type_str.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		argv_1892 = argv_938;
	}
	return (argv_1892);
}

argv_3379 argv_765::argv_1394 (argv_761 * _cli_tab, argv_3717 _src_index, argv_3717 _dest_index, argv_3715 _payload_type, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892 = argv_938;
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3681[MAX_PATH];
	string payload_type_str = argv_3795 (_payload_type);
	string src_cli_type     = argv_850 (_cli_tab[_src_index].argv_849);
	string dest_cli_type    = argv_850 (_cli_tab[_dest_index].argv_849);
	argv_3409 (argv_3681, MAX_PATH, "forwarding rich packet received : from index %d (argv_849=%s) to index %d (argv_849=%s) (payload_type=%s)", _src_index, src_cli_type.c_str(), _dest_index, dest_cli_type.c_str(), payload_type_str.c_str());
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_1000 * naked_pck_ptr = new (std::nothrow) argv_1000;
	if (naked_pck_ptr == argv_2766) {
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1394 - memory allocation failed !");
		argv_1892 = argv_932;
	}
	else { // argv_867 the payload packet 
		argv_1892 = _cli_tab[_src_index].argv_2885.argv_1385 (naked_pck_ptr, _payload_type);
		if (argv_1892 != argv_2901) {
			string serror = argv_1240 (argv_1892);
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1394 - argv_1385 failed ! - errno = ", serror.c_str());
		}
		else { // argv_576 the naked packet to the destination argv_3335 argv_3191
#if defined (__DEBUG_COM_MANAGER__)
			argv_2135->argv_2142 (argv_1086, "forged naked packet from rich packet");
#endif // #if defined (__DEBUG_COM_MANAGER__)
			argv_1892 = _cli_tab[_dest_index].push_back (naked_pck_ptr); // deallocated by the event loop  
			if (argv_1892 != argv_845) { // the addition to the argv_3335 argv_3191 failed
				string serror = argv_1240 (argv_1892);
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1394 - push_back failed ! - errno = ", serror.c_str());
			}
			else { // schedule a write event for the target client 
				_v_index_2_trigger_write.push_back (_dest_index);
			}
		}
	}

	if (argv_1892 == argv_845) {
		argv_1892 = argv_938; // remap error argv_877
	}
	return (argv_1892);
}

argv_3379 argv_765::argv_1395 (argv_761 * _cli_tab, argv_3715 _outer_type, argv_3717 _src_index, argv_3717 _dest_index, argv_3715 _payload_type, vector<argv_3717>& _v_index_2_trigger_write, bool _is_broadcast) {
	argv_3379 argv_1892 = argv_938;
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3681[MAX_PATH];
	string payload_type_str = argv_3795 (_payload_type);
	string outer_type_str	= argv_3795 (_outer_type);
	string is_broadcast_str	= "false";
	if (_is_broadcast == true) {
		is_broadcast_str = "true";		
	}
	argv_3409 (argv_3681, MAX_PATH, "forward rich packet to internal destination : [src_index=%d|_dest_index=%d|outer_type=%s|payload_type=%s|is_broadcast=%s]", _src_index, _dest_index, outer_type_str.c_str(), payload_type_str.c_str(), is_broadcast_str.c_str());
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	// trigger an interrupt if necessary
	argv_806 (_cli_tab, _src_index, _dest_index, _payload_type);

	// allocate a new rich packet for the target destination
	argv_1000 * rich_pck_ptr = new (std::nothrow) argv_1000;
	if (rich_pck_ptr == argv_2766) {
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_1395 - memory allocation failed !");
		argv_1892 = argv_932;
	}
	else { // argv_867 the received rich packet and mute it's argv_3460
		if (_is_broadcast == false) { // src and dest are contained in the packet 
			_cli_tab[_src_index].argv_2885.argv_867 ((*rich_pck_ptr), (argv_3715) argv_2892);
		}
		else { // src,dest must be inserted by hand
			argv_1892 = _cli_tab[_src_index].argv_2885.argv_1384 (rich_pck_ptr, _outer_type, _payload_type, _src_index, _cli_tab[_src_index].argv_1637, _dest_index, _cli_tab[_dest_index].argv_1637);
			if (argv_1892 != argv_2901) {
				argv_1150 (argv_2901, argv_1892, "argv_765::argv_1395 - argv_1384");
			}
			else { // remap error argv_877
				argv_1892 = argv_938;
			}
		}

		if (argv_1892 == argv_938) {
			// argv_576 the argv_867 packet to the destination argv_3335 argv_3191
			argv_1892 = _cli_tab[_dest_index].push_back (rich_pck_ptr); // deallocated by the event loop  
			if (argv_1892 != argv_845) { // the addition to the argv_3335 argv_3191 failed
				argv_1150 (argv_845, argv_1892, "argv_765::argv_1395 - push_back");
			}
			else { // schedule a write event for the target client 
				_v_index_2_trigger_write.push_back (_dest_index);
#if defined (__DEBUG_COM_MANAGER__)
				argv_2135->argv_2142 (argv_1086, "rich packet added to argv_3335 argv_3191 of client located at index ", _dest_index);
				string type_str = argv_850 (_cli_tab[_dest_index].argv_849);
				argv_3409 (argv_3681, MAX_PATH, "schedule a write event for client at index %u (argv_849: %s)", _dest_index, type_str.c_str());
				argv_3681[MAX_PATH - 1] = '\0';
				argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
			}
		}
	}

	if (argv_1892 == argv_845) {
		argv_1892 = argv_938;
	}
	return (argv_1892);
}


bool argv_765::argv_1896 (argv_761 * _cli_tab, argv_3717 _src_index) {
	bool bret = false;
	if ((_cli_tab[_src_index].argv_849 == argv_857) ||
		(_cli_tab[_src_index].argv_849 == argv_852)) {
		bret = true;
	}

#if defined (__DEBUG_COM_MANAGER__)
	char argv_3681[MAX_PATH];
	string client_type_str = argv_850 (_cli_tab[_src_index].argv_849);
	
	if (bret == true) {
		argv_3409 (argv_3681, MAX_PATH, "client located at index %u is a broadcast inner client (argv_3695=%s)", _src_index, client_type_str.c_str());
	}
	else {
		argv_3409 (argv_3681, MAX_PATH, "client located at index %u is NOT a broadcast inner client (argv_3695=%s)", _src_index, client_type_str.c_str());
	}
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	return (bret);
}

void argv_765::argv_1142 (argv_773 _msg) {
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3681[MAX_PATH];
	argv_2135->argv_2142 (argv_1086, "=== argv_765: inner_cache (%s) ===", _msg);
	argv_3409 (argv_3681, MAX_PATH, "index_inner_archive_creator    = %d", index_inner_archive_creator);    argv_3681[MAX_PATH - 1] = '\0';  argv_2135->argv_2142 (argv_1086, argv_3681);
	argv_3409 (argv_3681, MAX_PATH, "index_inner_archive_extractor  = %d", index_inner_archive_extractor);  argv_3681[MAX_PATH - 1] = '\0';  argv_2135->argv_2142 (argv_1086, argv_3681);
	argv_3409 (argv_3681, MAX_PATH, "index_inner_spyware_manager    = %d", index_inner_spyware_manager);    argv_3681[MAX_PATH - 1] = '\0';  argv_2135->argv_2142 (argv_1086, argv_3681);
	argv_3409 (argv_3681, MAX_PATH, "index_inner_scan_gateway       = %d", index_inner_scan_gateway);       argv_3681[MAX_PATH - 1] = '\0';  argv_2135->argv_2142 (argv_1086, argv_3681);
	argv_3409 (argv_3681, MAX_PATH, "index_inner_admin              = %d", index_inner_admin);              argv_3681[MAX_PATH - 1] = '\0';  argv_2135->argv_2142 (argv_1086, argv_3681);
	argv_3409 (argv_3681, MAX_PATH, "index_inner_update             = %d", index_inner_update);             argv_3681[MAX_PATH - 1] = '\0';  argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
}

// BEWARE: there is an exception for the admin part : the admin part is able to
// emit broadcast requests, but we should never forward broadcast requests
// to admin part.
argv_3379 argv_765::argv_723 (argv_761 * _cli_tab, argv_3717 _src_index, argv_3715 _outer_type, argv_3715 _payload_type, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892		= argv_938;
	argv_3379 iret1		= argv_938;
	argv_3379 iret2		= argv_938;
	argv_3379 iret3		= argv_938;
	argv_3379 iret4		= argv_938;
	argv_3379 iret5		= argv_938;
	argv_3717 argv_2743	= 0;
	argv_3717 nb_failed	= 0;

#if defined (__DEBUG_COM_MANAGER__)
	char argv_3681[MAX_PATH];
	argv_2135->argv_2142 (argv_1086, "=== argv_765::argv_723 ===");
	argv_3409 (argv_3681, MAX_PATH, "_src_index=%u, index_inner_archive_creator    = %d", _src_index, index_inner_archive_creator);	argv_3681[MAX_PATH - 1] = '\0'; argv_2135->argv_2142 (argv_1086, argv_3681);
	argv_3409 (argv_3681, MAX_PATH, "_src_index=%u, index_inner_archive_extractor  = %d", _src_index, index_inner_archive_extractor);	argv_3681[MAX_PATH - 1] = '\0'; argv_2135->argv_2142 (argv_1086, argv_3681);
	argv_3409 (argv_3681, MAX_PATH, "_src_index=%u, index_inner_spyware_manager    = %d", _src_index, index_inner_spyware_manager);	argv_3681[MAX_PATH - 1] = '\0'; argv_2135->argv_2142 (argv_1086, argv_3681);
	argv_3409 (argv_3681, MAX_PATH, "_src_index=%u, index_inner_scan_gateway       = %d", _src_index, index_inner_scan_gateway);		argv_3681[MAX_PATH - 1] = '\0'; argv_2135->argv_2142 (argv_1086, argv_3681);
	argv_3409 (argv_3681, MAX_PATH, "_src_index=%u, index_inner_update             = %d", _src_index, index_inner_update);				argv_3681[MAX_PATH - 1] = '\0'; argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if ((_src_index != index_inner_archive_creator) && (index_inner_archive_creator >= 0)) {
		iret1 = argv_1395 (_cli_tab, _outer_type, _src_index, index_inner_archive_creator, _payload_type, _v_index_2_trigger_write, true);
		if (iret1 != argv_938) {
			nb_failed++;
			argv_1150 (argv_938, iret1, "argv_765::argv_723 - forward to argv_635");
		}
		argv_2743++;
	}
	if ((_src_index != index_inner_archive_extractor) && (index_inner_archive_extractor >= 0)) {
		iret2 = argv_1395 (_cli_tab, _outer_type, _src_index, index_inner_archive_extractor, _payload_type, _v_index_2_trigger_write, true);
		if (iret2 != argv_938) {
			nb_failed++;
			argv_1150 (argv_938, iret2, "argv_765::argv_723 - forward to argv_648");
		}
		argv_2743++;
	}
	if ((_src_index != index_inner_spyware_manager) && (index_inner_spyware_manager >= 0)) {
		iret3 = argv_1395 (_cli_tab, _outer_type, _src_index, index_inner_spyware_manager, _payload_type, _v_index_2_trigger_write, true);
		if (iret3 != argv_938) {
			nb_failed++;
			argv_1150 (argv_938, iret3, "argv_765::argv_723 - forward to argv_3417");
		}
		argv_2743++;
	}
	if ((_src_index != index_inner_scan_gateway) && (index_inner_scan_gateway >= 0)) {
		iret4 = argv_1395 (_cli_tab, _outer_type, _src_index, index_inner_scan_gateway, _payload_type, _v_index_2_trigger_write, true);
		if (iret4 != argv_938) {
			nb_failed++;
			argv_1150 (argv_938, iret4, "argv_765::argv_723 - forward to argv_3307");
		}
		argv_2743++;
	}
	if ((_src_index != index_inner_update) && (index_inner_update >= 0)) {
		iret5 = argv_1395 (_cli_tab, _outer_type, _src_index, index_inner_update, _payload_type, _v_index_2_trigger_write, true);
		if (iret5 != argv_938) {
			nb_failed++;
			argv_1150 (argv_938, argv_1892, "argv_765::argv_723 - forward to argv_3774");
		}
		argv_2743++;
	}

#if defined (__DEBUG_COM_MANAGER__)
	argv_3409 (argv_3681, MAX_PATH, "broadcasted the argv_2271 to %u inner entities (%u failed)", argv_2743, nb_failed);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	if ((iret1 != argv_938) || 
		(iret2 != argv_938) || 
		(iret3 != argv_938) || 
		(iret4 != argv_938) || 
		(iret5 != argv_938)) {
		argv_1892 = argv_925;	
	}	
	return (argv_1892);
}

argv_3379 argv_765::argv_3103 (argv_3715 _payload_type) {
	argv_3379 argv_1892 = argv_938;
	// argv_1292 the inner argv_3695 of the payload
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3681[MAX_PATH];
	string payload_type_str = argv_3795 (_payload_type);
	argv_3409 (argv_3681, MAX_PATH, "received a '%s' request from admin part", payload_type_str.c_str());
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	if (_payload_type == argv_2939) {
		argv_2135->argv_2142 (argv_620, "*** argv_765: << RECEIVED A STOP REQUEST (FINALIZE) FROM ADMIN PART >>");
		// we ask the event loop to argv_3463 so that we can return from the infinite loop
		argv_1892 = argv_1263; 
	}
	return (argv_1892);
}

// This function warns the concerned argv_710 by accessing specific argv_2785 functions
// (out of band chanel) because we can't rely on the argv_3410 chanel for the
// interrupts.
// this function permits to interrupt a given argv_710.
// Notice that the packet must be forwarded however so that the argv_710 can
// process this argv_2271 after being interrupted.
void argv_765::argv_3693 (argv_773 _from, argv_761 * _cli_tab, argv_3717 _src_index, argv_3715 _packet_type, argv_760 * _unit) {
#if defined (__DEBUG_COM_MANAGER__)
	char argv_3681[MAX_PATH];
	string pck_type_str = argv_3795 (_packet_type);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if ((_packet_type == argv_2907) || 
		(_packet_type == argv_2906)) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3409 (argv_3681, MAX_PATH, "triggering interrupt argv_3695 'argv_745' for unit '%s' (packet argv_3695 was %s)", _from, pck_type_str.c_str());	
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		_unit->argv_745 (_src_index, _cli_tab[_src_index].argv_1637);
	}
	else if (_packet_type == argv_2938) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3409 (argv_3681, MAX_PATH, "triggering interrupt argv_3695 'stop_service' for unit '%s' (packet argv_3695 was %s)", _from, pck_type_str.c_str());	
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		_unit->argv_3216 ();
	}
	else {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3409 (argv_3681, MAX_PATH, "no need to trigger interrupt (packet argv_3695 was %s)", pck_type_str.c_str());	
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	}
}

argv_3379 argv_765::argv_806 (argv_761 * _cli_tab, argv_3717 _src_index, argv_3717 _dest_index, argv_3715 _packet_type) {
	argv_3379 argv_1892 = argv_938;

#if defined (__DEBUG_COM_MANAGER__)
	char argv_3681[MAX_PATH];	
	string pck_type_str = argv_3795 (_packet_type);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	// only interruptible units are concerned about the interrupts
	if (_cli_tab[_dest_index].argv_849 == argv_854) {
		argv_3693 ("argv_648", _cli_tab, _src_index, _packet_type, argv_658);
	}
	else if (_cli_tab[_dest_index].argv_849 == argv_853) {
		argv_3693 ("argv_635", _cli_tab, _src_index, _packet_type, argv_643);
	}
	else if (_cli_tab[_dest_index].argv_849 == argv_856) {
		argv_3693 ("argv_3417", _cli_tab, _src_index, _packet_type, argv_3418);
	}
	else {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3409 (argv_3681, MAX_PATH, "argv_806 : packet_type=%s => no need to warn any interruptible unit [src_index=%u|dest_index=%u]", pck_type_str.c_str(), _src_index, _dest_index);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	}
	return (argv_1892);
}

// use the interrupt mechanism to warn the concerned inner source argv_710 
// that the destination was unreacheable.
argv_3379 argv_765::argv_3833 (argv_761 * _cli_tab, argv_3717 _src_index, argv_3717 _dest_index) {
	argv_3379 argv_1892 = argv_938;
	char argv_3681[MAX_PATH];

#if defined (__DEBUG_COM_MANAGER__)
	string dest_type_str = argv_850 (_cli_tab[_src_index].argv_849);
	argv_3409 (argv_3681, MAX_PATH, "warn inner argv_710 '%s' about unreacheable client at index=%u", dest_type_str.c_str(), _dest_index);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if (_cli_tab[_src_index].argv_849 == argv_854) {
		argv_658->argv_3364 (_dest_index);
	}
	else if (_cli_tab[_src_index].argv_849 == argv_853) {
		argv_643->argv_3364 (_dest_index);
	}
	else if (_cli_tab[_src_index].argv_849 == argv_856) {
		argv_3418->argv_3364 (_dest_index);
	}
	else {
		string dest_type_str = argv_850 (_cli_tab[_src_index].argv_849);
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: failed to warn inner argv_710 '%s' about unreacheable client at index=%u (not an interruptible unit)", dest_type_str.c_str(), _dest_index);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1242, argv_3681);
	}
	return (argv_1892);
}

// with a naked packet, we have to use the packet argv_3695 for routing
// but for rich packet, we don't need to use the packet argv_3695, instead
// we use the src/dest information, and the destination client's argv_3695
// to determine which shape to choose for the destination packet.
argv_3379 argv_765::argv_3144 (argv_761 * _cli_tab, argv_3717 _src_index, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892 = argv_938;
	argv_3717 source_index;
	argv_3717 source_generation;
	argv_3717 dest_index;
	argv_3717 dest_generation;
	argv_3715 outer_type;
	argv_3715 payload_type;

	// argv_1292 the source/dest and payload pointer from the received packet
	argv_1892 = argv_1297 (_cli_tab, _src_index, outer_type, source_index, source_generation, dest_index, dest_generation, payload_type);
	if (argv_1892 != argv_938) {
		string serror = argv_1240 (argv_1892);
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_3144 - argv_1297 failed ! - argv_1239 = ", serror.c_str());
	}
	else { // in case of ADMIN, or UPDATE, destination is irrelevant (broadcast)
		if (argv_1896 (_cli_tab, _src_index) == true) {
			// retrieve the payload argv_3695 (because some types are not broadcasted).
			if (payload_type != argv_2939) {
				argv_1892 = argv_723 (_cli_tab, _src_index, outer_type, payload_type, _v_index_2_trigger_write);
				if (argv_1892 != argv_938) {
					argv_1150 (argv_938, argv_1892, "argv_765::argv_3144 - argv_723");
				}
			}
			else {
				argv_1892 = argv_3103 (payload_type);
			}
		}
		else { // ensure that generations are coherent
			argv_1892 = argv_815 (_cli_tab, source_index, source_generation, dest_index, dest_generation);	
			if (argv_1892 != argv_938) {
				string serror = argv_1240 (argv_1892);
				argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_3144 - argv_815 failed ! - argv_1239 = ", serror.c_str());
				// destination is unreacheable
				argv_1892 = argv_3833 (_cli_tab, source_index, dest_index);
			}
			else if (argv_846 (_cli_tab, dest_index) == true) {
				argv_1892 = argv_1394 (_cli_tab, source_index, dest_index, payload_type, _v_index_2_trigger_write);
			}
			else { // destination is an internal client
				argv_1892 = argv_1395 (_cli_tab, outer_type, source_index, dest_index, payload_type, _v_index_2_trigger_write, false);
			}
		}
	}

	if (argv_1892 == argv_2901) { // remap error argv_877
		argv_1892 = argv_938; 
	}
	return (argv_1892);
}

// the received packet is either "naked" or "rich" :
// - if client is external, then the packet is naked
// - if client is internal, then the packet is rich
// a naked packet contains directly the payload.
// a rich packet contains the following things in it's argv_714 :
//   - source index
//   - source argv_1637
//   - dest index
//   - dest argv_1637
//   - argv_595 of the payload packet (4 argv_739 as argv_3717).
argv_3379 argv_765::argv_2886 (argv_761 * _cli_tab, argv_3717 _index, vector<argv_3717>& _v_index_2_trigger_write) {
	argv_3379 argv_1892 = argv_938;
	char argv_3681[MAX_PATH];

	if (argv_846 (_cli_tab, _index) == true) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_3409 (argv_3681, MAX_PATH, "argv_765::argv_2886 - received a packet from external client located at index %u", _index);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		
		argv_1892 = argv_3136 (_cli_tab, _index, _v_index_2_trigger_write);
		if (argv_1892 != argv_938) {
			argv_1150 (argv_938, argv_1892, "argv_765::argv_2886 - argv_3136");
		}
	}
	else {
#if defined (__DEBUG_COM_MANAGER__)
		string client_type_str = argv_850 (_cli_tab[_index].argv_849);
		argv_3409 (argv_3681, MAX_PATH, "received a packet from internal client located at index %u (argv_849=%s)", _index, client_type_str.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		argv_1892 = argv_3144 (_cli_tab, _index, _v_index_2_trigger_write);
		if (argv_1892 != argv_938) {
			argv_1150 (argv_938, argv_1892, "argv_765::argv_2886 - argv_3144");
		}
	}

	// reset the receive packet for this client so that it can be reused
	if (argv_1892 == argv_938) {
		argv_1892 = _cli_tab[_index].argv_2885.reset ();
	}

	if (argv_1892 == argv_2901) {
		argv_1892 = argv_1264; // remap error argv_877
	}
	return (argv_1892);
}

argv_3379 argv_765::argv_3278 (argv_865 * _log_ptr, argv_3717 _max_nb_client, vector<argv_864>& _v_listener, argv_760 * _archive_creator_ptr, argv_760 * _archive_extractor_ptr, argv_760 * _spyware_manager_ptr) {
	argv_3379 argv_1892 = argv_938;

	if ((_log_ptr == argv_2766) || (_max_nb_client == 0) || (_archive_creator_ptr==argv_2766) || (_archive_extractor_ptr==argv_2766) || (_spyware_manager_ptr==argv_2766)) {
		argv_1892 = argv_931;
	}
	else {
		argv_841			= _max_nb_client;
		argv_934			= this; // will permit C functions to call C++ argv_2785
		argv_2135					= _log_ptr;
		argv_643		= _archive_creator_ptr;		// necessary for operation cancel
		argv_658	= _archive_extractor_ptr;	// necessary for operation cancel
		argv_3418		= _spyware_manager_ptr;		// necessary for operation cancel
#if defined (__DEBUG_COM_MANAGER__)
		argv_2135->argv_2142 (argv_1086, "argv_924...[STARTING]");
#endif // #if defined (__DEBUG_COM_MANAGER__)
		// argv_3110 the client array
		argv_840 = new (std::nothrow) argv_761[_max_nb_client];
		if (argv_840 == argv_2766) {
			argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_924 : failed to allocate client argv_3590 !");
			argv_1892 = argv_932;
		}
		else { // memory allocation succeeded
#if defined (__DEBUG_COM_MANAGER__)
			argv_2135->argv_2142 (argv_2763, "argv_924 - launching event loop");
#endif // #if defined (__DEBUG_COM_MANAGER__)
			argv_1892 = argv_1268.argv_3278 (argv_2135, _v_listener, &argv_840[0], _max_nb_client, argv_1269);
			if (argv_1892 == argv_1264) {
				argv_1892 = argv_938; // remap error argv_877
			}
			else { // event loop returned.
				if (argv_1892 == argv_1263) {
					argv_2135->argv_2142 (argv_620, "*** WARNING : argv_765::argv_3278 - << RECEIVED ORDER TO STOP >>");
				}
				else { // real error occured
					string serror = argv_1240 (argv_1892);
					argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_765::argv_3278 - event loop argv_3278 failed ! - errno = ", serror.c_str());
				}
			}
		}
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

