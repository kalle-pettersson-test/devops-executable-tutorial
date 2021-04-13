#ifndef COMPLEX_H
class Complex {
private:
  double _real;
  double _img;
public:


  // Constructors
  Complex(): _real(0),_img(0){}
  Complex(double real): _real(real), _img(0){}
  constexpr Complex (double real, double img): _real(real), _img(img) {}
  

  // Väljer att göra så att alla dessa kan kedjas eftersom att dessa operatorer kan kedjas när man använder doubles.
  Complex& operator=(const Complex& comp);
  Complex& operator+=(const Complex& comp);
  Complex& operator-=(const Complex& comp);
  Complex& operator*=(const Complex& comp);
  Complex& operator/=(const Complex& comp);
  double & real();
  double & img();

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


};


#endif