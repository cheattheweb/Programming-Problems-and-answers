#include "stdio.h"

int main() {
  int number, hour;
  float dollar;
  scanf("%d %d %f", &number, &hour, &dollar);

  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2f\n", dollar * hour);
  return 0;
}