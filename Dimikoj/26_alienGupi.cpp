#include "iostream"
using namespace std;
int main() {
  int T, i, days;
  double x;
  cin >> T;
  for (i = 0; i < T; i++) {
    days = 0;
    cin >> x;
    while (1) {
      if (x <= 1) {
        break;
      } else {
        x /= 2;
        days++;
      }
    }
    printf("%d days\n", days);
  }
  return 0;
}
