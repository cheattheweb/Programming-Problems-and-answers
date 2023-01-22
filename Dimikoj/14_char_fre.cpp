#include "iostream"
#include <cstdio>
#include <string>
#include <type_traits>
using namespace std;
int main() {
  int T, count, i, j;
  string str;
  char ch;
  cin >> T;
  cin.ignore();

  for (i = 0; i < T; i++) {
    count = 0;
    getline(cin, str);
    cin >> ch;
    cin.ignore();
    for (j = 0; j < str.length(); j++) {
      if (str[j] == ch || str[j] == (ch - 32)) {
        count++;
      }
    }
    if (count > 0) {
      cout << "Occurrence of "
           << "'" << ch << "'"
           << " in "
           << "'" << str << "'"
           << " = " << count << endl;
    } else {
      printf("'%c' is not present\n", ch);
    }
  }
  return 0;
}
