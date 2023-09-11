#include "stdio.h"

int main() {

  int a, b, c, temp, arr_1[3];
  scanf("%d %d %d", &a, &b, &c);

  arr_1[0] = a;
  arr_1[1] = b;
  arr_1[2] = c;

  // Bubble sort
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }

  if (b > c) {
    temp = b;
    b = c;
    c = temp;
  }

  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }
  printf("%d\n%d\n%d\n\n", a,b,c);
  printf("%d\n%d\n%d\n", arr_1[0], arr_1[1], arr_1[2]);

  return 0;
}