/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Salvador González Cueto
  * @date Nov 3rd 2022
  * @brief Desinflado
  *
  */

#include <iostream>

int main() {
  char character;

  std::cin >> character;

  int integer_character{static_cast<int>(character)};

  std::cout << char(integer_character+32) << std::endl;

  return 0;
}

