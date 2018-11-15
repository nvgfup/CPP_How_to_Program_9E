/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-16 00:17:34
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-16 00:27:12
*****************************************************************************/

#include "GradeBook.h"

int main()
{
	GradeBook myGradeBook("CS101 C++Programming");

	myGradeBook.displayMessage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();
}