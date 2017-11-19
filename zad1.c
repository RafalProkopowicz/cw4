#include <stdio.h>
#include <math.h>
int main() {
  double promien;
  printf("daj r");
  scanf("%lf", &promien);
  double pole = M_PI * promien * promien;
  double obwod = 2 * M_PI * promien;

  printf("pole = %lf; obwód = %lf\n", pole, obwod);
  return 0;
}
