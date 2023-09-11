#include "iostream"
using namespace std;
int main() {
  int T, i, j, size, sort;
  cin >> T;
  for (i = 0; i < T; i++) {
    sort = 1;
    cin >> size;

    // input the array
    int arra[size];
    for (j = 0; j < size; j++) {
      cin >> arra[j];
    }

    // checking if the array is sorted
    for (j = 1; j < size; j++) {
      if (arra[j] < arra[j - 1]) {
        sort = 0;
        break;
      }
    }

    // print YES if the array is sorted or print NO
    if (sort == 1) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
