#include "stdio.h"

int main() {
  int hour = 0, minutes = 0, seconds;
  scanf("%d", &seconds);
  // calculate hours
  if (seconds / 3600) {
    hour = seconds / 3600;
    seconds = seconds - (hour * 3600);
  }
  // calculate minutes
  if (seconds / 60) {
    minutes = seconds / 60;
    seconds = seconds - (minutes * 60);
  }

  printf("%d:%d:%d\n", hour, minutes, seconds);

  return 0;
}