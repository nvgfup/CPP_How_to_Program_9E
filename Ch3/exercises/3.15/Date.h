/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-28 12:32:27
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-28 12:32:27
*****************************************************************/
#include <iostream>

class Date
{
public:
    explicit Date(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth();
    int getDay();
    int getYear();
    void displayDate();
private:
    int month = 1;
    int day = 1;
    int year = 1990;
};
