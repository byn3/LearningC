#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* now() {
  time_t t;
  time (&t);
  return asctime(localtime (&t));
}

//master control program utility/ records guard patrol check ins
int main() {
  char comment[80];
  char cmd[120];
  fgets(comment, 80, stdin);
  sprintf(cmd, "echo '%s %s' >> reports.log", comment, now());
  //doing this instead gives bat shit crazy results and hackssss
  //if you put the comment like so for the stdin ' && ls / && echo'
  system(cmd);
  return 0;
}
//in bash or wahtever command line,
//type this gcc systemOutput.c -o systemOutput
//then type systemOutput. then put in the comment for stdin

/*
this is a terrible piece of code
bad for security. if someone puts in an ' we are screwed.'
if the path variables cause system() function to call the wrong program.
if the program we call needs to have a specific environment set up first.
system() is easy to use but dangerous.
*/
