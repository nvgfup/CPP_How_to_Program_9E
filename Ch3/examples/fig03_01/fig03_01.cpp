/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-28 15:16:03
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2019-06-26 16:56:54
*****************************************************************/
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
int main(int argc, char const *argv[])
{
	GradeBook myGradeBook;
	myGradeBook.displayMessage();
}