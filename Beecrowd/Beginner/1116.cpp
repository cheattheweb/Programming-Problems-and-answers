#include "iostream"
#include <cstdio>
using namespace std;

int main(){
    int n, x ,y;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        if (y != 0) {
            printf("%.1f\n",(float)x / y);
            }else {
            cout << "divisao impossivel" << endl;
                }
    }

    return 0;
}
