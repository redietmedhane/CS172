//Rediet Medhane
//CS II, Section 1
//Dr. Dumoulin
//4 April 2017
//Homework 5, Part 4: 12.20

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

template<typename T>
void shuffle(vector<T>& v)
{
	T capacity = v;
	int x = (srand(time(NULL)) % 1000); 
	for (int i = 0; i < capacity; i++)
	{
		v[i] = v[x];
	}
}

int main()
{
	vector<int> test;
	shuffle(test);
}