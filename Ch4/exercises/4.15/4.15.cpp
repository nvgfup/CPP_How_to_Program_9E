/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-07 00:02:57
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-08 00:56:23
*****************************************************************/
#include "SalesCommissionCalculator.h"
static const int exit = -1;

int main()
{
	SalesCommissionCalculator salesMan;

	while(salesMan.getGrossSales() != exit)
		salesMan.run();
}