#include "stdio.h"

int main() {

  int arr[5], i, even = 0, odd = 0, positive = 0, negative = 0;
  for (i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < 5; i++) {
    if (arr[i] % 2 == 0) {
      even++;
    } else {
      odd++;
    }

    if (arr[i] > 0) {
      positive++;
    } else if (arr[i] < 0) {
      negative++;
    }
  }
  printf("%d valor(es) par(es)\n", even);
  printf("%d valor(es) impar(es)\n", odd);
  printf("%d valor(es) positivo(s)\n", positive);
  printf("%d valor(es) negativo(s)\n", negative);

  return 0;
}