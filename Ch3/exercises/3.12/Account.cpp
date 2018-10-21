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

Account::Account(int money)
{
	if (money >= 0)
		balance = money;
	else
	{
		balance = 0;
		cerr << "\nInitial accout balance is invalid!" << endl;
	}
}

int Account::getBalance()
{
	return balance;
}

void Account::credit(int money)
{
	balance = balance + money;
}

void Account::debit(int money)
{
	if (balance < money)
	{
		balance = balance;
		cout << "Deposit is more than balance" << endl;
	}
	else
		balance = balance - money;
}