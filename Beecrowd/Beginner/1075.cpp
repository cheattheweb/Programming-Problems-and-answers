#include "iostream"

using namespace std;
int main(){
    int n, i = 1, carry;
    cin >> n;
    cout << 2 << endl;
    while (1) {
        carry = n * i + 2;
        if (carry >= 10000) {
            break;
              }
        cout << carry << endl;
        i++;
            }
    return 0;
}
