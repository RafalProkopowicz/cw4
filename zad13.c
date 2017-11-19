#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
  int n=10, suma=0;
  int tab[100];

//wpisanei do tablicy
  for (size_t i = 0; i < n; i++) {
    tab[i] = getchar();
  }
//elementy tablicy
  for (size_t i = 0; i < n; i++) {
    printf("%d\n", tab[i]);
  }

  //suma
  for (size_t i = 0; i < n; i++) {
    suma = suma + tab[i];
  }
  printf("suma %d\n", suma);
}
