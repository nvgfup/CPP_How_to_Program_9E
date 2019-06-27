/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-15 01:14:52
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2019-06-27 18:00:15
*****************************************************************************/
// Fig. 3.13: fig03_13.cpp
// GradeBook class demonstration after separating
// its interface from its implementation.
#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
	GradeBook gradeBook1( "CS101 Introduction to C++ programing" );
	GradeBook gradeBook2( "CS102 Data Structures in C++" );

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
}