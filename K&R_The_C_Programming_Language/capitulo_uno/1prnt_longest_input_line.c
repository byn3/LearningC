#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
//this is a function that returns an int
int mgetline(char line[], int maxline);
//copies stuff
void copy(char to[], char from[]);
/* print the longest input line . LONGEST LINEEEE*/
main()
{
int len; /* current line length */
int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */
    max = 0;
    //while the current line length is greater than 0
    while ((len = mgetline(line, MAXLINE)) > 0)
      //if it is longer, update max to be len and make a copy
      //this while calls on both functions
        if (len > max) {
            max = len;
            copy(longest, line);
        }
if (max > 0) //after the while loop we check the if and print longest line
        printf("%s", longest);
        printf("char length: %d", max );
        /* have this line instead to fulfil exerc. 1.17 
        if (len > LIMIT) //after the while loop we check the if and print longest line
                printf("%s", line);
                can add an else to default case none or zero.
        */
    }


/* mgetline: reads line into character array s, return length
lim i lenth of the line?*/
    int mgetline(char s[], int lim){
        int c, i;
        //for as long as i goes, if i isnt \n or if i isnt the end of lim,
        for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        //make the char equal to element index. bascially putchar there
            s[i] = c;
        if (c == '\n') {
          //if we have a new line, increase i amount by 1
            s[i] = c;
            ++i;
        }
        //s[i] being \0 marks end of character array
        s[i] = '\0';
        //returns number of lines
        return i;
    }
/* copy: copy 'from' into 'to'; assume to is big enough */
    void copy(char to[], char from[])
    {
        int i;
        i = 0;
        //while to and from are not 0 increase i
        while ((to[i] = from[i]) != '\0')
            ++i;
    }
