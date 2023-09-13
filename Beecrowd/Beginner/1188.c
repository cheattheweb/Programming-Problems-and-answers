#include "stdio.h"
#define END_ROW 7
#define START_ROW 11
#define START_CELL 1
#define MAX_CELL 10
#define COLUM 12
#define ROW 12
#define NUMBER_OF_ACTIVE_CELL 30
int main() {

  int i, j, k, count, temp;
  double result = 0, numbers[ROW][COLUM] = {};

  char ch;

  scanf("%c", &ch);

  for (int i = 0; i < ROW; i++) {
    for (int j = 0; j < COLUM; j++) {
      scanf("%lf", &numbers[i][j]);
    }
  }

  if (ch == 'S') {
    j = START_CELL;
    temp = j;
    k = MAX_CELL;
    for (i = START_ROW; i >= END_ROW; i--) {
      for (; j <= k; j++) {
        result += numbers[i][j];
      }
      k--;
      j = ++temp;
    }
    printf("%.1lf\n", result);
  } else {
    j = START_CELL;
    temp = j;
    k = MAX_CELL;
    for (i = START_ROW; i >= END_ROW; i--) {
      for (; j <= k; j++) {
        result += numbers[i][j];
      }
      k--;
      j = ++temp;
    }
    printf("%.1lf\n", result / NUMBER_OF_ACTIVE_CELL);
  }
  return 0;
}
