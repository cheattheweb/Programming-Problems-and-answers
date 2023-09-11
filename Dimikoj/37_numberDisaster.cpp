#include "iostream"
#include <cstdio>
using namespace std;
int main() {
  int T, num, rev;
  cin >> T;
  while (T--) {
    cin >> num;
    rev = 0;
    while (num != 0) {
      rev = rev * 10;
      rev += num % 10;
      num /= 10;
    }
    printf("%d\n", rev);
  }
  return 0;
}
