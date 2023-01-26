#include "iostream"
using namespace std;
int main() {
  int T, size, i, j, k;
  cin >> T;
  for (i = 0; i < T; i++) {

    cin >> size;
    int arra[size];
    for (j = 0; j < size; j++) {
      cin >> arra[j];
    }
    for (j = 0; j < size; j += 2) {
      printf("%d ", arra[j]);
    }
    printf("\n");
  }
  return 0;
}
