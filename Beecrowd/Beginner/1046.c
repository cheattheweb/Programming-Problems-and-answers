#include "stdio.h"

int main() {
  int h1, h2;
  scanf("%d%d", &h1, &h2);

  if (h1 == h2) {
    printf("O JOGO DUROU %d HORA(S)", 24);
  } else if (h1 <= h2) {
    printf("O JOGO DUROU %d HORA(S)", h2 - h1);
  } else {
    printf("O JOGO DUROU %d HORA(S)", 24 - h2 + h1);
  }

  return 0;
}