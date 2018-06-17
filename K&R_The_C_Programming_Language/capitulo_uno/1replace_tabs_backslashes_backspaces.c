#include<stdio.h>

int main(void)
{
  int c;
//do the typical while c is not end of file thing
  while((c=getchar())!=EOF)
  {
    if(c=='\t')//when program finds a \t replace it with a \\t basically.
    {
      putchar('\\');
      putchar('t');
    }
    if(c=='\b')//repeat above code but for b
    {
      putchar('\\');
      putchar('b');
    }
    if(c=='\\')//repeat above but for backslash
    {
      putchar('\\');
      putchar('\\');
    }
    if(c !='\t' && c !='\b' && c!= '\\')
      putchar(c);// all other chars just putchar it
  }
return 0;
}
