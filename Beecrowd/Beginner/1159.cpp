#include "iostream"
using namespace std;

int main() {
  int x, sum, count;
  while (cin >> x) {
    if (x == 0)
      break;
    sum = 0;
    count = 0;
    for (int j = x;; j++) {
      if (j % 2 == 0) {
        sum += j;
        count++;
        if (count == 5) {
          break;
        }
      }
    }
    cout << sum << endl;
  }
  return 0;
}