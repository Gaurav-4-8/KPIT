#include "Bill.h"

// Default constructor
Bill::Bill() {
    billnumber = 0;
    customerinfo; // Empty customer object
    billdate; // Default date object
    billamount = 0;
}

// Parameterized constructor
Bill::Bill(int number, const Customer& cust, const Date& date, int amount) {
    billnumber = number;
    customerinfo = cust; // copy customer info
    billdate = date; // copy date object
    billamount = amount;
}

// Getters
int Bill::getBillnumber() const {
    return billnumber;
}

Customer Bill::getCustomerinfo() const {
    return customerinfo;
}

Date Bill::getBilldate() const {
    return billdate;
}

int Bill::getBillamount() const {
    return billamount;
}

// Setters
void Bill::setBillnumber(int number) {
    billnumber = number;
}

void Bill::setCustomerinfo(const Customer& cust) {
    customerinfo = cust; // copy customer info
}

void Bill::setBilldate(const Date& date) {
    billdate = date; // copy date object
}

void Bill::setBillamount(int amount) {
    billamount = amount;
}

// Accept details from user
void Bill::accept() {
    std::cout << "Enter Bill Number: ";
    std::cin >> billnumber;
    std::cout << "Customer Details: " << std::endl;
    customerinfo.accept();
    std::cout << "Bill Date: " << std::endl;
    billdate.accept();
    std::cout << "Bill Amount: ";
    std::cin >> billamount;
}

// Overloaded << operator
std::ostream& operator<<(std::ostream& os, const Bill& obj) {
    os << "Bill Number: " << obj.billnumber << std::endl;
    os << obj.customerinfo << std::endl;
    os << "Bill Date: " << obj.billdate << std::endl;
    os << "Bill Amount: " << obj.billamount << std::endl;
    return os;
}

// Destructor
Bill::~Bill() {
    // nothing to clean for customer and date objects as they are copied
}
