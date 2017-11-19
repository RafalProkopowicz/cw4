#include <stdio.h>
#include <math.h>


void swap(double *a, double *b){
  double temp;
    temp = *a;
    *a = *b;
    *b = temp;

}


int main(void) {
  double tab[3];
  printf("daj 3 liczby");
  scanf("%lf %lf %lf", tab[0], tab[1],tab[2]);

  while (tab[0]>=tab[1] || tab[1]>=tab[2]) {

    for (size_t i = 0; i < 3-1; i++) {
        swap(&tab[i], &tab[(i+1)]);
      }
      printf("%lf %lf %lf", tab[0] , tab[1] , tab[2]);
  }
}
