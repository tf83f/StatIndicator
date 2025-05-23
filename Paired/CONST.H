// Constants for the program

/*
   These interpose memory allocation checking.
   To revert to ordinary malloc/free set MEMDEBUG to 0.
*/

#define MEMDEBUG 1

#if MEMDEBUG
#define MALLOC memalloc
#define FREE memfree
#define REALLOC memrealloc
#define MEMTEXT memtext
#define MEMCLOSE memclose
#else
#define MALLOC malloc
#define FREE free
#define REALLOC realloc
#define MEMTEXT notext
#define MEMCLOSE nomemclose
#endif


/*
   Constants
*/

#if ! defined ( MAXPOSNUM )
#define MAXPOSNUM 2147483647
#endif
#if ! defined ( MAXNEGNUM )
#define MAXNEGNUM -2147483647 /* Actually is -2147483648 */
#endif
#if ! defined ( PI )
#define PI 3.141592653589793
#endif

#define KEY_ESCAPE 27


/*
   These are universal error codes.  The first two have mandatory values!
*/

#define ERROR_OK 0
#define ERROR_NO_ERROR 0
#define ERROR_ESCAPE 1
#define ERROR_ABORT 2
#define ERROR_INSUFFICIENT_MEMORY 3
#define ERROR_SYNTAX 4
#define ERROR_FILE 5

/*
   Assorted constants
*/


/*
   Variables
*/

#define VAR_CORRELATION 10
#define VAR_DELTA_CORRELATION 12
#define VAR_DEVIATION 14
#define VAR_PURIFY 16
#define VAR_LOG_PURIFY 18
#define VAR_TREND_DIFF 20
#define VAR_CMMA_DIFF 22

/*
   Program limitations
*/

#define MAX_NAME_LENGTH 15
#define MAX_VARS 8192