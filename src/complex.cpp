#include "complex.h"

// <=========================== Member functions =============================================>

// Override =
Complex& Complex::operator= (Complex const& src) {
 this->_real = src._real;
 this->_img = src._img;
 return *this;
}

// Access real part
double & Complex::real(){
 return _real;
}

// Access imaginary part
double & Complex::img(){
 return _img;
}

// <===================================== Non-member functions ================================================>

// overload binary + operator
Complex operator+(const Complex& lhs, const Complex& rhs){
 return Complex(lhs._real + rhs._real,lhs._img + rhs._img);
}

// overload binary - operator
Complex operator-(const Complex& lhs, const Complex& rhs){
 return Complex(lhs._real - rhs._real,lhs._img - rhs._img);
}

// Returns the abs of a Complex number
Complex abs(const Complex& src){
  double new_real,new_img;
  new_real = src._real < 0 ? (src._real * -1) : src._real;
  new_img = src._img < 0 ? (src._img * -1) : src._img; 
 return Complex(new_real,new_img);
}
