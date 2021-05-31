#include <cxxtest/TestSuite.h>
#include "complex.h"

// Test class
class MyTestSuite : public CxxTest::TestSuite {
  public:
  // Tests here:

    void ASSERT_COMPLEX_EQUALS(Complex a, Complex b){
        double TOL = 1e-10;
        TS_ASSERT_EQUALS(abs(a.real()-b.real()) < TOL,1);
        TS_ASSERT_EQUALS(abs(a.img()-b.img()) < TOL,1);
    }

    void testDefaultConstructor () { 
        Complex a;
        TS_ASSERT_EQUALS(a.real(), 0);
        TS_ASSERT_EQUALS(a.img(), 0);
    }

    void testOneParamConstructor () { 
        Complex a(1);
        TS_ASSERT_EQUALS(a.real(), 1);
        TS_ASSERT_EQUALS(a.img(), 0);
    }

    void testTwoParamConstructor(){
        Complex a(2,3);
        TS_ASSERT_EQUALS(a.real(), 2);
        TS_ASSERT_EQUALS(a.img(), 3);
    }

    void testGetters(){
        Complex a(2,3);
        TS_ASSERT_EQUALS(2,a.real());
        TS_ASSERT_EQUALS(3,a.img());
    }

    void testassignmentEqual(){
        Complex a(2,3);
        Complex b = a;

        TS_ASSERT_EQUALS(b.real(), 2);
        TS_ASSERT_EQUALS(b.img(), 3);
    }

    void testBinaryPlus (){
        Complex a(1,1);
        Complex b(2,2);
        Complex c(3,3);

        Complex d = a + b;

        ASSERT_COMPLEX_EQUALS(c,d);
    }

    void testBinaryMinus (){
        Complex a(1,1);
        Complex b(2,2);
        Complex c(3,3);

        Complex d = c - a;

        ASSERT_COMPLEX_EQUALS(b,d);
    }

    void testAbs (){
        Complex a = abs(Complex(1,1));
        Complex b = abs(Complex(-2,2));
        Complex c = abs(Complex(-3,-3));
        Complex d = abs(Complex(0,0));

        Complex a_res(1,1);
        Complex b_res(2,2);
        Complex c_res(3,3);
        Complex d_res(0,0);

        ASSERT_COMPLEX_EQUALS(a,a_res);
        ASSERT_COMPLEX_EQUALS(b,b_res);
        ASSERT_COMPLEX_EQUALS(c,c_res);
        ASSERT_COMPLEX_EQUALS(d,d_res);
    }    

};
