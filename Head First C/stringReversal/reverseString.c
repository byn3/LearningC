#include <stdio.h>
#include <string.h>

void print_reverse(char *s){
  size_t len = strlen(s);
  char *t = s + len - 1;
  while (t >= s) {
    printf("%c", *t);
    t = t - 1;
  }
  puts ("");
}

int main() {
  char *juices[] = {
    "dragonfruit",
    "waterberry",
    "sharonfruit",
    "uglifruit",
    "rumberry",
    "kiwifruit",
    "mulberry",
    "strawberry",
    "blueberry",
    "blackberry",
    "starfruit"
  };
  char *a; //output is
  puts(juices[6]); //mulberry
  print_reverse(juices[7]); //reversed strawberry
  a = juices[2];
  juices[2] = juices[8];
  juices[8] = a;
  puts(juices[8]); //sharonfruit which is juices 2. a is 2. 8 is a and 2
  print_reverse(juices[(18 + 7) / 5]); //reversed kiwifruit reverses 5
  puts(juices[2]); //blueberry which was juices 8
  print_reverse(juices[9]); //reversed blackberry
  juices[1] = juices[3];
  puts(juices[10]); //starfruit
  print_reverse(juices[1]); //reversed uglyfruit
  return 0;
}
