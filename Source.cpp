//Rediet Medhane
//CS172-1
//Dr. Joe Dumoulin
//14 February 2017
//HW1EX3

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void ex02();
void ex03(int a);
void add(int p, int q);
void plusOne(int r);

int main()
{
	ex02();
	plusOne(8);
}

void ex02()
{
	
	int entry = 0;
	do
	{
	
		cout << "Please enter an integer between 1 and 10: " << endl;
		cin >> entry;
	} while (!(entry >= 1 && entry <= 10));
	 
	if (entry >= 1 && entry <= 10)
		{
			double cube = 0;
			double cubesum = 0;
			for (int i = 1; i <= entry; i++)
			{
				cube = i*i*i;
				cubesum = cubesum + cube;
			}
			cout << "The sum of the cubes from 1 to your entry, " << entry << ", is " << cubesum << endl;
		}

	int i = 0;
	do
	{
		cout << "*";
		i++;
	} while (i < entry);
	cout << endl;

	for (int i = 0; i <= 40; i++)
	{
		if (i % 2 == 0)
		{
			int evennum = i;
			cout << i << " ";
		}
	}
	cout << endl;
	ex03(entry);
	srand(time(NULL));
	int x = rand() % 100;
	int y = rand() % 100;
	add(x, y);
}

void ex03(int a)
{
	double twice = a * 2;
	cout << "Your entry times two is " << twice << endl;
}

void add(int p, int q)
{
	int sum = p + q;
}
void plusOne(int r)
{
	int onemore = r + 1;
	cout << "The given integer plus one is " << onemore << endl;
}