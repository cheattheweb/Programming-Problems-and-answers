#include "iostream"
#include "string"
#include <cctype>
#include <type_traits>
using namespace std;

int main() {

  int i;
  string str;
  cin >> str;
  for (i = 0; i < str.length(); i++) {
    if (i == 0) {
      str[i] = toupper(str[i]);
    }
    if (str[i] == 's') {
      str[i] = '$';
    } else if (str[i] == 'i') {
      str[i] = '!';
    } else if (str[i] == 'o') {
      str[i] = '(';
      str.insert(i + 1, 1, ')');
    }
  }
  cout << str << "." << endl;
}
