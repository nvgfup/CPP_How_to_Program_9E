/*****************************************************************
* @Author: Poyen Chen
* @Date:   2019-06-27 16:27:13
* @mail:   robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2019-06-27 18:13:48
*****************************************************************/
// Fig. 6.8: fig06_08.cpp
// Shifted and scaled random integers
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
	for ( int counter = 1; counter <= 20; ++counter)
	{
		cout << setw( 10 ) << ( 1 + rand() % 6 );

		if ( counter % 5 == 0 )
			cout << endl;
	}
}

