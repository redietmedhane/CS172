//Rediet Medhane
//CS172-1
//HW6, Part 4

#include "Header.h"

int Circle::numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}

double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}

bool operator == (const Circle& c1, const Circle& c2)
{
	if (c1 == c2)
		return true;
	else
		return false;
}

bool operator != (const Circle& c1, const Circle& c2)
{
	if (c1 != c2)
		return true;
	else
		return false;
}
bool operator >= (const Circle& c1, const Circle& c2)
{
	if (c1 >= c2)
		return true;
	else
		return false;
}
bool operator > (const Circle& c1, const Circle& c2)
{
	if (c1 == c2)
		return true;
	else
		return false;
}
bool operator <= (const Circle& c1, const Circle& c2)
{
	if (c1 <= c2)
		return true;
	else
		return false;
}
bool operator < (const Circle& c1, const Circle& c2)
{
	if (c1 < c2)
		return true;
	else
		return false;
}

int main()
{

}



