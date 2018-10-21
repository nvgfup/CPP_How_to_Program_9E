/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-22 12:37:06
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-22 12:37:06
*****************************************************************************/
#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
	Account accountOne(50);
	cout << "Initial accountOne balance is: " << accountOne.getBalance()
		<< endl;

	accountOne.credit(60);
	accountOne.debit(30);
	cout << "Final accountOne balance is: " << accountOne.getBalance()
		<< endl;

	Account accountTwo(-30);
	cout << "Initial accountTwo balance is: " << accountTwo.getBalance()
		<< endl;

	accountTwo.credit(20);
	accountTwo.debit(90);
	cout << "Final accountTwo balance is: " << accountTwo.getBalance()
		<< endl;

	getchar();
	return 0;
}