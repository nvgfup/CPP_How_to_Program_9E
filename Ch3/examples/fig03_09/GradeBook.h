/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-15 01:14:52
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-18 02:27:09
*****************************************************************************/
// Fig. 3.9: Gradebook.h
// GradeBook class definition in a separate file from main.
#include <string>

class GradeBook
{
public:
	explicit GradeBook( std::string name )
		: courseName( name )
	{
		// empty
	}

	void setCourseName( std::string name )
	{
		courseName = name;
	}

	std::string getCourseName() const
	{
		return courseName;
	}

	void displayMessage() const
	{
		std::cout << "Welcome to the grade bok for\n" << getCourseName()
			<< "!" << std::endl;
	}
private:
	std::string courseName;
};