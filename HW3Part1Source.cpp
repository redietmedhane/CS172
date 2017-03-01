/////
//Rediet Medhane
// Computer Science 1, Section 3
// Dr. Joe Dumoulin
// 16 February 2017
// HW9, EX4: MyPoint
/////
#include <iostream>
#include <cmath>
using namespace std;

class MyPoint
{
public:
	double x;
	double y;
//default constuctor
	MyPoint()
	{
		x = 0;
		y = 0;
	}
//non-default constuctor
	MyPoint(double newx, double newy)
	{
		x = newx;
		y = newy;
	}
//get and set functions for x and y
	double getXpoint()
	{
		return x;
	}
	double setXpoint(double givenx)
	{
		x = givenx;
		return x;
	}
	double getYpoint()
	{
		return y;
	}
	double setYpoint(double giveny)
	{
		y = giveny;
		return y;
	}
//distance function
	double distance(double x1, double y1,double x2, double y2)
	{
		double d;
		d = sqrt((pow((x2 - x), 2.0) + pow((y2 - y), 2.0)));
		return d;
	}

	};

//test program
int main()
{
	MyPoint point1, point2;

	cout << "Point One: (" << point1.setXpoint(0) << "," << point1.setYpoint(0) << ") " << endl;
	cout << "Point Two: (" << point2.setXpoint(10) << "," << point2.setYpoint(30.5) << ")" << endl;
	cout << "The distance between the two points is: " << point1.distance(0.0, 0.0, 10.0, 30.5) << endl;

}
