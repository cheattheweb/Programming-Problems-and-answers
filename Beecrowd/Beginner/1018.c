#include "stdio.h"

int main(){
    int n;
    int arr[7] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d",&n);
    printf("%d\n",n);

    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n",n / arr[i],arr[i]);
        n %= arr[i];
    }

    return 0;
}