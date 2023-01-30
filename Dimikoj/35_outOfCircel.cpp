#include "cmath"
#include "iostream"
using namespace std;

int main() {
  int T, Xc, Yc, radious, x1, y1;
  double result;
  cin >> T;
  while (T--) {
    cin >> Xc >> Yc;
    cin >> radious;
    cin >> x1 >> y1;

    result = sqrt(pow(Xc - x1, 2) + pow(Yc - y1, 2));
    if (result <= radious)
      cout << "The point is inside the circle" << endl;
    else
      cout << "The point is not inside the circle" << endl;
  }
  return 0;
}
