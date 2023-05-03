#include <iostream>

//Fiquei em dúvida se o intervalo era aberto ou fechado, farei com intervalo aberto
int soma(int menor, int maior){
  if(menor == maior){
    return maior;
  }
  return menor + soma(menor+1,maior);
}

int main() {
  int A, B;
  std::cout << "Questão 8! Na sequencia digite dois valores inteiros\n";
  std::cin >> A;
  std::cin >> B;

  if(A<B){
    std::cout << "A soma dos valores presentes entre os números dados é: "<< soma(A+1,B-1);
  } else if(B<A){
    std::cout << "A soma dos valores presentes entre os números dados é: "<< soma(B+1,A-1);
  } else{
    std::cout << "Os números são iguais, portanto a soma dos valores entre eles é 0";
  }
}