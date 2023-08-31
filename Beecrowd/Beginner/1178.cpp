#include "iostream"
#include <cstdio>
using namespace std;

int main(){

    int  i;
    double num, arr[100];

    cin >> num;
    for ( i = 0;i < 100; i++) {
        arr[i] = num;
        num /= 2;
    }

    for ( i = 0;i < 100; i++) {
        printf("N[%d] = %.4lf\n",i, arr[i]);
    }
    return 0;
}