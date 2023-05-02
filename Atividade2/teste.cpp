#include <iostream>
#include <fstream>
#include <string.h>

void addMusica(){
  std::string musica;
  std::cout << "Digite o nome da música que deseja adicionar:" << std::endl;
  std::getline(std::cin,musica);
  
  std::fstream arquivo;
  arquivo.open("musica.txt", std::ios::app);
  arquivo << musica << "\n";
  arquivo.close();
}
  

int main() {
  int A;
  
  std::fstream arquivo;
  arquivo.open("musica.txt", std::ios::out);
  arquivo.close();
  
  while(A != 3){
    std::cout << "Digite 1 para adicionar uma música, 2 para procurar uma música e 3 para sair" << std::endl;
    std::cin >> A;
    if(A == 1){
      addMusica();
    } 
    if(A == 2){
      continue;
    }
    if(A == 3){
      continue;
    } //else{
      //std::cout << "Comando inválido" << std::endl;
    //}
    std::cout << std::endl;
  }
}