#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
  int n=100;
  double tab[10];
  srand(time(0));

  for (size_t i = 0; i < 9; i++) {
    tab[i] = rand()%n;
  }

  for (size_t i = 0; i < 10; i++) {
    printf("%lf\n", tab[i]);
  }
}
