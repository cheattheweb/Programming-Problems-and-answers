#include "iostream"
#include <cstdio>
using namespace std;

int main(){
    int t, n, x;
    unsigned long long sum;
    cin >> t;
    for(int i = 1;i <=t;i++) {
        sum = 0;
        cin >> n;
        while (n--) {
            cin >> x;
            if(x > 0)
                sum += x;
                }
        printf("Case %d: %lld\n",i, sum);

            }
    return 0;
}
