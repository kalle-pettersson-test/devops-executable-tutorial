#ifndef COMPLEX_H
class Complex {
private:
  double realPart;
  double imaginary;
public:
  // Constructors
  Complex(): realPart(0),imaginary(0){}
  Complex(double real): realPart(real), imaginary(0){}
  constexpr Complex (double real, double img): realPart(real), imaginary(img) {}
  Complex(const Complex &rhs){
    realPart = rhs.real();
    imaginary = rhs.img();
  };

  // Member functions 
  // Väljer att göra så att alla dessa kan kedjas eftersom att dessa operatorer kan kedjas när man använder doubles.
  Complex& operator=(const Complex& comp);
  Complex& operator+=(const Complex& comp);
  Complex& operator-=(const Complex& comp);
  Complex& operator*=(const Complex& comp);
  Complex& operator/=(const Complex& comp);
  double real() const{
    return realPart;
  };
  double img() const{
    return imaginary;
  };

  // friendly functions.
  friend Complex operator+(const Complex& lhs, const Complex& rhs);
  friend Complex operator+(const Complex& src);
  friend Complex operator-(const Complex& lhs, const Complex& rhs);
  friend Complex operator-(const Complex& src);
  friend Complex operator*(const Complex& lhs, const Complex& rhs);
  friend Complex operator/(const Complex& lhs, const Complex& rhs);
  friend bool operator==(const Complex& lhs, const Complex& rhs);
  friend bool operator!=(const Complex& lhs, const Complex& rhs);
  friend double real(const Complex& src);
  friend double imag(const Complex& src);
  friend Complex abs(const Complex& src);
  friend std::ostream& operator<<(std::ostream& ostream, const Complex& complex);
  friend std::istream& operator>>(std::istream& istream, Complex& complex);
  friend constexpr Complex operator ""_i(unsigned long long int arg);
  friend constexpr Complex operator ""_i(long double arg);

};

constexpr Complex operator ""_i(unsigned long long int arg){
  return Complex(0.0,arg);
}
constexpr Complex operator ""_i(long double arg){
  return Complex(0.0,arg);
}

#endif
