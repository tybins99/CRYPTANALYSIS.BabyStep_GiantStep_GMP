// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_244.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the constants
// @@ and functions, argv_1073 structures that are
// @@ common to each possible test.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_303.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global argv_2785 that contains all test related global variables
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_793  argv_1691;


argv_793::argv_793 () {
	argv_2135					= argv_2766;
	argv_680					= argv_2766;
	argv_679					= 0;
	argv_1893	= argv_3627;
	argv_1894	= argv_3627;
	argv_2743					= 0;
	argv_706				= 0;
}


argv_1038::argv_1038 () {
	argv_2132	= "";
	argv_3348		= "";
	argv_3349		= 0;	
	argv_1602	= argv_2766;
	argv_1892			= argv_3627;
	argv_2136		= argv_2766;
}

argv_1038::~argv_1038 () {
	argv_2146.argv_872 (); // ok if it fails
}

argv_1037::argv_1037 () {
	reset ();
}

void argv_1037::reset () {
	argv_2164.clear ();
}

void argv_2141 (FILE * _fp, argv_773 _msg, bool _echo_on, bool _add_eol) {
	fprintf (_fp, "%s", _msg);
	if (_add_eol == true) {
		fprintf (_fp, "\r\n");
	}
	fflush (_fp);
	if (_echo_on == true) {
		cerr << _msg;
		if (_add_eol == true) {
			cerr << endl;
		}
	}
}

void argv_2140 (FILE * _fp, argv_3379 _iret, argv_3717 _errno, bool _echo_on, bool _add_eol) {
	string serror = argv_1240 (_iret);
	fprintf (_fp, "+++ ERROR: error argv_877 = %s (errno=%u)", serror.c_str(), _errno);
	if (_add_eol == true) {
		fprintf (_fp, "\r\n");
	}
	fflush (_fp);
	if (_echo_on == true) {
		cerr << "+++ ERROR: error argv_877 = " << serror << " (errno=" << _errno << ")";
		if (_add_eol == true) {
			cerr << endl;
		}
	}
}

void argv_2137 (FILE * _fp, argv_3379 _iret, argv_773 _msg, bool _add_eol) {
	string serror = argv_1240 (_iret);
	fprintf (_fp, "%s - argv_1239=%s", _msg, serror.c_str());
	if (_add_eol == true) {
		fprintf (_fp, "\r\n");
	}
	fflush (_fp);
}

argv_3379 argv_1037::argv_592 (argv_3717 _test_id, argv_1532 _fptr_one_test) {
	argv_3379 argv_1892 = argv_3616;
	argv_1918 = argv_2164.find (_test_id);
	if (argv_1918 != argv_2164.end()) {
		argv_1892 = argv_3615;
	}
	else { // this test ID was not added yet
		argv_2164[_test_id] = _fptr_one_test;	 
	}
	return (argv_1892);
}


// param 0 : argv_2697 of the EXE
// param 1 : argv_2697 of the log argv_1314 to open for the test
// param 2 : test argv_1814
argv_3379 argv_1037::argv_3278 (int _argc, char ** _argv) {
	argv_3379 argv_1892 = argv_3627;
	cerr << "nb param = " << _argc << endl;
	if (_argc < 3) {
		cerr << "Usage : ./a.out <argv_2132> <test_id> {test specific parameters}" << endl;
		argv_1892 = argv_3606;
	}
	else { // number of parameters is OK
		// argv_3110 the log argv_1364
		char argv_1364[MAX_PATH];
		argv_3409 (argv_1364, MAX_PATH, "%s", _argv[1]);
		argv_1364[MAX_PATH - 1] = '\0';

		// open the log argv_1364
		argv_865 argv_2146;
		bool bret = argv_2146.argv_2814 (argv_1364, argv_2766, "");
		if (bret == false) {
			argv_1892 = argv_3609;
		}
		else { // log argv_1314 opened succesfully
			argv_3717 test_id = atoi (_argv[2]);
			argv_3717 nb_test = argv_2164.size ();
			map<argv_3717, argv_1532>::iterator argv_1918;

			argv_1918 = argv_2164.find (test_id);
			if (argv_1918 == argv_2164.end()) { // test ID is out of range
				argv_1892 = argv_3613;
			}
			else { // ok, the ID of the test is in range => let's launch it
				argv_1532 argv_1602 = argv_1918->second;
				argv_1892 = argv_1602 (&argv_2146, _argc, _argv);
			}

			argv_2146.argv_872 ();
		}
	}
	return (argv_1892);
}

DWORD WINAPI argv_2044 (argv_2157 lParam) {
	argv_3379 argv_1892 = argv_3627;
	argv_1038 * param_ptr = (argv_1038 *) lParam;
	param_ptr->argv_1892 = param_ptr->argv_1602 (&param_ptr->argv_2146, param_ptr->argv_679, param_ptr->argv_680);
	/*
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "argv_2044 : return argv_3807 = %u", param_ptr->argv_1892);
	argv_3681[MAX_PATH - 1] = '\0';
	MessageBox (argv_2766, argv_3681, "", MB_OK);*/
	return (param_ptr->argv_1892);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1315		
// @@
// @@ INPUT			:
// @@ _filename_1: argv_773 : argv_2697 of the argv_1314 whose existence is to
// @@   be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	
// @@ _result: bool&: true if the content of both argv_1314 are identical,
// @@       false otherwise.
// @@	
// @@ RETURN VALUE	:
// @@ argv_3379 : 0 if function succeeded.
// @@        1 if the first argv_1314 can't be opened.
// @@        2 if the second argv_1314 can't be opened.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compare the content of 2 files
// @@ to determine if they are equal or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_1315 (argv_865 * _log_ptr, argv_773 _filename_1, argv_773 _filename_2, bool& _result) {
	argv_3379 argv_1892		= 0;
	_result			= false;

	_log_ptr->argv_2142 (argv_2763, "computing md5sum for argv_1314 : ", _filename_1);
	string hash_1 = argv_975 (_filename_1);
	_log_ptr->argv_2142 (argv_2763, "md5sum for argv_1314 1 = ", hash_1.c_str());

	_log_ptr->argv_2142 (argv_2763, "computing md5sum for argv_1314 : ", _filename_2);
	string hash_2 = argv_975 (_filename_2);
	_log_ptr->argv_2142 (argv_2763, "md5sum for argv_1314 2 = ", hash_2.c_str());

	if (hash_1 == hash_2) {
		_result = true;	
	}
	/*
	argv_789 map_1;
	argv_789 map_2;
	argv_3715 *	buf_1	= argv_2766;
	argv_3715 *	buf_2	= argv_2766;
	argv_3717	size_1	= 0;
	argv_3717	size_2	= 0;

	if (map_1.argv_2346 (_filename_1, argv_2348, buf_1, size_1) == true) {
		if (map_2.argv_2346 (_filename_2, argv_2348, buf_2, size_2) == true) {
			if (size_1 == size_2) {
				bool different = false;
				for (argv_3717 i=0 ; i<size_1 ; i++) {
					if (buf_1[i] != buf_2[i]) {
						different = true;
						break;
					}
				}

				if (different == false) {
					_result = true;
				}
			}
			map_2.argv_873 ();	
		}
		else {
			argv_1892 = 2;
		}
		map_1.argv_873 ();
	}
	else {
		argv_1892 = 1;
		argv_3717 argv_1239, argv_1247;
		map_1.argv_1659 (argv_1239, argv_1247);
		char argv_3681[MAX_PATH];
		argv_3409 (argv_3681, MAX_PATH, "argv_1239=%d, argv_1247=%d", argv_1239, argv_1247);
		argv_3681[MAX_PATH - 1] = '\0';
		MessageBox (argv_2766, argv_3681, "", MB_OK);
	}*/
	return (argv_1892);
}

void argv_1133 (argv_773 _msg, argv_3717 _amount) {
	char argv_3681[MAX_PATH];
	argv_3409 (argv_3681, MAX_PATH, "%s : %u", _msg, _amount);
	argv_3681[MAX_PATH - 1] = '\0';
	MessageBox (argv_2766, argv_3681, "", MB_OK);
}


void argv_1157 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 0 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
}

void argv_1158 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 1 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
}

void argv_1161 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 2 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
	_log_ptr->argv_2142 (argv_2763, "- param 5 : number of packets to be echoed.");
}

void argv_1162 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 3 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
}

void argv_1163 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 4 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
	_log_ptr->argv_2142 (argv_2763, "- param 5 : original argv_1364");
}

void argv_1164 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 5 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
	_log_ptr->argv_2142 (argv_2763, "- param 5 : number of packets to be echoed.");
}

void argv_1165 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 6 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
	_log_ptr->argv_2142 (argv_2763, "- param 5 : original argv_1364");
}

void argv_1166 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 7 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
	_log_ptr->argv_2142 (argv_2763, "- param 5 : number of packets to be echoed.");
	_log_ptr->argv_2142 (argv_2763, "- param 6 : number of loop laps.");
}

void argv_1167 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 8 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
}

void argv_1168 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 9 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
	_log_ptr->argv_2142 (argv_2763, "- param 5 : number of packets to be echoed.");
	_log_ptr->argv_2142 (argv_2763, "- param 6 : number of clients to create.");
}

void argv_1159 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 9 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
	_log_ptr->argv_2142 (argv_2763, "- param 5 : number of packets to be echoed.");
	_log_ptr->argv_2142 (argv_2763, "- param 6 : number of clients to create.");
	_log_ptr->argv_2142 (argv_2763, "- param 7 : size of the duplication beam.");
}

void argv_1160 (argv_865 * _log_ptr) {
	_log_ptr->argv_2142 (argv_2763, " ");
	_log_ptr->argv_2142 (argv_2763, "Test 11 : Usage : ");	
	_log_ptr->argv_2142 (argv_2763, "- param 0 : argv_2697 of the EXE");
	_log_ptr->argv_2142 (argv_2763, "- param 1 : argv_2697 of the log argv_1314 to open for the test");
	_log_ptr->argv_2142 (argv_2763, "- param 2 : test argv_1814");
	_log_ptr->argv_2142 (argv_2763, "- param 3 : server's IP argv_595");
	_log_ptr->argv_2142 (argv_2763, "- param 4 : server's argv_3095");
	_log_ptr->argv_2142 (argv_2763, "- param 5 : original argv_1364");
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

