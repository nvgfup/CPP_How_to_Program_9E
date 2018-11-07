/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-07 00:02:57
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-07 00:02:57
*****************************************************************/

class SalesCommissionCalculator
{
public:
	explicit SalesCommissionCalculator();
	void setGrossSales();
	void setSalary();
	double getSalary();
	double getGrossSales();
	void run();
private:
	const double basePay = 200.0f;
	const double commission = 0.09f;
	double salary = 0.0f;	
	double grossSales = 0.0f;
};