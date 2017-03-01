// Rediet Medhane
// CS II, Section 1
// 10.10
// 28 February 2017

#include <iostream>
#include "MyInteger.h"
using namespace std;

int main()
{
	MyInteger i(10);
	cout << "Even: " << i.isEven;
	cout << "Odd: " << i.isOdd;
	cout << "Prime: " << i.isPrime;
	cout << "Even: " << MyInteger::isEven(i);
	cout << "Odd: " << MyInteger::isOdd(i);
	cout << "Prime: " << MyInteger::isPrime(i);

	return 0;
}
