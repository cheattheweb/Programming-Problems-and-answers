#include "iostream"
using namespace std;

int main() {

  int pum, count;
  cin >> pum;
  for (int i = 0; i < pum; i++) {
    cout << ++count << " " << ++count << " " << ++count << " PUM" << endl;
    count += 1;
  }

  return 0;
}
