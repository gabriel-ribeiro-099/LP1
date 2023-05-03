#include <iostream>
#include <fstream>
#include <string.h>

void addMusica(){
  std::string musica;
  
  std::cout << "Digite o nome da música que deseja adicionar:" << std::endl;
  std::cin.ignore();
  std::getline(std::cin,musica);

  std::fstream arquivo;
  arquivo.open("musica.txt", std::ios::app);
  arquivo << musica << "\n";
  arquivo.close();
}

int buscaMusica(){
  std::string musica,linha;
  std::fstream arquivo;
  
  std::cout << "Digite o nome da música que deseja buscar:" << std::endl;
  std::cin.ignore();
  std::getline(std::cin,musica);

  arquivo.open("musica.txt", std::ios::in);
  
  while(getline(arquivo, linha)){
    if(linha.compare(musica) == 0){
      std::cout << "A música " << musica << " está presente no arquivo" << std::endl;
      return 1;
      break;
    }
  }
  arquivo.close();
  return 0;
}

int main() {
  int A = 0, B;
  
  std::fstream arquivo;
  arquivo.open("musica.txt", std::ios::out);
  arquivo.close();
  
  while(A != 3){
    std::cout << "Digite 1 para adicionar uma música, 2 para procurar uma música e 3 para sair" << std::endl;
    std::cin >> A;
    if(A == 1){
      addMusica();
    } else if(A == 2){
      B = buscaMusica();
      if(B == 0){
        std::cout << "A música não está presente no arquivo" << std::endl;
      }
    } else if(A == 3){
      continue;
    } else{
      std::cout << "Comando inválido" << std::endl;
    }
    std::cout << std::endl;
  }
}