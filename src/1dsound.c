#include "mrilib.h"

#include "cs_playsound.c"

void usage_1dsound(int detail)
{
   printf(
     "\n"
     "Usage: 1dsound [options] tsfile\n"
     "\n"
     "Program to create a sound file from a 1D file (column of numbers).\n"
     "\n"
     "-------\n"
     "OPTIONS\n"
     "-------\n"
     " -prefix ppp  = Output filename will be ppp.au\n"
     "                [old Sun audio format]\n"
     " -8PCM        = Output in 8-bit linear PCM encoding\n"
     "                [default is 8-bit mu-law encoding]\n"
     " -tper X      = X seconds of sound per time point in 'tsfile'.\n"
     "                Allowed range for 'X' is 0.1 to 1.0 (inclusive).\n"
     "                [default is 0.5 s]\n"
     "\n"
     "--------\n"
     "EXAMPLES\n"
     "--------\n"
     "The first 2 examples are purely synthetic, using 'data' files created\n"
     "on the command line. The third example uses a data file that was written\n"
     "out of an AFNI graph viewer using the 'w' keystroke.\n"
     " 1dsound -prefix A1 '1D: 0 1 2 1 0 1 2 0 1 2'\n"
     " 1deval -num 100 -expr 'sin(x+0.01*x*x)' | 1dsound -tper 0.1 -prefix A2 1D:stdin\n"
     " 1dsound -prefix -tper 0.1 A3 028_044_003.1D\n"
     "\n"
     "-----\n"
     "NOTES\n"
     "-----\n"
     "* At this time, program is very limited in what it does:\n"
     "  + frequency modulated between 110 and 1760 Hz\n"
     "    [min to max in tsfile]\n"
     "* File can be played with the 'sox' audio library command\n"
     "    play A1.au gain -5\n"
     "  + Here 'gain -5' turns the volume down :)\n"
     "  + sox is not provided with AFNI :(\n"
     "  + To see if sox is on your system, type the command 'which sox'\n"
     "* Creation of the file does not depend on sox, so if you have\n"
     "  another way to play .au files, you can use that.\n"
     "  * Mac OS X: Quicktime (GUI) or afplay (command line)\n"
     "  * Linux:    sox is probably the simplest\n"
     "\n"
     "--- Quick hack for experimentation and fun - RWCox - Aug 2018 ---\n"
     "\n"
   ) ;

   return;
}

/*---------------------------------------------------------------------------*/
/* This program is a very elaborate wrapper for the plot_ts.c functions. */
/*---------------------------------------------------------------------------*/

#define SRATE 48000

int main( int argc , char *argv[] )
{
   int iarg ;
   char *prefix = "sound.au" ;
   MRI_IMAGE *inim , *phim ;
   float *far ;
   int do_8PCM=0 ;
   float tper=0.5f ; int nsper ;

   /*---------- startup bureaucracy ----------*/

   if( argc < 2 ){ usage_1dsound(1) ; exit(0) ; }

   mainENTRY("1dsound main"); machdep();

   /*------------ scan arguments that X11 didn't eat ------------*/

   iarg = 1 ;
   while( iarg < argc && argv[iarg][0] == '-' ){

     /*-- help? --*/

     if(strcmp(argv[iarg],"-help") == 0 ||
        strcmp(argv[iarg],"-h")    == 0   ){
       usage_1dsound(strlen(argv[iarg])>3?2:1);
       exit(0) ;
     }

     if( strcmp(argv[iarg],"-prefix") == 0 ){
       if( iarg >= argc-1 )
         ERROR_exit("need arg after %s",argv[iarg]) ;
       prefix = strdup(argv[++iarg]) ; iarg++ ; continue ;
     }

     if( strcmp(argv[iarg],"-8PCM") == 0 ){
       do_8PCM = 1 ; iarg++ ; continue ;
     }

     if( strcmp(argv[iarg],"-tper") == 0 || strcmp(argv[iarg],"-dt") == 0 ){
       if( iarg >= argc-1 )
         ERROR_exit("need arg after %s",argv[iarg]) ;
       tper = (float)strtod(argv[++iarg],NULL) ;
       if( tper < 0.01f || tper > 1.00f )
         ERROR_exit("1dsound: %s %s is out of range 0.01..1.0",
                    argv[iarg-1],argv[iarg]) ;
       iarg++ ; continue ;
     }

     /*--- symplectically stoopid user ---*/

     ERROR_message("Unknown option: %s\n",argv[iarg]) ;
     suggest_best_prog_option(argv[0], argv[iarg]);
     exit(1);

   } /*--------- end of scan over command line args ----------*/

   if( argc < 2 ){ usage_1dsound(0); exit(0) ; }

   if( iarg >= argc )
      ERROR_exit("No time series file on command line!\n") ;

   inim = mri_read_1D( argv[iarg] ) ;
   if( inim == NULL )
     ERROR_exit("Can't read input file '%s' iarg=%d\n",argv[iarg],iarg) ;

   nsper = (int)rintf( SRATE * tper ) ;

   phim = mri_sound_1D_to_FM( inim ,
                              0.0f , 0.0f , SRATE , nsper ) ;

   if( phim == NULL )
     ERROR_exit("mri_sound_1D_to_FM fails") ;

   if( phim != NULL ){
     char fname[1024] ;
     if( STRING_HAS_SUFFIX(prefix,".au") ) strcpy(fname,prefix) ;
     else                                  sprintf(fname,"%s.au",prefix) ;
     if( do_8PCM ){
       sound_write_au_8PCM( fname, phim->nx, MRI_FLOAT_PTR(phim), SRATE, 0.2f );
     } else {
       sound_write_au_ulaw( fname, phim->nx, MRI_FLOAT_PTR(phim), SRATE, 0.2f );
     }
     INFO_message("output sound file %s",fname) ;
   }

   exit(0) ;
}