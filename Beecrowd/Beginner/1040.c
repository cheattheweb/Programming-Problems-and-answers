#include "stdio.h"

double avg(double n1, double n2, double n3, double n4) {
  return (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (1 + 2 + 3 + 4);
}
double re_avg(double x, double y) { return (x + y) / 2; }

// main
int main() {

  double n1, n2, n3, n4;
  double result;
  scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

  result = avg(n1, n2, n3, n4);
  printf("Media: %.1lf\n", result);
  if (result >= 7.0) {
    puts("Aluno aprovado.");
  } else if (result < 5.0) {
    puts("Aluno reprovado.");
  }
  if (result >= 5.0 && result <= 6.9) {
    puts("Aluno em exame.");
    scanf("%lf", &n1);
    printf("Nota do exame: %.1lf\n", n1);

    result = re_avg(n1, result);
    if (result >= 5.0) {
      puts("Aluno aprovado.");
    } else if (result <= 4.9) {
      puts("Aluno reprovado.");
    }
    printf("Media final: %.1lf\n", result);
  }

  return 0;
}