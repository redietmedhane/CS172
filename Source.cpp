//Rediet Medhane
//CS II, Section 1
//Dr. Dumoulin
//5 April 2017
//Homework 5, Part 5: 12.25

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

class Date
{
private:
	int _year;
	int _month;
	int _day;

public:
	Date()
	{
		// Set Date to "today"
		time_t seconds = time(0); // get the time right now in seconds
		tm *ptm = localtime(&seconds);
		_year = 1900 + ptm->tm_year;
		_month = ptm->tm_mon + 1;
		_day = ptm->tm_mday;
	}
	Date(int time_since_epoch)
	{
		// Set Date to "time since epoch"
		time_t seconds = time_since_epoch;
		tm *ptm = localtime(&seconds);
		_year = 1900 + ptm->tm_year;
		_month = ptm->tm_mon + 1;
		_day = ptm->tm_mday;
	}
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& date)
	{
		_year = date._year;
		_month = date._month;
		_day = date._day;
	}

	void setDate(int time_since_epoch)
	{
		// Set Date to "time since epoch"
		time_t seconds = time_since_epoch;
		tm *ptm = localtime(&seconds);
		_year = 1900 + ptm->tm_year;
		_month = ptm->tm_mon + 1;
		_day = ptm->tm_mday;
	}
	void setDate(const Date& date)
	{
		_year = date._year;
		_month = date._month;
		_day = date._day;
	}
	int getYear() const
	{
		return _year;
	}
	int getMonth() const
	{
		return _month;
	}
	int getDay() const
	{
		return _day;
	}

};

class Transaction
{
private:
	char type;
	double amount;
	double balance;
	string description;
	Date date;
public:
	char getType()
	{
		return type;
	}
	char setType(char type1)
	{
		type = type1;
		return type;
	}
	double getAmount()
	{
		return amount;
	}
	double setAmount(double amnt)
	{
		amount = amnt;
		return amount;
	}
	double getBalance()
	{
		return balance;
	}
	double setBalance(double bal)
	{
		balance = bal;
		return balance;
	}
	string getDescription()
	{
		return description;
	}
	string setDescription(string descript)
	{
		description = descript;
		return description;
	}
	Transaction(char type, double amount, double balance, string description)
	{
		date.getMonth();
		date.getDay();
		date.getYear(); 
		if (amount < 0)
			type = 'W';
		else
			type = 'D';
		amount += balance;
		description = "You have changed your account balance by $";
	}
};

class Account
{
public:
	int id;
	double balance;
	double annualInterestRate;
	string customerName;
	vector<Transaction> transactions;

	//default no-arg constructor	
	Account()
	{
		id = 0;
		balance = 0;
		annualInterestRate = 0;
		customerName = "Bob";
	}
	//accessor and mutator functions for id, balance, and annual interest rate
	int getID()
	{
		return id;
	}
	int setID(int ident)
	{
		id = ident;
		return id;
	}
	double getBalance()
	{
		return balance;
	}
	double setBalance(double bal1)
	{
		balance = bal1;
		return balance;
	}
	double getAnnualIR()
	{
		return annualInterestRate;
	}
	double setAnnualIR(double annIR)
	{
		annualInterestRate = annIR;
		return annualInterestRate;
	}
	string getcName()
	{
		return customerName;
	}
	string setcName(string name)
	{
		customerName = name;
	}
	//monthly interest rate function
	double getMonthlyInterestRate(double aIR)
	{
		double monthlyIR;
		monthlyIR = (aIR / 12);
		return monthlyIR;
	}
	//withdraw and deposit functions
	double withdraw(double amount)
	{
		balance += amount;
		return balance;
	}

	double deposit(double amount)
	{
		balance -= amount;
		//transactions++;
		return balance;
	}

};

int main()
{
	//test program

	Account acc1;
	cout << "The account ID is: " << acc1.setID(1122) << endl;
	cout << "The account balance is: " << acc1.setBalance(20000) << endl;
	cout << "The account annual interest rate is: " << acc1.setAnnualIR(.045) << endl;
	acc1.withdraw(2500);
	cout << "The new balance is: " << acc1.deposit(3000) << endl;
	cout << "The monthly interest rate is: " << acc1.getMonthlyInterestRate(.045) << endl;
}