#include "complex.h"

// <===========================Member functions=============================================>

// Override =
Complex& Complex::operator= (Complex const& src) {
  this->_real = src._real;
  this->_img = src._img;
  return *this;
}

double & Complex::real(){
  return _real;
}

double & Complex::img(){
  return _img;
}

// <=====================================Non-member functions ================================================>

// overload binary + operator 
Complex operator+(const Complex& lhs, const Complex& rhs){
  return Complex(lhs._real + rhs._real,lhs._img + rhs._img);
}


// overload binary - operator 
Complex operator-(const Complex& lhs, const Complex& rhs){
  return Complex(lhs._real - rhs._real,lhs._img - rhs._img);
}

// Uses the standard abs method which takes a long long as input
Complex abs(const Complex& src){
  return Complex(abs((long long)src._real),abs((long long)src._img));
}
