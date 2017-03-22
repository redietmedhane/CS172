//Rediet Medhane
// CS II, Section 3
// Dr. Dumoulin
// HW4, Part 3

#include <iostream>
using namespace std;

int smallestElement(int array[], int size);

int main()
{
	//constant size for the array
	const int size = 7;
	int* list = NULL;
	list = new int[size];
	int entry = 0; 

	//takes in an entry and makes it the next element in the array
	for (int i = 0; i <= size; i++)
	{
		cout << "Please enter an integer: " << endl;
		list[i] = 0;
		cin >> entry;
		list[i] = entry;
	}
	int* plist = list;
	
	cout << "The smallest element is: " << smallestElement(list, size) << endl;
}

int smallestElement(int* array, int size)
{
	int smallest = array[0];
	for (int i = 1; i <= size; i++)
	{
		//compares elements and updates if there is a smaller element
		if (array[0] > array[i])
			smallest = array[i];
	}
	return smallest;
}
