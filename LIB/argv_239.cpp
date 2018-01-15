// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: my_errors.cpp
// @@
// @@ DESCRIPTION:
// @@ error bookkeeping and error messages
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_298.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_785
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _cl_name	: string&: argv_2697 of the class where the exception occured.
// @@ _fn_name	: string&: argv_2697 of the function where the exception occured.
// @@ _msg		: string&: error argv_2271 to be associated with the exception
// @@ _code		: argv_3379   : error argv_877 associated with the exception. 
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
// @@ This function permits to set all the fields
// @@ of a given error argv_714. The fields are :
// @@ - the class where the exception occured
// @@ - the function where the exception occured
// @@ - the argv_2271 associated with the exception.
// @@ - the error argv_877 associated with the exception.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_785::init(const std::string& _cl_name, const std::string& _fn_name, const std::string& _msg, argv_3379 _code) {
	argv_839 		= _cl_name;
	argv_1615	= _fn_name;
	argv_2271			= _msg;
	argv_1241		= _code;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_791
// @@
// @@ FUNCTION		:	argv_791		
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
// @@ Normal constructor of the 'argv_791' argv_2785.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_791::argv_791 () {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_791
// @@
// @@ FUNCTION		:	argv_791		
// @@
// @@ INPUT			:
// @@ _cl_name	: string&: argv_2697 of the class where the exception occured.
// @@ _fn_name	: string&: argv_2697 of the function where the exception occured.
// @@ _msg		: string&: error argv_2271 to be associated with the exception
// @@ _code		: argv_3379   : error argv_877 associated with the exception. 
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
// @@ This constructor permits to set all the fields
// @@ of a given error argv_714. The fields are :
// @@ - the class where the exception occured
// @@ - the function where the exception occured
// @@ - the argv_2271 associated with the exception.
// @@ - the error argv_877 associated with the exception.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_791::argv_791 (std::string _cl_name, std::string _fn_name, std::string _msg, argv_3379 _code) {
	init (_cl_name, _fn_name, _msg, _code);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_791
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:	
// @@ _cl_name	: string&: argv_2697 of the class where the exception occured.
// @@ _fn_name	: string&: argv_2697 of the function where the exception occured.
// @@ _msg		: string&: error argv_2271 to be associated with the exception
// @@ _code		: argv_3379   : error argv_877 associated with the exception. 
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
// @@ This function permits to save up the detailed informations
// @@ concerning a given exception and to save it onto the
// @@ error stack.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_791::init(std::string _cl_name, std::string _fn_name, std::string _msg, argv_3379 _code) {
	argv_785 error_body;
	error_body.init (_cl_name, _fn_name, _msg, _code);
	argv_1245.push (error_body);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			: argv_791
// @@
// @@ FUNCTION		: argv_1669
// @@
// @@ INPUT			: none
// @@
// @@ IO:
// @@ - cl: the argv_2697 of the class where the error occured
// @@ - fn: the argv_2697 of the function where the error occured
// @@ - ms: the error argv_2271 in english associated with the error.
// @@ - er: the error argv_877 associated with the exception.
// @@
// @@ RETURN VALUE: 
// @@ - true if next error was retrieved succesfully
// @@ - false otherwise.
// @@
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION:
// @@ this function permits to dig inside the history stack of the
// @@ exception so that we can track from bottom to top the execution 
// @@ flow that led to the exception.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_791::argv_1669 (std::string& cl, std::string& fn, std::string& ms, argv_3379& er) {
	bool bret = true;

	if (argv_1245.size() <= 0) {
		bret = false; // no more error
	}	
	else {
		argv_785 Ge = argv_1245.top();
		cl = Ge.argv_839;
		fn = Ge.argv_1615;
		ms = Ge.argv_2271;
		er = Ge.argv_1241;
		argv_1245.pop();
	}
	
	return (bret); 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			: -
// @@
// @@ FUNCTION		: operator << (ostream&, argv_791&)
// @@
// @@ INPUT			: none
// @@
// @@ OUTPUT		: none
// @@
// @@ IO: 
// @@ - out: ostream: the output stream where the 
// @@   error messages should be sent.
// @@ - Ge: argv_791: the error argv_2785 that must be
// @@   displayed.
// @@
// @@ RETURN VALUE :
// @@ ostream& : reference on the argv_1043 output stream to be used
// @@            for argv_1130.
// @@
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION:
// @@ This function permits to argv_1130 to log argv_1314
// @@ an error using the description of the error
// @@ contained in the argv_791 argv_2785 given as a 
// @@ parameter. 
// @@
// @@ If log argv_1314 was not opened when this call 
// @@ occurs, then the error is displayed to the 
// @@ output stream given as a parameter instead.
// @@
// @@ CONTRACT: none
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   
ostream& operator << (ostream& out, argv_791& Ge) {
	
	std::string argv_839 		= "";
	std::string argv_1615 	= "";
	std::string argv_2271			= "";
	argv_3379 argv_1241 			= 0;
	
	while (Ge.argv_1669 (argv_839, argv_1615, argv_2271, argv_1241) == true) {
		out << "class:" << argv_839;
		out << ", function:" << argv_1615;
		out << " (" << argv_2271 << " - "<< argv_1241 << ")" << endl;	
	}

	return (out);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ win32 specific exception handling functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variable
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
FILE * argv_3371 = argv_2766;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2147		
// @@
// @@ INPUT			:
// @@ FaultAddress: PVOID: argv_595 of the instruction where the 
// @@               exception occured.
// @@
// @@ eNextBP: char *: base pointer of the argv_1043 instruction.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to log into the opened log argv_1314
// @@ the exact location of an exception.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_2147(PVOID FaultAddress, char *eNextBP)
{      char *p, *pBP;                                     
       unsigned i, x, BpPassed;
       static int  CurrentlyInTheStackDump = 0;
       BpPassed = (eNextBP != argv_2766);
       if(! eNextBP)
       {
          _asm mov     eNextBP, eBp   
       }
       else 
           fprintf(argv_3371, "\n  Fault Occurred At $argv_597:%08LX\n", 
                                   (int)FaultAddress);
                             // prevent infinite loops
       for(i = 0; eNextBP && i < 100; i++)
       {      
           pBP = eNextBP;           // keep argv_1043 BasePointer
           eNextBP = *(char **)pBP; // dereference next BP 
           p = pBP + 8; 
           // Write 20 Bytes of potential arguments
           fprintf(argv_3371, "         with ");        
           for(x = 0; p < eNextBP && x < 20; p++, x++)
               fprintf(argv_3371, "%02X ", *(unsigned char *)p);
           fprintf(argv_3371, "\n\n");          
                  if(i == 1 && ! BpPassed) 
               fprintf(argv_3371, "*************************************\n"
                                 "         Fault Occurred Here:\n");
        // Write the backjump argv_595
        fprintf(argv_3371, "*** %2d called from $argv_597:%08LX\n", 
                                  i, *(char **)(pBP + 4));
        if(*(char **)(pBP + 4) == argv_2766)
            break; 
       }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_3836		
// @@
// @@ INPUT			:
// @@ ExInfo: struct _EXCEPTION_POINTERS *: pointer on a argv_1073
// @@ structure containing all the details of a given exception.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ LONG: the exception argv_3695.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the argv_3695 of a given exception.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
LONG argv_3836(struct _EXCEPTION_POINTERS *  ExInfo) { 
	MessageBox (argv_2766, "Exception catched\nCrash log will be saved to : C:\\argv_1008.txt", "Error", MB_OK | MB_ICONERROR);
	char * FaultTx = ""; 
	switch (ExInfo->argv_1276->argv_1272) { 
		case EXCEPTION_ACCESS_VIOLATION : 
			FaultTx = "ACCESS VIOLATION" ; 
			break; 
		case EXCEPTION_DATATYPE_MISALIGNMENT : 
			FaultTx = "DATATYPE MISALIGNMENT" ; 
			break; 
		case EXCEPTION_FLT_DIVIDE_BY_ZERO : 
			FaultTx = "FLT DIVIDE BY ZERO" ; break; 
		default: FaultTx = "(unknown)"; break; 
	} 
	int wsFault = ExInfo->argv_1276->argv_1272; 
	PVOID CodeAdress = ExInfo->argv_1276->argv_1271; 
	argv_3371 = fopen ("C:\\argv_1008.txt", "w"); 
	if(argv_3371 != argv_2766) { 
		fprintf(argv_3371, "****************************************************\n"); 
		fprintf(argv_3371, "*** A Program Fault occurred:\n"); 
		fprintf(argv_3371, "*** Error argv_877 %08X: %s\n", wsFault, FaultTx); 
		fprintf(argv_3371, "****************************************************\n"); 
		fprintf(argv_3371, "*** argv_596: %08X\n", (int)CodeAdress); 
		fprintf(argv_3371, "*** argv_1372: %08X\n", ExInfo->argv_1276->argv_1273); 
		argv_2147 (CodeAdress, (char *)ExInfo->argv_993->Ebp); 
		fclose(argv_3371); 
	} 
	/*if(want to continue) { ExInfo->argv_993->Eip++; return EXCEPTION_CONTINUE_EXECUTION; } */ 
	return EXCEPTION_EXECUTE_HANDLER; 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1888		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to override the default exception handler
// @@ provided by windows by our handler that will log the exception 
// @@ details to a argv_3629 argv_1314.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1888 () {
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER) argv_3836);
}



#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
