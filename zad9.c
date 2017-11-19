#include <stdio.h>
#include <math.h>
int main() {
  //double
  double a = 1.0 / 81;
  double b = 0;
  for (int i = 0; i < 729; ++ i)
  b += a;
  printf("%.15g\n", b);
  //float
  float fa = 1.0 / 81;
  float fb = 0;
  for (int i = 0; i < 729; ++ i)
  fb += fa;
  printf("%.15g\n", fb);

  //Roznica bierze sie z okreslonego zakresu dokładności roznych typow
  //jedne maja wieksza dokladnosc drugie mniejsza

}
