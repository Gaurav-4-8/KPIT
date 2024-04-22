#include"emp.h"

Emp::Emp():empId(101),empName("Jay"),empSalary(25000)
{
    std::cout<<"\nEmp() called...";
    calAllownces();
}

Emp::Emp(int eid, std::string ename, double esal):empId(eid),empName(ename),empSalary(esal)
{
    std::cout<<"\nEmp(...) called";
    calAllownces();
}

Emp::~Emp() {
    std::cout<<"\n~Emp() called";
}

void Emp::display()
{
    std::cout<<"\nEmployee Id : "<<empId<<"\nEmployee Name : "<<empName<<"\nEmployee Salary : "<<empSalary;
}

double Emp::calTotalSalary()
{
    return empSalary-HRA-MA-Ptax-pf;
}
