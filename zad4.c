#include <stdio.h>
#include <math.h>
int main() {
  double wiek;
  printf("daj swoj wiek");
  scanf("%lf", &wiek);

  double godz = wiek * 365 * 24; //dni godz
  double sec = wiek * 365 * 24 * 60 * 60; //dni godz min sec

  printf("l godz = %lf; l sec = %lf\n", godz, sec);
  return 0;
}
