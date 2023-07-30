#include "iostream"
using namespace std;
int main() {
  int i = 4, j = 60;
  cout << "I=" << 1 << " J=" << j << endl;
  while (j -= 5) {
    cout << "I=" << i << " J=" << j << endl;
    i += 3;
  }
  cout << "I=" << i << " J=" << 0 << endl;
  return 0;
}
