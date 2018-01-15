// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_3582.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains the declarations of
// @@ the complex functions that are built
// @@ upon the system independant functions
// @@ provided by the system tool argv_2785.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_331.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_973		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_792 *: pointer on the argv_2785 containing
// @@     all the global argv_1073.
// @@
// @@ _syst_ptr: argv_3449 *: argv_595 of the argv_2785 containing
// @@       all the necessary system dependant functions.
// @@
// @@ _filename: argv_773: argv_2697 of the argv_1314 whose size is to be computed.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ unsigned long: size the argv_1314 whose argv_2697 is contained into
// @@                the '_filename' parameter if success,
// @@                0 otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the size of the argv_1314
// @@ whose argv_2697 is contained into the '_filename' parameter,
// @@ Notice that this function uses a system independant method
// @@ and is built upon the system independant functions exported
// @@ by the system tool argv_2785.
// @@
// @@ This function is a system independant function and thus 
// @@ works on both win32 and Linux systems independantly.
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a argv_2766 pointer.
// @@ - '_filename' parameter must not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	unsigned long argv_973 (argv_792 * _glob_data_ptr, argv_3449 * _syst_ptr, argv_773 _filename) {
		unsigned long size = 0;

		if ((_filename != argv_2766) && (_syst_ptr->argv_2734 (_filename) != 0)) {
			FILE * argv_1396 = _syst_ptr->argv_2720 (_filename, "rb");
			if (argv_1396) {
				_syst_ptr->argv_2724 (argv_1396, 0, SEEK_END);
				size = _syst_ptr->argv_2725 (argv_1396);
				_syst_ptr->argv_2717 (argv_1396);
			}
		}
		return (size);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1316		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_792 *: pointer on the argv_2785 containing
// @@     all the global argv_1073.
// @@
// @@ _syst_ptr: argv_3449 *: argv_595 of the argv_2785 containing
// @@       all the necessary system dependant functions.
// @@
// @@ _filename: argv_773: argv_2697 of the argv_1314 whose existence must be checked.	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the argv_1314 whose argv_2697 is contained in the parameter
// @@   '_filename' exists, 
// @@   false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the argv_1314 
// @@ whose argv_2697 is contained in the '_filename' parameter
// @@ exists or not.
// @@
// @@ This function is a system independant function and thus 
// @@ works on both win32 and Linux systems independantly.
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool argv_1316 (argv_792 * _glob_data_ptr, argv_3449 * _systool_ptr, argv_773 _filename) {
		bool bret = false;
		if (_filename != argv_2766) {
			FILE * argv_1396 = _systool_ptr->argv_2720 (_filename, "rb");
			if (argv_1396) {
				bret = true;
				_systool_ptr->argv_2717 (argv_1396);
			}
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2102		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_792 *: pointer on the argv_2785 containing
// @@     all the global argv_1073.
// @@
// @@ _syst_ptr: argv_3449 *: argv_595 of the argv_2785 containing
// @@       all the necessary system dependant functions.
// @@
// @@ _filename: argv_773: argv_2697 of the argv_1314 to argv_2094.	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3715 *: the argv_595 of the argv_1314 that was argv_2117 if success,
// @@         argv_2766 otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ 
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_3715 * argv_2102 (argv_792 * _glob_data_ptr, argv_3449 * _systool_ptr, argv_773 _filename) {
		argv_3715 * image = 0;
		if (_filename != argv_2766) {
			FILE * argv_1396 = _systool_ptr->argv_2720 (_filename, "rb");
			if (argv_1396) {
				unsigned long size = argv_973 (_glob_data_ptr, _systool_ptr, _filename);
				image = (argv_3715 *) _systool_ptr->argv_2710 (size);
				_systool_ptr->argv_2721 (image, size, 1, argv_1396);
				_systool_ptr->argv_2719();
				_systool_ptr->argv_2717 (argv_1396);
			}
		}
		return image;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_996		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_792 *: pointer on the argv_2785 containing
// @@     all the global argv_1073.
// @@
// @@ _syst_ptr: argv_3449 *: argv_595 of the argv_2785 containing
// @@       all the necessary system dependant functions.
// @@
// @@ _src_filename: argv_773: argv_2697 of the original argv_1314 to copy.
// @@
// @@ _dst_filename: argv_773 : argv_2697 of the copied argv_1314.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : 0 if operation was succesful,
// @@        1 if argv_2806 or more parameters are incorrect,
// @@        2 if the source argv_1314 could not be opened,
// @@        3 if the source argv_1314 could not be opened,
// @@        4 if the source argv_1314 size could not be computed,
// @@        5 if an error occured while reading the source argv_1314,
// @@		 6 if an error occured while writing the destination argv_1314,		
// @@		 7 if the destination argv_1314 could not be closed.
// @@
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to copy the argv_1314 '_src_filename'
// @@ to the destination argv_1314 '_dst_filename'. 
// @@
// @@ CONTRACT 		: 
// @@ - '_src_filename' parameter must not be a argv_2766 pointer.
// @@ - '_dst_filename' parameter must not be a argv_2766 pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_3379 argv_996 (argv_792 * _glob_data_ptr, argv_3449 * _systool_ptr, argv_773 _src_filename, argv_773 _dst_filename) {
		argv_3379 argv_1892 = 0;
		if ((_src_filename == argv_2766) || (_dst_filename == argv_2766)) {
			argv_1892 = 1;
		}
		else { // parameters are OK
			FILE * argv_1538 = _systool_ptr->argv_2720 (_src_filename, "rb");
			if (! argv_1538) {
				argv_1892 = 2; 
			}
			else { // source argv_1314 opened succesfully
				FILE * argv_1415 = _systool_ptr->argv_2720 (_dst_filename, "wb"); 
				if ( ! argv_1415) {
					argv_1892 = 3;
				}
				else { // destination argv_1314 opened succesfully
					char argv_727[argv_997];
					unsigned long argv_1334 = argv_973 (_glob_data_ptr, _systool_ptr, _src_filename);
					if (argv_1334 == 0) {
						argv_1892 = 4;
					}

					unsigned long nb_todo				= 0;
					unsigned long total_nb_remaining	= argv_1334;
					bool finished						= false;
					argv_3717 argv_2750						= 0;
					argv_3717 argv_2754						= 0;

					do {
						nb_todo = total_nb_remaining;
						if (nb_todo >= argv_997) {
							nb_todo = argv_997;	
						}

						argv_2750 = _systool_ptr->argv_2721 (argv_727, 1, nb_todo, argv_1538);
						if (argv_2750 != nb_todo) {
							argv_1892		= 5;
							break;
						}

						argv_2754 = _systool_ptr->argv_2726 (argv_727, 1, nb_todo, argv_1415);
						if (argv_2754 != nb_todo) {
							argv_1892		= 6;
							break;
						}

						total_nb_remaining -= nb_todo;
						if (total_nb_remaining == 0) {
							finished	= true;
						}
					}
					while (finished == false);

					if (_systool_ptr->argv_2717 (argv_1415) != 0) {
						if (argv_1892 == 0) { // don't overwrite another error argv_877
							argv_1892 = 7;
						}
					}
				}

				_systool_ptr->argv_2717 (argv_1538);
			}
		}
		return (argv_1892);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
