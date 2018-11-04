/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-11-05 01:24:20
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-11-05 02:01:50
*****************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int gallons = 0;
	int totalGallons = 0;
	int totalMiles = 0;
	float totalMPG = 0;

	cout << "\nEnter miles driven (-1 to quit): " ;
	int miles = 0;
	cin >> miles;	

	while(miles != -1)
	{
		float MPG = 0;
		cout << "Enter gallons used: " ;
		cin >> gallons;
		MPG = static_cast<double>(miles) / gallons;
		totalGallons += gallons;
		totalMiles += miles;
		totalMPG = static_cast<double>(totalMiles) / totalGallons;
		cout << setprecision(6) << fixed;
		cout << "MPG this trip: " << MPG << endl;
		cout << "Total MPG: " << totalMPG << endl;
		cout << "\nEnter miles driven (-1 to quit): " ;
		cin >> miles;
	}
}