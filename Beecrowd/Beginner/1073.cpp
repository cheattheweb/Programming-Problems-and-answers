#include "iostream"
using namespace std;
bool is_even(int x){

    return ((x % 2) ? false: true);

}
int main(){

    int n;
    cin >> n;
    for (int i = 1; i <= n;i++) {
        if(is_even(i)){
            printf("%d^%d = %d\n",i,2,i*i);
        }
    }

    return 0;
}
