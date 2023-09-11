#include "cmath"
#include "iostream"
using namespace std;

int main() {

  int T, x, k, i;
  long long sum;
  cin >> T;
  while (T--) {
    sum = 0;
    cin >> x >> k;
    for (i = 0; i <= k; i++) {
      sum += pow(x, i);
    }
    printf("Result = %lld\n", sum);
  }
  return 0;
}
