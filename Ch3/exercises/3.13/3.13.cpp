/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-24 01:13:17
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Hans Chen
* @Last Modified time: 2018-10-28 14:59:41
*****************************************************************************/
#include <iostream>
#include "Invoice.h"
using namespace std;

int main()
{
	Invoice myInvoiceOne("001", "ScrewDriver", 3, 50);
	cout << "PartNumber: " << myInvoiceOne.getPartNumber()
		<< "\nDescription: " << myInvoiceOne.getDescription()
		<< "\nItemQuantity: " << myInvoiceOne.getItemQuantity()
		<< "\nPricePerItem: " << myInvoiceOne.getPricePerItem()
		<< "\nPrice: " << myInvoiceOne.getInvoiceAmount()
		<< endl;

	Invoice myInvoiceTwo("002", "BigHammer", -3, 150);
	cout << "\nPartNumber: " << myInvoiceTwo.getPartNumber()
		<< "\nDescription: " << myInvoiceTwo.getDescription()
		<< "\nItemQuantity: " << myInvoiceTwo.getItemQuantity()
		<< "\nPricePerItem: " << myInvoiceTwo.getPricePerItem()
		<< "\nPrice: " << myInvoiceTwo.getInvoiceAmount()
		<< endl;
}