#include "iostream"
#include "math.h"
#include <cstdio>
using namespace std;

int main(){
    int t;
    double r;
    const double PI = 2 * acos(0.0);
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> r;
        printf("Case %d: %.2lf\n",i,(4 * r * r)-  (r * r * PI));
            }
    return 0;
}
