#include <iostream>
#include <vector>

int main() {
  int i,num;
  std::vector<int>vetor;
  
  std::cout << "Esse programa simula o comportamente de uma pilha usando vector" << std::endl << "Digite 1 para inserir, 2 para deletar, 3 para imprimir e 4 para sair";
  while(true){
    std::cout << std::endl <<"Qual operação deseja realizar?" << std::endl;
    std::cin >> i;
    if(i == 4){
      break;
    } else if(i == 3){
      for(int j = 0; j < vetor.size();j++){
        std::cout << vetor[j] << " ";
      }
    } else if (i == 2){
      vetor.pop_back();
    } else if (i == 1){
      std::cout <<"Qual valor deseja adicionar?" << std::endl;
      std::cin >> num;
      vetor.push_back(num);
    } else{
      continue;
    }
  }
}