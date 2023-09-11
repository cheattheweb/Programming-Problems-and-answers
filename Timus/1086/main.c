#include<stdio.h>

int is_prime(int x) {
  for (int i = 2; i < x; i++) {

    if (x % i == 0)
      return 0;
  }
  return 1;
}

int n_prime(int y) {

  int i = 2;
  while (y > 0) {

    if (is_prime(i)) {
      y--;
    }
    i++;
  }
  i -= 1; //Increment of i , so i should be decreased by 1
  return i;
}

int main() {

  int n, loop;
  scanf("%d", &loop);
  for (int i = 0; i < loop; i++) {

    scanf("%d", &n);
    printf("%d\n", n_prime(n));
  }
  return 0;
}
