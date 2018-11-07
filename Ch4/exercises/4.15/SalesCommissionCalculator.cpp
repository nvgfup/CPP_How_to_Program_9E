/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-07 00:02:46
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-08 01:03:15
*****************************************************************/
#include <iostream>
#include "SalesCommissionCalculator.h"

SalesCommissionCalculator::SalesCommissionCalculator(){}

void SalesCommissionCalculator::setGrossSales()
{
	grossSales = 0.0f;

	std::cout << "Enter sales in dollars (-1 to end): ";
	std::cin >> grossSales;
}

void SalesCommissionCalculator::setSalary()
{
	salary = 0.0f;

	salary = basePay + (commission * getGrossSales());
}

double SalesCommissionCalculator::getGrossSales(){return grossSales;}
double SalesCommissionCalculator::getSalary(){return salary;}

void SalesCommissionCalculator::run()
{
	std::cout << "Enter sales in dollars (-1 to end): ";
	std::cin >> grossSales;

	while (getGrossSales() != -1)
	{
		setSalary();
		std::cout << "Salary is: $" << getSalary() << std::endl;
		setGrossSales();
	}
}
