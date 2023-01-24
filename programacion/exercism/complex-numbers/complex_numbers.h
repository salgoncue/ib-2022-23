#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H

#include <cmath>

namespace complex_numbers {

  class Complex{
   public:
    Complex() : real_{0.0}, imag_{0.0} {}
    Complex(const double& real, const double& imag) : real_{real}, imag_{imag} {}
    double real() const { return real_; }
    double imag() const { return imag_; }

    Complex operator*(const Complex&) const;
    Complex operator+(const Complex& complex_number) const {
      Complex result(real_ + complex_number.real(), imag_ + complex_number.imag());
      return result;
    };
    Complex operator-(const Complex& complex_number) const {
      Complex result(real_ - complex_number.real(), imag_ - complex_number.imag());
      return result;
    }
    Complex operator/(const Complex&) const;

    double abs() const { return sqrt((pow(real_,2)+pow(imag_,2))); }
    Complex conj() const {
      Complex result(real_, -imag_);
      return result;
    }
    Complex exp() const;
   private:
    double real_;
    double imag_;
  };

}  // namespace complex_numbers

#endif  // COMPLEX_NUMBERS_H
