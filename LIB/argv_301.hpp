// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_301.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1314 contains all the argv_1073 structure
// @@ and functions that are not project specific
// @@ and that may be used by any argv_2785/function
// @@ acrosss a project.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_364
#define argv_364 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
	#pragma warning(disable: 4786)
	#pragma warning(disable: 4503)
	#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 

	#include <iostream>
	#include <string>
	#include <vector>
	#include <cassert>
	#include <cstdio>
	#include <stack>
	#include <list>
	#include <map>
	#include <exception>

#if defined (__WIN32_OS__) 
	#include <winsock.h>
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
	#include <Commdlg.h>
	#include <commctrl.h>
	#include <Commdlg.h>
	#include <shellapi.h>
	#include <fcntl.h>
	#include <shlobj.h>
	#include <Mmsystem.h>

	#include <io.h>
	#include <aclapi.h>
	#include <lmerr.h>
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	#include <sys/stat.h>
	#include <sys/types.h>
	#include <sys/argv_3410.h>
	#include <sys/argv_3678.h>
	#include <fcntl.h>
	#include <unistd.h>
	#include <sys/mman.h>
	#include <dirent.h>             // readdir(), etc.
	#include <sys/stat.h>           // stat(), etc.
	#include <cstring>             // strstr(), etc.
	#include <netinet/tcp.h>
	#include <linux/argv_1891.h>
	//#include <linux/tcp.h>
	#include <netdb.h>
	#include <errno.h>
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_296.hpp"
#include "../LIB_CRYPTO/argv_339.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all error codes
// @@ The reason why each part has a starting argv_3807 is to remove
// @@ the impact of the addition of a new error argv_877.
// @@ Each category can save up to 1000 different error codes
// @@ (error codes being coded on argv_3379, it is not a problem).
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_1997 {

	// test related error codes
	argv_3628 = 0,
	argv_3627,
	argv_3607,
	argv_3606,
	argv_3612,
	argv_3604,
	argv_3605,
	argv_3609,
	argv_3608,
	argv_3613,
	argv_3611,
	argv_3610,

	// kernel related errors
	argv_2001 = 1000,
	argv_1958,
	argv_1951,
	argv_1949,
	argv_1955,
	argv_1956,
	argv_1990,
	argv_1986,
	argv_1987,
	argv_1988,
	argv_1985,
	argv_1959,
	argv_1963,
	argv_1992,
	argv_1996,
	argv_1934,
	argv_1950,
	argv_1953,
	argv_1954,
	argv_1941,
	argv_1942,
	argv_1983,
	argv_1947,
	argv_1984,
	argv_1935,
	argv_2004,
	argv_1933,
	argv_2000,
	argv_1999, 
	argv_1948,
	argv_1998,
	argv_1952,
	argv_1940,
	argv_1945,
	argv_1938,
	argv_2003,
	argv_1946,
	argv_1989,
	argv_1944,
	argv_1995,
	argv_2005,
	argv_2002,
	argv_1943,
	argv_1993,
	argv_1957,

	// library loader related errors
	argv_2065=2000,
	argv_2056,
	argv_2062,
	argv_2061,
	argv_2063,
	argv_2057,
	argv_2066,
	argv_2058,
	argv_2064,
	argv_2060,
	argv_2059,

	// plugin loader related errors
	argv_3042=3000,
	argv_3022,
	argv_3021,
	argv_3019,
	argv_3031,
	argv_3011,
	argv_3032,
	argv_3040,
	argv_3041,
	argv_3043,
	argv_3051,
	argv_3030,
	argv_3016,
	argv_3014,
	argv_3017,
	argv_3039,
	argv_3034,
	argv_3035,
	argv_3036,
	argv_3033,
	argv_3037,
	argv_3038,
	argv_3010,
	argv_3018,
	argv_3020,
	argv_3013,

	// compressor/decompressor related errors
	argv_2029=4000,
	argv_2028,
	argv_2030,
	argv_2027,
	argv_2031,
	argv_2032,

	// cypher/decypher related errors
	argv_1068=5000,
	argv_1066,
	argv_1071,
	argv_1067,

	// xmemroy related errors
	argv_3852=6000,
	argv_3850,
	argv_3844,
	argv_3843,
	argv_3845,

	// coff argv_1314 loader related errors
	argv_2800=7000,
	argv_2791,
	argv_2798,
	argv_2790,
	argv_2799,
	argv_2786,
	argv_2794,
	argv_2789,
	argv_2797,
	argv_2796,
	argv_2792,
	argv_2793,
	argv_2802,
	argv_2787,
	argv_2801,
	argv_2795,
	argv_2788,

	// list related errors
	argv_2092=8000,
	argv_2091,
	argv_2090,
	argv_2089,
	argv_2083,
	argv_2088,
	argv_2081,

	// argv_1314 argv_3695 detection argv_3266 related errors
	argv_3710=9000,
	argv_3707,
	argv_3708,
	argv_3706,
	argv_3709,

	// kernel related errors
	argv_3009=10000,
	argv_3006,
	argv_3004,
	argv_3003,
	argv_3005,
	argv_3001,
	argv_3007,
	argv_2999,
	argv_3002,
	argv_3000,
	argv_3008,

	// scanner related errors
	argv_1331=11000,
	argv_1328,
	argv_1322,
	argv_1330,
	argv_1321,
	argv_1327,
	argv_1333,
	argv_1332,
	argv_1329,
	argv_1323,
	argv_1324,
	argv_1326,
	argv_1325,

	// symbol table related errors
	argv_3496=12000,
	argv_3494,
	argv_3497,
	argv_3495,
	argv_3493,
	argv_3492,

	// plugin manager related errors
	argv_3029=13000,
	argv_3026,
	argv_3024,
	argv_3025,
	argv_3028,
	argv_3027,

	// COFF loader related errors
	argv_894=14000,
	argv_887,
	argv_883,
	argv_884,
	argv_885,
	argv_895,
	argv_882,
	argv_881,
	argv_891,
	argv_897,
	argv_879,
	argv_886,
	argv_896,
	argv_880,
	argv_890,
	argv_893,
	argv_900,
	argv_899,
	argv_888,
	argv_898,
	argv_892,
	argv_889,

	// complex list related errors
	argv_960=15000,
	argv_957,
	argv_956,
	argv_955,
	argv_958,
	argv_959,
	argv_954,
	argv_953,

	// argv_1314 mapper related errors
	argv_1380=16000,
	argv_1379,
	argv_1377,
	argv_1375,
	argv_1378,
	argv_1376,
	argv_1374,

	// PE extractor related error
	argv_2954=17000,
	argv_2951,
	argv_2950,
	argv_2953,
	argv_2952,
	argv_2949,

	// argv_2234 related errors
	argv_2262=18000,
	argv_2248,
	argv_2246,
	argv_2247,
	argv_2245,
	argv_2237,
	argv_2249,
	argv_2261,
	argv_2260,
	argv_2236,
	argv_2250,
	argv_2235,
	argv_2238,
	argv_2240,
	argv_2239,
	argv_2241,
	argv_2244,
	argv_2253,
	argv_2254,
	argv_2256,
	argv_2257,
	argv_2255,
	argv_2252,

	// packet coder related errors
	argv_2863=19000,
	argv_2860,
	argv_2859,
	argv_2862,
	argv_2861,
	argv_2858,

	// packet related errors
	argv_2901=20000,
	argv_2873,
	argv_2877,
	argv_2880,
	argv_2874,
	argv_2883,
	argv_2878,
	argv_2857,
	argv_2875,
	argv_2866,
	argv_2865,
	argv_2888,
	argv_2869,
	argv_2867,
	argv_2870,
	argv_2871,
	argv_2868,
	argv_2864,
	argv_2881,
	argv_2905,
	argv_2879,
	PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET,
	argv_2872,
	argv_2882,
	argv_2876,
	PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET,

	// test related error codes (internal test errors)
	argv_3616=21000,
	argv_3615,

	// event loop related events
	argv_1264=22000,
	argv_1254,
	argv_1249,
	argv_1265,
	argv_1250,
	argv_1259,
	argv_1267,
	argv_1251,
	argv_1260,
	argv_1257,
	argv_1261,
	argv_1255,
	argv_1252,
	argv_1256,
	argv_1253,
	argv_1266,
	argv_1258,
	argv_1263,
	argv_1262,

	// client argv_1073 related errors
	argv_845=23000,
	argv_843,
	argv_844,

	// scanning daemon related errors
	argv_3303=24000,
	argv_3302,
	argv_3301,
	argv_3291,
	argv_3297,
	argv_3292,
	argv_3300,
	argv_3295,
	argv_3296,
	argv_3293,
	argv_3298,
	argv_3299,
	argv_3294,
	argv_3305,
	argv_3304,

	// com client related errors
	argv_922=25000,
	argv_916,
	argv_914,
	argv_917,
	argv_918,
	argv_915, 
	argv_923,
	argv_921,

	// gateway related errors
	argv_1622=26000,
	argv_1619,
	argv_1620,
	argv_1618,

	// kernel manager related errors
	argv_1981=27000,
	argv_1971,
	argv_1976,
	argv_1973,
	argv_1969,
	argv_1970,
	argv_1974,
	argv_1968,
	argv_1966,
	argv_1972,
	argv_1965,
	argv_1967,
	argv_1964,
	argv_1975,

	// admin related errors
	argv_3787=28000,
	argv_3780,
	argv_3776,
	argv_3784,
	argv_3775,
	argv_3777,
	argv_3778,
	argv_3779,
	argv_3785,
	argv_3782,
	argv_3788,
	argv_3783,
	argv_3781,
	argv_3789,
	argv_3786,
	argv_3790,
	argv_3791,

	// resolved shelf related errors
	argv_3264=29000,
	argv_3261,
	argv_3258,
	argv_3259,
	argv_3260,
	argv_3263,
	argv_3262,

	// spyware manager related errors
	argv_3422=30000,
	argv_3420,
	argv_3421,
	argv_3419,

	// inner argv_3095 related errors
	argv_1887=31000,
	argv_1886,
	argv_1883,
	argv_1882,
	argv_1885,
	argv_1884,

	// inner client related errors
	argv_1880=32000,
	argv_1877,
	argv_1875,
	argv_1878,
	argv_1881,
	argv_1874,
	argv_1879,
	argv_1876,

	// admin client related errors
	argv_619=33000,
	argv_614,
	argv_612,
	argv_616,
	argv_613,
	argv_618,
	argv_617,
	argv_615,

	// archive extractor related errors
	argv_660=34000,
	argv_662,
	argv_654,
	argv_655,
	argv_656,
	argv_661,
	argv_657,
	argv_653,
	argv_659,
	argv_649,
	argv_650,
	argv_651,
	argv_652,

	// archive creator related errors
	argv_644=35000,
	argv_647,
	argv_640,
	argv_639,
	argv_641,
	argv_637,
	argv_645,
	argv_646,
	argv_638,
	argv_636,
	argv_642,

	// argv_1314 argv_3695 analyzer related errors
	argv_3702=36000,
	argv_3701,
	argv_3698,
	argv_3699,
	argv_3700,

	// com manager related errors
	argv_938=37000,
	argv_931,
	argv_932,
	argv_935,
	argv_926,
	argv_929,
	argv_930,
	argv_936,
	argv_927,
	argv_937,
	argv_928,
	argv_933,
	argv_940,
	argv_925,

	// scan gateway related errors
	argv_3313=38000,
	argv_3314,
	argv_3311,
	argv_3308,
	argv_3312,
	argv_3315,
	argv_3309,
	argv_3310,

	// archive facility related errors
	argv_677=39000,
	argv_671,
	argv_669,
	argv_670,
	argv_675,
	argv_672,
	argv_673,
	argv_674,
	argv_667,
	argv_665,
	argv_666,
	argv_676,
	argv_668,
	argv_664,
	argv_663,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ All possible argv_1314 types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3705 {
	argv_1358 = 0,
	argv_1343,
	argv_1341,
	argv_1346,
	argv_1348,
	argv_1338,
	argv_1360,
	argv_1356,
	argv_1354,
	argv_1355,
	argv_1361,
	argv_1345,
	argv_1344,
	argv_1339,
	argv_1349,
	argv_1347,
	argv_1351,
};



#if defined (__WIN32_OS__) 
	#if !defined (argv_1890)
		#define argv_1890 ((DWORD)-1)
	#endif // #if !defined (argv_1890)
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants and aliases definitions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__LINUX_OS__)
	#define argv_1831		8
#endif // #if defined (__LINUX_OS__)


#define argv_1822		10
const argv_3717 argv_3491 =	18;
#define argv_1616			4
#define argv_2213		256
#define argv_2212		512
#define argv_1812					65536

#if defined (__WIN32_OS__) 
	#define argv_573 0x00008000
	#define argv_707 0x00004000
	#define argv_3409 _snprintf
#endif // #if ! defined (__WIN32_OS__) 


union argv_688 {
	argv_3717 argv_691;
	argv_3379 argv_684;
	argv_3715 argv_685[4];
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ These types are found in the COFF symbol table and permits
// @@ to know whether the argv_2785 is a function or not
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_1189 0x20
#define argv_1190  0x00



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible plugins types 
// @@ Notice that the plugin argv_3695 is a field of the plugin
// @@ itself.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3101 {
	argv_3047=0,
	argv_3049,
	argv_3046,	
	argv_3045,
	argv_3048, // just to know how many plugin types we have	
	argv_3050, 
};



#define argv_3158			4096
#define argv_997		8192




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ kernel log related argv_1073 structures and functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_556 {
		argv_3715		argv_3595[3];
		FILE *		argv_1396;
		argv_3717		argv_1052;
		bool		argv_2133;
		char		argv_3590[MAX_PATH];
#if defined (__LINUX_OS__)
        time_t      argv_1055;
        struct tm * argv_3680;
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__)
		SYSTEMTIME	argv_3677;
#endif // #if defined (__WIN32_OS__)
} argv_3406;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible relocation types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_1828	0x0014
#define argv_1826	0x0006
#define argv_1827	0x0007



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all relevant storage types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (__WIN32_OS__)
	#define argv_1832  0x06 // a symbol within a argv_710 (a label)   
#endif // __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ COFF argv_1806 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (__WIN32_OS__)
	typedef struct argv_459 {  
	argv_3716 argv_2187;  
	argv_3716 argv_2777;  
	argv_3717 argv_3679;  
	argv_3717 argv_3094;  
	argv_3717 argv_2779;  
	argv_3716 argv_3399;  
	argv_3716 argv_798;
	} argv_1820;
#endif // #if ! defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_2806 COFF argv_3325 argv_1806
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (__WIN32_OS__)
	typedef struct argv_463 {  
	argv_3715 argv_2698[argv_1831];  
	union {    
		argv_3717 argv_2973;    
		argv_3717 argv_3826;  
	} argv_2341;  
	argv_3717 argv_3825;  
	argv_3717 argv_3400;  
	argv_3717 argv_3092;  
	argv_3717 argv_3093;  
	argv_3717 argv_3091;  
	argv_3716 argv_2775;  
	argv_3716 argv_2771;  
	argv_3717 argv_798;
	} argv_1829; 
#endif // #if ! defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_2806 COFF relocation entry
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_460 {  
	argv_3717 argv_3825;
	argv_3717 argv_3499;
	argv_3716  argv_3696;
} argv_1821;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_2806 symbol table entry
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_564 {
	argv_3715  argv_2698[8];
	argv_3717  argv_3808;
	argv_3378  argv_3330;
	argv_3716  argv_3696;
	argv_3715  argv_3468;
	argv_3715  argv_2767;
} argv_3490;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ general functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void *			allocate_code_buffer	(int);
void			free_code_buffer		(void *);
void			flush_icache			();
std::string		argv_1240			(argv_3717);
extern "C"
{
	void argv_1240 (argv_3717, char *);
}
typedef void (* argv_1533) (argv_3717, char *);

std::string		argv_3044	(argv_3717);
bool			argv_1115 (argv_773, argv_773);


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ windows specific structures
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
	#define argv_1824 16
#endif // #ifndef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1816 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
typedef struct argv_456 {  
	argv_3717 argv_3825;  
	argv_3717 argv_3381;
} argv_1816;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1825 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
typedef struct argv_462 {  
	argv_3378 argv_2188;  
	argv_3715 argv_2190;  
	argv_3715 argv_2337;  
	argv_3717 argv_3383;  
	argv_3717 argv_3396;  
	argv_3717 argv_3404;  
	argv_3717 argv_602;  
	argv_3717 argv_702;  
	argv_3717 argv_703;  
	argv_3717 argv_1834;  
	argv_3717 argv_3329;  
	argv_3717 argv_1362;  
	argv_3378 argv_2191;  
	argv_3378 argv_2338;  
	argv_3378 argv_2189;  argv_3378 argv_2336;  
	argv_3378 argv_2192;  
	argv_3378 argv_2339;  
	argv_3717 argv_3837;  
	argv_3717 argv_3394;  
	argv_3717 argv_3391;  
	argv_3717 argv_817;  
	argv_3378 argv_3473;  
	argv_3378 argv_1172;  
	argv_3717 argv_3402;  
	argv_3717 argv_3401;  
	argv_3717 argv_3393;  
	argv_3717 argv_3392;  
	argv_3717 argv_2121;  
	argv_3717 argv_2776;  
	argv_1816 argv_1075[argv_1824];
} argv_1825,  *argv_2975;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1818 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
	typedef struct argv_458 {      // DOS .EXE argv_1806
		argv_3378   argv_1211;                     // argv_2188 number
		argv_3378   argv_1202;                      // Bytes on last page of argv_1314
		argv_3378   argv_1203;                        // Pages in argv_1314
		argv_3378   argv_1205;                      // Relocations
		argv_3378   argv_1204;                   // argv_3381 of argv_1806 in paragraphs
		argv_3378   argv_1213;                  // Minimum argv_1289 paragraphs needed
		argv_3378   argv_1212;                  // Maximum argv_1289 paragraphs needed
		argv_3378   argv_1220;                        // Initial (relative) SS argv_3807
		argv_3378   argv_1219;                        // Initial SP argv_3807
		argv_3378   argv_1207;                      // Checksum
		argv_3378   argv_1208;                        // Initial IP argv_3807
		argv_3378   argv_1206;                        // Initial (relative) CS argv_3807
		argv_3378   argv_1210;                    // File argv_595 of relocation table
		argv_3378   argv_1216;                      // Overlay number
		argv_3378   argv_1217[4];                    // argv_3218 words
		argv_3378   argv_1214;                     // OEM identifier (for argv_1215)
		argv_3378   argv_1215;                   // OEM information; argv_1214 specific
		argv_3378   argv_1218[10];                  // argv_3218 words
		argv_3717   argv_1209;                    // File argv_595 of new exe argv_1806
	  } argv_1818;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1823 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
typedef struct argv_461 {
  argv_3717 argv_3380;  
  argv_1820 argv_1363;  
  argv_1825 argv_2818;
} argv_1823;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ general functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	bool argv_3121 ();
	bool argv_3594 ();
#endif // #if defined (__WIN32_OS__) 


#if defined (__WIN32_OS__) 
class argv_781
{
protected:
	LARGE_INTEGER argv_2169;
	LARGE_INTEGER argv_2170;

	LONGLONG argv_2172;
	LONGLONG argv_2171;

public:
	argv_781(void);

	void argv_3457(void);
	void argv_3463(void);
	double argv_1646(void) const;
	string argv_3464 (argv_773);
};

inline argv_781::argv_781(void) {
	LARGE_INTEGER liFrequency;

	QueryPerformanceFrequency(&liFrequency);
	argv_2172 = liFrequency.QuadPart;

	// Calibration
	argv_3457();
	argv_3463();

	argv_2171 = argv_2170.QuadPart-argv_2169.QuadPart;
}

inline void argv_781::argv_3457(void) {
	// Ensure we will not be interrupted by any other thread for a while
//	Sleep(0);
	QueryPerformanceCounter(&argv_2169);
}

inline void argv_781::argv_3463(void) {
	QueryPerformanceCounter(&argv_2170);
}

inline double argv_781::argv_1646(void) const {
	return (double)(argv_2170.QuadPart-argv_2169.QuadPart-argv_2171)*1000000.0 / argv_2172;
}

inline string argv_781::argv_3464 (argv_773 _msg) {
	argv_3463 ();
	double elapsed = argv_1646 ();
	char argv_3681[MAX_PATH];
	if (elapsed < 1000000.0) {
		argv_3409 (argv_3681, 1024, "%s : %lf microseconds", _msg, elapsed);
	}
	else if ((elapsed >= 1000000.0) && (elapsed < 60000000.0)) {
		elapsed = elapsed / 1000000.0;
		argv_3409 (argv_3681, 1024, "%s : %lf seconds", _msg, elapsed);
	}
	else {
		elapsed = elapsed / 60000000.0;
		argv_3409 (argv_3681, 1024, "%s : %lf minutes", _msg, elapsed);
	}
	argv_3681[1024 - 1] = '\0';
	return argv_3681;
}
#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_758
// @@
// @@ DESCRIPTION:
// @@ This argv_2785 is a platform independant argv_2125 that
// @@ permits to avoid race conditions in threaded applications.
// @@ It works for both win32 and Linux platforms.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_758
{
private:
#if defined (__LINUX_OS__)
	pthread_mutex_t argv_2694;
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	CRITICAL_SECTION argv_1028;
#endif // #if defined (__WIN32_OS__) 

public:
	argv_758 ();
	void argv_2125 ();
	void argv_3770 ();
	~argv_758 ();
};


enum argv_2832 {
	argv_990 = 0,
	argv_991,
	argv_989,
};

class argv_772
{
public:
	argv_3717	argv_3695;

	argv_3715	argv_3810;
	argv_3717	argv_3811;
	string	argv_3809;
};

void argv_577 (argv_3715, vector<argv_772>&);
void argv_577 (argv_3717, vector<argv_772>&);
void argv_577 (argv_773, vector<argv_772>&);
void argv_577 (const string&, vector<argv_772>&);


template <class T>
class argv_1029
{
private:
	CRITICAL_SECTION argv_1028;   // Windows' basic argv_2694 argv_2785.
	list<T>	argv_3191;

public:
	argv_1029 ();
	~argv_1029 ();
	bool argv_3156 (T);
	bool argv_986 (T&);
};

template <class T>
argv_1029<T>::argv_1029 () {
	InitializeCriticalSection(&argv_1028);		
}

template <class T>
argv_1029<T>::~argv_1029 () {
	DeleteCriticalSection(&argv_1028);
}

template <class T>
bool argv_1029<T>::argv_3156 (T _elem) {
	bool bret = true;
	EnterCriticalSection (&argv_1028);
		argv_3191.push_back (_elem);
	LeaveCriticalSection(&argv_1028);	
	return (bret);
}

template <class T>
bool argv_1029<T>::argv_986 (T& _elem) {
	bool bret = false;
	EnterCriticalSection (&argv_1028);
		if (! argv_3191.empty()) {
			_elem = argv_3191.argv_1610 ();
			argv_3191.pop_front();
			bret = true;
		}
	LeaveCriticalSection(&argv_1028);	
	return (bret);
}


bool argv_804 (argv_773);
bool argv_805 (argv_773);

//void dump_buffer_2_file (argv_773, argv_773, argv_3715 *, argv_3717);
argv_3717 argv_973 (argv_773 _filename);
bool argv_1116 (argv_773);
argv_3379 argv_998 (argv_773, argv_773);
argv_3379 argv_1634 (argv_773, argv_773, argv_773, argv_773, string&, bool _do_copy=true);

#if defined (__WIN32_OS__) 
	argv_3379 disable_nagle_algorithm (SOCKET& _socket);
	argv_3379 argv_795 (SOCKET& _socket);
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_3379 disable_nagle_algorithm (argv_3379 _socket);
	argv_3379 argv_795 (argv_3379 _socket);
	void argv_694 (argv_3379 sockfd);
#endif // #if defined (__LINUX_OS__)

#if defined (__WIN32_OS__) 
	argv_3379 argv_2848 (argv_773, string&);
	argv_3379 parse_handle_file (argv_773, string&);
#endif // #if defined (__WIN32_OS__) 
bool argv_1295 (argv_773, string&, string&);
void argv_3346 (argv_3715, argv_773, vector<string>&);
bool argv_1294 (argv_773, vector<string>&);	
bool empty_directory (argv_773);
argv_3379 empty_and_remove_directory (argv_773);
bool argv_1317 (argv_773);
bool argv_3213 (argv_773);
bool argv_585 (argv_773);


#endif // argv_364



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1314
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
