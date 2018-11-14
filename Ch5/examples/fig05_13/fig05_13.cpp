/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-15 01:59:08
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-15 02:00:49
*****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	unsigned int count;

	for(count = 1; count <= 10; ++count)
	{
		if (count == 5)
			break;

		cout << count << " ";
	}

	cout << "\nBroke out loop at count = " << count << endl;
}