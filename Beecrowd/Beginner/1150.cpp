#include "iostream"
using namespace std;

int main() {

  int x, z, i, sum;
  cin >> x;
  while (cin >> z) {
    if (z > x)
      break;
  }
  sum = x;
  for (i = 1;; i++) {
    sum = sum + (x + i);
    if (sum > z) {
      break;
    }
  }
  cout << i + 1 << endl;

  return 0;
}