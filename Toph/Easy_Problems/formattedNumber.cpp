#include "iostream"
#include "string"
using namespace std;

int main() {

  int i, count = 0;
  string str1, str2, temp;
  cin >> str1;
  for (i = str1.length() - 1; i >= 0; i--) {

    temp = str1[i];
    str2.append(temp); // 123456 str2 = 654,321
    count++;
    if (count == 3 && str1[i - 1]) {
      str2.append(",");
      count = 0;
    }
  }

  for (i = str2.length() - 1; i >= 0; i--) {
    cout << str2[i];
  }
  printf("\n");

  return 0;
}
