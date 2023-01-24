/**
 * @file clase.cc
 * @author Salvador González Cueto (alu0101424750@ull.edu.es)
 * @brief 
 * @version 0.1
 * @date 2023-01-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "programa1.h"

bool NumeroGuay(const int& number) {
  int counter{1};
  int number2{number};
  int sum{0};
  while (number2 > 0) {
    if (counter%2!=0) {
      sum += number2%10;
    }
    number2 = number2/10;
    ++counter;
  }
  if (sum%2==0)
    return true;
  return false;
}