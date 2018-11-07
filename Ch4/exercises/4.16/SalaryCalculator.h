/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-08 01:09:05
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-08 01:09:05
*****************************************************************/

class SalaryCalculator
{
public:
	explicit SalaryCalculator();
	void setHours();
	void setRates();
	void setSalary();
	double getHours();
	double getRates();
	double getSalary();
	void run();
private:
	double hours = 0.0f;
	double rates = 0.0f;
	double salary = 0.0f;
	double baseHours = 40.0f;
	double multiple = 1.5f;
};