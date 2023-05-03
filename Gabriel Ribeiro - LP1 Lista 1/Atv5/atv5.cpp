#include <iostream>
#include <string.h>
#include <fstream>
#include <map>

void escreverArquivo(std::string nome, double n1, double n2, double n3){
  std::fstream arquivo;
  arquivo.open("alunos.txt", std::ios::app);
  arquivo << nome << "\n";
  arquivo << n1 << "\n";
  arquivo << n2 << "\n";
  arquivo << n3 << "\n";
  arquivo.close();
}

void addAluno(){
  std::string nome;
  double n1,n2,n3;

  std::cout << "Digite o nome do aluno(a): \n";
  std::cin >> nome;
  std::cout << "Digite a seguir 3 notas, 1 por linha:\n";
  std::cin >> n1;
  std::cin >> n2;
  std::cin >> n3;

  escreverArquivo(nome,n1,n2,n3);
}

int num(){
  int numLinha = 0;
  std::fstream arquivo;
  arquivo.open("alunos.txt", std::ios::in);
  std::string linha;
  
  while(getline(arquivo,linha)){
    numLinha++;
  }
  arquivo.close();
  return numLinha/4;
}

void addMap(std::map<std::string, double>& aluno, std::string nome, double media){
  aluno.insert({nome,media});
}

void lerArquivo(std::map<std::string, double>& aluno){
  
  int numLinha;
  std::string nome,n2,n1,n3;
  double media;
  
  std::fstream arquivo;
  arquivo.open("alunos.txt", std::ios::in);
  std::string linha;

  numLinha = num();
  
  for(int i = 0; i < numLinha; i++){
    std::getline(arquivo,nome);
    std::getline(arquivo,n1);
    std::getline(arquivo,n2);
    std::getline(arquivo,n3);
    media = (std::stod(n1) + std::stod(n2) + std::stod(n3))/3;
    addMap(aluno, nome, media);
  }
  arquivo.close();
}

int main() {

  std::map<std::string, double> aluno;
  int A = 0;
  while(A != 3){
    
    std::cout << "Questão 5! Digite o que deseja executar: 1 para adicionar aluno, 2 para imprimir os alunos e 3 para sair\n";
  
    std::cin >> A;
    if(A == 1){
      addAluno();
    }else if(A == 2){
      lerArquivo(aluno);
      std::cout << "NOME MEDIA\n";
      for(auto itr = aluno.begin(); itr != aluno.end(); itr++){
        std::cout << itr->first << " " << itr->second << std::endl;
      }
    } else if (A==3){
      continue;
    } else{
      std::cout << "Digite um valor válido!!";
    }
  }
}