extern void *memalloc ( size_t n ) ;
extern void *memallocX ( size_t n ) ;
extern void memclose () ;
extern void memcloseX () ;
extern void memfree ( void *ptr ) ;
extern void memfreeX ( void *ptr ) ;
extern void *memrealloc ( void *ptr , size_t size ) ;
extern void *memreallocX ( void *ptr , size_t size ) ;
extern void memtext ( char *text ) ;
extern void qsortd ( int first , int last , double *data ) ;
extern void qsortds ( int first , int last , double *data , double *slave ) ;
extern double unifrand_fast () ;