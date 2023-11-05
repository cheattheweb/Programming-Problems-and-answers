#include<stdio.h>

int calcualte(int a, int b)
{
    return  a * b;
}

int main() {
  int  a, b;
  scanf("%d %d",&a, &b);
  printf("%d\n", calcualte( a, b+1));
  return 0;
}
