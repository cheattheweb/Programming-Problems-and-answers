#include "stdio.h"

int main() {

  int i, positive = 0;
  double num, sum = 0;
  for (i = 0; i < 6; i++) {
    scanf("%lf", &num);
    if (num > 0) {
      positive++;
      sum += num;
    }
  }
  printf("%d valores positivos\n", positive);
  printf("%.1lf\n", sum / positive);
  return 0;
}