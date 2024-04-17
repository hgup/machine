#include <stdio.h>
#include <math.h>
#include <time.h>

float q_rsqrt(float number)
{
  long i;
  float x2, y;
  const float threehalfs = 1.5F;


  x2 = number * 0.5F;
  y  = number;
  i  = * ( long * ) &y;                       // evil floating point bit level hacking
  i  = 0x5f3759df - ( i >> 1 );               // what the heck?
  y  = * ( float * ) &i;
  y  = y * ( threehalfs - ( x2 * y * y ) );   // 1st iteration
  // y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

  return y;
}

int main(){
    float res;
    clock_t time1, time2;
    double time_taken;

    // USUAL
    time1 = clock();            /* get initial time */
    res = 1/ sqrt(12452.234233532536);
    res = 1/ sqrt(12452.234233532536);
    res = 1/ sqrt(12452.234233532536);
    time2 = clock();
    time_taken = ((double)(time2-time1))/CLOCKS_PER_SEC; // calculate the elapsed time

    printf("MATH INV SQ: %f\n calculated in %lf seconds\n",res,time_taken);

    // FAST INV SQ
    time1 = clock();            /* get initial time */
    res = q_rsqrt(12452.234233532536);
    res = 1/ sqrt(12452.234233532536);
    res = 1/ sqrt(12452.234233532536);
    time2 = clock();
    time_taken = ((double)(time2-time1))/CLOCKS_PER_SEC; // calculate the elapsed time
    printf("FAST INV SQ: %f\n calculated in %lf seconds\n",res,time_taken);


}

// int test(){
//   int M, E;

//   // M = 010011100100000000000000000000000;
//   // E = 1000101;

//   // + 0.000

//   // log(y) = i = 01001000 00001000 01001100 11000100
// }