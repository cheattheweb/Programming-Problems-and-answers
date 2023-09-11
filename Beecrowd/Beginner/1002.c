#include "stdio.h"

int main() {

  double r;
  const double PI =
      3.14159; // this value must be double or the output may give different ans

  scanf("%lf", &r);
  printf("A=%.4lf\n", PI * r * r);

  return 0;
}