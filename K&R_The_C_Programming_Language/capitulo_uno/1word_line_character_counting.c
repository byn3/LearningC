#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;


            /*
              We start with OUTSIDE a word,
              if we hit a whitespace (‘ ‘, t or n),
              we say, we are outside the word (state = OUT).
              When we read a character again which is not a
              whitespace and if were in OUT state earlier,
              we move to IN state (that is we saw a new word)
              and we increment nw. For every character we read,
              we increment nc and for every n we read, we increment nl.
              The program in the end prints, the nl, nw and nc.
            */
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("new lines:%d\nwords:%d\nchars:%d\n", nl, nw, nc);
}
