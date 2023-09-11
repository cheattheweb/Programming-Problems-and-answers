#include "stdio.h"

int main(){
    int i , positive = 0;
    double num;
    for (i = 0; i < 6; i++) {
        scanf("%lf",&num);
        if (num > 0) {
            positive++;
        }
    }
    printf("%d valores positivos\n",positive);
return 0;
}