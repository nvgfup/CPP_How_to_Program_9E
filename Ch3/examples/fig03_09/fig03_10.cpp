/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-15 01:14:52
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2019-06-27 17:53:53
*****************************************************************************/
// Fig. 3.10: fig03_10.cpp
// Including class GradeBook from file GradeBook.h for use in main.
#include "GradeBook.h"
using namespace std;

int main()
{
	GradeBook gradeBook1( "CS101 Introduction to C++ Programing" );
	GradeBook gradeBook2( "CS102 Data Structures in C++" );

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
	getchar();
	return 0;
}