/* Temperature Conversion.Floating point,Symbolic Constant.Functions
http://www.learntosolveit.com/cprogramming/Ex_1.15_tempconv.html*/
#include<stdio.h>

//taking variables from previous chapter content. symbolic const
#define LOWER 0
#define UPPER 300
#define STEP 20

//functions we will use and call from within main
void fahrtocelsius(void);
void celsiustofahr(void);

int main(void)
{
  int c;
  //user sees this and has a UI interaction
  printf("Temperature Conversion Table\n");
  printf("1 - Fahrenheit to Celsius Conversion\n");
  printf("2 - Celsius to Fahrenheit Conversion\n");
  printf("- Enter your Choice\n");
  //request input
    c = getchar();
  //if input was 1 or 2 do functions, else bad!
    if( c == '1')
      fahrtocelsius();
    else if( c == '2')
      celsiustofahr();
    else
      printf("Invalid Choice\n"); 
  return 0;
}
//basic F to C conversion from 0 to 300 and skip 20 each way.
void fahrtocelsius()
{
  float fahr;

  for(fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)
    printf("%3.0f%6.1f\n",fahr,(5.0/9.0)*(fahr-32.0));
}
//basic C to F conversion from 0 to 300 and skip 20 each way.
void celsiustofahr()
{
  float celsius;

  for(celsius=LOWER;celsius<=UPPER;celsius=celsius+STEP)
    printf("%3.0f%6.1f\n",celsius,(9.0*celsius)/5.0+32);
}
