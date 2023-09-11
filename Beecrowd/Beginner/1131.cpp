#include "iostream"
#include <cstdio>
using namespace std;
int main() {
  int inter_g, grenais_g, command, inter_win = 0, grenais_win = 0, draw = 0,
                                   count = 0;
  bool loop = true;

  do {
    cin >> inter_g >> grenais_g;
    if (inter_g > grenais_g) {
      inter_win++;
    } else if (inter_g < grenais_g) {
      grenais_win++;
    } else {
      draw++;
    }
    count++;
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> command;
    loop = command == 1;
  } while (loop);
  cout << count << " grenais" << endl;
  cout << "Inter:" << inter_win << endl;
  cout << "Gremio:" << grenais_win << endl;
  cout << "Empates:" << draw << endl;
  if (inter_win > grenais_win) {
    puts("Inter venceu mais");
  } else if (inter_win < grenais_win) {
    puts("Grenais venceu mais");
  } else {
    puts("Não houve vencedor");
  }
  return 0;
}
