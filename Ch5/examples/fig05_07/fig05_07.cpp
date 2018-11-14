/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-14 23:49:08
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-14 23:52:16
*****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	unsigned int counter = 1;

	do
	{
		cout << counter << " ";
		++counter;
	} while (counter <= 10);

	cout << endl;
}