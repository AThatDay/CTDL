#pragma once

# ifndef COMPLEX_H 
# define COMPLEX_H 
#include<iostream>
using namespace std;

class Complex
{
public:
	Complex(double a = 0.0, double b = 0.0);
	double GetReal() const;
	double GetImag() const;
	double GetAbs() const;
	friend Complex& operator + (const Complex& c1, const
		Complex& c2);
	/*friend Complex& operator - (const Complex& c1, const
		Complex& c2);
	friend Complex& operator * (const Complex& c1, const
		Complex& c2);

		friend Complex & operator / (const Complex & c1, const
			Complex & c2);*/

	friend ostream & operator << (ostream& os, const Complex& c);
private:
	double real;
	double imag;
};
# endif

