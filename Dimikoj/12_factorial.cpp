#include "iostream"
using namespace std;
int main() {

  int T, n, i, j, temp;
  int zeroCount;
  // long long factorial;
  cin >> T;
  for (i = 0; i < T; i++) {
    cin >> n;
    zeroCount = 0;

    // factorial = 1;
    // for (j = 1; j <= n; j++) {
    //   factorial = factorial * j;
    // }
    // while (true) {
    //   mod = factorial % 10;
    //   if (mod == 0) {
    //     zeroCount++;
    //   } else {
    //     break;
    //   }
    //   factorial = factorial / 10;
    // }
    // printf("%d\n", zeroCount);
    // but this method doesn't work higher then 15!
    // because long long is too small to store the number
    for (j = 5; j <= n; j += 5) {
      temp = j;
      while (temp % 5 == 0) {
        zeroCount++;
        temp /= 5;
      }
    }
    cout << zeroCount << endl;
  }
  /*
  ** This program prompts the user to enter a number, then uses a for loop to
  iterate from 5 to the input number. For each number in the range, it uses a
  while loop to divide the number by 5 repeatedly and increment the count
  variable each time the division results in a number that is divisible by 5.
  This is because for each number that is divisible by 5, there's a trailing
  zero in the factorial. Finally, the program prints out the number of trailing
  zeroes in the factorial of the given number.
  - ChatGpt
  */
  return 0;
}
