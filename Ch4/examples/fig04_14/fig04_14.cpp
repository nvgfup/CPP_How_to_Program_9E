/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-05 00:12:15
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-05 00:24:50
*****************************************************************/
#include "GradeBook.h"

int main()
{
	GradeBook myGradeBook("CS101 C++ Programing");

	myGradeBook.displayMessage();
	myGradeBook.determineClassAverage();
}