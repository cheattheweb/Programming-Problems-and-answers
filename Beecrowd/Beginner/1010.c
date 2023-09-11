#include "stdio.h"

int main() {
  int product1, product2, product1_c, product2_c;
  double price1, price2;

  scanf("%d %d %lf", &product1, &product1_c, &price1);
  scanf("%d %d %lf", &product2, &product2_c, &price2);

  printf("VALOR A PAGAR: R$ %.2lf\n", product1_c * price1 + product2_c * price2);

  return 0;
}