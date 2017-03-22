// Rediet Medhane
// CS II, Section 1
// Dr. Dumoulin
// HW4, Part 4

#include <iostream>
using namespace std;

class Rectangle2D
{
private:
	double x;
	double y;
	double width;
	double height;

public:
	
	double	getX()
	{
		return x;
	}
	double setX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	double setY()
	{
		return y;
	}
	double getWidth()
	{
		return width;
	}
	double setWidth()
	{
		return width;
	}
	double getHeight()
	{
		return height;
	}
	double setHeight()
	{
		return height;
	}
	Rectangle2D()
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	Rectangle2D(double x1, double y1, double w1, double h1)
	{
		x = x1;
		y = y1;
		width = w1;
		height = h1;
	}
	const double getArea()
	{
		double area = (width * height);
		return area;
	}
	const double getPerimeter()
	{
		double perimeter = ((2 * width) + (2 * height));
		return perimeter;
	}
	const double contains(double x2, double y2)
	{
		double top = y + (.5 * height);
		double bottom = y - (.5 * height);
		double left = x - (.5 * width);
		double right = x + (.5 * width);

		if (x2 >= left && x2 <= right && y2 >= bottom && y2 <= top)
			return true;
		else
			return false;
	}
	const double contains(const Rectangle2D &r)
	{
		double top = r.y + (.5 * r.height);
		double bottom = r.y - (.5 * r.height);
		double left = r.x - (.5 * r.width);
		double right = r.x + (.5 * r.width);

		if (contains(left, top) && contains(left, bottom) && contains(right, top) && contains(right, bottom))
			return true;
		else
			return false;
	}

	const double overlaps(const Rectangle2D &r)
	{
		double top = r.y + (.5 * r.height);
		double bottom = r.y - (.5 * r.height);
		double left = r.x - (.5 * r.width);
		double right = r.x + (.5 * r.width);

		if (contains(left, top) || contains(left, bottom) || contains(right, top) || contains(right, bottom))
			return true;
		else
			return false;
	}
};

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9); 
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << r1.getPerimeter() << " , " << r1.getArea() << endl;

	cout << r1.contains(3, 3) << endl;
	cout << r1.contains(r2) << endl;
	cout << r1.overlaps(r3) << endl;


}
