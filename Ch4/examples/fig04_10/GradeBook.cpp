/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-04 18:07:39
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-04 18:27:02
*****************************************************************/
#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name)
{
	setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
	CourseName = name;
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
	unsigned int gradeCounter = 1;

	while (gradeCounter <= 10)
	{
		cout << "Enter grade: ";
		int grade = 0;
		cin >> grade;
		total = total + grade;
		gradeCounter = gradeCounter + 1;
	}

	//termination phase
	int average = total / 10;

	//display total and average of grades
	cout << "\nTotal of all 10 grades is " << total << endl;
	cout << "Class average is " << average << endl;
}