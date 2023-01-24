/**
 * @file programa2.h
 * @author Salvador González Cueto (alu0101424750@ull.edu.es)
 * @brief 
 * @version 0.1
 * @date 2023-01-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <string>
#include <iostream>

class Car {
 public:
  Car() : model_{"toyota"}, plate_{"AAA-0000"}, kilometers_{0} {}
  Car(const std::string& model, const std::string& plate, const int& kilometers) : model_{model}, plate_{plate}, kilometers_{kilometers} {}
  std::string model() const { return model_; }
  std::string plate() const { return plate_; }
  int kilometers() const { return kilometers_; }
  friend std::ostream& operator<<(std::ostream&, const Car&);
  friend std::istream& operator>>(std::istream&, Car&);
  bool operator==(const Car&) const;
  bool operator>(const Car&) const;
  
 private:
  std::string model_;
  std::string plate_;
  int kilometers_;
};