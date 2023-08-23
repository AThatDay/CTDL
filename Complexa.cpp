#include "Complexa.h"
# include <math.h> 
# include <iostream> 

Complex::Complex(double a, double b )
{
	real = a;
	imag = b;
}

double Complex::GetReal() const
{
	return real;
}
double Complex::GetImag() const
{
	return imag;
}
double Complex::GetAbs() const
{
	return sqrt(real * real + imag * imag);
}
Complex& operator + (const Complex& c1, const Complex& c2)
{
	Complex c;
	c.real = c1.real + c2.real;
	c.imag = c1.imag + c2.imag;
	return c;
}
// Các hàm toán tử -, *, / 
ostream& operator << (ostream& os, const Complex& c)
{
	os << c.real << " + i" << c.imag;
	return os;
}