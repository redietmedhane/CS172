//Rediet Medhane
//CS172-1
//HW1, Part 1

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;


int main()
{
	ofstream input;
	input.open("\\\\CS1\\2019\\rmedhane19\\CS172-1\\hw6\\HW6EX1\\Exercise13_1.txt");
	

	if (input.fail())
	{
		cout << "File does not exist" << endl;
		cout << "Exit program" << endl;
		return 0;
	}

	srand(time(NULL));
	int x = rand() % 1000;
	for (int i = 0; i < 100; i++)
	{
		input << x + i << " ";
	}
	input.close();

	cout << "done" << endl;
}
