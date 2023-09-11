#include "stdio.h"

void order(int num1, int num2) {
  printf("%s\n", num1 > num2 ? "Decrescente" : "Crescente");
}
int main() {
  int num1, num2;
  while (1) {
    scanf("%d%d", &num1, &num2);
    if (num1 == num2)
      break;
    order(num1, num2);
  }

  return 0;
}
