#include "cstdio"
#include "iostream"
#include <ostream>
using namespace std;

int main() {

  int arr[1000] = {}, i, n, low_num, low_num_position;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }

  low_num = arr[0];
  low_num_position = 0;
  for (i = 1; i < n; i++) {
    if (arr[i] < low_num) {
      low_num = arr[i];
      low_num_position = i;
    }
  }

  cout << "Menor valor: " << low_num << endl;
  cout << "Posicao: " << low_num_position << endl;

  return 0;
}