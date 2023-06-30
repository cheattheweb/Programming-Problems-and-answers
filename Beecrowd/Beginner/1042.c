#include "stdio.h"

int main() {

  int arr[3], arr_1[3], temp, i, j;
  for (int i = 0; i < 3; i++) {
    scanf("%d", &arr[i]);
  }
  arr_1[0] = arr[0];
  arr_1[1] = arr[1];
  arr_1[2] = arr[2];

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (arr[j + 1] < arr[j]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        break;
      }
    }
  }
  printf("%d\n%d\n%d\n\n", arr[0], arr[1], arr[2]);
  printf("%d\n%d\n%d\n", arr_1[0], arr_1[1], arr_1[2]);

  return 0;
}