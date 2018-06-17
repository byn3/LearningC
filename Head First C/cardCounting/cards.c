/*
* Program to evaluate face values.
* Released under the Vegas Public License.
* (c)2014 The College Blackjack Team.
insert any number between 2-9 at the prompt.
J Q K must be capitalized.
X to exit.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  char card_name[3];
  int count = 0;
  while (card_name[0]!='X'){
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    case 'X':
      continue; // a break would not free us from the loop since we inside the switch. we need a continue to go back and check the loop again
    default:
      val = atoi (card_name);
      if ((val < 1) || (val > 10)){
        puts ("I don't understand that value!");
        continue;
      }
    }
    if ((val > 2) && (val < 7)){
      count++;
    } else if (val == 10) {
      count --;
    }
    printf("Current count: %i\n", count);
  }
    return 0;
}
