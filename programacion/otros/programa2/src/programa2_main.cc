/**
 * @file programa2_main.cc
 * @author Salvador González Cueto (alu0101424750@ull.edu.es)
 * @brief 
 * @version 0.1
 * @date 2023-01-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "programa2.h"

int main() {
  Car coche1("Ford", "BBB-1111", 10000);
  Car coche2;
  std::cin >> coche2;
  std::cout << coche1 << std::endl;
  std::cout << coche2 << std::endl;

  if (coche1>coche2) {
    std::cout << "Si" << std::endl;
  }
  else {
    std::cout << "No" << std::endl;
  }

}