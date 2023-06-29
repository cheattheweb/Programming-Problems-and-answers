
#include "stdio.h"

int main() {
  double n;
  // notes * 100;
  int arr[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
  int i, x;
  scanf("%lf", &n);
  x = n * 100;

  puts("NOTAS:");
  for (i = 0; i < 6; i++) {
    printf("%d nota(s) de R$ %.2lf\n", x / arr[i], arr[i] / 100.00);
    x %= arr[i];
  }
  puts("MOEDAS:");
  for (i = 6; i < 12; i++) {
    printf("%d moeda(s) de R$ %.2lf\n", x / arr[i], arr[i] / 100.00);
    x %= arr[i];
  }

  return 0;
}