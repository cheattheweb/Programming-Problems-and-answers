#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int T, count, i, j;
  string str;
  cin >> T;
  /*
  cin >> T before the loop, cin will read the T number of strings,
  but the first string will not be read by getline(cin, str) as cin leaves the
newline character in the input stream, So the first string will be skipped.

You can fix this by moving the cin >> T after the first getline(cin, str) or
using cin.ignore() before the loop to ignore the newline character left in the
input stream.

  */
  cin.ignore();
  for (i = 0; i < T; i++) {
    count = 0;
    getline(cin, str);
    for (j = 0; j < str.length(); j++) {

      if (str[j] == ' ') {
        count++;
      }
    }
    printf("Count = %d\n", count + 1);
  }

  return 0;
}
