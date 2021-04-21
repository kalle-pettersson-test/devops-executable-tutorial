#ifndef COMPLEX_H
class Complex {
private:
  double _real;
  double _img;
public:

  // <----------------------- Constructors --------------------------->
  Complex(): _real(0),_img(0){}
  Complex(double real): _real(real), _img(0){}
  Complex (double real, double img): _real(real), _img(img) {}

  
  // <--------------------- member functions ------------------------->
  double & real();
  double & img();
  Complex& operator=(const Complex& comp);

  // <-------------------- friendly functions ------------------------>
  friend Complex operator+(const Complex& lhs, const Complex& rhs);
  friend Complex operator-(const Complex& lhs, const Complex& rhs);
  friend Complex abs(const Complex& src);
  friend std::ostream& operator<<(std::ostream& ostream, const Complex& complex);

};


#endif