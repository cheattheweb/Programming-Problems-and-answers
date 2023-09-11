#include "iostream"
#include <math.h>
using namespace std;
int main() {
  int T, i, num, temp, result;
  cin >> T;
  for (i = 0; i < T; i++) {
    cin >> num;
    temp = num;
    result = 0;
    while (num != 0) {
      result = result + pow((num % 10), 3);
      num /= 10;
    }
    if (result == temp) {
      printf("%d is an armstrong number!\n", temp);
    } else {
      printf("%d is not an armstrong number!\n", temp);
    }
  }
  return 0;
}
