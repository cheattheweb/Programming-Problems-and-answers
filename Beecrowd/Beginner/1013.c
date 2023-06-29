#include "math.h"
#include "stdio.h"

int main() {

  int arr[3], i, max, j;
  for (i = 0; i < 3; i++) {
    scanf("%d", &arr[i]);
  }

  max = arr[0];
  for (j = 0; j < 3; j++) {

    for (i = 0; i < 3; i++) {
      if (max < arr[i]) {
        max = arr[i];
      }
    }
  }

  printf("%d eh o maior\n", max);
  return 0;
}