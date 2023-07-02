#include "stdio.h"

int sum_odd(int x, int y){
	int sum = 0;
	while(x >= y){
		puts("debug");
		if(x % 2 != 0){
			sum += x;
			puts("debug, %d",x);
		}
		x -= 1;
	}
	return sum;

}
int main(){

    int x , y;
    scanf("%d%d",&x, &y);
    printf("%d\n",sum_odd(x, y));

    return 0;
}
