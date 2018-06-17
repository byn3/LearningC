#include<stdio.h>
#define TABINC 8 //declare symbolic constant. 8 spaces in 1 tab
//8 is the OG. 4 is the new editors ad python and shit. 8 IS OG
int main(void){
  int nb,pos,c;
  nb = 0;//nb is number of blanks
  pos = 1;
//start at initial pos 1.
//do a loop for input
  while((c=getchar())!=EOF){
    if( c == '\t'){
      //if the char is a new tab then nb is [8-((pos-1)%8)]
      //this here is why nb is and gets positive positive!
      //this part here calculates how many spaces
      //are needed in the relative line positioning
      nb = TABINC - (( pos - 1) % TABINC);
      while( nb > 0){
        //while nb is positive
        putchar('#');//using # here as placeholder for spaces. to see for debugging
        ++pos;
        --nb;
      }
    }
    //there is a new line, reset the positioning o the line! pos is 1 again
    else if( c == '\n'){
      putchar(c);
      pos = 1;
    }
    else{
      //so if it not a tab or newline, put in the character and increase pos
      putchar(c);
      ++pos;
    }
  }
  return 0;
}
