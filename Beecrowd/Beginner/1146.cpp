#include "iostream"
using namespace std;

int main() {
    int x;
  while (cin >> x) {
    if(x == 0) break;
    for (int i = 1; i < x; i++) {
      cout << i << " ";
    }
    cout << x << endl;
  }
  return 0;
}