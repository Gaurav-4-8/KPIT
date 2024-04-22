#ifndef BILL_H
#define BILL_H

#include <iostream>
#include "customer.h"
#include "date.h"

class Bill {
private:
    int billnumber;
    Customer customerinfo;
    Date billdate;
    int billamount;

public:
    // Constructors
    Bill();
    Bill(int number, const Customer& cust, const Date& date, int amount);

    // Getter and setter
    int getBillnumber() const;
    void setBillnumber(int number);
    Customer getCustomerinfo() const;
    void setCustomerinfo(const Customer& cust);
    Date getBilldate() const;
    void setBilldate(const Date& date);
    int getBillamount() const;
    void setBillamount(int amount);

    // Member functions
    void accept();
    friend std::ostream& operator<<(std::ostream& os, const Bill& obj);

    // Destructor
    ~Bill();
};

#endif
