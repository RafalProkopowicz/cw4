#include <stdio.h>
#include <math.h>

int main() {
  double x,y,z;
  double temp;
  printf("daj 3 liczby");
  scanf("%lf %lf %lf", &x , &y , &z);

  while (x>=y || y>=z) {

      if (x>=y) {
        temp = x;
        x = y;
        y = temp;
      }

      if (y>=z) {
        temp = y;
        y = z;
        z = temp;
      }

      printf("%lf %lf %lf", x , y , z);

  }
}
