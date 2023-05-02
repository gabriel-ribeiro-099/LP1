#include <iostream>
#include <string>

#include "calculo.hpp"

int main(){
  float base, altura, raio, valor;

  std::cout << "Qual area voce quer descobrir? Por favor escrever sem acento e minisculo" << std::endl;
  
  std::string figura;
  getline(std::cin, figura);

  if(figura == "quadrado"){

    std::cout << "Qual lado do quadrado?" << std::endl;
    std::cin >> base;
    valor = area_quadrado(base);
    std::cout << "O valor da area do " << figura << "e: " << valor << std::endl;
    
  } else if(figura == "retangulo"){

    std::cout << "Qual a base do retangulo?" << std::endl;
    std::cin >> base;
    std::cout << std::endl << "Qual a altura do retangulo?" << std::endl;
    std::cin >> altura;
    valor = area_retangulo(base, altura);
    std::cout << "O valor da area do " << figura << "e: " << valor << std::endl;

  } else if(figura == "triangulo"){

    std::cout << "Qual a base do triangulo?" << std::endl;
    std::cin >> base;
    std::cout << std::endl << "Qual a altura do triangulo?" << std::endl;
    std::cin >> altura;
    valor = area_triangulo(base, altura);
    std::cout << "O valor da area do " << figura << "e: " << valor << std::endl;

  } else if(figura == "circulo"){
    std::cout << "Qual o raio do circulo?" << std::endl;
    std::cin >> raio;
    valor = area_circulo( raio);
    std::cout << "O valor da area do " << figura << "e: " << valor << std::endl;
  } else{
    std::cout << "Insira algo válido";
  }
}