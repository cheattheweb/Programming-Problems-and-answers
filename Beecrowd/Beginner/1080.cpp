#include "iostream"
using namespace std;

int main(){
    int num, i, position, max;
        cin >> num;
        max = num;
        position = 1;
    for (i = 2; i <= 100; i++) {
        cin >> num;
        if (num > max) {
            max = num;
            position = i;
                }
            }
    cout << max << endl;
    cout << position << endl;
    return 0;
}
