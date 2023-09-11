#include "stdio.h"
int main() {
  int arr[10], i, n;
  scanf("%d", &n);

  arr[0] = n;
  for (i = 1; i <= 9; i++) {
    n *= 2;
    arr[i] = n;
  }
  for (i = 0; i <= 9; i++) {
    printf("N[%d] = %d\n", i, arr[i]);
  }
  return 0;
}