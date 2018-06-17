#include<stdio.h>
#define TABINC 8 //symbolic constant defined. 8 spaces in 1 tab
int main(void){
    int nb,nt,pos,c;
    nb = 0; //blanks, spaces
    nt = 0; //tabs
    //for position is 1, until EOF, add 1 to it. we want to track its position
    for(pos=1;(c=getchar())!=EOF;++pos)
        if( c == ' '){ //if it is a blank, if a space is found,
            if((pos % TABINC) != 0)
		//if the position modulo 8 is anything but 0, increase blank
                ++nb;
            else{
		//the position is at an 8 multiple so blank is zero, new tab
                nb = 0;
                ++nt;
            }
        }
        else { //if the character was not a blank,
            for( ; nt > 0 ; --nt)
                putchar('\t'); //put a tab for all nt
                //try this for debugging///putchar('####');
                //added # to show debuggind and spaces
            if( c == '\t') // if the character is a tab make blank zero
                nb = 0;
            else //the char was not a tab or a blank?? i think
                for( ; nb > 0; --nb)
                    putchar(' ');
            //put the char down if not any blanks or tabs, when new line pos is 0.
            putchar(c);
            if(c == '\n')
                pos = 0;
		// if the char is a tab then the position is itself minus 1 mod 8 subtracted from 8 minus 1 plus pos
		//basically set it to previous tab minus 1. this replaces spaces with minimum tabs and spaces
            else if ( c == '\t')
                pos = pos + ( TABINC - (pos -1) % TABINC) - 1;
        }
    return 0;
}
