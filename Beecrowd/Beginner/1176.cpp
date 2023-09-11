#include "iostream"
#include <cstdio>
using namespace std;

int main() {

  int t, index;
  long long arr[60];
  arr[0] = 0;
  arr[1] = 1;
  for (int i = 2; i <= 60; i++) {
    arr[i] = arr[i - 2] + arr[i - 1];
  }

  cin >> t;
  while (t--) {
    cin >> index;
    printf("Fib(%d) = %lld\n", index, arr[index]);
  }

  return 0;
}