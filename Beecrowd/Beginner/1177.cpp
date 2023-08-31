#include "iostream"
#include <cstdio>
using namespace std;
int main() {

  int arr[1000], t, number = 0;
  cin >> t;

  for (int i = 0; i < 1000; i++) {
    arr[i] = number;
    number++;
    if (number == t) {
      number = 0;
    }
  }

  for (int i = 0; i < 1000; i++) {

    printf("N[%d] = %d\n", i, arr[i]);
  }
  return 0;
}