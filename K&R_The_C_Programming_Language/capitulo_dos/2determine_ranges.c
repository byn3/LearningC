/* Program to print maximum,minimum limits of char,int,long using calculation
http://www.learntosolveit.com/cprogramming/Ex_2.1_cal_limits.html */

/* The logic used is
* ~0 will give bits in 1s.
* (unsigned <type>) will cast it unsigned.
* >> 1 right shifts 1 bit to remove the sign bit.
* (<type>) casting it the required type again
*/

#include<stdio.h>

int main(void){

    //to get max unsigned, we make the leftmost be 0 and put 1s everywhere else
    //to  get minimum signed. we get the max, multiply by -1 and subtract 1.
    // >> is to do a local right shift. eliminate sign bit. removes left most?
    //char bit is 8 bit
    printf("Minimum Signed Char %d\n",-(char) ((unsigned char) ~0 >> 1) - 1);
    printf("Maximum Signed Char %d\n",(char) ((unsigned char) ~0 >> 1));
    //short is 16 bit
    printf("Minimum Signed Short %d\n",-(short) ((unsigned short)~0 >>1) -1);
    printf("Maximum Signed Short %d\n",(short) ((unsigned short)~0 >> 1));
    //int is 32 bit
    printf("Minimum Signed Int %d\n",-(int) ((unsigned int)~0 >> 1) -1);
    printf("Maximum Signed Int %d\n",(int)((unsigned int)~0 >> 1));
    //long is 32 bit
    printf("Minimum Signed Long %ld\n",-(long) ((unsigned long)~0 >>1) -1);
    printf("Maximum signed Long %ld\n",(long) ((unsigned long)~0 >> 1));

    //64 bit is long long or word or longword or quad or quadword
    //128 is double quadword or octaword

    /* Unsigned Maximum Values */
    /* That is the maximum signed char value.
    To get the minimum signed char value,
    we look for the number in the other end of the number line.
    That is got by, multiplying it by -1 and going one number
    further to the left in the number line:
    */
    //(unsigned short) 0 means 0000 0000 0000 0000
    //(unsigned short) ~0 means 1111 1111 1111 1111
    printf("\nMaximum Unsigned Char %d\n",(unsigned char)~0);
    printf("Maximum Unsigned Short %d\n",(unsigned short)~0);
    printf("Maximum Unsigned Int %u\n",(unsigned int)~0);
    printf("Maximum Unsigned Long %lu\n",(unsigned long)~0);
    //for max unsigned we do mo shifting, just print all values of all 1s of the type.
    return 0;
}
