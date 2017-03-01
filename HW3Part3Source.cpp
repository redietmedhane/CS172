//Rediet Medhane
//Computer Science II, Section 1
//Dumoulin
//HW3, EX 9.10
// 23 February, 2017

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
	
	double getB()
	{
		return b;
	}
	
	double getC()
	{
		return c;
	}
	
	double getD()
	{
		return d;
	}
	
	double getE()
	{
		return e;
	}
	
	double getF()
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
	double x1, y1, x2, y2, x3, y3, x4, y4;

	cout << "Please enter four endpoints:" << endl;
	cout << "x1: " << endl;
	cin >> x1;
	cout << "y1: " << endl;
	cin >> y1;
	cout << "x2: " << endl;
	cin >> x2;
	cout << "y2: " << endl;
	cin >> y2;
	cout << "x3: " << endl;
	cin >> x3;
	cout << "y3: " << endl;
	cin >> y3;
	cout << "x4: " << endl;
	cin >> x4;
	cout << "y4: " << endl;
	cin >> y4;

	cout << "Endpoint 1: ( " << x1 << ", " << y1 << " )" << endl;
	cout << "Endpoint 2: ( " << x2 << ", " << y2 << " )" << endl;
	cout << "Endpoint 3: ( " << x3 << ", " << y3 << " )" << endl;
	cout << "Endpoint 4: ( " << x4 << ", " << y4 << " )" << endl;


	double a = y1 - y2;
	double b = x1 - x2;
	double c = y3 - y4;
	double d = x3 - x4;
	double e = ((a*x1) - (b*y1));
	double f = ((c*x3) - (d*y3));

	LinearEquation le(a, b, c, d, e, f);
	if (le.isSolvable() == false)
		cout << "There is no solution, so the equations are parallel." << endl;
	else
	{
		cout << " The intersection point (X,Y) is: (  " << le.getX() << " , " << le.getY() << " ) " << endl;
	}
}