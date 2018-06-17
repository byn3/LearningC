#include<stdio.h>
//THIS DOES NOT CHECK FOR TABS
int main() {
    int c;
    c = getchar();
    //c gets next input, if it is not EOF do loop
    while (c != EOF) {
      //is it is a blank white space, new line
        if (c == ' ') {
            putchar('\n');
        }
        //else put that char down. it can be a new line or a tab
        else {
            putchar(c);
        }
        //get the next char, put it in variable c, and run the loop check
        c = getchar();
    }
}
