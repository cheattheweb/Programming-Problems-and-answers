#include "iostream"
#include <cstdio>
using namespace std;

int main() {

  int par[15] = {}, impar[15] = {};
  int i, j = 0, k = 0, num, l;
  for (i = 0; i < 15; i++) {
    cin >> num;
    if (num % 2 == 0) {
      par[j] = num;
      if (j == 4) {
        for (l = 0; l < 5; l++) {
          printf("par[%d] = %d\n", l, par[l]);
        }
      }
      j++;
    } else {
      impar[k] = num;
      if (k == 4) {
        for (l = 0; l < 5; l++) {
          printf("impar[%d] = %d\n", l, impar[l]);
        }
      }
      k++;
    }
  }

  for (i = 5; impar[i] != '\0'; i++) {
    printf("impar[%d] = %d\n", i - 5, impar[i]);
  }
  for (i = 5; par[i] != '\0'; i++) {
    printf("par[%d] = %d\n", i - 5, par[i]);
  }

  return 0;
}