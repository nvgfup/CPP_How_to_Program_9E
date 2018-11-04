/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-04 22:59:58
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-05 00:20:23
*****************************************************************/
#include <iostream>
#include <iomanip>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name)
{
	setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
	if (name.size() <= 25)
		CourseName = name;
	else
	{
		CourseName = name.substr(0, 25);
		cerr << "Name \"" << name << "\" exceeds maximum length (25) .\n"
			<< "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName() const
{
	return CourseName;
}

void GradeBook::displayMessage() const
{
	cout << "Welcome to teh grade book for\n" << getCourseName() << "!\n"
		<< endl;
}

void GradeBook::determineClassAverage() const
{
	int total = 0;
	unsigned int gradeCounter = 0;

	cout << "Enter grade or -1 to quit: ";
	int grade = 0;
	cin >> grade;

	while (grade != -1)
	{
		total = total + grade;
		gradeCounter = gradeCounter + 1;

		cout << "Enter grade or -1 to quit: ";
		cin >> grade;
	}

	if (gradeCounter != 0)
	{
		double average = static_cast< double >( total ) / gradeCounter;

		cout << "\nTotal of all" << gradeCounter << " grades entered is "
			<< total << endl;
		cout << setprecision(2) << fixed;
		cout << "Class average is " << average << endl;
	}
	else
		cout << "No grades were entered" << endl;
}