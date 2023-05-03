#include <iostream>
#include <map>
#include <string.h>
#include <vector>

float calc(std::map<std::string, std::vector<float>> notas){
  float media;

  std::map<std::string, std::vector<float>>::iterator it;
  it = notas.begin();
  media = (it->second[0] + it->second[1] + it->second[2])/3;
  
  return media;
}

int main() {
  std::string nome;
  float n1,n2,n3;
  
  std::cout << "Bem-vindo, digite o nome e em sequencia as 3 notas (uma linha por vez!)\n";
  std::cin >> nome;
  std::cin >> n1;
  std::cin >> n2;
  std::cin >> n3;

  std::map<std::string, std::vector<float>> notas;

  std::vector<float> tresnotas {n1,n2,n3};
  
  notas[nome]=tresnotas;

  std::map<std::string, std::vector<float>>::iterator it;
  it = notas.begin();
  
  float media = calc(notas);
  std::cout << "Essa é a média de " << it->first << ": " << media;
}