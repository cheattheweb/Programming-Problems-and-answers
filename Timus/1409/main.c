#include<stdio.h>

int cans(int a, int b){
    return (a + b) - 1;
    }

int main(){

    int a , b;
    scanf("%d %d",&a, &b);
    int total = cans(a,b);
    printf("%d %d\n",total - a,total - b);
    return 0;
    }
