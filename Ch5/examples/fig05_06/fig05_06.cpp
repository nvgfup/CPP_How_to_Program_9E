/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-12 22:20:19
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-12 22:33:33
*****************************************************************/
// Compound interest calculations with for.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double amount;
	double principle = 1000.0;
	double rate = .05;

	// display headers
	cout << "Year" << setw(21) << "Amount on deposit" << endl;

	// set floating-point number format
	cout << fixed << setprecision(2);

	// calculate amount on deposit for each of ten years
	for (unsigned int year = 1; year <= 10; ++year)
	{
		// calculate new amount for specified ++year
		amount = principle * pow (1.0 + rate, year);

		// display the year and the amount
		cout << setw(4) << year << setw(21) << amount << endl;
	}
}