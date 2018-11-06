/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-06 00:21:35
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-06 23:48:03
*****************************************************************/
#include <iostream>
#include "CreditCard.h"

CreditCard::CreditCard(){}

void CreditCard::setAccount()
{
	account = 0;

	std::cout << "Enter account number (or -1 to quit): ";
	std::cin >> account;
}

void CreditCard::setBalance()
{
	balance = 0.0f;

	std::cout << "Enter beginning balance: ";
	std::cin >> balance;
}

void CreditCard::setCharges()
{
	charges = 0.0f;

	std::cout << "Enter total charges: ";
	std::cin >> charges;
}

void CreditCard::setCredits()
{
	credits = 0.0f;

	std::cout << "Enter total credits: ";
	std::cin >> credits;
}

void CreditCard::setCreditLimit()
{
	creditLimit = 0.0f;

	std::cout << "Enter credit limit: ";
	std::cin >> creditLimit;
}

void CreditCard::setNewBalance()
{
	newBalance = 0.0f;

	newBalance = (getBalance() + getCharges() - getCredits());
}

double CreditCard::getAccount() const {return account;}
double CreditCard::getBalance() const {return balance;}
double CreditCard::getCharges() const {return charges;}
double CreditCard::getCredits() const {return credits;}
double CreditCard::getCreditLimit() const {return creditLimit;}
double CreditCard::getNewBalance() const {return newBalance;}

void CreditCard::run()
{
	setAccount();

	while(getAccount() != -1)
	{
		setBalance();
		setCharges();
		setCredits();
		setCreditLimit();

		// calculate new balance
		setNewBalance(); 
		
		std::cout << "New balance is " << getNewBalance() << std::endl;

		if (getNewBalance() > getCreditLimit()){
			std::cout << "\nAccount: " << getAccount();
			std::cout << "\nCredit limit: " << getCreditLimit();
			std::cout << "\nBalance: " << getNewBalance();
			std::cout << "\nCredit Limit Exceeded.\n" << std::endl;
		}
		std::cout << "\n";
		setAccount();
	}

}
