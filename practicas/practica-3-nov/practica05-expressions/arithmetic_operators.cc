/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file arithmetic_operators.cc
  * @author Salvador González Cueto alu0101424750@ull.edu.es
  * @date Nov 3 2022
  * @brief Operaciones aritméticas.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

  int first_number;
  int second_number;

  std::cin >> first_number >> second_number;

  std::cout << first_number << " + " << second_number << " = " << first_number + second_number << std::endl;

  std::cout << first_number << " - " << second_number << " = " << first_number - second_number << std::endl;

  std::cout << first_number << " * " << second_number << " = " << first_number * second_number << std::endl;

  std::cout << first_number << " / " << second_number << " = " << first_number / second_number << std::endl;
  

  std::cout << first_number << " % " << second_number << " = " << first_number % second_number << std::endl;
}
