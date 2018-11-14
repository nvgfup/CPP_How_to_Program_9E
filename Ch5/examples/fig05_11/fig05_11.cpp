/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-15 01:49:13
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-15 01:50:26
*****************************************************************************/
#include "GradeBook.h"

int main()
{
	GradeBook myGradeBook("CS101 C++ Programming");

	myGradeBook.displayMessage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();
}