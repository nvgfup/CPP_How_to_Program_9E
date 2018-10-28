/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-28 15:49:03
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-28 15:49:03
*****************************************************************/
#include <string>

class Employee
{
public:
	explicit Employee(std::string, std::string, int);
	void setFirstName(std::string);
	void setLastName(std::string);
	void setMonthSalary(int);
	std::string getFirstName();
	std::string getLastName();
	int getMonthSalary();
	int getYearSalary();
	int raiseMonthSalary();
	void displayEmployee();
private:
	std::string firstName;
	std::string lastName;
	int monthSalary;
};