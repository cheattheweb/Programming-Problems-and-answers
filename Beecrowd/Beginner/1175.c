#include "stdio.h"

int main() {

  int arr[20], i, j = 19, temp;
  for (i = 0; i < 20; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 10; i++) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    j--;
  }
  for (i = 0; i < 20; i++) {
    printf("N[%d] = %d\n", i, arr[i]);
  }
  return 0;
}