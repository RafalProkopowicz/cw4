#include <stdio.h>
#include <math.h>
int main() {
  double wzrost;
  char miara;

  printf("daj swoj wzrost (c=cm, i=cale)");
  scanf("%lf %c", &wzrost, &miara);

  if (miara=='c') {
    wzrost = wzrost * 0.393700787;
    printf("wzrost w i = %lf", wzrost );
  } else {
    wzrost = wzrost * 2.54;
    printf("wzrost w cm = %lf", wzrost );
  }
}
