#include "iostream"
using namespace std;

int main() {

  int n, x, i, j, sum;
  cin >> n;
  for (i = 0; i < n; i++) {
    sum = 0;
    cin >> x;
    for (j = 1; j < x; j++) {
      if (x % j == 0) {
        sum += j;
      }
    }
    if (sum == x) {
      cout << x << " eh perfeito" << endl;
    } else {
      cout << x << " nao eh perfeito" << endl;
    }
  }

  return 0;
}