#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <string>
using namespace std;

class Complex
{
private:
	double _a;
	double _b;
public:
	Complex(double, double);
	Complex(double);
	Complex();
	double getRealPart(double);
	double getImaginaryPart(double);
	Complex add(double, double);
	Complex subtract(double, double);
	Complex multiply(double, double);
	Complex divide(double, double);
	double abs();
	double compareTo();
	string toString();

	Complex& operator+();
	Complex& operator-();
	Complex& operator*();
	Complex& operator/();
	Complex& operator+=(const Complex& c, const Complex& d);
	Complex& operator-=(const Complex& c, const Complex& d);
	Complex& operator*=(const Complex& c, const Complex& d);
	Complex& operator/=(const Complex& c, const Complex& d);
	Complex& operator[]();
	Complex& operator++();
	Complex& operator--();
	Complex operator++();
	Complex operator--();
	Complex operator+();
	Complex operator-();
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);
};

bool operator<(const Complex& a, const Complex& b, const Complex& c, const Complex& d);
bool operator<=(const Complex& a, const Complex& b, const Complex& c, const Complex& d);
bool operator>(const Complex& a, const Complex& b, const Complex& c, const Complex& d);
bool operator>=(const Complex& a, const Complex& b, const Complex& c, const Complex& d);
bool operator==(const Complex& a, const Complex& b, const Complex& c, const Complex& d);
bool operator!=(const Complex& a, const Complex& b, const Complex& c, const Complex& d);

Complex operator+(const Complex& a, const Complex& b, const Complex& c, const Complex& d);
Complex operator-(const Complex& a, const Complex& b, const Complex& c, const Complex& d);
Complex operator*(const Complex& a, const Complex& b, const Complex& c, const Complex& d);
Complex operator/(const Complex& a, const Complex& b, const Complex& c, const Complex& d);

#endif

