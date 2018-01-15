// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_298.hpp
// @@
// @@ DESCRIPTION:
// @@ argv_1806 for error bookkeeping and error messages
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_440
#define argv_440



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <string>
#include <iostream>
#include <stack>
#include "../Lib/argv_301.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_791
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 is the actuel error argv_2785.
// @@ it contains several fields such as :
// @@ - the class argv_2697 where the error occured
// @@ - the function where the error occured
// @@ - an error argv_2271 in english
// @@ - an error argv_877 to be able to map into other countries language.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_785
{

public:
	string 	argv_839;
	string 	argv_1615;
	string 	argv_2271;
	argv_3379	argv_1241;

	void init(const std::string&, const std::string&, const std::string&, argv_3379);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_791
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 is a general purpose error 
// @@ argv_2785 that permits to know why, and where 
// @@ a given problem occured during runtime.
// @@
// @@ It keeps track of :
// @@ - the class where problem occured
// @@ - the function where problem occured
// @@ - the error argv_2271 associated with the problem
// @@ - the error argv_877 (usefull for language translation
// @@   and error level categorisation.
// @@ 
// @@ Notice that the argv_2785 contains also a stack that permits to keep
// @@ from bottom to top of the execution flow that leaded to the exception.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_791 : public argv_785
{
private:
	stack<argv_785> argv_1245;
		
public:
	argv_791();
	argv_791(std::string, std::string, std::string, argv_3379);
	void init(std::string, std::string, std::string, argv_3379);
	bool argv_1669(std::string&, std::string&, std::string&, argv_3379&);
	friend std::ostream& operator << (std::ostream&, argv_791&);
};




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ win32 error and exception related functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
	void	argv_1888 ();
	LONG	argv_3836(struct _EXCEPTION_POINTERS *  ExInfo);
	void	argv_2147(void *FaultAdress, char *);
#endif // #if defined (__WIN32_OS__)



#endif // argv_440



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
