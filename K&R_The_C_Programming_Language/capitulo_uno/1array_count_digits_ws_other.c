

/*

#include <stdio.h>
int main(){
int c, i, nwhite, nother;
int ndigit[10];

nwhite=nother=0;

for (i=0; i<10; ++i)
ndigit[i]=0;

while ((c = getchar()) !=EOF){
	if (c >= '0' && c <= '9')
		++ndigit[c-'0'];
	else if (c == ' ' || c== '\n' || c == '\t')
		++nwhite;
	else
		++nother;

	printf("digits = ");
	for (i = 0; i < 10; ++i)
		printf("%d's:"  " %d\n", i, ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
}

*/

//this is a shitty program i think?
//prints out multiple lines of digits. not sure fuction . too much loop outputs.
#include <stdio.h>
/* count digits, white space, others */
main()
{
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;


        printf("digits =");
        for (i = 0; i < 10; ++i)
            printf(" %d", ndigit[i]);
        printf(", white space = %d, other = %d\n",
            nwhite, nother);}
    }
