/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-14 13:51:52
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Hans Chen
* @Last Modified time: 2018-10-28 15:01:57
*****************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
	void setCourseName(string name)
	{
		courseName = name;
	}

	string getCousreName() const
	{
		return courseName;
	}

	void displayMessage() const
	{
		cout << "Welcome to the garde book for\n" << getCousreName() << "!" << endl;
	}
private:
	string courseName;
};

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "Initial course name is: " << myGradeBook.getCousreName() << endl;

	cout << "\nPlease enter the course name:" << endl;
	getline(cin, nameOfCourse);
	myGradeBook.setCourseName(nameOfCourse);
}