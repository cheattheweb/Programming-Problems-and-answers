#include "stdio.h"
#include <math.h>

int main() {
  double a, b, c, r1, r2;
  scanf("%lf %lf %lf", &a, &b, &c);

  r1 = -1 * ((b - sqrt(b * b - 4 * a * c)) / (2 * a));
  r2 = -1 * ((b + sqrt(b * b - 4 * a * c)) / (2 * a));
  if (isnan(r1)) { // stackoverflow
  /*
  r1 == NAN false;
  */

    puts("Impossivel calcular");
  } else {
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n",r2 );
  }
  return 0;
}