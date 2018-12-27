#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
public:
   Complex( double = 0.0, double = 0.0 );
   Complex add( const Complex & );
   Complex subtract( const Complex & );
   void printComplex();
   void setComplexNumber( double, double );
private:
   double realPart;
   double imaginaryPart;
};
#endif

#include <iostream>
#include "Complex.h"
using std::cout;
Complex::Complex(double real, double imaginary)
{
   setComplexNumber(real, imaginary);
}
Complex Complex::add(const Complex &right)
{
   return Complex( realPart+right.realPart, imaginaryPart+right.imaginaryPart);
}
Complex Complex::subtract(const Complex &right)
{
   return Complex(realPart-right.realPart, imaginaryPart-right.imaginaryPart);
}
void Complex::printComplex()
{
   cout << '(' << realPart << ", "<< imaginaryPart << ')';
}
void Complex::setComplexNumber( double rp, double ip )
{
   realPart=rp;
   imaginaryPart=ip;
}
