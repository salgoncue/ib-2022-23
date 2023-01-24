/**
 * @file programa1_main.cc
 * @author Salvador González Cueto (alu0101424750@ull.edu.es)
 * @brief 
 * @version 0.1
 * @date 2023-01-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "programa1.h"
#include <iostream>

int main() {
  int number;
  std::cin >> number;
  
  if (NumeroGuay(number)) {
    std::cout << number << " es GUAY" << std::endl;
  }
  else {
    std::cout << number << " no es GUAY" << std::endl;
  }

  return 0;
}