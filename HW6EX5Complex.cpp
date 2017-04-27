#include "Complex.h"
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;

Complex::Complex(double a, double b)
{
	_a = a;
	_b = b;
}
Complex::Complex(double a)
{
	_a = a;
	_b = 0;
}
Complex::Complex()
{
	_a = 0;
	_b = 0;
}
double Complex::getRealPart(double a)
{
	_a = a;
	return _a;
}
double Complex::getImaginaryPart(double b)
{
	_b = b;
	return _b;
}

Complex Complex::add(double c, double d)
{
	double newa = _a + c;
	double newb = _b + d ;
	return Complex(newa, newb);
}
Complex Complex::subtract(double c, double d)
{
	double newa = _a - c;
	double newb = _b - d;
	return Complex(newa, newb);
}
Complex Complex::multiply(double c, double d)
{
	double newa = (_a*c) - (_b*d);
	double newb = (_b*c) + (d*_a);
	return Complex(newa, newb);
}
Complex Complex::divide(double c, double d)
{
	double newa = (((_a*c) + (_b*d))/((c*c)+(d*d)));
	double newb = (((_b*c) - (d*_a)) / ((c*c) + (d*d)));
	return Complex(newa, newb);
}
double Complex::abs()
{
	double absValue = sqrt((_a*_a) + (_b*_b));
	return absValue;
}
string Complex::toString()
{
	stringstream ss;
	ss << _a;
	if (_b != 0)
	{
		ss << " + " << _b << "i";
	}
	return ss.str();
}

Complex& operator+();
Complex& operator-();
Complex& operator*();
Complex& operator/();
Complex& Complex:: operator+=(const Complex& c, const Complex& d)
{
	*this = add(c, d);
	return* this;
}
Complex& Complex:: operator-=(const Complex& c, const Complex& d)
{
	*this = subtract(c, d);
	return* this;
}
Complex& Complex:: operator*=(const Complex& c, const Complex& d)
{
	*this = multiply(c, d);
	return* this;
}
Complex& Complex:: operator/=(const Complex& c, const Complex& d)
{
	*this = divide(c, d);
	return* this;
}
Complex& Complex:: operator[]()
{
	if (index = 0)
		return _a;
	else
		return _b;
}
Complex& Complex::operator++()
{
	_a++;
	return *this;
}
Complex& Complex::operator--()
{
	_a--;
	return *this;
}
Complex Complex::operator++()
{
	_a++;
	return *this;
}
Complex Complex::operator--()
{
	_a--;
	return *this;
}
Complex Complex::operator+();
Complex Complex::operator-();
friend ostream& operator<<(ostream&, const Complex&);
friend istream& operator >> (istream&, Complex&);
