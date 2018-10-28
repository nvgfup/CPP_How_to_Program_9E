/*****************************************************************
* @Author: Poyen Chen
* @Date:   2018-10-28 12:32:27
* @mail: robertiqgood@gmail.com
* @Last Modified by:   Poyen Chen
* @Last Modified time: 2018-10-28 12:32:27
*****************************************************************/
#include "Date.h"

Date::Date(int m, int d, int y)
{
    setMonth(m);
    setDay(d);
    setYear(y);
}

void Date::setMonth(int m)
{
    if ((m <= 12) && (m >= 1))
        month = m;
    else
        month = 1;
}

void Date::setDay(int d)
{
    day = d;
}

void Date::setYear(int y)
{
    year = y;
}

int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return day;
}

int Date::getYear()
{
    return year;
}

void Date::displayDate()
{
     std::cout << getMonth() << "/"
        << getDay() << "/"
        << getYear() << std::endl;
}
