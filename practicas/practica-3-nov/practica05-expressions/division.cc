/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Salvador González Cueto alu0101424750@ull.edu.es
  * @date Nov 1 2022
  * @brief This program reads two numbers and print their division and remainder
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

 #include <iostream>

 int main(){
    int num_a;
    int num_b{0};

    std::cin >> num_a >> num_b;
    
    while ((num_a<=0)&&(num_b<=0))
    {
        std::cin >> num_a >> num_b;
    }

    std::cout << num_a/num_b << " " << num_a%num_b << std::endl;

    return 0;
    
 }