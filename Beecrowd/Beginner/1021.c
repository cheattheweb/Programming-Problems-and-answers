
#include "stdio.h"

int main(){
    int n;
    // float moeda = 1.00;
    int arr[6] = {100, 50, 20, 10, 5, 2};
    scanf("%d",&n);
    printf("%d\n",n);

    puts("NOTAS:");
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d.00\n",n / arr[i],arr[i]);
        n %= arr[i];
    }
    // puts("MOEDAS:");
    // for (int i = 0; i < 6; i++) {
    //     printf("%d moeda(s) de R$ %.2lf\n",);
    // }
    



    return 0;
}