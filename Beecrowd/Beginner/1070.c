#include "stdio.h"

int main() {

  int num;
  scanf("%d", &num);

  if (num % 2 != 0) {
    printf("%d\n", num);
    for (int i = 1; i <= 5; i++) {
      num += 2;
      printf("%d\n", num);
    }
  } else {
    num += 1;
    printf("%d\n", num);
    for (int i = 0; i < 5; i++) {
      num += 2;
      printf("%d\n", num);
    }
  }

  return 0;
}
