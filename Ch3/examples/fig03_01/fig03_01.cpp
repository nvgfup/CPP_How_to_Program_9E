/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-06 00:32:45
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Hans Chen
* @Last Modified time: 2018-10-28 15:01:29
*****************************************************************************/
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