//Rediet Medhane
//CS II, Section 1
//Dr. Dumoulin
//3 April 2017
//Homework 5, EX3: 12.8

#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
class Vector
{
private:
	T* values;
	int vectorsize;
	int capacity;
public:
	Vector()
	{
		capacity = 20;
		values = new T[capacity];
		vectorsize = 0;
	}
	Vector(int size)
	{
		capacity = size;
		values = new T[capacity];
		vectorsize = 0;
	}
	Vector(int size, T defaultValue)
	{
		capacity = size;
		values = new T[capacity];
		for (int i = 0; i < capacity; i++)
		{
			values[i] = defaultValue;
		}
		vectorsize = capacity;
	}
	void push_back(T element)
	{
		T *temp = v;
		v = new T[++size];
		temp[size] = element;

		for (int i = 0; i < size + 1; ++i) 
		{
			v[i] = temp[i];
		}

		delete[] temp;
	}
	void pop_back()
	{
		ensureCapacity();
		if (vsize > 0)
		{
			array[vsize].~T();
			--vsize;
		}
	}
	unsigned const size()
	{
		return values;
	}
	const T at(int index)
	{
		return T[index];
	}

	const bool empty()
	{
		if (capacity = 0)
			return true;
	}

	void clear()
	{
		values = 0;
	}
	/* void swap(vector v2)
	{
		ensureCapacity();
		capacity = size;
		values = new T[capacity];
		for (int i = 0; i < capacity; i++)
		{
			values[i] = v2[i];
		}
	} */
	void ensureCapacity()
	{
		if (vectorsize >= capacity)
		{
		T* old = values;
		capacity = 2 * size;
		values = new T[size * 2];
		
		for (int i = 0; i < size; i++)
			values[i] = old[i];

		delete[] old;
		}
	}
};

int main()
{
	
	Vector<int> intVector(5);
	intVector.push_back(12);
	intVector.pop_back();
	cout << intVector.at(3) << endl;

	return 0;
}