/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Salvador González Cueto
  * @date Nov 3rd 2022
  * @brief Reads a sequence of numbers and prints their average
  *
  */

#include <iostream>
#include <iomanip>

int main() {

  double var;
  double suma{0};
  double total_valores{-1};

  do{
  
    suma = suma + var;
    ++total_valores;

  }while(std::cin >> var);

  std::cout << std::fixed << std::setprecision(2) << suma/total_valores << std::endl;

  return 0;

}
