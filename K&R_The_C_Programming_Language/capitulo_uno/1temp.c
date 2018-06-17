#include <stdio.h>
int main() {
float fahr, celsius, lower, upper, step;
lower = 0;
upper = 300;
step = 20;
fahr = upper;
printf("%8s\n","Heading");//putting %7 does nothing because heading is a 7 char word so must do a number >7 to see a spacing difference
while (fahr >= 0) {
celsius = (5.0/9.0) * (fahr-32.0);
printf("%3.0f %6.1f\n", fahr, celsius);
fahr = fahr - step;
}}
