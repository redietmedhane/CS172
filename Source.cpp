//Rediet Medhane
//CS II, Section 1
// Dr. Dumoulin
// HW4 , Part 2

#include <iostream>
using namespace std;

int* allocarray(int size)
{
	//allocating array
	int* list = new int[size];
	//initializing array
	for (int i = 0; i < size; i++)
		list[i] = 0;
	//returning array pointer
	return list;
}

int* doubleCapacity(const int* list, int size)
{
	int doublesize = size * 2;
	int* pintarray = new int[doublesize];

	for (int i = 0; i < doublesize; i++)
	{
		pintarray[i] = 0;
	}
	for (int i = 0; i < doublesize; i++)
		cout << pintarray[i];
	return pintarray;
}

int main()
{
	cout << "How many elements will you have in your array?" << endl;
	int userSize;
	cin >> userSize;
	const int* array = allocarray(userSize);
	for (int i = 0; i < userSize; i++)
		cout << array[i] << endl;
	//gives first element value
		cout << *doubleCapacity(array, userSize) << endl;

	
}