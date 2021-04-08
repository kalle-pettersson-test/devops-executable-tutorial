#include <iostream>
#include "complex.h"

// <===========================Member operations=============================================>
Complex& Complex::operator= (Complex const& src) {
  this->imaginary = src.img();
  this->realPart = src.real();

  return *this;
}
// Override +=
Complex& Complex::operator+= (Complex const& src) {
  Complex temp(real()+src.real(),img()+src.img());
  *this = temp;
  return *this;
}
// Override -=
Complex& Complex::operator-= (Complex const& src) {
  Complex temp(real()-src.real(),img()-src.img());
  *this = temp;
  return *this;
}
// Override /=
Complex& Complex::operator/= (Complex const& src) {
  double tReal = (real()*src.real()+img()*src.img())/(src.img()*src.img() + src.real()*src.real());
  double tImg = (img()*src.real()-real()*src.img())/(src.img()*src.img() + src.real()*src.real());
  Complex tmp(tReal,tImg);
  *this = tmp;
  return *this;
}
// Override *= 
Complex& Complex::operator*= (Complex const& src) {
  double tReal = real()*src.real()-img()*src.img();
  double tImg = real()*src.img()+src.real()*img();
  Complex tmp(tReal,tImg);
  // std::cout << real << " : "<< img << std::endl;
  *this = tmp;
  return *this;
} 



// <=====================================Non-member functions ================================================>
// overload binary + operator 
Complex operator+(const Complex& lhs, const Complex& rhs){
  return Complex(lhs.real() + rhs.real(),lhs.img() + rhs.img());
}

// overload unary+ operator 
Complex operator+(const Complex& src){
  return Complex(src.real(),src.img());
}

// overload binary - operator 
Complex operator-(const Complex& lhs, const Complex& rhs){
  return Complex(lhs.real() - rhs.real(),lhs.img() - rhs.img());
}

// overload unary - operator 
Complex operator-(const Complex& src){
  return Complex(-src.real(),-src.img());
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
  if(lhs.real() == rhs.real() && lhs.img()==rhs.img()){
    return true;
  }
  return false;
}

// overloading != using the == operator
bool operator!=(const Complex& lhs, const Complex& rhs){
  return !(lhs == rhs);
}

double real(const Complex& src){
  return src.real();
}

double imag(const Complex& src){
  return src.img();
}

// Uses the standard abs method which takes a long long as input
Complex abs(const Complex& src){
  return Complex(abs((long long)src.real()),abs((long long)src.img()));
}

// Verkar fungera men använder inte commandot man skulle använda.



// Override << operator
std::ostream& operator<<(std::ostream& ostream, const Complex& complex){
  ostream << complex.real() << " + "<<complex.img() << "i";
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
      complex.real = std::stod(s.substr(0,temp));
      complex.img = std::stod(s.substr(temp+1,s.size()-1));
    } else { // on the form (real)
      complex.real = std::stod(s);
      complex.img = 0;
    }
  } else{ // on the form real
    complex.real = std::stod(s);
    complex.img = 0;
  }
  return istream;
}





// int main()
// {
//   Complex y;
//   Complex z(2,3);
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
  

//   Complex b(1,1);
//   // b = -b;
//   std::cout << b<< std::endl;

//   Complex c(2,2);
//   b /=c;
//   Complex k = Complex(1,1)/c;
//   std::cout << b << std::endl;
//   std::cout << k << std::endl;
//   return 0;
// }


// TODO:

// tänkt på hur man ska printa ut tal, hur ska komplex: Complex(0,0), Complex(1,0), Complex(0,1), Complex(1,1)