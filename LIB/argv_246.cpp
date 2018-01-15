// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_246.cpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_305.hpp"

argv_760::argv_760 () {
	reset ();
}

void argv_760::reset () {
	argv_3248 ();
}

argv_760::~argv_760 () {
	;
}

// when a destination client is unreacheable, we notify the unit
// by adding the client's index to a vector.
void argv_760::argv_3364 (argv_3717 _index) {
	argv_699.argv_2125 ();
		if (argv_3771 == false) {
			argv_3772				= _index;
			argv_3771	= true;
		}
	argv_699.argv_3770 ();
}

void argv_760::argv_3216 () {
	argv_699.argv_2125 ();
		argv_3466	= true;
		interrupt_flag		= true;
	argv_699.argv_3770 ();
}

void argv_760::argv_745 (argv_3717 _src_index, argv_3717 _src_generation) {
	argv_699.argv_2125 ();
		if (argv_744 == false) {
			if ((_src_index == argv_1054) && (_src_generation == argv_1053)) {
				argv_744		= true;	
				interrupt_flag	= true;
			}
		}
	argv_699.argv_3770 ();
}

// argv_1371 are reseted by this function (if it was set of course)
void argv_760::argv_1656 (bool& _cancel_flag, bool& _stop_service_flag, bool& _dest_unreach_flag, argv_3717& _unreach_index) {
	argv_699.argv_2125 ();
		if (argv_744 == true) { 
			_cancel_flag		= true;
			argv_744			= false; // reset the flag
		}

		if (argv_3466 == true) { 
			_stop_service_flag	= true;
			argv_3466	= false; // reset the flag
		}

		if (argv_3771 == true) { // reset the flag
			_dest_unreach_flag				= true;
			_unreach_index					= argv_3772;
			argv_3771	= false;
		}
		interrupt_flag = false;
	argv_699.argv_3770 ();
}

void argv_760::argv_3248 () {
	argv_699.argv_2125 ();
		argv_744						= false;
		argv_3466				= false;
		interrupt_flag					= false;
		argv_3771	= false;
		argv_3772				= 0;
	argv_699.argv_3770 ();
}

//-----------------------------------
argv_831::argv_831 () {
	reset ();
}

argv_831::~argv_831 () {
}

void argv_831::reset () {
	argv_2135						= argv_2766;
	argv_1054			= 0;
	argv_1053		= 0;
	argv_1046			= 0;
	argv_1045		= 0;
	argv_3124					= false;
	inner_port.reset ();
	argv_760::reset ();
}


void argv_831::argv_1150 (argv_3379 _success_result, argv_3379 _result, argv_773 _opa) {
	char argv_3681[MAX_PATH];
	if (_result == _success_result) {
#if defined (__DEBUG_INNER_CLIENT__)
		argv_3409 (argv_3681, MAX_PATH, "%s...[SUCCESS]", _opa);
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_INNER_CLIENT__)
	}
	else {
		string serror = argv_1240 (_result);
		argv_3409 (argv_3681, MAX_PATH, "+++ ERROR: %s...[FAILED] - argv_1239=%s", _opa, serror.c_str());
		argv_3681[MAX_PATH - 1] = '\0';
		argv_2135->argv_2142 (argv_1086, argv_3681);
	}
}

argv_3379 argv_831::argv_3142 (argv_3715 _user_type) {
	// should never be called (base class function is meaningless)
	argv_3379 argv_1892 = argv_1875;
	return (argv_1892);	
}

argv_3379 argv_831::argv_1176 () {
	// should never be called (base class function is meaningless)
	argv_3379 argv_1892 = argv_1875;
	return (argv_1892);
}

argv_3379 argv_831::argv_3341 () {
	argv_3379 argv_1892 = argv_1880;
	argv_1892 = inner_port.argv_3341 ();

	if (argv_1892 == argv_1887) { // remap error argv_877
		argv_1892 = argv_1880;
	}
	return (argv_1892);
}

// when an operation is cancelled, the argv_1043 client must be sent a specific 
// argv_2271.
argv_3379 argv_831::argv_3132 (bool _cancel_flag, bool _stop_service_flag, argv_3715 _outer_type, argv_773 _from) {
	argv_3379 argv_1892 = argv_1880;
	vector<argv_772> v_atom;
	argv_3717 unused_UI32 = 0;

	// argv_576 a unused argv_3807 to the packet (empty packets are illegal).
	argv_577 (unused_UI32, v_atom);
	argv_3715 inner_type;
	if (_cancel_flag == true) {
#if defined (__DEBUG_INNER_CLIENT__)
		argv_2135->argv_2142 (argv_1086, "*** <interrupt> received an order to CANCEL argv_1043 operation");	
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		inner_type = argv_2922;	
	}
	else if (_stop_service_flag == true) {
#if defined (__DEBUG_INNER_CLIENT__)
		argv_2135->argv_2142 (argv_1086, "*** <interrupt> received an order to STOP service");	
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		inner_type = argv_2923;
	}

#if defined (__DEBUG_INNER_CLIENT__)
	char argv_3681[MAX_PATH];
	string inner_type_str = argv_3795 (inner_type);
	string outer_type_str = argv_3795 (_outer_type);
	argv_3409 (argv_3681, MAX_PATH, "processing cancellation from '%s' [argv_744=%u|argv_3466=%u|inner_type=%s|outer_type=%s]", _from, _cancel_flag, _stop_service_flag, inner_type_str.c_str(), outer_type_str.c_str());
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
	argv_2135->argv_2142 (argv_1086, "sending a cancellation argv_2271 to argv_1043 client");
#endif // #if defined (__DEBUG_INNER_CLIENT__)

	argv_1892 = argv_1382 (inner_type, v_atom, _from, _outer_type);
	if (argv_1892 != argv_1880) { // remap error argv_877
		argv_1150 (argv_1880, argv_1892, "argv_831::argv_3132 - argv_1382");
	}
	return (argv_1892);
}


argv_3379 argv_831::insert_atom_vector (vector<argv_772>& _v_atom) {
	argv_3379 argv_1892 = argv_1880;
	argv_3717 nb_atom = _v_atom.size ();
	if (nb_atom == 0) {
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_831::insert_atom_vector - atom vector is empty !");
		argv_1892 = argv_1874;
	}
	else {
		for (argv_3717 i=0 ; i<nb_atom ; i++) {
			switch (_v_atom[i].argv_3695) {
				case argv_990:
					argv_1892 = argv_3342.insert (_v_atom[i].argv_3810);
					if (argv_1892 != argv_2901) {
						argv_1150 (argv_2901, argv_1892, "argv_831::insert_atom_vector - insert argv_3715");
					}
					break;

				case argv_991:
					argv_1892 = argv_3342.insert (_v_atom[i].argv_3811);
					if (argv_1892 != argv_2901) {
						argv_1150 (argv_2901, argv_1892, "argv_831::insert_atom_vector - insert argv_3717");
					}
					break;

				case argv_989:
					argv_1892 = argv_3342.insert (_v_atom[i].argv_3809);
					if (argv_1892 != argv_2901) {
						argv_1150 (argv_2901, argv_1892, "argv_831::insert_atom_vector - insert string");
					}
					break;

				default:
					argv_1892 = argv_1881;
					argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_831::insert_atom_vector - unknown atom argv_3695 : ", (argv_3717) _v_atom[i].argv_3695);
			}
		}
	}

	if (argv_1892 == argv_2901) {
		argv_1892 = argv_1880;
	}
	return (argv_1892);
}

// the rich packet is composed of 
// - src, src_generation
// - dest, dest_generation
// then a fake packet as a payload is present :
// - payload's argv_3695
// - payload's content
argv_3379 argv_831::argv_1382 (argv_3715 _payload_type, vector<argv_772>& _v_atom, argv_773 _source_name, argv_3715 _outer_pck_type) {
	argv_3379 argv_1892 = argv_1880;
	argv_3342.reset ();
	argv_1892 = argv_3342.argv_3363 (_outer_pck_type);
	if (argv_1892 != argv_2901) {
		argv_1150 (argv_2901, argv_1892, "argv_1382 - forge_payload");
		argv_2135->argv_2142 (argv_1242, "+++ ERROR: argv_831::argv_1382 - argv_3363 failed !");
	}
	else { 
		argv_1892 = argv_3342.insert (argv_1046);
		if (argv_1892 != argv_2901) { // <revert> and insert source argv_1637
			argv_1150 (argv_2901, argv_1892, "format_and_send_result: insert #1");
		}
		else {
			argv_1892 = argv_3342.insert (argv_1045);	
			if (argv_1892 != argv_2901) { 
				argv_1150 (argv_2901, argv_1892, "format_and_send_result: insert #2");	
			}
			else {
				argv_1892 = argv_3342.insert (argv_1054);
				if (argv_1892 != argv_2901) { // <revert> and insert destination argv_1637
					argv_1150 (argv_2901, argv_1892, "format_and_send_result: insert #3");
				}
				else {
					argv_1892 = argv_3342.insert (argv_1053);
					if (argv_1892 != argv_2901) { 
						argv_1150 (argv_2901, argv_1892, "format_and_send_result: insert #4");
					}
					else {
						argv_1892 = argv_3342.insert (_payload_type);
						if (argv_1892 != argv_2901) { 
							argv_1150 (argv_2901, argv_1892, "format_and_send_result: insert #5");
						}
						else { // beware: here the source and dest are inverted on purpose !
#if defined (__DEBUG_INNER_CLIENT__)
							char argv_3681[MAX_PATH];
							string payload_type_str = argv_3795 (_payload_type);
							argv_3409 (argv_3681, MAX_PATH, "forging payload : [src_index=%u|src_gen=%u|dest_index=%u|dest_gen=%u|payload_type=%s]", argv_1046, argv_1045, argv_1054, argv_1053, payload_type_str.c_str());
							argv_3681[MAX_PATH - 1] = '\0';
							argv_2135->argv_2142 (argv_1086, argv_3681);
#endif // #if defined (__DEBUG_INNER_CLIENT__)
							argv_1892 = insert_atom_vector (_v_atom);
							if (argv_1892 != argv_1880) {
								argv_1150 (argv_1880, argv_1892, "format_and_send_result: insert_atom_vector");
							}
							else {
								argv_1892 = argv_3342.argv_2830 ();
								if (argv_1892 !=  argv_2901) {
									argv_1150 (argv_2901, argv_1892, "format_and_send_result: argv_2830");
								}
								else { // argv_3335 the packet to the COM manager
									argv_1892 = argv_3341 ();
									if (argv_1892 != argv_1880) {
										char argv_3681[MAX_PATH];
										argv_3409 (argv_3681, MAX_PATH, "from:%s (argv_3335)", _source_name);
										argv_3681[MAX_PATH - 1] = '\0';
										argv_1150 (argv_1880, argv_1892, argv_3681);	
									}
									else {
#if defined (__DEBUG_INNER_CLIENT__)
										argv_2135->argv_2142 (argv_1086, "packet succesfully sent to the COM manager");
#endif // #if defined (__DEBUG_INNER_CLIENT__)
									}
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

void argv_831::argv_1152 () {
	char argv_3681[MAX_PATH];
	string inner_type_str = argv_3795 (inner_type);
	string outer_type_str = argv_3795 (outer_type);
	argv_3409 (argv_3681, MAX_PATH, "received a rich packet (argv_2824:%s) [inner_type=%s|outer_type=%s|src_index=%d|src_gen=%u|dest_index=%u|dest_gen=%d]", argv_2824.c_str(), inner_type_str.c_str(), outer_type_str.c_str(), argv_1054, argv_1053, argv_1046, argv_1045);
	argv_3681[MAX_PATH - 1] = '\0';
	argv_2135->argv_2142 (argv_1086, argv_3681);
}

argv_3379 argv_831::argv_1298 () {
	argv_3379 argv_1892 = argv_1880;

	// argv_1292 the packet argv_3695
	argv_3204.argv_1685 (outer_type); 

	// argv_1292 the source index
	argv_1892 = argv_3204.argv_1292 (argv_1054);
	if (argv_1892 != argv_2901) {
		argv_1150 (argv_2901, argv_1892, "argv_1298: argv_1292 #1");	
	}
	else { // argv_1292 the source argv_1637
		argv_1892 = argv_3204.argv_1292 (argv_1053);
		if (argv_1892 != argv_2901) {
			argv_1150 (argv_2901, argv_1892, "argv_1298: argv_1292 #2");	
		}
		else { // argv_1292 the destination index
			argv_1892 = argv_3204.argv_1292 (argv_1046);
			if (argv_1892 != argv_2901) {
				argv_1150 (argv_2901, argv_1892, "argv_1298: argv_1292 #3");	
			}
			else { // argv_1292 the destination argv_1637
				argv_1892 = argv_3204.argv_1292 (argv_1045);
				if (argv_1892 != argv_2901) {
					argv_1150 (argv_2901, argv_1892, "argv_1298: argv_1292 #4");
				}
				else { // argv_1292 the payload's argv_3695
					argv_1892 = argv_3204.argv_1292 (inner_type);
					if (argv_1892 != argv_2901) {
						argv_1150 (argv_2901, argv_1892, "argv_1298: argv_1292 #5");
					}
				}
			}
		}
	}

	if (argv_1892 == argv_2901) { // remap error argv_877
#if defined (__DEBUG_INNER_CLIENT__)
		argv_1152 ();
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		argv_1892 = argv_1880;
	}
	return (argv_1892);
}

argv_3379 argv_831::argv_3194 () {
	argv_3379 argv_1892 = argv_1880;
	// read a packet
	argv_1892 = inner_port.argv_3196 ();	
	if (argv_1892 != argv_1887) {
		argv_1150 (argv_1887, argv_1892, "argv_3196");
	}
	else { 
		// all inner packets are supposed to be "rich" => argv_1292 src/dest + payload argv_595	
		argv_1892 = argv_1298 ();
		if (argv_1892 != argv_1880) {
			string serror = argv_1240 (argv_1892);
			argv_2135->argv_2142 (argv_3834, "*** WARNING: argv_831::argv_3194 - argv_1298 failed ! - argv_1239 = ", serror.c_str());
		}
	}
	return (argv_1892);
}

argv_3379 argv_831::argv_3198 () {
	argv_3379	argv_1892 = argv_1880;
	char	argv_3681[MAX_PATH];

	for ( ; ; ) {
		argv_1892 = argv_3194 ();
		if (argv_1892 != argv_1880) {
			argv_1150 (argv_1880, argv_1892, "argv_3194");
		}

		if (inner_type == argv_2938) { 
			argv_3409 (argv_3681, MAX_PATH, "<<< RECEIVED ORDER TO STOP (from inner_client owned by %s) >>>", argv_2824.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_3834, argv_3681);
			argv_1892 = argv_1879;
			break;
		}
		else if (inner_type == argv_2941) {
			argv_3409 (argv_3681, MAX_PATH, "*** received order to update (from inner_client owned by %s)", argv_2824.c_str());
			argv_3681[MAX_PATH - 1] = '\0';
			argv_2135->argv_2142 (argv_620, argv_3681);

			argv_1892 = argv_1176 ();
			if (argv_1892 != argv_1880) {
				argv_1150 (argv_1880, argv_1892, "argv_1176");
			}
		}
		else { // child class dependant packet => leave it to the child
			argv_1892 = argv_3142 (inner_type);
			if (argv_1892 != argv_1880) {
				argv_1150 (argv_1880, argv_1892, "argv_3142");
			}
		}
	}
	return (argv_1892);
}

argv_3379 argv_831::argv_3110 (argv_773 _owner, argv_3717 _port, argv_865 * _log_ptr) {
	argv_3379 argv_1892 = argv_1880;
	if (_log_ptr == argv_2766) {
		argv_1892 = argv_1877;
	}
	else if (argv_3124 == true) {
		argv_1892 = argv_1876;
	}
	else {
		argv_2824	= _owner;
		argv_2135	= _log_ptr;
#if defined (__DEBUG_INNER_CLIENT__)
		argv_2135->argv_2142 (argv_1086, "preparing inner client for argv_2824 : ", argv_2824.c_str());
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		argv_1892 = inner_port.argv_3110 (_owner, _port, _log_ptr, &argv_3204, &argv_3342);
	}
	if (argv_1892 == argv_1887) { // remap error argv_877
		argv_3124 = true;
		argv_1892 = argv_1880;
	}
	return (argv_1892);
}

argv_3379 argv_831::argv_3278 (argv_773 _owner, argv_3717 _port, argv_865 * _log_ptr) {
	argv_3379 argv_1892 = argv_1880;
	argv_1892 = argv_3110 (_owner, _port, _log_ptr);
	if (argv_1892 == argv_1880) {
		argv_1892 = argv_3198 ();
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
