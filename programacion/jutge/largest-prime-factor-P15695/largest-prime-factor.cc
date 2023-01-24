/**
 * @file largest-prime-factor.cc
 * @author Salvador González Cueto (alu0101424750@ull.edu.es)
 * @brief 
 * @version 0.1
 * @date 2023-01-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <vector>

int largest_prime_factor(int n) {
  std::vector<int> dividers;
  for (int i{2}; i < n; ++i) {
    if (n%i==0) {
      dividers.push_back(i);
    }
  }
  int largest_prime{0};
  switch (dividers.size()) {
  case 0:
    return n;
    break;
  default:
    for (auto i: dividers) {
      bool prime{true};
      for (int j{2}; j < i; ++j) {
        if (i%j==0) {
          prime = false;
          break;
        }
      }
      if (prime) {
        largest_prime = i;
      }
    }
    return largest_prime;
    break;
  
  }
}

int main() {
  int number;
  std::cin >> number;
  std::cout << largest_prime_factor(number) << std::endl;
}