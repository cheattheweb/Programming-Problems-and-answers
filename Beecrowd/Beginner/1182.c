#include "stdio.h"

int main() {

  int t;
  double result = 0, numbers[12][12] = {};

  char ch;

  scanf("%d\n%c", &t, &ch);

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%lf", &numbers[i][j]);
    }
  }

  if (ch == 'S') {
    for (int i = 0; i < 12; i++) {
      result += numbers[i][t];
    }
  } else {
    for (int i = 0; i < 12; i++) {
      result += numbers[i][t];
    }
    result /= 12.0;
  }

  printf("%.1lf\n", result);

  return 0;
}