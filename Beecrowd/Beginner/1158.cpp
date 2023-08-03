#include "iostream"
using namespace std;

int main() {

  int n, x, y, sum, count;
  cin >> n;
  for (int i = 0; i < n; i++) {
    sum = 0;
    count = 0;
    cin >> x >> y;
    for (int j = x;; j++) {
      if (j % 2 != 0) {
        sum += j;
        count++;
        if (count == y) {
          break;
        }
      }
    }
    cout << sum << endl;
  }

  return 0;
}