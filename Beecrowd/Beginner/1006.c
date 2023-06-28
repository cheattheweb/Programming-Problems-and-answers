#include "stdio.h"

int main() {

  double num1, num2, num3, avg;
  scanf("%lf %lf %lf", &num1, &num2, &num3);
  avg = (num1 * 2 + num2 * 3 + num3 * 5) / (2 + 3 + 5);

  printf("MEDIA = %.1lf\n", avg);
  return 0;
}