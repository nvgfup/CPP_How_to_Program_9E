/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-15 02:01:56
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-15 02:03:43
*****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	for (unsigned int count = 1; count <= 10; ++count)
	{
		if (count == 5)
			continue;

		cout << count << " ";
	}

	cout << "\nUsed continue to skip printing 5" << endl;
}