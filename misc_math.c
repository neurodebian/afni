
/* move from Deconvolve.c into libmri.a         21 Jun 2010 [rickr] */

double legendre( double x , int m )   /* Legendre polynomials over [-1,1] */
{
   if( m < 0 ) return 1.0 ;    /* bad input */

   switch( m ){                /*** P_m(x) for m=0..20 ***/
    case 0: return 1.0 ;
    case 1: return x ;
    case 2: return (3.0*x*x-1.0)/2.0 ;
    case 3: return (5.0*x*x-3.0)*x/2.0 ;
    case 4: return ((35.0*x*x-30.0)*x*x+3.0)/8.0 ;
    case 5: return ((63.0*x*x-70.0)*x*x+15.0)*x/8.0 ;
    case 6: return (((231.0*x*x-315.0)*x*x+105.0)*x*x-5.0)/16.0 ;
    case 7: return (((429.0*x*x-693.0)*x*x+315.0)*x*x-35.0)*x/16.0 ;
    case 8: return ((((6435.0*x*x-12012.0)*x*x+6930.0)*x*x-1260.0)*x*x+35.0)/128.0;

           /** 07 Feb 2005: this part generated by Maple, then hand massaged **/

    case 9:
      return (0.24609375e1 + (-0.3609375e2 + (0.140765625e3 + (-0.20109375e3
              + 0.949609375e2 * x * x) * x * x) * x * x) * x * x) * x;

    case 10:
      return -0.24609375e0 + (0.1353515625e2 + (-0.1173046875e3 +
              (0.3519140625e3 + (-0.42732421875e3 + 0.18042578125e3 * x * x)
             * x * x) * x * x) * x * x) * x * x;

    case 11:
      return (-0.270703125e1 + (0.5865234375e2 + (-0.3519140625e3 +
             (0.8546484375e3 + (-0.90212890625e3 + 0.34444921875e3 * x * x)
             * x * x) * x * x) * x * x) * x * x) * x;

    case 12:
      return 0.2255859375e0 + (-0.17595703125e2 + (0.2199462890625e3 +
             (-0.99708984375e3 + (0.20297900390625e4 + (-0.1894470703125e4
             + 0.6601943359375e3 * x * x) * x * x) * x * x) * x * x) * x * x)
             * x * x;

    case 13:
      return (0.29326171875e1 + (-0.87978515625e2 + (0.7478173828125e3 +
             (-0.270638671875e4 + (0.47361767578125e4 + (-0.3961166015625e4
             + 0.12696044921875e4 * x * x) * x * x) * x * x) * x * x) * x * x)
            * x * x) * x;

    case 14:
      return -0.20947265625e0 + (0.2199462890625e2 + (-0.37390869140625e3 +
             (0.236808837890625e4 + (-0.710426513671875e4 +
             (0.1089320654296875e5 + (-0.825242919921875e4 +
            0.244852294921875e4 * x * x) * x * x) * x * x) * x * x) * x * x)
           * x * x) * x * x;

    case 15:
      return (-0.314208984375e1 + (0.12463623046875e3 + (-0.142085302734375e4
            + (0.710426513671875e4 + (-0.1815534423828125e5 +
              (0.2475728759765625e5 + (-0.1713966064453125e5 +
               0.473381103515625e4 * x * x) * x * x) * x * x) * x * x)
             * x * x) * x * x) * x * x) * x;

    case 16:
      return 0.196380615234375e0 + (-0.26707763671875e2 + (0.5920220947265625e3
            + (-0.4972985595703125e4 + (0.2042476226806641e5 +
              (-0.4538836059570312e5 + (0.5570389709472656e5 +
               (-0.3550358276367188e5 + 0.9171758880615234e4 * x * x) * x * x)
            * x * x) * x * x) * x * x) * x * x) * x * x) * x * x;

    case 17:
      return (0.3338470458984375e1 + (-0.169149169921875e3 +
             (0.2486492797851562e4 + (-0.1633980981445312e5 +
             (0.5673545074462891e5 + (-0.1114077941894531e6 +
             (0.1242625396728516e6 + (-0.7337407104492188e5 +
              0.1780400253295898e5 * x * x) * x * x) * x * x) * x * x)
           * x * x) * x * x) * x * x) * x * x) * x;

    case 18:
      return -0.1854705810546875e0 + (0.3171546936035156e2 +
            (-0.8880331420898438e3 + (0.9531555725097656e4 +
            (-0.5106190567016602e5 + (0.153185717010498e6 +
            (-0.2692355026245117e6 + (0.275152766418457e6 +
            (-0.1513340215301514e6 + 0.3461889381408691e5 * x * x) * x * x)
           * x * x) * x * x) * x * x) * x * x) * x * x) * x * x) * x * x;

    case 19:
      return (-0.3523941040039062e1 + (0.2220082855224609e3 +
             (-0.4084952453613281e4 + (0.3404127044677734e5 +
             (-0.153185717010498e6 + (0.4038532539367676e6 +
             (-0.6420231216430664e6 + (0.6053360861206055e6 +
             (-0.3115700443267822e6 + 0.6741574058532715e5 * x * x) * x * x)
          * x * x) * x * x) * x * x) * x * x) * x * x) * x * x) * x * x) * x;

    case 20:
      return 0.1761970520019531e0 + (-0.3700138092041016e2 +
            (0.127654764175415e4 + (-0.1702063522338867e5 +
            (0.1148892877578735e6 + (-0.4442385793304443e6 +
            (0.1043287572669983e7 + (-0.1513340215301514e7 +
            (0.1324172688388824e7 + (-0.6404495355606079e6 +
             0.1314606941413879e6 * x * x) * x * x) * x * x) * x * x) * x * x)
            * x * x) * x * x) * x * x) * x * x) * x * x;
   }

#if 0
   /* order out of range: return Chebyshev instead (it's easy) */

        if(  x >=  1.0 ) x = 0.0 ;
   else if ( x <= -1.0 ) x = 3.14159265358979323846 ;
   else                  x = acos(x) ;
   return cos(m*x) ;
#else
   /** if here, m > 20 ==> use recurrence relation **/

   { double pk=0, pkm1, pkm2 ; int k ;
     pkm2 = legendre( x , 19 ) ;
     pkm1 = legendre( x , 20 ) ;
     for( k=21 ; k <= m ; k++ , pkm2=pkm1 , pkm1=pk )
       pk = ((2.0*k-1.0)*x*pkm1 - (k-1.0)*pkm2)/k ;
     return pk ;
   }
#endif
}
