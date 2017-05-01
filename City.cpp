// City class implementation
//I affirm that all code given below was written solely by me, Rediet Medhane, and that any help I received adhered to the rules stated for this exam. 

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Citizen.h"
#include "City.h"
using namespace std;


//Creates a new city with the given name
//When the city is created you need to restore
//it's population from a file.
//Hint: You will want to make the file name
//be based on the name of the city.
City::City(string cityName)
{
	_cityName = cityName;
	string fileType = ".txt";
	string fileName = "\\\\cs1\\2019\\rmedhane19\\CS172-1\\EXAM 2\\EXAM 2\\";
	fileName += _cityName;
	fileName += fileType;
	fstream file(fileName, ios::in);
	if (file.is_open())
	{
		int id;
		string fname, lname, color;
		while (file >> id >> fname >> lname >> color)
		{
			Citizen* c = new Citizen(id, fname, lname, color);
			citizenList.push_back(c);
		}
	}
}

//This is the destructor for the city.  When
//this city is destroyed, save the population of
//the city to a file so that you can restore
//it in the constructor the next time that
//a city with this name is created.
City::~City()
{
	string fileType = ".txt";
	string fileName = "\\\\cs1\\2019\\rmedhane19\\CS172-1\\EXAM 2\\EXAM 2\\";
	fileName += _cityName;
	fileName += fileType;
	fstream file2(fileName, ios::out);
	if (file2.is_open())
	{
		for (int i = 0; i < citizenList.size(); i++)
		{
			file2 << citizenList[i]->getId() << " "
				<< citizenList[i]->getFirstName() << " "
				<< citizenList[i]->getLastName() << " " 
				<< citizenList[i]->getFavoriteColor() << endl;
			delete citizenList[i];
		}
	}
	else
	{
		for (int i = 0; i < citizenList.size(); i++)
		{
			delete citizenList[i];
		}
	}
}

//Returns the city name
string City::getCityName()
{
	return _cityName;
}

//Returns the number of citizens in this city
int City::populationSize()
{
	return citizenList.size();
}

//Returns the citizen at the given index.
Citizen* City::getCitizenAtIndex(int index)
{
	if (index >= 0 && index < citizenList.size())
	{
		return citizenList[index];
	}
	return NULL;
}

//Adds a citizen to this city. You will need to
//make a copy of this citizen so that you make
//sure to keep it around for the life of the city.
void City::addCitizen(Citizen* citizen)
{
	Citizen* c = new Citizen(citizen);
	citizenList.push_back(c);
}

//Returns the citizen with the given id.
Citizen* City::getCitizenWithId(int id)
{
	for (int i = 0; i < citizenList.size(); i++)
	{
		if (citizenList[i]->getId() == id)
		{
			return citizenList[i];
		}
	}
	return NULL;
}

//Returns a vector of citizens that all have
//the given color as their favorite color.
//For example, if color is “Blue” this will return all citizens
//for this city who’s favorite color is Blue.
vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
	vector<Citizen*> samecolor;
	for (int i = 0; i < citizenList.size(); i++)
	{
		if (citizenList[i]->getFavoriteColor() == color)
		{
			samecolor.push_back(citizenList[i]);
		}
	}
	return samecolor;
}
