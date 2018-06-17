#include<stdio.h>
#define MAXCOL 50 // we determine 50 to be the column variable. anything past y=50 is a new line
#define TABVAL 8//8 spaces per tab

char line[MAXCOL];//every chacter is filled in this array, program calls this global var
int expandtab(int pos);//tabs can be folded so we need to covert to spaces and fold midway
int printline(int pos);
int getblank(int pos);
int newposition(int pos);

int main(void){
    int pos,c;
    pos = 0;
	//start at pos=0; for each char, place it in line array and check if statements
    while((c=getchar())!=EOF){
        line[pos] = c;

        if( c == '\t') //if the char is a tab, run expandtab function
            pos = expandtab(pos);
        if( c == '\n'){//if new line then print the line and reset pos back to zero
            printline(pos);
            pos = 0;
        }//if not tab or new line and the position is bigger than the column # we assigned
        else if( ++pos >= MAXCOL ){
		//we can just stop midword but with the getblank func we go back to find the last space
            pos = getblank(pos);
            printline(pos);
            pos = newposition(pos);
        }
    }
    return 0;
}

int expandtab(int pos){
    line[pos] = ' ';
	// expands line[pos]. so if pos=0, line will be line[8' ' chars,] and pos=8
    for(++pos; (pos < MAXCOL)&&((pos % TABVAL)!= 0); ++pos)
    line[pos] = ' ';

    if( pos >= MAXCOL){
        printline(pos);
        return 0;
    }
    else
        return pos;
}

int printline(int pos){
    int i;
    for(i = 0; i < pos; ++i)
        putchar(line[i]);
    if( pos > 0)
        putchar('\n');
}
//we track the previous space. start at the end and decrement until space is found.
//getblank determines new position. can be zero, which means new line.
int getblank(int pos){
    if( pos > 0)
        while( line[pos] != ' ')
            --pos;
    if(pos == 0) //if no space was found, pos is zero. edge case
        return MAXCOL;
    else //if space was found then return that position plus 1. the start of the word
        return pos + 1;
}
//if position is greater than maxcol or less than zero, return 0.
//this copies the position element char from j onto i for the max col length
//this replaces the contents starting from i=0.once for loop is done we return value of i which will be pos
int newposition( int pos){
    int i,j;

    if(pos <= 0 || pos >= MAXCOL)
        return 0;
    else{
        i = 0;
        for(j=pos;j < MAXCOL; ++j,++i)
        line[i] = line[j];
    }
    return i;
}
