#include <stdio.h>

enum response_type {DUMP, SECOND_CHANCE, MARRIAGE};
typedef struct {
  char *name;
  enum response_type type;
} response;

void dump(response r) {
  printf("Dear %s,\n", r.name);
  puts("Unfortunately your last date contacted us to");
  puts("say that they will not be seeing you again");
}

void second_chance(response r) {
  printf("Dear %s,\n", r.name);
  puts("Good news: your last date has asked us to");
  puts("arrange another meeting. Please call ASAP.");
}

void marriage(response r) {
  printf("Dear %s,\n", r.name);
  puts("Congratulations! Your last date has contacted");
  puts("us with a proposal of marriage.");
}

void (*replies[])(response) = {dump, second_chance, marriage};

int main() {
  response r[]= {
    {"Chad", DUMP}, {"Ne-Yo", SECOND_CHANCE},
    {"Sarah", SECOND_CHANCE}, {"Enrique Iglesias", MARRIAGE}
  };
  int i;
  for (i = 0; i < 4; i++){
    (replies[r[i].type])(r[i]);
  }
  return 0;
}

/*
Old code that used a switch inside the loop
(switch(r[i].type){
  case DUMP:
    dump(r[i]);
    break;
  case SECOND_CHANCE:
    second_chance(r[i]);
    break;
  default:
    marriage(r[i]);
})
replaced it with the array of function pointers
replies[r[i].type])(r[i])
replies is my array of function names
r[i].type is my values 0-2 for dump, 2nd chance, and marriage
(r[i]) is calling the function and calling it the response data r[i]
doing it this way makes code easier to manage due to ease of scalability.
just add new parameter name in enum response_type and the void *replies
*/
