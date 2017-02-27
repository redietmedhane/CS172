//Rediet Medhane
//CS172-1
//Dr. Joe dumoulin
//14 February 2017
//HW1, Part 2

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ex03();

int main() 
{
	ex03();
}

void ex03()
{
	cout << "Please enter a height of a triangle: " << endl;
	double height;
	cin >> height;
	cout << "Please enter a width of a triangle: " << endl;
	double width;
	cin >> width;
	double hyp = (sqrt((height*height) + (width * width)));
	cout << " The hypotenuse of this triangle is " << hyp << endl;

	char entry;
	cout << "Please enter y or n: " << endl;
	cin >> entry;
	if (entry == 'y')
		cout << "You have entered YES." << endl;
	else if (entry == 'n')
		cout << "You have entered NO." << endl;
	else
		cout << "Invalid answer." << endl;

	char tab = '/t';

	string mailingAddress;
	cout << "Please enter your mailing address: " << endl;
	cin >> mailingAddress;

	string empty = "";

}