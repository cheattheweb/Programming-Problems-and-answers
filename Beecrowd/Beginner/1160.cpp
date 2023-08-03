#include "iostream"
using namespace std;

int main() {

  int n, pa, pb, i, count;
  double g1, g2;
  cin >> n;
  for (i = 0; i < n; i++) {
    count = 0;
    cin >> pa >> pb >> g1 >> g2;
    while (true) {
      pa = pa + (pa * (g1 / 100));
      pb = pb + (pb * (g2 / 100));
      count++;
      if (pa > pb || count > 100) {
        break;
      }
    }
    if (count > 100) {
      cout << "Mais de 1 seculo." << endl;
    } else {
      cout << count << " anos." << endl;
    }
  }

  return 0;
}