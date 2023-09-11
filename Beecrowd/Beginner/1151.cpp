#include "iostream"
using namespace std;

int main() {

  int num, fibo = 1, fib_tmp = 1, tmp;
  cin >> num;
  cout << "0 1 1 ";
  for (int i = 3; i < num - 1; i++) {
    tmp = fibo;
    fibo += fib_tmp;
    fib_tmp = tmp;
    cout << fibo << " ";
  }
  fibo += fib_tmp;
  cout << fibo << endl;
  return 0;
}