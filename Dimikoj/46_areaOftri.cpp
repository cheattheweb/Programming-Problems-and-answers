#include "cmath"
#include "iostream"
using namespace std;

int main() {

  int T;
  double a, b, c, s;

  cin >> T;
  while (T--) {
    cin >> a >> b >> c;
    s = (a + b + c) / 2;

    a = s - a;
    b = s - b;
    c = s - c;

    s = s * a * b * c;
    printf("Area = %0.3lf\n", sqrt(s));
  }
  return 0;
}
