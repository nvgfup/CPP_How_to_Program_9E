/****************************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-24 01:13:17
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-24 1:37:32
*****************************************************************************/
#include <string>

class Invoice
{
public:
	explicit Invoice(std::string, std::string, int, int);
	void setPartNumber(std::string);
	void setDescription(std::string);
	void setItemQuantity(int);
	void setPricePerItem(int);
	std::string getPartNumber();
	std::string getDescription();
	int getItemQuantity();
	int getPricePerItem();
	int getInvoiceAmount();
private:
	std::string PartNumber;
	std::string Descriptioon;
	int ItemQuantity;
	int PricePerItem;
};
