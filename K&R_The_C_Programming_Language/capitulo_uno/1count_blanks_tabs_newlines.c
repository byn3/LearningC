#include<stdio.h>

int main() {
  //declare all the variables, c, new line, tab, new space
    int c, nl, nt, ns;
    nl = 0;
    nt = 0;
    ns = 0;
    //whole it is not the EOF, do this loop
    while ((c = getchar()) != EOF) {
        if (c == '\n') //if this then this
            ++nl;
        if (c == '\t')//if this then do dat
            ++nt;
        if (c == ' ')//if it a ghost add more space yo
            ++ns;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", ns, nt, nl);
}
