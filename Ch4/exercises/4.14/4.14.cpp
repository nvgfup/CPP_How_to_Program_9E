/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-06 00:21:47
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-06 23:27:02
*****************************************************************/
#include "CreditCard.h"

static const int exit = -1;


int main()
{
	CreditCard cardOne;

	while (cardOne.getAccount() != exit){
		cardOne.run();
	}
}