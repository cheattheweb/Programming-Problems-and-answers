#include "iostream"
#include <cstdio>
using namespace std;
int main() {

  int T, n1, n2, n3, temp;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    cin >> n1 >> n2 >> n3;
    if (n1 > n2) {
      temp = n1;
      n1 = n2;
      n2 = temp;
    }
    if (n1 > n3) {
      temp = n1;
      n1 = n3;
      n3 = temp;
    }
    if (n2 > n3) {
      temp = n2;
      n2 = n3;
      n3 = temp;
    }
    printf("Case %d: %d %d %d\n", i, n1, n2, n3);
  }
  return 0;
}
