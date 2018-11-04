/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-04 18:22:11
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-04 18:25:30
*****************************************************************/
#include "GradeBook.h"

int main()
{
	GradeBook myGradeBook("CS101 C++ Programing");

	myGradeBook.displayMessage();
	myGradeBook.determineClassAverage();
}