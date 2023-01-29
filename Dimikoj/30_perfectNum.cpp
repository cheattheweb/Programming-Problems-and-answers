#include "iostream"
using namespace std;
int main() {
  int T, i, j, result;
  unsigned long long num = 0;
  cin >> T;
  for (i = 0; i < T; i++) {
    result = 0;
    cin >> num;
    for (j = num - 1; j >= 1; j--) {
      if (num % j == 0) {
        result += j;
      }
      // if (result > num)
      //   break;
    }
    if (result == num)
      cout << "YES, " << num << " is a perfect number!" << endl;
    else
      cout << "NO, " << num << " is not a perfect number!" << endl;
  }
  return 0;
}
