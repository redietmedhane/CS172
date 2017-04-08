//Rediet Medhane
//Computer Science II, Section 1
//Dr. Dumoulin
//3 April 2017
//Homework 5, EX 1: 12.2

#include <iostream>
#include <string>
using namespace std;

template< typename T >

T linearSearch(const T list[], int key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return list[i];
	}
	return -1;

}

// do we need to make a class first or just use the template?
int main()
{
	const int aSize = 5;
	string array1[aSize] = {"hello", "how", "are", "you", "today"};
	int array2[aSize] = { 76, 2, 84, 25, 1 };
	double array3[aSize] = { 2.5, 10.1, 8.9, 54.3, 32.5 };
	
	cout << linearSearch(array1, 3, aSize) << endl;
	cout << linearSearch(array2, 3, aSize) << endl;
	cout << linearSearch(array3, 3, aSize) << endl;
}
