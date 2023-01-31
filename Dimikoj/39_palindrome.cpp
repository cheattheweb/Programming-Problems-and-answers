#include "iostream"
#include "string"
#include <string>
using namespace std;

int main() {
  int i, T;
  string str1, temp;
  cin >> T;
  while (T--) {
    string str2;
    cin >> str1;
    for (i = str1.length() - 1; i >= 0; i--) {
      temp = str1[i];
      str2.append(temp);
    }
    if (str1 == str2) {
      cout << "Yes! It is palindrome!" << endl;
    } else {
      cout << "Sorry! It is not palindrome!" << endl;
    }
  }
  return 0;
}
