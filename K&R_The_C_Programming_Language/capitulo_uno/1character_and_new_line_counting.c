#include <stdio.h>
int main()
{
  //declare nc and nl which stand for new charanc new line. initialize to 0.
    long nc, nl;
    nc = 0;
    nl = 0;
    //while the character is not EOF, add 1 to nc
    while (getchar() != EOF){
        ++nc;
        if (getchar()=='\n') //if the char is a new line scape char then +1 to nl
        ++nl;
      }
    printf("\ncharacter count: %ld\n new line count: %ld\n", nc, nl);
}
