#include "iostream"
using namespace std;
int main() {
  int T, i, j;
  string str;
  cin >> T;
  for (i = 0; i < T; i++) {
    cin >> str;
    for (j = 0; j < str.length(); j++) {
      cout << str[j] - 64;
    }
    printf("\n");
  }
  return 0;
}
