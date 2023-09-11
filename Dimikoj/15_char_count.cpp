#include "iostream"
#include "string"
#include <cstdio>
#include <type_traits>
using namespace std;
int main() {
  int T, i, j, k;
  string str;
  cin >> T;
  // an array of english char
  int count[26];
  for (k = 0; k < T; k++) {

    cin >> str;
    for (i = 0; i < 26; i++) {
      count[i] = 0;
    }

    // counting the char
    for (j = 0; j < str.length(); j++) {
      if (str[j] >= 'a' && str[j] <= 'z') {
        count[str[j] - 'a']++;
      }
    }

    // print the result
    for (i = 0; i < 26; i++) {
      if (count[i] != 0) {
        printf("%c = %d\n", 'a' + i, count[i]);
      }
    }
  }
  return 0;
}
