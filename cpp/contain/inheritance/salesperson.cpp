#include "salesperson.h"

Salesperson::Salesperson():salesAmount(100000),commissionRate(0.05)
{
    std::cout<<"\nSalesperson() called";
}

Salesperson::Salesperson(int eid, std::string ename, double esal, double samt, double crt)
: Emp(eid,ename,esal), salesAmount(samt),commissionRate(crt)
{
    std::cout<<"\nSalesperson(...) called";
}

void Salesperson::display()
{
    Emp::display();
    std::cout<<"\nSales Amount : "<<salesAmount<<"\nCommission Rate : "<<commissionRate;
}

Salesperson::~Salesperson()
{
    std::cout<<"\nSalesperson() dest called..";
}

double Salesperson::calTotalSalary()
{
    return Emp::calTotalSalary()+salesAmount*commissionRate;
}
