// Rediet Medhane
// CS172-1
// Dr. Joe Dumoulin
// 14 Febrary 2017

#include <iostream>
using namespace std;

void ex04();
void arrayTransfer(int give[], int arraysize);
void arrayCalc(int a[], int asize);

int main()
{
	ex04();
}

void ex04()
{
	double entry;
	const int inputsize = 3;
	int input[inputsize];
	for (int i = 0; i < 3; i++)
	{
		cout << "Please enter an integer:" << endl;
		cin >> entry;
		input[i] = entry;
	}
	double sum = input[0] + input[1] + input[2];
	double product = input[0] * input[1] * input[2];
	cout << "The sum of these three numbers is: " << sum << endl;
	cout << "The product of these numbers is: " << product << endl;
	arrayTransfer(input, 3);
	arrayCalc(input, 3);
}

void arrayTransfer(int give[], int arraysize)
{
	cout << "The size of the array is " << arraysize << endl;
	cout << "The values stored in the array are: " << give[0] << " , " << give[1] << " , " << give[2] << endl;
}

void arrayCalc(int a[], int asize)
{
	cout << "Please enter a value: " << endl;
	double value;
	cin >> value;
	double p = (value * a[2]) + (value * a[1]) + (value * a[0]);
	cout << "We have mulitplied "<< value << " by each of the values wihtin the array and have added up all the products." <<" Result: " << p << endl;
}