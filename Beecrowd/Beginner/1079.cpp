#include "iostream"
#include <cstdio>
using namespace std;
int main(){
    int n;
    double x, y, z;
    cin >> n;
    while (n--){
        cin >> x >> y >> z;
        printf("%.1lf\n",(x * 2 + y * 3 + z * 5) / (2+3+5));
            }
    return 0;
}
