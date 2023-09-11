#include "iostream"
#include <cstdio>
#include <string>
using namespace std;
int main() {
  int T, i, j, k, count;
  string str;
  char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
  cin >> T;
  cin.ignore();
  for (i = 0; i < T; i++) {
    getline(cin, str);
    count = 0;
    for (j = 0; j <= 6; j++) {
      for (k = 0; k < str.length(); k++) {
        if (vowels[j] == str[k]) {
          count++;
        }
      }
    }
    printf("Number of vowels = %d\n", count);
  }
  return 0;
}
