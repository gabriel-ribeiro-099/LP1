#include <iostream>
#include <string>

#include "calculo.hpp"

float area_quadrado(float lado){
  float area = lado * lado;
  return area;
}

float area_triangulo(float base, float altura){
  float area = (base*altura)/2;
  return area;
}

float area_retangulo(float base, float altura){
  float area = base * altura;
  return area;
}

float area_circulo(float raio){
  float area = 3.14 * (raio * raio);
  return area;
}

