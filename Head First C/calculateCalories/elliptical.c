#include <stdio.h>
#include <hfcal.h>

int main() {
  display_calories(115.2, 11.3, 0.79);
  return 0;
}
// need to create elliptical .o object via gcc -I./includes -c elliptical.c -o elliptical.o
//then create archive library from hfcal.o and store it in ./libs ar -rcs ./libs/libhfcal.a hfcal.o
//lastly create the elliptical executable using elliptical.o and hfcal archive gcc elliptical.o -L./libs -lhfcal -o elliptical
//run the program with /eliptical and make sure to include the header .h file
