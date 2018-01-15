#include "../LIB/argv_310.hpp"

void argv_1020::set (argv_3717 _type, argv_3717 _target, argv_773 _symbol_name, argv_2157 _symbol_addr) {
	argv_3695			= _type;
	argv_3592		= _target;
	argv_3488		= _symbol_name;
	argv_3479	= _symbol_addr;
}

// --------------------------------
argv_1019::argv_1019 () {
	reset ();
}

void argv_1019::reset () {
	argv_2180			= 0;	
	argv_2162		= false;
	argv_2184.clear ();
	argv_2160			= argv_2184.begin ();
}

void argv_1019::init (argv_3717 _plugin_type, bool _duplicate_allowed) {
	argv_2180			= _plugin_type;
	argv_2162		= _duplicate_allowed;
}

bool argv_1019::argv_591 (argv_773 _symbol) {
	bool bret = true;
	map<string, bool>::iterator argv_1918;
	argv_1918 = argv_2184.find (_symbol);
	if (argv_1918 != argv_2184.end()) {
		bret = false;
	}
	else {
		argv_2184[_symbol] = true;	
	}
	return (bret);
}	

void argv_1019::argv_1681 (argv_3717& _plugin_type, bool& _duplicate_allowed) {
	_plugin_type			= argv_2180;
	_duplicate_allowed		= argv_2162;
}	

bool argv_1019::argv_1655 (string& _symbol) {
	bool bret = true;
	argv_2160 = argv_2184.begin ();
	if (argv_2160 == argv_2184.end()) {
		bret = false;
	}
	else {
		_symbol = argv_2160->first;
	}
	return (bret);
}

bool argv_1019::argv_1673 (string& _symbol) {
	bool bret = true;
	++argv_2160;
	if (argv_2160 == argv_2184.end()) {
		bret = false;
	}
	else {
		_symbol = argv_2160->first;
	}
	return (bret);
}
//-------------------------------------
argv_1021::argv_1021 () {
	reset ();
}

void argv_1021::reset () {
	argv_2175.clear ();
	argv_2174.clear ();
	argv_2167			= argv_2174.end ();
}

// in this case, the target argv_3695 is not relevant, and we only use the argv_3695
// to differenciate.
argv_3379 argv_1021::argv_588 (argv_792 * _glob_data_ptr, argv_3717 _type, argv_3717 _target, argv_773 _symbol_name, argv_2157 _symbol_addr) {
	argv_3379 argv_1892 = argv_3264;
	// create a new entry
	argv_1020 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	map<argv_3717, map<string, argv_1020> >::iterator iter_local_out;
	iter_local_out = argv_2175.find (_type); // indexed by argv_3695
	if (iter_local_out == argv_2175.end()) { // this plugin argv_3695 has no symbol yet
		map<string, argv_1020> local_map;
		local_map[_symbol_name] = entry;
		argv_2175[_type] = local_map;
	}
	else { // this plugin argv_3695 has already some symbols defined
		map<string, argv_1020>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in != iter_local_out->second.end()) { // duplicate found
			argv_1892 = argv_3258;
		}
		else { // ok to argv_576 this symbol for this argv_3695
			iter_local_out->second[_symbol_name] = entry;
		}
	}
	return (argv_1892);
}

argv_3379 argv_1021::argv_587 (argv_792 * _glob_data_ptr, argv_3717 _type, argv_3717 _target, argv_773 _symbol_name, argv_2157 _symbol_addr) {
	argv_3379 argv_1892 = argv_3264;
#if defined (DEBUG_KERNEL)
	char argv_3681[MAX_PATH];
#endif // #if defined (DEBUG_KERNEL)
	// create a new entry
	argv_1020 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	map<argv_3717, map<string, argv_1020> >::iterator iter_local_out;
	iter_local_out = argv_2174.find (_target); // indexed by target
	if (iter_local_out == argv_2174.end()) { // this target argv_3695 has no symbol yet
#if defined (DEBUG_KERNEL)
		argv_3409 (argv_3681, MAX_PATH, "[new_target] argv_587: argv_3488:%s, argv_3695:%d, argv_3592:%d, argv_3479=0x%X", _symbol_name, _type, _target, _symbol_addr);
		argv_3681[MAX_PATH - 1] = '\0';
		_glob_data_ptr->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_KERNEL)

		map<string, argv_1020> local_map;
		local_map[_symbol_name] = entry;
		argv_2174[_target] = local_map;
	}
	else { // this target argv_3695 has already some symbols defined
		map<string, argv_1020>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in != iter_local_out->second.end()) { // duplicate found
			argv_1892 = argv_3258;
		}
		else { // ok to argv_576 this symbol for this target argv_3695
			iter_local_out->second[_symbol_name] = entry;
#if defined (DEBUG_KERNEL)
			argv_3409 (argv_3681, MAX_PATH, "[existing target] argv_587: argv_3488:%s, argv_3695:%d, argv_3592:%d, argv_3479=0x%X", _symbol_name, _type, _target, _symbol_addr);
			argv_3681[MAX_PATH - 1] = '\0';
			_glob_data_ptr->argv_2146.argv_2142 (argv_1086, argv_3681);
#endif // #if defined (DEBUG_KERNEL)
		}
	}
	return (argv_1892);
}

// - single symbols are indexed by argv_3695
// - multiple symbols are indexed by target
argv_3379 argv_1021::argv_586 (argv_792 * _glob_data_ptr, argv_3717 _type, argv_3717 _target, argv_773 _symbol_name, argv_2157 _symbol_addr, bool _duplicate_allowed) {
	argv_3379 argv_1892 = argv_3264;
	if ((_symbol_name == argv_2766) || (_symbol_addr == argv_2766) || (strlen(_symbol_name) == 0)) {
		argv_1892 = argv_3261;
	}
	else { // parameters are correct
		
		if (_duplicate_allowed == false) {
			argv_1892 = argv_588 (_glob_data_ptr, _type, _target, _symbol_name, _symbol_addr);
		}
		else {
			argv_1892 = argv_587 (_glob_data_ptr, _type, _target, _symbol_name, _symbol_addr);
		}
	}
	return (argv_1892);	
}

// the internal iterator is changed, thus we don't need any parameter
argv_3379 argv_1021::argv_2372 () {
	argv_3379 argv_1892	= argv_3264;
	argv_2167	= argv_2174.begin ();
	if (argv_2167 == argv_2174.end()) {
		argv_1892 = argv_3259;	
	}
	return (argv_1892);
}

// the internal iterator is changed, thus we don't need any parameter
argv_3379 argv_1021::argv_2373 () {
	argv_3379 argv_1892 = argv_3264;
	++argv_2167;
	if (argv_2167 == argv_2174.end()) {
		argv_1892 = argv_3259;	
	}
	return (argv_1892);
}

// we just ask for the next resolved symbol of the argv_1043 group until exhaustion
// of the argv_1043 group, then we ask for the 
argv_3379 argv_1021::argv_1653 (argv_1020& _entry) {
	argv_3379 argv_1892 = argv_3264;
	argv_2166 = argv_2167->second.begin ();
	if (argv_2166 == argv_2167->second.end()) {
		argv_1892 = argv_3259;	
	}
	else {
		_entry.argv_3479	= argv_2166->second.argv_3479;
		_entry.argv_3488		= argv_2166->second.argv_3488;
		_entry.argv_3695				= argv_2166->second.argv_3695;
		_entry.argv_3592		= argv_2166->second.argv_3592;
	}
	return (argv_1892);
}

argv_3379 argv_1021::argv_1671 (argv_1020& _entry) {
	argv_3379 argv_1892 = argv_3264;
	++argv_2166;
	if (argv_2166 == argv_2167->second.end()) {
		argv_1892 = argv_3259;	
	}
	else {
		_entry.argv_3479	= argv_2166->second.argv_3479;
		_entry.argv_3488		= argv_2166->second.argv_3488;
		_entry.argv_3695				= argv_2166->second.argv_3695;
		_entry.argv_3592		= argv_2166->second.argv_3592;
	}
	return (argv_1892);
}

argv_3379 argv_1021::argv_2151 (argv_3717 _type, argv_773 _symbol_name, argv_2157& _symbol_addr) {
	argv_3379 argv_1892 = argv_3264;
	map<argv_3717, map<string, argv_1020> >::iterator iter_local_out;
	iter_local_out = argv_2175.find (_type);
	if (iter_local_out == argv_2175.end()) {
		argv_1892 = argv_3263;
	}
	else { // symbol argv_3695 exists
		map<string, argv_1020>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in == iter_local_out->second.end()) {
			argv_1892 = argv_3262;
		}
		else { // found the argv_595 of the symbol
			_symbol_addr = iter_local_in->second.argv_3479;
		}
	}
	return (argv_1892);
}

//-------------------------------------
/*
argv_1021::argv_1021 () {
	reset ();
}

void argv_1021::reset () {
	m_v_resolved_entry.clear ();
	m_v_by_type.clear ();
	m_v_by_target.clear ();
	argv_2175.clear ();

	m_iter_by_type		= m_v_by_type.begin ();
	m_iter_by_target	= m_v_by_target.begin ();
}

argv_3379 argv_1021::get_first_group_by_type (vector<argv_3717>& _v_result) {
	argv_3379 argv_1892 = argv_3264;
	_v_result.clear ();
	m_iter_by_type = m_v_by_type.begin();
	if (m_iter_by_type == m_v_by_type.end()) {
		argv_1892 = argv_3259;
	}
	else {
		_v_result = m_iter_by_type->second;		
	}
	return (argv_1892);
}

argv_3379 argv_1021::get_next_group_by_type (vector<argv_3717>& _v_result) {
	argv_3379 argv_1892 = argv_3264;
	_v_result.clear ();
	++m_iter_by_type;
	if (m_iter_by_type == m_v_by_type.end()) {
		argv_1892 = argv_3259;
	}
	else {
		_v_result = m_iter_by_type->second;		
	}
	return (argv_1892);
}

argv_3379 argv_1021::get_first_group_by_target (vector<argv_3717>& _v_result) {
	argv_3379 argv_1892 = argv_3264;
	_v_result.clear ();
	m_iter_by_target = m_v_by_target.begin();
	if (m_iter_by_target == m_v_by_target.end()) {
		argv_1892 = argv_3259;
	}
	else {
		_v_result = m_iter_by_target->second;		
	}
	return (argv_1892);
}

argv_3379 argv_1021::get_next_group_by_target (vector<argv_3717>& _v_result) {
	argv_3379 argv_1892 = argv_3264;
	_v_result.clear ();
	++m_iter_by_target;
	if (m_iter_by_target == m_v_by_target.end()) {
		argv_1892 = argv_3259;
	}
	else {
		_v_result = m_iter_by_target->second;		
	}
	return (argv_1892);
}

argv_3379 argv_1021::lookup_one_grouped_symbol (argv_3717 _index, argv_3717& _type, argv_3717& _target, string& _symbol_name, argv_2157& _symbol_addr) {
	argv_3379 argv_1892 = argv_3264;
	argv_3717 argv_2744 = m_v_resolved_entry.size ();
	if (_index >= argv_2744) {
		argv_1892 = argv_3260;
	}
	else { // index parameter is correct
		_type			= m_v_resolved_entry[_index].argv_3695;
		_target			= m_v_resolved_entry[_index].argv_3592;
		_symbol_name	= m_v_resolved_entry[_index].argv_3488;
		_symbol_addr	= m_v_resolved_entry[_index].argv_3479;
	}
	return (argv_1892);
}

argv_3379 argv_1021::argv_2151 (argv_3717 _type, argv_773 _symbol_name, argv_2157& _symbol_addr) {
	argv_3379 argv_1892 = argv_3264;
	map<argv_3717, map<string, argv_1020> >::iterator iter_local_out;
	iter_local_out = argv_2175.find (_type);
	if (iter_local_out == argv_2175.end()) {
		argv_1892 = argv_3263;
	}
	else { // symbol argv_3695 exists
		map<string, argv_1020>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in == iter_local_out->second.end()) {
			argv_1892 = argv_3262;
		}
		else { // found the argv_595 of the symbol
			_symbol_addr = iter_local_in->second.argv_3479;
		}
	}
	return (argv_1892);
}

// - single symbols are indexed by argv_3695
// - multiple symbols are indexed by target
argv_3379 argv_1021::argv_586 (argv_3717 _type, argv_3717 _target, argv_773 _symbol_name, argv_2157 _symbol_addr, bool _duplicate_allowed) {
	argv_3379 argv_1892 = argv_3264;
	if ((_symbol_name == argv_2766) || (_symbol_addr == argv_2766) || (strlen(_symbol_name) == 0)) {
		argv_1892 = argv_3261;
	}
	else { // parameters are correct
		
		if (_duplicate_allowed == false) {
			argv_1892 = argv_588 (_type, _target, _symbol_name, _symbol_addr);
		}
		else {
			argv_1892 = argv_587 (_type, _target, _symbol_name, _symbol_addr);
		}
	}
	return (argv_1892);	
}

// in this case, the target argv_3695 is not relevant, and we only use the argv_3695
// to differenciate.
argv_3379 argv_1021::argv_588 (argv_3717 _type, argv_3717 _target, argv_773 _symbol_name, argv_2157 _symbol_addr) {
	argv_3379 argv_1892 = argv_3264;
	// create a new entry
	argv_1020 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	map<argv_3717, map<string, argv_1020> >::iterator iter_local_out;
	iter_local_out = argv_2175.find (_type);
	if (iter_local_out == argv_2175.end()) { // this plugin argv_3695 has no symbol yet
		map<string, argv_1020> local_map;
		local_map[_symbol_name] = entry;
		argv_2175[_type] = local_map;
	}
	else { // this plugin argv_3695 has already some symbols defined
		map<string, argv_1020>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in != iter_local_out->second.end()) { // duplicate found
			argv_1892 = argv_3258;
		}
		else { // ok to argv_576 this symbol for this argv_3695
			iter_local_out->second[_symbol_name] = entry;
		}
	}
	return (argv_1892);
}

argv_3379 argv_1021::argv_587 (argv_3717 _type, argv_3717 _target, argv_773 _symbol_name, argv_2157 _symbol_addr) {
	argv_3379 argv_1892 = argv_3264;
	// create a new entry
	argv_1020 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	// argv_576 this new entry to the vector that contains ALL MULTIPLE resolved symbols
	m_v_resolved_entry.push_back (entry);
	argv_3717 new_index = m_v_resolved_entry.size () - 1;

	// argv_576 this entry to the groups by argv_3695
	map<argv_3717, vector<argv_3717> >::iterator iter_local_type;
	iter_local_type = m_v_by_type.find (_type); 
	if (iter_local_type == m_v_by_type.end()) {
		vector<argv_3717> v_tmp;
		v_tmp.push_back (new_index);
		m_v_by_type[_type] = v_tmp;
	}
	else { // this argv_3695's set already exists => just argv_576 to it
		iter_local_type->second.push_back (new_index);	
	}

	// argv_576 this entry to the groups by target
	map<argv_3717, vector<argv_3717> >::iterator iter_local_target;
	iter_local_target = m_v_by_target.find (_target);
	if (iter_local_target == m_v_by_target.end()) {
		vector<argv_3717> v_tmp;
		v_tmp.push_back (new_index);
		m_v_by_target[_target] = v_tmp;
	}
	else { // this target's set already exists => just argv_576 to it
		iter_local_target->second.push_back (new_index);
	}
	return (argv_1892);
}
*/