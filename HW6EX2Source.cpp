//Rediet Medhane
//CS172-1
//HW6, Part 2

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream givenfile;
	string fileName;
	cout << "Enter a file name" << endl;
	cin >> fileName;

	//checks for file existence
	givenfile.open(fileName);
	if (!givenfile)
		cout << "file does not exist" << endl;

	//if file does exist, cout characters in file
		char c;
		int count = 0;
		while (givenfile >> c)
			count++;
		cout << "There are " << count << " characters in this file." << endl;

		givenfile.close();

}
