/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-28 15:49:03
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-28 16:46:10
*****************************************************************/
#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(string fname, string lname, int msalary)
{
	setFirstName(fname);
	setLastName(lname);
	setMonthSalary(msalary);
}

void Employee::setFirstName(string fname)
{
	firstName = fname;
}

void Employee::setLastName(string lname)
{
	lastName = lname;
}

void Employee::setMonthSalary(int msalary)
{
	if (msalary < 0)
		monthSalary = 0;
	else
		monthSalary = msalary;
}

string Employee::getFirstName()
{
	return firstName;
}

string Employee::getLastName()
{
	return lastName;
}

int Employee::getMonthSalary()
{
	return monthSalary;
}

int Employee::getYearSalary()
{
	return (12 * monthSalary);
}

int Employee::raiseMonthSalary()
{
	monthSalary = (1.1 * monthSalary);
	return monthSalary;
}

void Employee::displayEmployee()
{
	cout << getLastName() << " " << getFirstName()
		<< "\nMonth salary: " << getMonthSalary()
		<< "\nYear salary: " << getYearSalary()
		<< "\n" << endl;
}