#include "iostream"
#include "cstdio"
using namespace std;
int main() {
  int n, animals_num, animal_sum = 0, rabbit = 0, rat = 0, frog = 0;
  string animals_char;
  cin >> n;
  while (n--) {
    cin >> animals_num >> animals_char;
      // puts("debug");
    if (animals_char == "C") {
      rabbit += animals_num;
      animal_sum += animals_num;
    } else if (animals_char == "R") {
      rat += animals_num;
      animal_sum += animals_num;
    } else if (animals_char == "S") {
      frog += animals_num;
      animal_sum += animals_num;
    }
  }
  printf("Total: %d cobaias\n", animal_sum);
  printf("Total de coelhos: %d\n", rabbit);
  printf("Total de ratos: %d\n", rat);
  printf("Total de sapos: %d\n", frog);
  printf("Percentual de coelhos: %.2f %%\n",((float)rabbit / animal_sum) * 100);
  printf("Percentual de  ratos: %.2f %%\n", ((float)rat / animal_sum) * 100);
  printf("Percentual de sapos: %.2f %%\n", ((float)frog / animal_sum) * 100);
  return 0;
}
