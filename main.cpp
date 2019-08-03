#include <iostream>
#include "Header.h"
using namespace std; //this is kind of not recommended, right?

int main()
{
	string courseName; //initializing value courseName
	GradeBook firstGradeBook("Finger Painting 101"); //first object: "name" = Finger Painting 101
	GradeBook secondGradeBook("Underwater Basket Weaving"); //second object: "name" = Underwater Basket Weaving
	cout << "firstGradeBook created for course: " << firstGradeBook.getCourseName() << "\nsecondGradeBook created for course: " << secondGradeBook.getCourseName() << endl;
}