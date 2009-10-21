#include "mrilib.h"

int main( int argc , char * argv[] )
{
   int which , status ;
   double p,q,x,y,a,b=0.0,bound ;

   if( argc < 3 ){printf("Usage: zzz x a [q]\n");exit(0);}

   x = strtod(argv[1],NULL);
   if( x <= 0.0 || x >= 1.0 ){printf("illegal x\n");exit(1);}

   a = strtod(argv[2],NULL);
   if( a <= 0.0 ){printf("illegal a\n");exit(1);}

   if( argc > 3 ){
      q = strtod(argv[3],NULL) ;
      if( q <= 0.0 || q >= 1.0 ){printf("illegal q\n");exit(1);}
   } else {
      q = 0.5 ;
   }

   y = 1.0-x ; p = 1.0-q ;

   which=4 ;
   cdfbet( &which , &p,&q,&x,&y,&a,&b,&status,&bound ) ;

   printf("x=%g a=%g => b=%g\n",x,a,b) ; exit(0) ;
}

