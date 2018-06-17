/*
I AM USING TRACK NAMES FROM THE ARTIST NE-YO.
Tracks were taken from http://www.song-list.net/neyo/songs
Left out some duplicate songs or video/ trailer songs and other ones.
The book has Frank Sinatra code But I like Ne-yo so im finna put down his shit.
HAHAHA OMG I MADE THIS WORK
*/
#include <stdio.h>
#include <string.h>

char tracks[][80] = { //max char per song is 80
  "1",
  "Addicted",
  "Ain't Thinking About You",
  "Alone With You",
  "Angel",
  "Back To What You Know",
  "Be The One",
  "Beautiful Monster",
  "Because of You",
  "Can We Chill",
  "Carry On",
  "Cause I Said So",
  "Champagne Life",
  "Closer",
  "Cracks In Mr. Perfect",
  "Crazy",
  "Crazy Love",
  "Do You",
  "Don't Make Em Like You ft. Wiz Khalifa",
  "Fade Into The Background",
  "Forever Now",
  "Genuine Only",
  "Get Down Like That",
  "Go On Girl",
  "I Ain't Gotta Tell You",
  "It Just Ain't Right",
  "Jealous",
  "Know Your Name",
  "Lazy Love",
  "Leaving Tonight",
  "Let Go",
  "Libra Scale",
  "Lie To Me",
  "Mad",
  "Make It Work",
  "Makin' A Movie",
  "Mirror",
  "Miss Independent",
  "Miss Right",
  "My Other Gun",
  "Nobody",
  "One In A Million",
  "Part Of The List",
  "Say It",
  "Sex With My Ex",
  "Sexy Love",
  "She Is",
  "Should Be You",
  "Shut Me Down",
  "Sign Me Up",
  "Single",
  "So Sick",
  "So You Can Cry",
  "Stay",
  "Stop This World",
  "Stress Reliever",
  "Telekinesis",
  "Time",
  "Unconditional",
  "What Have I Done?",
  "When You're Mad",
  "Why Does She Stay",
};

//tracks are global variable. find track before calling it from main
void find_track(char search_for[]) {
  int i;  for (i = 0; i < 62; i++) {
    if (strstr(tracks[i], search_for))
      printf("Track %i: '%s'\n", i, tracks[i]);
  }
}

int main(void) {
  char search_for[80];
  printf("Search for: ");
  fgets(search_for, 80, stdin);

  //added this code snippet i found online cause it did not work initially.
  size_t ln = strlen(search_for) - 1;
  if (search_for[ln] == '\n')
    search_for[ln] = '\0';
  //becuase fgets stores newline in the destination string so we trimed seatch for to get rid of /n

  find_track(search_for);
  return 0;
}
