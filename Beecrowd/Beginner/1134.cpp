#include "iostream"
using namespace std;

int main() {

  int input = 0;
  int arr[3] = {0, 0, 0};
  do {
    cin >> input;
    if (input == 1) {
      arr[0]++;
    } else if (input == 2) {
      arr[1]++;
    } else if (input == 3) {
      arr[2]++;
    } else if (input == 4) {
      break;
    }
  } while (1);
  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << arr[0] << endl;
  cout << "Gasolina: " << arr[1] << endl;
  cout << "Diesel: " << arr[2] << endl;

  return 0;
}