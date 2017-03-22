// Rediet Medhane
// CS II, Section 1
// Dr. Dumoulin
// HW4, Part 1

#include <iostream>
using namespace std;

void prompt_count(int* size)
{
	cout << "How many numbers will you enter? ";
	cin >> *size;
}

void populate_numbers(int* numbers, int size)
{
	for (int* current = numbers; current < numbers + size; current++)
	{
		cout << "Enter a number: ";
		cin >> *current;
	}
}

int Average(int* numbers, int size)
{
	int average = 0;
	int sum = 0;
	for (int* current = numbers; current < numbers + size; current++)
	{
		sum += *current;
		average = sum / size;
		
	}
	return average;
}

int aboveAverage(int* numbers, int size)
{
	int sum = 0;
	int average = 0;
	int aboveAvg = 0;
	for (int* current = numbers; current < numbers + size; current++)
	{
		sum += *current;
		average = sum / size;
	}
	for (int* current = numbers; current < numbers + size; current++)
	{
		if (*current > average)
			aboveAvg++;
	}
	return aboveAvg;
}

int* alloc_array(int size)
{
	int* pintarray = new int[size];

	for (int i = 0; i < size; i++)
	{
		pintarray[i] = 0;
	}
	return pintarray;
}

int main()
{
	int nums;
	prompt_count(&nums);

	int* numbers = alloc_array(nums);
	populate_numbers(numbers, nums);
	cout << "The average of these numbers is " << Average(numbers, nums) << " ." << endl;
	cout << "There are " << aboveAverage(numbers, nums) << " numbers above the average." << endl;
	delete[] numbers;
}
