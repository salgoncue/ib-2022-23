#include "complex_numbers.h"

namespace complex_numbers {

  Complex Complex::operator*(const Complex& complex_number) const {
    if ((imag_!=0) && (complex_number.imag()!=0)) {
      double real = (real_ * complex_number.real()) + ((imag_ * complex_number.imag()) * -1);
      double imag = (real_ * complex_number.imag()) + (imag_ * complex_number.real());
      Complex result(real, imag);
      return result;
    }
    else {
      double real = (real_ * complex_number.real());
      double imag = (real_ * complex_number.imag()) + (imag_ * complex_number.real());
      Complex result(real, imag);
      return result;
    }
  }

  Complex Complex::operator/(const Complex& complex_number) const {
    if ((imag_!=0) && (complex_number.imag()!=0)) {
      double real = (((real_ * complex_number.real()) + (imag_ * complex_number.imag())) / ((complex_number.real() * complex_number.real()) + (complex_number.imag() * complex_number.imag())));
      double imag = (((imag_ * complex_number.real()) - (real_ * complex_number.imag())) / ((complex_number.real() * complex_number.real()) + (complex_number.imag() * complex_number.imag())));
      Complex result(real, imag);
      return result;
    }
    else {
      double real = (real_ * complex_number.real()) / (((complex_number.real() * complex_number.real()) + (complex_number.imag() * complex_number.imag() * -1)));
      double imag = ((imag_ * complex_number.real()) - (real_ * complex_number.imag()) / ((complex_number.real() * complex_number.real()) + (complex_number.imag() * complex_number.imag() * -1)));
      Complex result(real, imag);
      return result;
    }
  }

  Complex Complex::exp() const {
    if ((real_!=0) && (imag_!=0)) {
      double real{pow(M_E, real_) * cos(imag_)};
      double imag{sin(imag_)};
      Complex result(real, imag);
      return result;
    }
    else if((real_==0) && (imag_!=0)) {
      double real{cos(imag_)};
      double imag{sin(imag_)};
      Complex result(real, imag);
      return result;
    }
    else if((real_!=0) && (imag_==0)) {
      double real{pow(M_E, real_)};
      double imag{0};
      Complex result(real, imag);
      return result;
    }
    else {
      double real{pow(M_E, real_)};
      double imag{0};
      Complex result(real, imag);
      return result;
    }
  }

}  // namespace complex_numbers
