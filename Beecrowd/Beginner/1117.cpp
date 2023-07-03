#include "iostream"
#include <cstdio>
using namespace std;

int main() {
  double x, y;
  while (1) {
    cin >> x;
    if (x > 10) {
      break;
    }
    cout <<  "nota invalida" << endl;
  }

  cin >> y;
  printf("media = %.2f\n", (x + y) / 2);

  return 0;
}
