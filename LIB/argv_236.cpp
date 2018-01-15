// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_236.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the functions and argv_1073
// @@ structures necessary for a given daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_295.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variables
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern argv_773		argv_3354;
argv_865  *				argv_3353	= argv_2766;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_776
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
// @@ This function permits to set up the argv_3460 of the
// @@ argv_776 argv_2785 to it's initial argv_3460.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_776::reset () {
	argv_3347				= "/";
	argv_3355			= false;
#if defined (__WIN32_OS__)
	argv_2131			= "C:";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	argv_2131			= ".";
#endif // #if defined (__LINUX_OS__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_776
// @@
// @@ FUNCTION		:	argv_776			
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
// @@ Normal constructor of the argv_776 argv_2785.
// @@ it permits to set up the argv_3460 of the
// @@ argv_776 argv_2785 to it's initial argv_3460.
// @@ It also argv_3110 the network for first use (win32 only)
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_776::argv_776 () {
#if defined (__WIN32_OS__)
	argv_3121 ();
#endif // #if defined (__WIN32_OS__)
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_776
// @@
// @@ FUNCTION		:	~argv_776			
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
// @@ destructor of the argv_776 argv_2785.
// @@ it permits to set up the argv_3460 of the
// @@ argv_776 argv_2785 to it's initial argv_3460.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_776::~argv_776 () {
#if defined (__WIN32_OS__)
	argv_3594 ();
#endif // #if defined (__WIN32_OS__)
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_776
// @@
// @@ FUNCTION		:	argv_1017			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3303 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create the thread that will do
// @@ the actual task that is application dependant.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_776::argv_1017 () {
	argv_3379 argv_1892 = argv_3293;
	argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_776::argv_1017 - illegal call of the base class function !");
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_776
// @@
// @@ FUNCTION		:	argv_3792			
// @@
// @@ INPUT			:	
// @@ dwCurrentState : DWORD : the argv_1043 status of the service.
// @@
// @@ dwWin32ExitCode: DWORD : Specifies an Win32 error argv_877 that 
// @@     the service uses to report an error that occurs when it is 
// @@     starting or stopping.
// @@
// @@ dwServiceSpecificExitCode: DWORD :  Specifies a service specific 
// @@     error argv_877 that the service returns when an error occurs while 
// @@     the service is starting or stopping.
// @@
// @@ dwCheckPoint : DWORD : Specifies a argv_3807 that the service increments 
// @@     periodically to report its progress during a lengthy argv_3457, 
// @@     argv_3463, pause, or continue operation.
// @@
// @@ dwWaitHint: DWORD : Specifies an estimate of the amount of argv_3678, 
// @@     in milliseconds, that the service expects a pending argv_3457, argv_3463, 
// @@     pause, or continue operation.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3303 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to update the status of the service
// @@ so that depending on the steps performed, the user can see
// @@ what the argv_1043 status of the service is.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
	argv_3379 argv_776::argv_3792 (DWORD dwCurrentState, DWORD dwWin32ExitCode,
						 DWORD dwServiceSpecificExitCode, DWORD dwCheckPoint,
						 DWORD dwWaitHint) {
		
		argv_3379 argv_1892 = argv_3303;

		argv_2764.dwServiceType=SERVICE_WIN32_OWN_PROCESS;
		argv_2764.dwCurrentState=dwCurrentState;
		
		if(dwCurrentState==SERVICE_START_PENDING) {
			argv_2764.dwControlsAccepted=0;
		}
		else {
			argv_2764.dwControlsAccepted = SERVICE_ACCEPT_STOP			
				|SERVICE_ACCEPT_SHUTDOWN;
		}

		if(dwServiceSpecificExitCode==0) {
			argv_2764.dwWin32ExitCode=dwWin32ExitCode;
		}
		else {
			argv_2764.dwWin32ExitCode=ERROR_SERVICE_SPECIFIC_ERROR;
		}
		argv_2764.dwServiceSpecificExitCode=dwServiceSpecificExitCode;
		argv_2764.dwCheckPoint=dwCheckPoint;
		argv_2764.dwWaitHint=dwWaitHint;

		if (! SetServiceStatus (argv_2765,&argv_2764)) {
			argv_2146.argv_2142 (argv_1242, "+++ ERROR: SetServiceStatus failed !");
			argv_2017 ();
			argv_1892 = argv_3302;
		}
		return (argv_1892);
	}
#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_776
// @@
// @@ FUNCTION		:	argv_2017			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3303 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3463 the service after this 
// @@ service was started.
// @@
// @@ CONTRACT 		:	
// @@ - the service must have been started prior to this call. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_776::argv_2017 () {
	argv_3379 argv_1892 = argv_3303;
	argv_699.argv_2125 ();
		if (argv_3355 == false) {
			argv_1892 = argv_3295;
		}
		else { // service is running => ok to argv_3463 it
#if defined (__WIN32_OS__)
			argv_3379 argv_1892 = argv_3792 (SERVICE_STOP_PENDING, NO_ERROR, 0, 0, 0);
			if (argv_1892 != argv_3303) {
				argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_776::argv_2017 failed ! - argv_3792 failed !");
				argv_1892 = argv_3297;
			}
			else {
				argv_2146.argv_2142 (argv_2763, "argv_776::argv_2017 - status set to SERVICE_STOP_PENDING");
			}

			argv_2146.argv_2142 (argv_2763, "asking the worker thread to die : calling 'argv_2018'");
			argv_2018 ();	
			argv_2146.argv_2142 (argv_2763, "worker threads succesfully terminated");

			argv_3355 = false;
			SetEvent (argv_2019);
			argv_1892 = argv_3792 (SERVICE_STOPPED, NO_ERROR, 0, 0, 0);
			if (argv_1892 != argv_3303) {
				argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_2017 failed !");
				argv_1892 = argv_3297;
			}
			else {
				argv_2146.argv_2142 (argv_2763, "argv_2017...[OK]");
			}
			reset ();
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
			argv_2146.argv_2142 (argv_2763, "argv_776::argv_2017 - asking the worker thread to die : calling 'argv_2018'");
			argv_2018 ();	
			argv_3355 = false;
			argv_2146.argv_2142 (argv_2763, "argv_2017...[OK]");
			reset ();
#endif // #if defined (__LINUX_OS__)
		}
	argv_699.argv_3770 ();
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_776
// @@
// @@ FUNCTION		:	argv_2018			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3303 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function should never be called.
// @@ The user must argv_1119 the 'argv_776' argv_2785
// @@ and override this function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_776::argv_2018 () {
	// illegal to call the base class function
	argv_3379 argv_1892 = argv_3294;
	return (argv_1892);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_776
// @@
// @@ FUNCTION		:	argv_3278			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_3379 : argv_3303 if success,
// @@        another argv_3807 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_3278 the service and performs the
// @@ following steps :
// @@ - retrieve the log argv_1314's path.
// @@ - open the service's log argv_1314.
// @@ - register the function that will argv_1789 the service control
// @@   requests.
// @@ - update the service's status at each step.
// @@ - create the worker thread that will perform the actual
// @@   application dependant processing.
// @@ - wait for the worker thread to finish.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_3379 argv_776::argv_3278 () {
	argv_3379 argv_1892 = argv_3303;

	// open the log argv_1314 (using the registry to get the path)
	string argv_2132 = argv_2131 + argv_3347 + "log_av_service_status.txt"; 
	argv_2146.argv_2814 (argv_2132.c_str(), argv_2766, "");
	cerr << "opened log :" << argv_2132 << endl;
	argv_3353 = &argv_2146; // for the functions that can not be member functions

	argv_2146.argv_2142 (argv_2763, "Starting daemon service");
	
	argv_2765 = RegisterServiceCtrlHandler (argv_3354,
								(LPHANDLER_FUNCTION) argv_3351);

	if (! argv_2765) {
		argv_1892 = argv_3300;
		argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_3278: RegisterServiceCtrlHandler failed !");
	}
	else { // RegisterServiceCtrlHandler succeeded
		argv_2146.argv_2142 (argv_2763, "RegisterServiceCtrlHandler...[OK]");
		argv_1892 = argv_3792 (SERVICE_START_PENDING, NO_ERROR, 0, 1, 3000);
		if (argv_1892 != argv_3303) { // status update failed
			argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_3278: argv_3792 failed (SERVICE_START_PENDING) @1 !");
		}
		else {  // status updated succesfully
			argv_2146.argv_2142 (argv_2763, "argv_3792 to SERVICE_START_PENDING mark 1...[OK]");
			argv_2019 = CreateEvent (0,TRUE,FALSE,0);
			if (argv_2019==argv_2766) {
				argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_3278: CreateEvent failed !");
				argv_1892 = argv_3292;
			}
			else { // event created succesfully
				argv_1892 = argv_3792 (SERVICE_START_PENDING, NO_ERROR, 0, 2, 1000);
				if (argv_1892 != argv_3303) {
					argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_3278: argv_3792 failed (SERVICE_START_PENDING) @2 !");
				}
				else { // status updated succesfully
					argv_2146.argv_2142 (argv_2763, "argv_3792 to SERVICE_START_PENDING mark 2...[OK]");
					argv_1892 = argv_1017 ();
					if (argv_1892 != argv_3303) {
						argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_3278: argv_1017 failed !");
					}
					else { // worker thread created succesfully
						argv_2146.argv_2142 (argv_2763, "worker thread creation...[OK]");
						argv_3352 = SERVICE_RUNNING;
						argv_1892 = argv_3792 (SERVICE_RUNNING, NO_ERROR, 0, 0, 0);
						if (argv_1892 != argv_3303) {
							argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_3278: argv_3792 failed (SERVICE_RUNNING) !");
						}
						else { // status updated succesfully
							argv_2146.argv_2142 (argv_2763, "argv_3792 to SERVICE_RUNNING ...[OK]");
							if (WaitForSingleObject (argv_2019, INFINITE) == WAIT_FAILED) {
								argv_2146.argv_2142 (argv_1242, "+++ ERROR: argv_3278:  WaitForSingleObject failed !");	
							}
							CloseHandle (argv_2019);
						}
					}
				}
			}
		}
	}
	return (argv_1892);	
}

#if defined (__LINUX_OS__)
void * argv_1181 (void * _param) {
	argv_1040 * param_ptr = (argv_1040 *) _param;
	argv_1040 param = (*param_ptr);
	delete param_ptr;

	pthread_join (param.argv_1789, argv_2766);

	if (param.argv_1814 == 0) { // watch the admin thread
		param.argv_1072->argv_2146.argv_2142 (argv_620, "*** ADMIN THREAD HAS EXITED !");
	}
	else if (param.argv_1814 == 1) { // watch the scanner thread
		param.argv_1072->argv_2146.argv_2142 (argv_620, "*** SCANNER THREAD HAS EXITED !");
	}

	param.argv_1072->argv_2146.argv_2142 (argv_620, "*** KILLING SERVICE");
	param.argv_1072->argv_2017 ();

	// wait for the peer thread to exit
	pthread_join (param.argv_2955, argv_2766);
	exit(1);
	return (argv_2766);
}
#endif // #if defined (__LINUX_OS__)


argv_3379 argv_776::argv_1016 () {
	argv_3379 argv_1892 = argv_3303;
#if defined (__LINUX_OS__)
	argv_2146.argv_2142 (argv_1086, "creating watcher threads");
	argv_1040 * param_ptr = new (std::nothrow) argv_1040;
	param_ptr->argv_1814				= 0;
	param_ptr->argv_1789			= admin_handle;
	param_ptr->argv_2955		= scanner_handle;
	param_ptr->argv_1072	= this;

	// create the thread that will monitor the admin thread
	argv_3379 iret2 = pthread_create (&watcher_admin_handle, argv_2766, argv_1181, (argv_2157) param_ptr);
	if (iret2 != 0) {
		argv_1892 = argv_3301;
	}
	else {
		// create the thread that will monitor the scanner thread
		argv_1040 * param_ptr = new (std::nothrow) argv_1040;
		param_ptr->argv_1814				= 1;
		param_ptr->argv_1789			= scanner_handle;
		param_ptr->argv_2955		= admin_handle;
		param_ptr->argv_1072	= this;
		iret2 = pthread_create (&watcher_scanner_handle, argv_2766, argv_1181, (argv_2157) param_ptr);
		if (iret2 != 0) {
			argv_1892 = argv_3301;
		}
	}
#endif
	return (argv_1892);
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


