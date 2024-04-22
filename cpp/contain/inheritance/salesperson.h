#ifndef SALESPERSON_H
#define SALESPERSON_H

#include"emp.h"

class Salesperson : public Emp
{
    double salesAmount,commissionRate;
    public:
        // void show() {
        //     empSalary=0; //derived class member fun cannot access private data member
        //     x=90
        // }
        Salesperson();
        Salesperson(int, std::string, double, double, double);
        void display();
        ~Salesperson();
        double calTotalSalary();

        double calCommission() {

        }

};

#endif // SALESPERSON_H
