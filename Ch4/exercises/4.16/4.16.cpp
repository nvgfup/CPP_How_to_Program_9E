/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-08 01:09:05
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-08 01:46:30
*****************************************************************/
#include "SalaryCalculator.h"
static const int exit = -1;

int main()
{
	SalaryCalculator man;

	while (man.getHours() != exit)
		man.run();
}