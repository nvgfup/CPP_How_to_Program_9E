/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-15 01:14:52
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-18 02:27:09
*****************************************************************************/
// Fig. 3.11: GradeBook.h
// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string>

class GradeBook
{
public:
	explicit GradeBook(std::string);
	void setCourseName(std::string);
	std::string getCourseName() const;
	void displayMessage() const;
private:
	std::string courseName;
};