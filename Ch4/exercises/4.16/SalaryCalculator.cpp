/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-08 01:08:59
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-08 01:45:43
*****************************************************************/
#include <iostream>
#include "SalaryCalculator.h"

SalaryCalculator::SalaryCalculator(){}

void SalaryCalculator::setHours()
{
	hours = 0.0f;

	std::cout << "Enter hours worked (-1 to end): ";
	std::cin >> hours;
}

void SalaryCalculator::setRates()
{
	rates = 0.0f;

	std::cout << "Enter hourly rate of the employee"
		<< " ($00.00): ";
	std::cin >> rates;	
}

void SalaryCalculator::setSalary()
{
	salary = 0.0f;

	if (getHours() <= baseHours)
		salary = getHours() * getRates();
	else
		salary = (baseHours + multiple * (hours - baseHours)) * getRates();

}

double SalaryCalculator::getHours(){return hours;}
double SalaryCalculator::getRates(){return rates;}
double SalaryCalculator::getSalary(){return salary;}

void SalaryCalculator::run()
{
	setHours();

	while (getHours() != -1)
	{
		setRates();
		setSalary();
		std::cout << "Salary is $" << getSalary() << std::endl;

		setHours();
	}
}