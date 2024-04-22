#include "date.h"

Date::Date():day(4),month(10),year(2023) { 
    std::cout<<"\nDate() called.."; 
    }

Date::Date(int d, int m, int y):day(d),month(m),year(y) { 
    std::cout<<"\nDate(...) called"; 
    }

void Date::accept()
{
    std::cout<<"\nEnter Month: ";
    std::cin>>month;
    if(month>0 && month<=12) {
        std::cout<<"\nEnter Day: ";
        std::cin>>day;
        if(month==2 && (day<1 && day>28)) throw "Incorrect day";
        if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) && (day<1 && day>31)) {
            throw "Incorrect day";
        } else {

        }

    } else {
        throw "Incorrent Month";
    }
    std::cout<<"\nEnter Year: ";
    std::cin>>year;
}

Date::~Date()
{
   std::cout<<"\n~Date() called..";
}

std::ostream &operator<<(std::ostream &os, const Date &dt)
{
    // TODO: insert return statement here
    os<<"\nDate: "<<dt.day<<"/"<<dt.month<<"/"<<dt.year;
}
