/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-28 15:16:03
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2019-06-26 16:57:05
*****************************************************************/
#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
	void displayMessage(string courseName) const
	{
		cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
	}
};

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "Please enter the course name:" << endl;
	getline(cin, nameOfCourse);
	cout << endl;

	myGradeBook.displayMessage(nameOfCourse);
}