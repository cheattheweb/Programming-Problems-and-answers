#include<stdio.h>

int main(){

	int t, n, a, b, a_price, b_price;

	scanf("%d", &t);
	while(t--){

		scanf("%d%d%d", &n, &a, &b);

		a_price = a * n;
		b_price = b * (n / 2);
		b_price += a * (n % 2);

		if (a_price > b_price)
			printf("%d\n", b_price);
		else
			printf("%d\n", a_price);
	}
	return 0;
}
