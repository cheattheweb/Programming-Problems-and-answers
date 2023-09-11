#include "iostream"
#include <cstring>

using namespace std;
int main() {

  string first_str, second_str, third_str;
  cin >> first_str >> second_str >> third_str;

  // cout << (first_str == "vertebrado" ? "yes" : "no") << endl;

  if (first_str == "vertebrado") {
    if (second_str == "ave") {
      if (third_str == "carnivoro") {
        puts("aguia");
      } else {
        puts("pomba");
      }
    } else {
      if (third_str == "onivoro") {
        puts("homem");
      } else {
        puts("vaca");
      }
    }
  } else {
    if (second_str == "inseto") {
      if (third_str == "hematofago") {
        puts("pulga");
      } else {
        puts("lagarta");
      }
    } else {
      if (third_str == "hematofago") {
        puts("sanguessuga");
      } else {
        puts("minhoca");
      }
    }
  }
  return 0;
}