#include <stdio.h>

int main(){

double r;
const double PI = 3.14159;
scanf("%lf",&r);

printf("VOLUME = %.3lf\n",(4/3.0) * PI * (r*r*r));
    return 0;
}