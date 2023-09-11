#include "stdio.h"

double area_tra(double x, double y, double z) { return ((x + y) * 0.5) * z; }

// main
int main() {
  double a, b, c;
  scanf("%lf%lf%lf", &a, &b, &c);

  if ((a + b) > c && (b + c) > a && (a + c) > b) {
    printf("Perimetro = %.1lf\n", a + b + c);
  } else {
    printf("Area = %.1lf\n", area_tra(a, b, c));
  }

  return 0;
}