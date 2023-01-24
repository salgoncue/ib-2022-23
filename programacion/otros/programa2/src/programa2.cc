/**
 * @file programa2.cc
 * @author Salvador González Cueto (alu0101424750@ull.edu.es)
 * @brief 
 * @version 0.1
 * @date 2023-01-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "programa2.h"

std::ostream& operator<<(std::ostream& os, const Car& coche) {
  os << coche.model() << " - " << coche.plate() << " - " << coche.kilometers();
  return os;
}

std::istream& operator>>(std::istream& is, Car& coche) {
  is >> coche.model_ >> coche.plate_ >> coche.kilometers_;
  return is;
}

bool Car::operator==(const Car& coche) const {
  bool model{model_==coche.model()};
  bool plate{plate_==coche.plate()};
  bool kilometers{kilometers_==coche.kilometers()};

  if ((model) && (plate) && (kilometers)) {
    return true;
  }
  return false;
}

bool Car::operator>(const Car& coche) const {
  bool kilometers{kilometers_>coche.kilometers()};
  if (kilometers) {
    return true;
  }
  return false;
}