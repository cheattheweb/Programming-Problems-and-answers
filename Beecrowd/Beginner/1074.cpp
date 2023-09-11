#include "iostream"
#include <cstdio>
using namespace std;

int main() {
  int n, x;
  cin >> n;
  while (n) {
    cin >> x;
    if (x < 0 && !(x % 2)) {
      puts("EVEN NEGATIVE");
    } else if (x > 0 && !(x % 2)) {
      puts("EVEN POSITIVE");
    } else if (x > 0) {
      puts("ODD POSITIVE");
    } else if (x < 0) {
      puts("ODD NEGATIVE");
    } else {
      puts("NULL");
    }
    n--;
  }
  return 0;
}
