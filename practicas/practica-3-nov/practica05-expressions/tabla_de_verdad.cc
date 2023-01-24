/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file tabla_de_verdad.cc
  * @author Salvador González Cueto alu0101424750@ull.edu.es
  * @date Nov 3 2022
  * @brief Tabla de verdad para 2 variables.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */


#include <iostream>

void operaciones_2var(bool A, bool B){
std::cout << "| " << A << " | " << B << " | " << !A << " | " << !B << " | " << (A && B) << " | " << (A || B) << " | " << std::endl;
}

int main() {

  bool A;
  bool B;
 
  std::cout << "+---+---+---+---+---+---+" << std::endl;
  std::cout << "| A | B |!A |!B |A*B|A+B|" << std::endl;
  std::cout << "+---+---+---+---+---+---+" << std::endl;

  for (int i = 1; i <= 4; ++i){

    switch (i){
 
      case 1:
 
        A=false;
        B=false;
        operaciones_2var(A, B);
        break;
 
      case 2:
 
        A=false;
        B=true;
        operaciones_2var(A, B);
        break;

      case 3:
 
        A=true;
        B=false;
        operaciones_2var(A, B);
        break;
 
      case 4:
 
        A=true;
        B=true;
        operaciones_2var(A, B);
        break;

    }
  }

  std::cout << "+---+---+---+---+---+---+" << std::endl;
}
