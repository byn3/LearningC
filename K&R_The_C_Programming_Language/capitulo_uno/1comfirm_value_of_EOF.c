#include <stdio.h>

/*
int main ()
{
    int c;
    char value = ((c = getchar()) != EOF);
    while (value)
    {
        printf("%d\n", c);
        value = ((c = getchar()) != EOF);
    }
    printf("\n%d\n", c != EOF);
}
*/
/*
I was having tons of trouble with this very problem.

And also prints "10" if I press Carriage Return key.

Also, page 20 K&R states that the ASCII value for '\n' is 10. So perhaps you are returning that value unintentionally?

Everytime I come back to it, I forget that Carriage Return key IS NOT EOF.

Like user Sayyora points out above, you need a key combo to signal EOF.

For Linux it is:

Ctrl + D

Also, to kill program (in X-Term at least), it is:

Ctrl + C
*/
/*
  int c,g;
  c=getchar();
  while ((c = getchar()) != EOF){
      putchar(c);
  g = (getchar() != EOF);
}
*/

int main(int argc, char *argv[]) {
    int c;
    while ((c = getchar()) != EOF) {
        printf("%d ", c != EOF);
        putchar(c);
    }
    printf("\n%d\n", c != EOF);
}
