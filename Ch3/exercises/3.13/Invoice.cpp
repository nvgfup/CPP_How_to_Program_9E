/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-24 01:13:17
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-24 1:37:32
*****************************************************************************/
#include <iostream>
#include "Invoice.h"
using namespace std;

// Constructor
Invoice::Invoice(string pn, string des, int quan, int price)
{
	setPartNumber(pn);
	setDescription(des);
	setItemQuantity(quan);
	setPricePerItem(price);
}

void Invoice::setPartNumber(string pn)
{
	PartNumber = pn;
}

void Invoice::setDescription(string des)
{
	Descriptioon = des;
}

void Invoice::setItemQuantity(int quan)
{
	if (quan < 0)
		ItemQuantity = 0;
	else
		ItemQuantity = quan;
}

void Invoice::setPricePerItem(int price)
{
	if (price < 0)
		PricePerItem = 0;
	else
		PricePerItem = price;
}

string Invoice::getPartNumber()
{
	return PartNumber;
}
string Invoice::getDescription()
{
	return Descriptioon;
}
int Invoice::getItemQuantity()
{
	return ItemQuantity;
}
int Invoice::getPricePerItem()
{
	return PricePerItem;
}
int Invoice::getInvoiceAmount()
{
	return (getItemQuantity() * getPricePerItem());
}