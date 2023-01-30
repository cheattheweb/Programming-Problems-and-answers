#include "iostream"
#include <cstdio>
using namespace std;
int main() {
  int T, num1, num2, i, j;
  cin >> T;
  while (T--) {
    cin >> num1 >> num2;

    for (j = 0; j < num1; j++) {
      for (i = 0; i < j; i++) {
        printf("%d ", num2);
      }
      printf("\n");
    }
    for (j = num1; j > 0; j--) {
      for (i = j; i > 0; i--) {
        printf("%d ", num2);
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
