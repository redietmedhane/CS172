// Rediet Medhane
// Computer Science II, Section 1
// Dr. Joe Dumoulin
// Chapter 10, EX 4
// 23 February 2017

#include <iostream>
#include <string>
using namespace std;

string sort(string& s);

int main()
{
	string s;
	cout << "Please enter a string s: " << endl;
	cin >> s;
	sort(s);
}

string sort(string& s)
{
	int letters[100];
	for (int i = 0; i < 100; i++)
		letters[i] = -1;
	for (int i = 0; i < s.size(); i++)
	{
		letters[i] = static_cast<int>(s[i]);
	}
	int j = 0;
	int temp = 0;
	do
	{
		if (letters[j] > letters[j + 1])
		{
			temp = letters[j+1];
			letters[j + 1] = letters[j];
			letters[j] = temp;
			j = 0;
		}
		else j++;
	} while (letters[j] != -1);
	for (int i = 0; i < s.size() + 1; i++)
	{
		s[i] = static_cast<char>(letters[i]);
	}
	
	cout << "The sorted string is: " << s << endl;
	return s;
}