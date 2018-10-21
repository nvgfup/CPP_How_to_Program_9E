/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-22 12:37:06
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-22 12:37:06
*****************************************************************************/
#include <iostream>

class Account
{
public:
	explicit Account(int);
	void credit(int);
	void debit(int);
	int getBalance();
private:
	int balance;
};