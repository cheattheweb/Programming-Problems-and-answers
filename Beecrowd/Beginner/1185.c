#include "stdio.h"

int main() {

  int i, j, count;
  double result = 0, numbers[12][12] = {};

  char ch;

  scanf("%c", &ch);

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%lf", &numbers[i][j]);
    }
  }

  if (ch == 'S') {
    count = 11;
    for (i = 0; i < 12; i++) {
      for (j = 0; j < count; j++) {
        result += numbers[i][j];
      }
      count--;
    }
  } else {
    count = 11;
    for (i = 0; i < 12; i++) {
      for (j = 0; j < count; j++) {
        result += numbers[i][j];
      }
      count--;
    }

    result /= 66.0;
  }
  printf("%.1lf\n", result);
  return 0;
}