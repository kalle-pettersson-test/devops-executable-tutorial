#include <iostream>
#include "complex2.h"

// <===========================Member operations=============================================>


Complex& Complex::operator= (Complex const& src) {
  this->_real = src._real;
  this->_img = src._img;
  return *this;
}
// Override +=
Complex& Complex::operator+= (Complex const& src) {
  this->_real += src._real;
  this->_img += src._img;
  return *this;
}
// Override -=
Complex& Complex::operator-= (Complex const& src) {
  this->_real -= src._real;
  this->_img -= src._img;
  return *this;
}
// Override /=
Complex& Complex::operator/= (Complex const& src) {
  Complex tmp;
  tmp._real = (_real*src._real+_img*src._img)/(src._img*src._img + src._real*src._real);
  tmp._img = (_img*src._real-_real*src._img)/(src._img*src._img + src._real*src._real);
  this->_real = tmp._real;
  this->_img = tmp._img;
  return *this;
}
// Override *= 
Complex& Complex::operator*= (Complex const& src) {
  Complex tmp;
  tmp._real = _real*src._real-_img*src._img;
  tmp._img = _real*src._img+src._real*_img;
  this->_real = tmp._real;
  this->_img = tmp._img;
  // std::cout << real << " : "<< img << std::endl;
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

// overload unary+ operator 
Complex operator+(const Complex& src){
  return Complex(src._real,src._img);
}

// overload binary - operator 
Complex operator-(const Complex& lhs, const Complex& rhs){
  return Complex(lhs._real - rhs._real,lhs._img - rhs._img);
}

// overload unary - operator 
Complex operator-(const Complex& src){
  return Complex(-src._real,-src._img);
}

// overload * operator TODO
Complex operator*(const Complex& lhs, const Complex& rhs){
  Complex tmp = lhs;
  tmp *=rhs;
  return tmp;
}

// overload / operator  TODO
Complex operator/(const Complex& lhs, const Complex& rhs){
  Complex tmp = lhs;
  tmp /=rhs;
  return tmp;
}


// Overloading ==
bool operator==(const Complex& lhs, const Complex& rhs){
  if(lhs._real == rhs._real && lhs._img==rhs._img){
    return true;
  }
  return false;
}

// overloading != using the == operator
bool operator!=(const Complex& lhs, const Complex& rhs){
  return !(lhs == rhs);
}

double real(const Complex& src){
  return src._real;
}

double imag(const Complex& src){
  return src._img;
}

// Uses the standard abs method which takes a long long as input
Complex abs(const Complex& src){
  return Complex(abs((long long)src._real),abs((long long)src._img));
}

// Verkar fungera men använder inte commandot man skulle använda.



// Override << operator
std::ostream& operator<<(std::ostream& ostream, const Complex& complex){
  ostream << complex._real << " + "<<complex._img << "i";
  return ostream;
}

// override >> operator, allowed forms are: real, (real), (real,img)
// Parse input as a string then performs checks to see which input form we have and sets complex values accordingly
std::istream& operator>>(std::istream& istream, Complex& complex){
  std::string s;
  istream >> s;
  if(s[0] == '('){ // check if we have () or just real
    s = s.substr(1, s.size() - 2);
    if(s.find(',') != std::string::npos){ // on the form (real,img)
      int temp = s.find(',');
      complex._real = std::stod(s.substr(0,temp));
      complex._img = std::stod(s.substr(temp+1,s.size()-1));
    } else { // on the form (real)
      complex._real = std::stod(s);
      complex._img = 0;
    }
  } else{ // on the form real
    complex._real = std::stod(s);
    complex._img = 0;
  }
  return istream;
}





// int main(){

//   Complex a1 = 10*((Complex(1,0)/Complex(1,2))*(Complex(1,3)/Complex(2,-4)));
//   Complex a2 = Complex(3,2)*Complex(3,-2)-1+(Complex(3,-7)/21) + 10+ 10_i;
//   Complex aa = Complex((double)155/7,(double)29/3);

//   std::cout << a1 << std::endl;
//   std::cout << a2 << std::endl;
//   std::cout << aa << std::endl;


//   // Complex y;
//   // Complex z(2,3);
//   // Complex x(-2,-3);

//   // // Complex k(x);

//   // y = z+z+1;
//   // y = abs(x);
//   // Complex k = 3 + 5_i;
//   // k -= 5 + 1_i * Complex(5, 3);
//   // cout << k << endl;

//   // // Complex a = +x;
//   // int a = 1;
//   // int b = +a;
//   // cout << b << endl;  

//   // std::cout << y / 6 << std::endl;
//   // std::cout << Complex(6, 6) / 6 << std::endl;
//   // // cout << x << endl;
//   // // cout << real(y) << endl;
//   // // cout << abs(x) << endl;

//   // std::cout << (z == y)<< std::endl;
  

//   // Complex b(1,1);
//   // // b = -b;
//   // std::cout << b<< std::endl;

//   // Complex c(2,2);
//   // b /=c;
//   // Complex k = Complex(1,1)/c;
//   // std::cout << b << std::endl;
//   // std::cout << k << std::endl;
//   return 0;
// }


// // // TODO:

// // // tänkt på hur man ska printa ut tal, hur ska komplex: Complex(0,0), Complex(1,0), Complex(0,1), Complex(1,1)
