#include "stdio.h"
long factorial(int n);
int main(){
    int num;
    scanf("%d",&num);
    printf("%ld\n",factorial(num));
    return 0;
}

long factorial(int n){
    if (n >= 1) {
        return n * factorial(n - 1);
    }else {
        return 1;
    }
}