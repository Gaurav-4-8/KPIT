#include "customer.h"

Customer::Customer()
{
    customerName = new char[10];
    strcpy(customerName, "Aman");
    std::cout<<"\nCustomer() called...";
}

Customer::Customer(char const *name)
{
    customerName = new char[10];
    strcpy(customerName, name);
    std::cout<<"\nCustomer(..) called";
}

Customer::Customer(const Customer &c)
{
    customerName = new char[strlen(c.customerName)+1];
    strcpy(customerName, c.customerName);
}

char *Customer::getCustomerName() const
{
    return customerName;
}

void Customer::setCustomerName(char *cname)
{
    customerName = cname;
}

void Customer::accept()
{
    std::cout<<"\nEnter Customer Name: ";
    std::cin>>customerName;
}

Customer::~Customer()
{
    std::cout<<"\n~Customer() called..";
    delete customerName;
}

std::ostream &operator<<(std::ostream &os, const Customer &c)
{
    //  TODO: insert return statement here
    os<<"\nCustomer Name: "<<c.customerName;
}
