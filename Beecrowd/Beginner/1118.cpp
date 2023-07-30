#include "iostream"
using namespace std;
void calcu() {
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

  printf("media = %.2lf\n", (x + y) / 2);
}
int main() {
  bool x = true;
  int y = 0;
  do {
    calcu();
    while (true) {
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> y;
      if (y == 1) {
        y = 1;
        break;
      } else if (y == 2) {
        x = false;
        break;
      } else {
        continue;
      }
    }
  } while (x == true);

      return 0;
}
