#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
  int tab[10] = {16,3,5,2,5,56,254,3,0,156};
  int max = tab[0],min = tab[0];

  for (size_t i = 0; i < 10; i++) {
    if (tab[i]>max) {
      max=tab[i];
    }
    if (tab[i]<min) {
      min=tab[i];
    }
  }
  printf("max %d; min %d\n", max, min);

}
