#include "iostream"
using namespace std;
int main() {

  int T, i, j, k, l;
  string str, strNew;
  cin >> T;
  cin.ignore();
  for (i = 0; i < T; i++) {
    getline(cin, str);
    for (j = str.length() - 1; j >= 0; j--) {
      cout << str[j];
    }
    cout << endl;
  }
  return 0;
}
