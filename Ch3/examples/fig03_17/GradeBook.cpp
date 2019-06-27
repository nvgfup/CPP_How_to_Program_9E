/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-15 01:14:52
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2019-06-27 18:01:36
*****************************************************************************/
// Fig. 3.16: GradeBook.cpp
// Implementations of the GradeBook member-function definitions.
// The setCourseName function performs validation.
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook( string name )
{
	setCourseName( name );
}

void GradeBook::setCourseName( string name )
{
	if ( name.size() <= 25 )
		courseName = name;
	if ( name.size() > 25 )
	{
		courseName = name.substr( 0, 25 );
		cerr << "Name \"" << name << "\" exceeds maximum length (25) .\n"
			<< "Limiting courseName to first 25 characters. \n" << endl;
	}
}

string GradeBook::getCourseName() const
{
	return courseName;
}

void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!" << endl;
}