#include<stdio.h>
#define TNOCHAR 128  /* Total Number of characters is 128: 0 - 127 */

int main(void)
{
    int c,i,j;
    int character[TNOCHAR];//macke an array size 128
    //for each element, initialize to zero
    for(i=0;i<TNOCHAR;++i)
        character[i] = 0;
    //while not EOF, increase that value by 1 of the char
    while((c=getchar())!=EOF)
        ++character[c];
    //for the length of the 128, print i,
    for(i=0;i<TNOCHAR;++i)
    {
        putchar(i);
        //inner loop prints out amount of *s matching the element size number
        for(j=0;j<character[i];++j)
            putchar('*');
        //new line and repeat loop
        putchar('\n');
    }
return 0;
}
