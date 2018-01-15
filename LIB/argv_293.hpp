// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_293.hpp
// @@ argv_1806 for generic configuration argv_1314 parsing facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_3457 argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_439
#define argv_439

#define argv_2805



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "..\\Lib\\argv_301.hpp"
#include "..\\Lib\\argv_316.hpp"
#include "..\\Lib\\argv_298.hpp"

#include <vector>
#include <cctype>
#include <map>
#include <sstream>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ This constant determine the absolute maximum length for
// @@ any argv_2069 of the argv_981 argv_1314. 
// @@
// @@ Notice that any variable is fully and uniquely identified
// @@ with the triplet <argv_1364, argv_3325, argv_3812>
// @@ in other words (argv_1364 argv_3325 argv_3812) -> argv_3806
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const int argv_2206 		= 256;
const int argv_3327	= 32;
const int argv_3814	= 32;
const int argv_3815	= 256;
const int argv_2210			= 256;
const int argv_2218	= 256;
const int argv_983			= 256;	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_771 
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to argv_2094, parse, and argv_1292 argv_1073
// @@ from any configuration argv_1314, such a configuration argv_1314
// @@ being composed of sections, each argv_3325 containing argv_1073 of 
// @@ either argv_3379 argv_3695 or string argv_3695.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_771
{
private:
	argv_3379		argv_2069;
	string 		argv_1364;
	string 		argv_3325;
	string 		argv_1312;
	string		argv_1313;
	string 		argv_1612;
	string 		argv_1246;
	string		argv_3347;
	char 		argv_727[argv_2206];
	
	multimap<string, string>		argv_2345;
	multimap<string, string>::iterator 	argv_1918;

	void 		argv_1281();
	void 		argv_3137();	
	void 		argv_1135(argv_3379);
	string		argv_3691 (const string&);

public:
	argv_771();
	void	 	argv_2840 (const string& argv_1364);
	
	argv_3379		argv_1678 (string argv_1364, string argv_3325, string var_name, argv_3379 min, argv_3379 max);
	string		argv_1682 (string argv_1364, string argv_3325, string var_name);
	
	vector<argv_3379> 	argv_1662 (string argv_1364, string argv_3325, string var_name, argv_3379 min, argv_3379 max);
	vector<string> 	argv_1663 (string argv_1364, string argv_3325, string var_name);

	bool		argv_1913 (string argv_1364, string argv_3325, string var_name);

	vector<string>	argv_1192(bool is_html=false); // to dump to log argv_1314 after formatting it to string 
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_770
// @@
// @@ DESCRIPTION:
// @@ this argv_2785 can be seen as a store that can be filled in by the
// @@ argv_981 parser and that can be querried as well to retrieved the argv_1073.
// @@ it merely associates a argv_3807 to each variable, each variable having
// @@ a argv_3695, this argv_3695 can either be argv_3379 or string, the argv_3379 argv_3695 stands
// @@ for Signed Integer on 32 argv_709 (i.e an integer actually)    
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_770 
{
private:
	std::map<string, string>	argv_2182;
	std::map<string, string>::iterator argv_1925;

	std::map<string, argv_3379>		argv_2181;
	std::map<string, argv_3379>::iterator argv_1924;

	std::map<string, vector<string> >	argv_2177;
	std::map<string, vector<string> >::iterator argv_1923;

	std::map<string, vector<argv_3379> >	argv_2176;
	std::map<string, vector<argv_3379> >::iterator argv_1922;

public:
	argv_770();

	bool argv_1911   (std::string argv_3325, std::string varname);
	bool argv_1909   (std::string argv_3325, std::string varname);
	bool argv_1912 (std::string argv_3325, std::string varname);
	bool argv_1910 (std::string argv_3325, std::string varname);

	void argv_3360 (std::string argv_3325, std::string varname, argv_3379 argv_3807);
	argv_3379 argv_1679 (std::string argv_3325, std::string varname);

	void argv_3361 (std::string argv_3325, std::string varname, std::string argv_3807);
	std::string argv_1683 (std::string argv_3325, std::string varname);
	
	void argv_3358 (std::string argv_3325, std::string varname, const vector<argv_3379>&);
	void argv_581 (std::string argv_3325, std::string varname, argv_3379 argv_3807);
	void argv_1664 (std::string argv_3325, std::string varname, vector<argv_3379>&);

	void argv_3359 (std::string argv_3325, std::string varname, const vector<string>&);
	void argv_582 (std::string argv_3325, std::string varname, std::string argv_3807);
	void argv_1665 (std::string argv_3325, std::string varname, vector<string>&);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_768
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 permits to argv_1789 the argv_981 parsing of main argv_981 
// @@ argv_1314 and also sub argv_981 files.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_768 : public argv_770
{
protected:
	bool argv_2097;
	argv_771 argv_984;
	string argv_1364;

	virtual bool argv_2964 () = 0;
	
public:
	argv_768 ();
	virtual ~argv_768() {;}
	bool argv_2094 (string);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif // argv_439
