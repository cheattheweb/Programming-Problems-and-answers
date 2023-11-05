#include<stdio.h>

int is_prime(int x) {

  int flag = 1, j = 2;
  for (;j < (x / 2 + 1); j++ ) {
   if (x % j == 0) {
     flag = 0;
     break;
   }
  }
  if (flag == 0) {
    return 0;
  }else {
  return 1;
  }
}

// this block of code will pass the time limite
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
