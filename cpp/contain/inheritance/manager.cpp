#include "manager.h"

Manager::Manager(): numOfSub(5),incentPerSub(1000)
{
    std::cout<<"\nManager() called..";
}

Manager::Manager(int eid, std::string ename, int esal, int ns, double inc)
:Emp(eid,ename,esal), numOfSub(ns), incentPerSub(inc)
{
    std::cout<<"\nManager(...) called";
}

Manager::~Manager()
{
    std::cout<<"\n~Manager() called...";
}

void Manager::display()
{
    Emp::display();
    std::cout<<"\nNumber of Subordinate : "<<numOfSub<<"\nIncentive per sub : "<<incentPerSub;
}

double Manager::calTotalSalary()
{
    return Emp::calTotalSalary()+numOfSub*incentPerSub;
}

double Manager::incentive()
{
    return numOfSub*incentPerSub;
};
