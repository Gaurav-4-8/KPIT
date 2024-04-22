#ifndef MANAGER_H
#define MANAGER_H

#include"emp.h"

class Manager : public Emp
{
    int numOfSub;
    double incentPerSub;

    public:
        Manager();
        Manager(int,std::string,int,int,double);
        ~Manager();
        void display();
        double calTotalSalary();
        double incentive();

};

#endif // MANAGER_H
