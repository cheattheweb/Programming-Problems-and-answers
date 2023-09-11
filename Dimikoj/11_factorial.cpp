#include "iostream"
using namespace std;

int main() {

  int T, n, i, j;
  long long factorial;
  cin >> T;
  for (i = 0; i < T; i++) {
    factorial = 1;
    cin >> n;
    for (j = 1; j <= n; j++) {
      factorial = factorial * j;
    }
    printf("%lld\n", factorial);
  }
  return 0;
}
