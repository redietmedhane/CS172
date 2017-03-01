// Rediet MEdhane
// Computer Science II, Section 1
// Dr. Joe Dumoulin
// 21 February 2017
// CH9, EX9

#include <iostream>
using namespace std;

class LinearEquation
{
private:
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;

public:
	LinearEquation(double a1, double b1, double c1, double d1, double e1, double f1)
	{
		a = a1;
		b = b1;
		c = c1;
		d = d1;
		e = e1;
		f = f1;
	}

	double getA()
	{
		return a;
	}
	double setA()
	{
		return a;
	}
	double getB()
	{
		return b;
	}
	double setB()
	{
		return b;
	}
	double getC()
	{
		return c;
	}
	double setC()
	{
		return c;
	}
	double getD()
	{
		return d;
	}
	double setD()
	{
		return d;
	}
	double getE()
	{
		return e;
	}
	double setE()
	{
		return e;
	}
	double getF()
	{
		return f;
	}
	double setF()
	{
		return f;
	}

	bool isSolvable()
	{
		double diff;
		diff = ((a * d) - (b * c));
		if (diff == 0)
			return false;
		else
			return true;
			
	}

	double getX()
	{
		double x = ((e*d) - (b*f)) / ((a*d) - (b*c));
		return x;
	}

	double getY()
	{
		double y = ((a*f) - (e*c)) / ((a*d) - (b*c));
		return y;
	}
};

int main()
{
	double givena, givenb, givenc, givend, givene, givenf;
	
	cout << "Please enter values for a-f." << endl;
	cout << "a: " << endl;
	cin >> givena;
	cout << "b: " << endl;
	cin >> givenb;
	cout << "c: " << endl;
	cin >> givenc;
	cout << "d: " << endl;
	cin >> givend;
	cout << "e: " << endl;
	cin >> givene;
	cout << "f: " << endl;
	cin >> givenf;

	LinearEquation le(givena, givenb, givenc, givend, givene, givenf);
	if (le.isSolvable() == false)
		cout << "There is no solution" << endl;
	else
	{
		cout << "X = " << le.getX() << endl;
		cout << "Y = " << le.getY() << endl;
	}
}