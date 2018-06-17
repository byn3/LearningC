#include<stdio.h>
#define NONBLANK '-'

int main(void)
{
  //declare 2 variables for the current and last character
  int c,lastc;
  //symbolic constant here connecting to up there
  lastc=NONBLANK;
  while((c=getchar())!=EOF)
  {
    if(c==' ') //check to see if this shit is a blank
    {
      if(lastc!=' ') //if the last shit was not a blank, put the char down
        putchar(c);
    }
    else //else it is not a blank from the first check so put that shit down
      putchar(c);
      //make last c be equal to current c so like bubble swap or temp stuff.
    lastc=c;
  }
return 0;
}
