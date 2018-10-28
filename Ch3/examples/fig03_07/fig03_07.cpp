/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-15 01:14:52
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Hans Chen
* @Last Modified time: 2018-10-28 15:02:05
*****************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
	explicit GradeBook(string name)
		: courseName(name)
	{
		// empty body
	}

	void setCourseName(string name)
	{
		courseName = name;
	}

	string getCourseName() const
	{
		return courseName;
	}

	void displayMessage() const
	{
		cout << "Welcome to the grade book for\n" << getCourseName()
			<< "!" << endl;
	}

private:
	string courseName;
};

int main()
{
	GradeBook gradeBook1("CS101 Introduction to C++ programing");
	GradeBook gradeBook2("CS101 Data Structures in C++");

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
}