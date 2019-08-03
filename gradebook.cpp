#include <iostream>
#include "gradebook.h"
using namespace std;

GradeBook::GradeBook(string name)
    :courseName(name)

{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
    if (name.size() <= 25)
        courseName = name;
    if (name.size() > 25)
    {
        courseName = name.substr(0, 25);

        cerr <<"Name \"" << name << "\" exceeds the maximum length (25). \n Limiting the course name to the first 25 characters. \n" << endl;
    }
}

string GradeBook::getCourseName(string name)
{
    return courseName;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
}
