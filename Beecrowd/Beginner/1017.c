#include "stdio.h"

int main() {

  int time, speed;
  scanf("%d %d", &time, &speed);

  double spent = (time * speed) / 12.0;
  printf("%.3lf\n", spent);
  return 0;
}