#include <stdio.h>
#include <math.h>

int main() {

    //gcc -std=c99 -pedantic -lm

  double x;

  printf("daj x");
  scanf("%lf", &x);

  //zmiana typu zmiennej
  int y=x;
  printf("%lf zaokraglono do %d\n", x, y);

  y=round(x);

  //round nie wykrywa
  printf("%lf zaokraglono do %d\n", x, y);

}
