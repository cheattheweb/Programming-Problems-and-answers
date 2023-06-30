#include "stdio.h"

int main(){

    double arr[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int x, y;
    scanf("%d %d",&x, &y);

    printf("Total: R$ %.2lf\n",arr[x - 1] * y);
    
    return 0;
}