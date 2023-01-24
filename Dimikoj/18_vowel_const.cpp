#include "iostream"
#include <cstdio>
#include <string>
#include <type_traits>
using namespace std;
int main() {
  int T, i, j;
  string str;
  cin >> T;
  cin.ignore();
  for (j = 0; j < T; j++) {
    getline(cin, str);
    for (i = 0; i < str.length(); i++) {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
          str[i] == 'u') {
        printf("%c", str[i]);
      }
    }
    printf("\n");
    for (i = 0; i < str.length(); i++) {
      if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' &&
          str[i] != 'u' && str[i] != ' ') {
        printf("%c", str[i]);
      }
    }
    printf("\n");
  }
  return 0;
}
