#include "stdio.h"

int main() {

  int i, j, temp;
  double result = 0, numbers[12][12] = {};

  char ch;

  scanf("%c", &ch);

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%lf", &numbers[i][j]);
    }
  }

  if (ch == 'S') {
    j = 1;
    for (i = 0; i < 12; i++) {
      temp = j;
      for (; j < 12; j++) {
        result += numbers[i][j];
      }
      j = ++temp;
    }
  } else {
    j = 1;
    for (i = 0; i < 12; i++) {
      temp = j;
      for (; j < 12; j++) {
        result += numbers[i][j];
      }
      j = ++temp;
    }

    result /= 66.0;
  }
  printf("%.1lf\n", result);
  return 0;
}