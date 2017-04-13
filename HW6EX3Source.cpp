//Rediet Medhane
//CS172-1
//HW 6, Part 3

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream file;
	string year;
	char gender;
	string name;
	cout << "Enter a year between 2010 and 2014: " << endl;
	cin >> year;
	cout << "Enter the gender: " << endl;
	cin >> gender;
	cout << "Enter the name: " << endl;
	cin >> name;
	string nameBase = "\\\\cs1\\2019\\\\rmedhane19\\\\CS172-1\\\\hw6\\\\HW6EX3\\\\HW6EX3\\\\Babynameranking";
	string fileType = ".txt";

	nameBase += year;
	nameBase += fileType;

	file.open(nameBase);

	int rank;
	string bname;
	string bpop;
	string gname;
	string gpop;

	while (!file.eof())
	{
		file >> rank >> bname >> bpop >> gname >> gpop;
	
		if ((gender == 'M' || gender == 'm') && name == bname)
		{
			cout << name << " is ranked " << rank << " in the year " << year << endl;
			return 0;
		}
		else if ((gender == 'F' || gender == 'f') && name == gname)
		{
			cout << name << " is ranked " << rank << " in the year " << year << endl;
			return 0;
		}
		
	}
}
