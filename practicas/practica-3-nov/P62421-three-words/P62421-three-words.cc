/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Salvador González Cueto
  * @date Nov 3rd 2022
  * @brief Reads three words a, b and c and prints a line with c, b and a
  *
  */

#include <iostream>
#include <string>

int main() {
  std::string a;
  std::string b;
  std::string c;

  std::cin >> a >> b >> c;

  std::cout << c << " " << b << " " << a << std::endl;

  return 0;

}
