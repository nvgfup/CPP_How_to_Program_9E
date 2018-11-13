/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-12 22:15:27
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-12 22:17:33
*****************************************************************/
#include <iostream>
using namespace std;

int main()
{
	unsigned int total = 0;

	for (unsigned int number = 2; number <= 20; number += 2)
		total += number;

	cout << "Sum is " << total << endl;
}