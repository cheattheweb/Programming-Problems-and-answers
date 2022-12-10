#include<stdio.h>

int calcualte(int n, int a, int b)
{
    return n * a * b * 2;
}

int main() {
  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);
  printf("%d\n", calcualte(n, a, b));
  return 0;
}
