#include <iostream>
using namespace std;

int max_of_four(int arr[4]){
    
    int max = arr[0];
    for(int i = 1;i < 4;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
    
}

int main() {
    
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    int ans = max_of_four(arr);
    printf("%d", ans);
    
    return 0;

