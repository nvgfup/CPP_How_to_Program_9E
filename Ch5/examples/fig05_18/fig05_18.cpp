/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-15 23:38:16
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-15 23:47:56
*****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	cout << boolalpha << "Logical AND (&&)"
		<< "\nfalse && false: " << (false && false)
		<< "\nfalse && true: " << (false && true)
		<< "\ntrue && false: " << (true && false)
		<< "\ntrue && true: " << (true && true) << "\n\n";

	cout << "Logical OR (||)"
		<< "\nfalse || false: " << (false || false)
		<< "\nfalse || true: " << (false || true)
		<< "\ntrue || false: " << (true || false)
		<< "\ntrue || true: " << (true || true) << "\n\n";
	
	cout << "Logical NOT (!)"
		<< "\n!false: " << (!false)
		<< "\n!true: " << (!true) << endl;

}