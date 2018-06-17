#include<stdio.h>
//so it basically replaces all chars in words with *s
//updated code to account for consecutive spaces
int main(void)
{
  int c, count = 0;
//while c is not end of file...
  while((c=getchar())!=EOF)
  {
//if it is a white space, new line
    if( c == ' ' || c == '\n' || c == '\t'){
      if ( count == 0){
        putchar('\n');
        count++;
        }
      }
    else{//else put a fucken star baby
      putchar('*');
      count = 0 ;
    }
  }//return 0 to see if progeram works?
return 0;
}
