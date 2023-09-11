#include<stdio.h>

int sum(int x){
    if(x > 0){
        return x * (x + 1) / 2;
    }
    else if(x < 0){
    x *= -1;
    return ((x * (x + 1) / 2) - 1) * -1;
}
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",sum(n));
    return 0;
    }
