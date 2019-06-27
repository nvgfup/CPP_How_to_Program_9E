/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-15 01:14:52
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-18 02:27:09
*****************************************************************************/
// Fig. 3.15: GradeBook.h
// GradeBook class definition presents the public interface of
// the class. Member-function definitions appear in GradeBook.cpp.
#include <string>

class GradeBook
{
public:
	explicit GradeBook( std::string );
	void setCourseName( std::string );
	std::string getCourseName() const;
	void displayMessage() const;
private:
	std::string courseName;
};