#include "Date.h"

int unsigned Date::monthPerYear = 12;

//default constructor
Date::Date():day(0),month(0),year(0) { }

//destructor
Date::~Date() { }

//parameterized constructor
Date::Date(int d, int m, int y)
{
    if((1<=d && d<=31) && (1<=m && m<=12)) {
        day = d;
        month = m;
        year = y;
    } else {
        throw std::runtime_error("Incorrect Day");
    }
}
//check valid day
int Date::checkDay(int day)
{
    const int daysPerMonth[monthPerYear+1] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if((day<=daysPerMonth[month] && day>0) || month==2) {

        if(month==2) {
            if(year%4==0 && (year&100 != 0 || year%400==0)) {
                if(1<=day && day<=29) return day;
            } else throw std::runtime_error("Incorrect Day");
        }
    } else {
        throw std::runtime_error("Incorrect Day");
    }

    return day;
}
//print date
void Date::print()
{
    std::cout<<"\nDate : "<<day<<"/"<<month<<"/"<<year;
}
