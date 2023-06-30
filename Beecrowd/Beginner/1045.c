#include "stdio.h"

// what type of triangle
void tri_type(double a, double b, double c) {
  if (a >= (b + c)) {
    puts("NAO FORMA TRIANGULO");
  } else if (a * a == (b * b + c * c)) {
    puts("TRIANGULO RETANGULO");
  } else if (a * a > (b * b + c * c)) {
    puts("TRIANGULO OBTUSANGULO");
  } else if (a * a < (b * b + c * c)) {
    puts("TRIANGULO ACUTANGULO");
  }

  if ((a == b) && (b == c)) {
    puts("TRIANGULO EQUILATERO");
  } else if ((a == b) || (b == c) || (a == c)) {
    puts("TRIANGULO ISOSCELES");
  }
}

int main() {

  double a, b, c, temp;
  scanf("%lf %lf %lf", &a, &b, &c);

  // Bubble sort
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }

  if (b > c) {
    temp = b;
    b = c;
    c = temp;
  }

  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }
tri_type(c, b,a);

  return 0;
}