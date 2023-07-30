#include "iostream"
#include <cstdio>
using namespace std;

int main() {
  double x, y;
  do {
    cin >> x;
    if (x < 0 || x > 10) {
      cout << "nota invalida" << endl;
    }
  } while (x < 0 || x > 10);

  do {
    cin >> y;
    if (y < 0 || y > 10) {
      cout << "nota invalida" << endl;
    }
  } while (y < 0 || y > 10);

  printf("media = %.2lf", (x + y) / 2);

  return 0;
}
