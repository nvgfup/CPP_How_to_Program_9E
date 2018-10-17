/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-14 12:08:01
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-18 02:27:11
*****************************************************************************/
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
	getchar();
	return 0;
}