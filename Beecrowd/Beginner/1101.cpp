#include "iostream"
using namespace std;

int main() {
  int num1, num2, i, sum;
  while (1) {
    sum = 0;
    cin >> num1 >> num2;
    if (num1 <= 0 || num2 <= 0) {
      break;
    }
    if (num1 > num2) {
      for (i = num2; i <= num1; i++) {
        cout << i << " ";
        sum += i;
      }
    } else {
      for (i = num1; i <= num2; i++) {
        cout << i << " ";
        sum += i;
      }
    }
    cout << "Sum=" << sum << endl;
  }

  return 0;
}
