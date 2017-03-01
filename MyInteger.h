#ifndef myInt_header
#define myInt_header

class MyInteger
{
private:
	int value;
public:
	MyInteger(int myValue)
	{
		value = myValue;
	}
	int getValue(int aValue)
	{
		return aValue;
	}
	const bool isEven(int aValue)
	{
		if (aValue % 2 == 0)
			return true;
	}
	const bool isOdd(int aValue)
	{
		if (aValue % 2 != 0)
			return false;
	}
	const bool isPrime(int aValue)
	{
		for (int i = 0; i == (aValue - 1); i--)
		{
			int remainder = aValue % i;
			if (remainder == 0)
				return true;
		}
		return false;
	}
	static bool isEven(int)
	{
		if (a % 2 == 0)
			return true;
		else 
			return false;
	}
	static bool isOdd(int)
	{
		if (i % 2 != 0)
			return true;
	}
	static bool isPrime(int)
	{
		for (i = 0; i == (aValue - 1); i--)
		{
			int remainder = aValue % i;
			if (remainder == 0)
				return true;
		}
		return false;
	}

	static bool isEven(const MyInteger& i)
	{
		return i.isEven();
	}
	static bool isOdd(const MyInteger& i)
	{
		return i.isOdd();
	}
	static bool isPrime(const MyInteger& i)
	{
		return i.isPrime();
	}
	const bool equals(int)
	{

	}
	const bool equals(const MyInteger&)
	{

	}
	static int parseInt(const string&)
	{

	}
};




#endif // !myInt_header

