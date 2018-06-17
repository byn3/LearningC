//this code does not work to check for revered ][ or }{
//it only counts the presence of syntaxes and will fail some test cases.
#include<stdio.h>
int brace,brack,paren;
void incomment();
void inquote(int c);
void search(int c);

int main(void){
    int c;
    extern int brace,brack,paren; //global variables, counters

    while((c=getchar())!=EOF)
        if( c == '/') //we are in a multi line comment
            if((c=getchar())== '*')
                incomment();////ignore everything in a comment basically
            else
                search(c);//tthe counter function for syntax pairs
        else if( c == '\'' || c == '"')
            inquote(c);//we are in a quote, disregard quote stuff
        else
            search(c);//count! keep track

//if there were any mismatched pairs then the variables will be !0
    if( brace != 0){
        printf("\nUnmatched curly braces {}\n");
        brace = 0;
    }
    if( brack != 0){
        printf("Unmatched brackets []\n");
        brack = 0;
    }
    if( paren != 0){
        printf("Unmatched parenthesis ()\n");
        paren = 0;
    }
    return 0;
}

//ignore everything in a comment basically
void incomment(){
    int c,d;
    c = getchar();
    d = getchar();

    while(c != '*' || d != '/'){
        c = d;
        d = getchar();
    }
}

//we scan the system until we find the next quote pair,
//disregard insides like the comment
void inquote(int c){
    int d;
    putchar(c);
    while((d=getchar())!=c)
        if( d == '\\')
            getchar();
}

//tthe counter function for syntax pairs
void search(int c){
    extern int brace,brack,paren;

    if ( c == '{')
        --brace;
    else if ( c == '}')
        ++brace;
    else if( c == '(')
        --brack;
    else if( c == ')')
        ++brack;
    else if( c == '[')
        --paren;
    else if( c == ']')
        ++paren;
}
