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
	GradeBook gradeBook1("CS101 Introduction to C++ programing", "Hans Chen");

	gradeBook1.displayMessage();
	getchar();
	return 0;
}