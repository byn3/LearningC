#include<stdio.h> //can only remove /*s and not //

void rcomment(int c);//remove comment
void incomment(void);//we found and are in a comment
void echo_quote(int c);

int main(void){
    int c,d;

    printf(" To Check /* Quoted String */ \n");

    while((c=getchar())!=EOF)
        rcomment(c);

    return 0;
}

void rcomment(int c){
    int d;
    if( c == '/'){//if the next character after c=/ is d=*, then comment!
        if((d=getchar())=='*')
         incomment(); //call this function
        else if( d == '/'){// else if it is // print first char, start at d?
            putchar(c);
            rcomment(d);
        }
        else{//if it was not a // then put the chars back
            putchar(c);
            putchar(d);
        }
    }
    else if( c == '\''|| c == '"')//we found a \" or \' escape char instead
        echo_quote(c);
    else // if / is followed by any other char we print it
        putchar(c);
}

void incomment(){
    int c,d;

    c = getchar();
    d = getchar();

    while(c!='*' || d !='/'){ //while not */ , scan comment
        c = d;
        d = getchar();
    }
}

void echo_quote(int c){
    int d;

    putchar(c);
    //we put all the characters until we find matching character again, c is either a \' or \"
    while((d=getchar())!=c){
        putchar(d);
        //if we find an escape char then we read them literally as 2 chars and print them
        if(d = '\\')
            putchar(getchar());
    }
    putchar(d);
}


/*//SHORTER BUT MORE ADVANCED CODE
#include <stdio.h>

void remove_cmmnt(char *s){//wtf is char *s
    int i,j; //make i and j zero, while s[j]?, no increments?
    for(i=j=0; s[j] ;  ){
        if(s[j]=='/' && s[j+1] && s[j+1]=='/')//for each s[j], and if s[j+1] exists and is /, it is a //
            for(j+=2; s[j] && s[j++]!='\n';  )	; // we remove everthing past the // until new line
        else if(s[j]=='/' && s[j+1] && s[j+1]=='*') //if it is a /*, we remove until * / is found
            for(j+=2; s[j] && s[++j] && (s[j-1]!='*' || s[j]!='/' || !j++); );
        else //we make and increase i and j
            s[i++]=s[j++];
    } //we call the zero char end of char array
    s[i]='\0';
}

int main(){
    char s[]="/*123*** /Hello // Cross\n World /* **NachLeCoders";
    remove_cmmnt(s);//removes comments
    puts(s);//puts the rest?
    return 0;//check if works, -1 is no worky
}
*/
