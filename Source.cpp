//Rediet Medhane
//CS II, Section 1
//Dr. Dumoulin
//3 April 2017
//Homework 5, EX2: 12.4

#include <iostream>
using namespace std;

template<typename T>

//array of type T, will take any type of array elements
bool isSorted(const T list[], int size)
{
	int order = 0;
	for (int i = 0; i < size; i++)
	{
		if (list[i] < list[i + 1])
			order++;
	}
	if (order == 4)
		return true;
	else
		return false;
}

//testing the function 
int main()
{
	const int arraySize = 5;

	//arrays with int, double and string element types
	int arrayInt[arraySize] = { 2, 4, 5, 9, 1 };
	double arrayDouble[arraySize] = { 2.3, 3.4, 4.5, 5.6, 6.7 };
	string arrayString[arraySize] = { "my", "name", "is", "Rediet", "Medhane" };

	//displays results of given arrays
	cout << isSorted(arrayInt, arraySize)<< endl;
	cout << isSorted(arrayDouble, arraySize) << endl;
	cout << isSorted(arrayString, arraySize) << endl;
}