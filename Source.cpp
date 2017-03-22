 //Rediet Medhane
// CS II, Section 1
// Dr. Dumoulin
// HW4, Part 5

#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
	Course course1("DataStructures", 10);
	course1.addStudent("Pete Jones");
	cout << "Num of students in Course 1: " << course1.getNumberOfStudents() << endl;
	string* students = course1.getStudents();
}


Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}
Course::~Course()
{
	delete [] students;
}
string Course::getCourseName() const
{
	return courseName;
}
void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++;
}
void Course::dropStudent(const string& name)
{
	delete name;
}
string* Course::getStudents() const
{
	return students;
}
int Course::getNumberOfStudents() const
{
	return numberOfStudents;
} 
void clear()
{
	for (int i = 0; i <= numberOfStudents; i++)
		delete student;
}
