#include "iostream"
#include <cstdio>
using namespace std;
int main() {
  int T, i;
  char ch;
  cin >> T;
  for (i = 0; i < T; i++) {
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
      printf("Uppercase Character\n");
    else if (ch >= 'a' && ch <= 'z')
      printf("Lowercase Character\n");
    else if (ch >= '0' && ch <= '9')
      printf("Numerical Digit\n");
    else
      printf("Special Characters\n");
  }
  return 0;
}
