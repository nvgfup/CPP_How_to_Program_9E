/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-15 01:14:52
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-21 23:44:31
*****************************************************************************/
#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
	GradeBook gradeBook1("CS101 Introduction to C++ programing");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	cout << "gradeBook1's initial course name is: "
		<< gradeBook1.getCourseName()
		<< "\ngradeBook2's initial course name is: "
		<< gradeBook2.getCourseName() << endl;

	gradeBook1.setCourseName("CS101 C++ Programing");

	cout << "\ngradeBook1's course name is: "
		<< gradeBook1.getCourseName()
		<< "\ngradeBook2's course name is: "
		<< gradeBook2.getCourseName() << endl;
	getchar();
	return 0;
}