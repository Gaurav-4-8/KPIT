// header guard
#ifndef EMP_H
#define EMP_H

#include<iostream>
#include<cstring>

class Emp {
    int empId;
    std::string empName;
    double empSalary;
    double HRA, MA, Ptax, pf;
    void calAllownces() //private function - helper function - help public function
    {
        HRA = empSalary * 0.02;
        MA = empSalary * 0.03;
        Ptax = empSalary * 0.05;
        pf = empSalary * 0.02;
    }

    public:
        Emp();
        Emp(int, std::string, double);
        virtual ~Emp();
       virtual void display();
        virtual double calTotalSalary();
    
};

#endif // EMP_H
