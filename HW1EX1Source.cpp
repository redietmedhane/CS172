// Rediet Medhane
// CS172-1
// Dr. Joe Dumoulin
// 14 February 2017
// HW1, Part 1

#include <iostream>
#include <ctime>
using namespace std;

void ex02();

int main()
{
	ex02();
}

void ex02()
{
	bool hasPassedTest = true;
	srand(time(NULL));
	int x = rand() % 100;
	int y = rand() % 100;

	int numberOfShares;
	cout << "Please enter an integer value: " << endl;
	cin >> numberOfShares;

	if (numberOfShares < 100)
		cout << "This value is less than 100" << endl;
	else
		cout << "This value is not less than 100" << endl;
	cout << " " << endl;

	cout << "Please enter an integer for the width of a box: " << endl;
	int boxwidth;
	cin >> boxwidth;
	cout << "Please enter an integer the width of a book: " << endl;
	int bookwidth;
	cin >> bookwidth;
	if ((boxwidth % bookwidth) == 0)
		cout << "This box width is evenly divisible by the book wdith!" << endl;
	else
		cout << "This box width is not evenly divisible by the book wdith!" << endl;
	cout << " " << endl;

	cout << "Please enter the shelf life (in days) of a box of chocolate: " << endl;
	int shelfLife;
	cin >> shelfLife;
	cout << "Please enter the outside temperature: " << endl;
	int temp;
	cin >> temp;
	if (temp > 90)
	{
		int newshelfLife = shelfLife - 4;
		cout << "The new shelf life of the chocolate is " << newshelfLife << " days" << endl;
	}

}