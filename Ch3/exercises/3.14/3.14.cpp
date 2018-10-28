/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-28 15:44:15
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-28 16:46:55
*****************************************************************/
#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	Employee employeeOne("Hans", "Chen", 50000);
	Employee employeeTwo("Anna", "Lin", 60000);

	employeeOne.displayEmployee();
	employeeTwo.displayEmployee();

	employeeOne.raiseMonthSalary();
	employeeTwo.raiseMonthSalary();

	employeeOne.displayEmployee();
	employeeTwo.displayEmployee();
}