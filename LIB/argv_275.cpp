// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_332.hpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_328.hpp"
#include "../LIB/argv_332.hpp"



argv_1041::argv_1041 () {
	argv_1278 = "__201274__tar"; 
}

string argv_1041::argv_1647 () {
	return (argv_1278);
}


argv_3379 argv_1041::argv_629 (argv_3717& _type) {
	argv_3379 argv_1892	= argv_3702;
	_type		= argv_1358;

	if ((argv_2158[0] == 0x42) && (argv_2158[1] == 0x4D)) {
		_type = argv_1341;
	}
	else if ((argv_2158[0] == 0xFF) && (argv_2158[1] == 0xD8) && (argv_2158[2] == 0xFF) && (argv_2158[3]==0xE0)){
		_type = argv_1346;
	}
	else if((argv_2158[0]==0x49) && (argv_2158[1]==0x44) && (argv_2158[2]==0x33) && (argv_2158[3]==0x03)) {
		_type = argv_1348;
	}
	else if ((argv_2158[0]==0x30) && (argv_2158[1]==0x26) && (argv_2158[2]==0xB2) && (argv_2158[3]==0x75)) {
		_type = argv_1338;
	}
	else if ((argv_2158[0]==0x30) && (argv_2158[1]==0x26) && (argv_2158[2]==0xB2) && (argv_2158[3]==0x75)) {
		_type = argv_1360;
	}
	else if((argv_2158[0]== 0xEF) && (argv_2158[1]==0xBB) && (argv_2158[2]==0xBF)) {
		_type = argv_1356;
	}
	else if ((argv_2158[0]==0xFF) && (argv_2158[1] == 0xFE)) {
		_type = argv_1354;
	}
	else if ((argv_2158[0]==0xFE) && (argv_2158[1] == 0xFF)) {
		_type = argv_1355;
	}
	else if ((argv_2158[0]==0x4D) && (argv_2158[1]==0x5A)) {
		_type = argv_1343;
	}
	else if((argv_2158[0]==0x50) && (argv_2158[1]==0x4B) && (argv_2158[2]==0x03) && (argv_2158[3]==0x04)) {
		_type = argv_1361;
	}
	else if((argv_2158[0]==0x1F) && (argv_2158[1]==0x8B) && (argv_2158[2]==0x08)) {
		_type = argv_1345;
	}
	else if ((argv_2158[0]==0x47) && (argv_2158[1]==0x49) && (argv_2158[2]==0x46)) {
		_type = argv_1344;
	}
	else if((argv_2158[0]==0x52) && (argv_2158[1]==0x49) && (argv_2158[2]==0x46) && (argv_2158[3]==0x46)) {
		_type = argv_1339;
	}
	return (argv_1892);
}

void argv_1041::argv_811 (FILE * _fp, argv_3717& _type) {
	if (fseek (_fp, 257, SEEK_SET) == 0) {
		argv_3717 size = 6;
		char argv_727[MAX_PATH];
		char pattern[] = "ustar";
		int argv_2750 = fread (argv_727, 1, size, _fp);
		if (argv_2750 == size) {
			if (memcmp (argv_727, pattern, size) == 0) {
				_type = argv_1351;
			}
		}
	}
}

// __201274__tar (used by thumbnail)
void argv_1041::argv_812 (FILE * _fp, argv_3717& _type) {
	if (fseek (_fp, 257, SEEK_SET) == 0) {
		argv_3717 size = argv_1278.size();
		char argv_727[MAX_PATH];
		int argv_2750 = fread (argv_727, 1, size, _fp);
		if (argv_2750 == size) {
			if (memcmp (argv_727, argv_1278.c_str(), size) == 0) {
				_type = argv_1351;
			}
		}
	}
}

// a format is exotic when we can't determine it's argv_3695 by only looking
// at the first magic argv_739
void argv_1041::argv_803 (FILE * _fp, argv_3717& _type) {
	argv_3379 argv_1892	= argv_3702;
	argv_811 (_fp, _type);
	if (_type == argv_1358) {
		argv_812 (_fp, _type); // used in thumbnails
	}
}

argv_3379 argv_1041::argv_628 (argv_773 _filename, argv_3717& _type) {
	argv_3379 argv_1892	= argv_3702;
	_type		= argv_1358;

	if ((_filename == argv_2766) || (strlen(_filename) == 0)) {
		argv_1892 = argv_3701;
	}
	else {
		FILE * argv_1396 = fopen (_filename, "rb");
		
		if (! argv_1396) {
			argv_1892 = argv_3698;
		}
		else {
			int argv_2750 = fread (argv_2158, 1, argv_3697, argv_1396);

			if (argv_2750 < argv_3697) {
				if ( feof(argv_1396)) {
					argv_1892 = argv_3699;
				}
				else if(ferror(argv_1396) ) {
					_type = argv_3700;
				}
			}
			else { // argv_1073 succesfully read from argv_1314
				argv_1892 = argv_629 (_type);
				if (_type == argv_1358) {
					argv_803 (argv_1396, _type);
				}
			}
			fclose (argv_1396);		
		}
	}
	return (argv_1892);
}


argv_3379 argv_1041::argv_1895 (argv_773 _filename, bool& _archive_flag, argv_3717& _file_type) {
	argv_3379 argv_1892		= argv_3702;
	_archive_flag	= false;

	argv_1892 = argv_628 (_filename, _file_type);
	if (argv_1892 == argv_3702) {
		if (
			(_file_type==argv_1361) || 
			(_file_type==argv_1351) || 
			(_file_type==argv_1345)) {
			_archive_flag = true;
		}	
	}
	return (argv_1892);
}


argv_3379 argv_1041::argv_1897 (argv_773 _filename, bool& _result_flag, argv_3717& _file_type) {
	argv_3379 argv_1892		= argv_3702;
	_result_flag	= false;

	argv_1892 = argv_628 (_filename, _file_type);
	if (argv_1892 == argv_3702) {
		if (_file_type==argv_1361) {
			_result_flag = true;
		}	
	}
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
