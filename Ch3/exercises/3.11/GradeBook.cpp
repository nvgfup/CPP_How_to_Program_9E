/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-15 01:14:52
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-18 02:27:09
*****************************************************************************/
#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name, string teachername)
	: courseName(name), teacherName(teachername)
{
	// empty body
}

void GradeBook::setCourseName(string name)
{
	courseName = name;
}

string GradeBook::getCourseName() const
{
	return courseName;
}
void GradeBook::setTeacherName(string teachername)
{
	teacherName = teachername;
}

string GradeBook::getTeacherName() const
{
	return teacherName;
}

void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!" << "\nThis course is presented by: "
		<< getTeacherName() << endl;
}