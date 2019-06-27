/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-28 15:16:03
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2019-06-27 18:07:21
*****************************************************************/
// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage,
// create a GradeBook object, and call its displayMessage function.
#include <iostream>
using namespace std;

class GradeBook
{
public:
	void displayMessage() const
	{
		cout << "Welcome to the Grade Book!" << endl;
	}
};
int main()
{
	GradeBook myGradeBook;
	myGradeBook.displayMessage();
}