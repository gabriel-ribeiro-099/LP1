#include <iostream>

int calc(int base, int expo){
  if(expo == 1){
    return base;
  }
  return base*calc(base,expo-1);
}

int main() {
  int expo;
  int base;
  std::cout << "Questão 7, diga a base e em seguida o expoente \n";
  std::cin>> base;
  std::cin>> expo;

  std::cout << "O valor de " << base << " elevado a " << expo << " é " << calc(base,expo);
}