#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//comparator functions go here. can use a #include "local_file_name.c"
//#include "compareNames.c"
//#include "compareRectangles.c"
//#include "compareScores.c"
int compareScores(const void* score_a, const void* score_b) {
  int a = *(int*)score_a;
  int b = *(int*)score_b;
  return a - b;
}

int compareNames(const void* a, const void* b) {
  //a string is a pointer to a char so the pointers given are pointers to pointers
  char** sa = (char**)a;
  char** sb = (char**)b;
  //use * to find actual string values
  return strcmp(*sa, *sb);
}

int main() {
  int scores[] = {543,323,32,554,11,3,112};
  int i;
  qsort(scores, 7, sizeof(int), compareScores);
  puts("These are the scores in order:");
  for (i = 0; i < 7; i++) {
    printf("Score = %i\n", scores[i]);
  }
  char *names[] = {"Karen", "Mark", "Brett", "Molly"};
  qsort(names, 4, sizeof(char*), compareNames);
  puts("These are the names in order:");
  for (i = 0; i < 4; i++) {
    printf("%s\n", names[i]);
  }
  return 0;
}
