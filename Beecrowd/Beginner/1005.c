#include "stdio.h"

int main() {

  float avg, num1, num2;

  scanf("%f %f", &num1, &num2);
  avg = (num1 * 3.5 + num2 * 7.5) / (3.5 + 7.5);
  printf("MEDIA = %.5f\n", avg);
  return 0;
}