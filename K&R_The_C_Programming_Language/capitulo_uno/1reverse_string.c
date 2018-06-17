#include<stdio.h>
#define MAXLINE 1000

int mgetline(char line[],int lim);
void reverse(char rline[]);//same as before. add a reverse function

int main(void){
  int len;
  char line[MAXLINE];

  while((len=mgetline(line,MAXLINE))>0){
    reverse(line);//calls the function here
    printf("%s",line);
  }
  return 0;
}
//typical function to get line and count characters
int mgetline(char s[],int lim){
  int i,c;
  for(i=0;i<lim-1 &&(c=getchar())!=EOF && c != '\n';++i)
    s[i] = c;
  if( c == '\n'){
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
//the main thing the exercise wants,
void reverse(char rline[]){
  int i,j;
  char temp;
//for as long as the char is not \0 meaning end of string array
//find the end of the char array
  for(i=0;rline[i]!='\0';++i)
    ;
    //this part here makes a for loop and stops i when it is /0
  --i;
  //it checks if the last thing next to /0 is a /new line
  if(rline[i]=='\n')
  --i;

  j = 0;

//so i is being reduced while j increases
//make a temp be array[j] which is also line[i]
//make line[i]temp and then swap.
/*this swaps i and j around.
the beginning is j which is swapped with the end, i
this is like a temp bubble sort swap.
eventually if array is even they will be on same numbers.
 */
 //the j > i is a quick trick to help stop it after midpoint.
  while(j < i){
    temp = rline[j];
    rline[j] = rline[i];
    rline[i] = temp;
    --i;
    ++j;
  }
}
