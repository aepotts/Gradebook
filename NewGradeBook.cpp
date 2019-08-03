// NewGradeBook.cpp : Describes GradeBook Class
// "New" because I destroyed the last one with fire.

#include <iostream> //all the I/O stuff
#include "Header.h" //my header file
using namespace std; //all the standard library

//Constructor???
GradeBook::GradeBook(string name)
	:courseName(name)
{
	setCourseName(name);
}

//cleans up "name" and updates courseName to "name"
void GradeBook::setCourseName(string name)
{
	if (name.size() <= 25)
		courseName = name;
	if (name.size() > 25)
	{
		courseName = name.substr(0, 25);
		cerr << "Name \"" << name << "\" exceeds the maximum length (25). \n Limiting the course name to the first 25 characters. \n" << endl;
	}
}

//Grabs the value of courseName from GradeBook object
string GradeBook::getCourseName() const
{
	return courseName;
}

void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
