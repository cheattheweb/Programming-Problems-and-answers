#include "iostream"
#include <cstdio>
using namespace std;

int main(){
    double i = 0, j = 1;
    cout << "I=0 J=1" << endl;
    cout << "I=0 J=2" << endl;
    cout << "I=0 J=3" << endl;
    while (i < 2) {

        for (;j <=3 ;j++ ) {
            printf("I=%.1lf J=%.1lf\n",i,j);
                }
    i += 0.2;
            }

    return 0;
}
