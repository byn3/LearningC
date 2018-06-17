/* Vertical Histogram of words in a Sentence
I cant get this to run a proper output
http://www.learntosolveit.com/cprogramming/Ex_1.13.2_His_vertical.html
*/
#include<stdio.h>
#define MAXWL 20  // Maximum length of a word
#define MAXNO 25 // Maximum No of words in a sentence
//output may be wrong if we exceeed.

int main()
{
    //create word array
  int word[MAXNO];
  int i,c,j,nc,nw, x;

  //initialize all the elements to zero.
  for(i=0;i<MAXNO;++i)
    word[i]=0;

  nc = nw = 0;
  //look through input till EOF
  while( (c=getchar()) != EOF)
  {
    ++nc; //nc is new character. keep increaseing for length of the word
    //if the char is a white space we increase new word (nw), we make
    //the word array at element id new word equal to length of word
    if( c ==' ' || c =='\n' || c =='\t')
    {
      word[nw] = nc -1; // -1 for excluding the space in the word length

      ++nw;
      nc = 0; /// resetting the word-length for the next word
    }
      //this should have build a word array that holds each length of all words
  }


  //this for loop is to check we print and have correct word array stuff
 for ( x=0; x <= MAXNO; x++){
  printf("%d,", word[x]);
  //I CANT GET IT TO WORK cant debug easily
}
  
  for( i = MAXWL; i >= 1; --i)
  {
    for(j=0;j <= nw;++j)
    {
      if( i <= word[j])
        putchar('*');
      else
        putchar(' ');
      }
  putchar('\n');
  }

return 0;
}
