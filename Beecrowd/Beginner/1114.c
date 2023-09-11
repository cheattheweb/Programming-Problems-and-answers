#include "stdio.h"

int main() {
  int num;
  while (1) {
    scanf("%d", &num);
    if (num == 2002) {
      puts("Acesso Permitido");
      break;
    }
    puts("Senha Invalida");
  }
  return 0;
}
