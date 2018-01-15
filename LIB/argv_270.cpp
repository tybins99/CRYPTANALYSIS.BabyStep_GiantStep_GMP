// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_328.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the functions,
// @@ argv_1073 structures and constants that are 
// @@ necessary to implement the avx scanning
// @@ and admmin protocol.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_328.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3795		
// @@
// @@ INPUT			:	
// @@ _type: argv_3717 : packet argv_3695 whose corresponding human readable 
// @@   argv_2697 is to be generated.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string : the human readable packet argv_3695 associated with the 
// @@ '_type' argv_3807.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate the human-readable argv_3695
// @@ associated with the argv_3695 contained into the '_type' 
// @@ parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
	argv_2914,
*/
string argv_3795 (argv_3715 _type) {
	string type_str = "";
	switch (_type) {
		case argv_2940:						type_str = "argv_2940";						break;
		case argv_2928:						type_str = "argv_2928";						break;
		case argv_2924:			type_str = "argv_2924";			break;
		case argv_2930:						type_str = "argv_2930";						break;
		case argv_2926:		type_str = "argv_2926";		break;
		case argv_2929:				type_str = "argv_2929";				break;
		case argv_2925:	type_str = "argv_2925";	break;
		case argv_2931:				type_str = "argv_2931";				break;
		case argv_2927:	type_str = "argv_2927";	break;
		case argv_2938:						type_str = "argv_2938";						break;
		case argv_2939:			type_str = "argv_2939";			break;
		case argv_2941:					type_str = "argv_2941";					break;
		case argv_2942:					type_str = "argv_2942";					break;
		case argv_2935:				type_str = "argv_2935";				break;
		case argv_2937:				type_str = "argv_2937";				break;
		case argv_2911:			type_str = "argv_2911";			break;
		case argv_2907:	type_str = "argv_2907";	break;
		case argv_2910:		type_str = "argv_2910";		break;
		case argv_2912:			type_str = "argv_2912";			break;
		case argv_2908:			type_str = "argv_2908";			break;
		case argv_2909:			type_str = "argv_2909";			break;
		case argv_2906:	type_str = "argv_2906";	break;
		case argv_2920:		type_str = "argv_2920";		break;
		case argv_2916:		type_str = "argv_2916";		break;
		case argv_2915:		type_str = "argv_2915";		break;
		case argv_2919:			type_str = "argv_2919";			break;
		case argv_2913:					type_str = "argv_2913";					break;
		case argv_2921:				type_str = "argv_2921";				break;
		case argv_2917:			type_str = "argv_2917";			break;
		case argv_2918:			type_str = "argv_2918";			break;
		case argv_2922:				type_str = "argv_2922";				break;
		case argv_2923:				type_str = "argv_2923";				break;
		case argv_2914:		type_str = "argv_2914";		break;

		default :
			{
				char argv_3681[MAX_PATH];
				argv_3409 (argv_3681, MAX_PATH, "<unknown packet argv_3695: %d>", _type);
				argv_3681[MAX_PATH - 1] = '\0';
				type_str = argv_3681;
			}
	}
	return (type_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
