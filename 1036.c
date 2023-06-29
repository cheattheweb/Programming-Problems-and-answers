#include "math.h"
#include "stdio.h"
#include <math.h>

int main() {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);

  if (a != 0 && b != 0 && c != 0 ) {
    printf("R1 = %.5lf\n", -1 * ((b - sqrt(b * b - 4 * a * c)) / (2 * a)));
    printf("R2 = %.5lf\n", -1 * ((b + sqrt(b * b - 4 * a * c)) / (2 * a)));
  } else {
    puts("Impossivel calcular");
  }
  return 0;
}