#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();
private:
	double radius;
	static int numberOfObjects;
};

bool operator == (const Circle& c1, const Circle& c2);
bool operator != (const Circle& c1, const Circle& c2);
bool operator <= (const Circle& c1, const Circle& c2);
bool operator < (const Circle& c1, const Circle& c2);
bool operator >= (const Circle& c1, const Circle& c2);
bool operator > (const Circle& c1, const Circle& c2);
#endif
