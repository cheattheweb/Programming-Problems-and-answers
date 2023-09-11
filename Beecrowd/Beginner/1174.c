#include "stdio.h"

int main() {

  double arr[1000];
  int i;
  for (i = 0; i <= 99; i++) {
    scanf("%lf", &arr[i]);
  }
  for (int i = 0; i <= 99; i++) {
    if (arr[i] <= 10) {
    printf("A[%d] = %.1lf\n",i,arr[i]);
    }
  }

  return 0;
}