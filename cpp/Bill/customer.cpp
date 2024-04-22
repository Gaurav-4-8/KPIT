#include "Customer.h"

// Default constructor
Customer::Customer() {
    customername = nullptr;
}

// Parameterized constructor
Customer::Customer(const char* name) {
    customername = new char[strlen(name) + 1];
    strcpy(customername, name);
}

// Copy constructor
Customer::Customer(const Customer& other) {
    customername = new char[strlen(other.customername) + 1];
    strcpy(customername, other.customername);
}

// Destructor
Customer::~Customer() {
    delete[] customername;
}

// Getter
const char* Customer::getCustomername() const {
    return customername;
}

// Setter
void Customer::setCustomername(const char* name) {
    delete[] customername;
    customername = new char[strlen(name) + 1];
    strcpy(customername, name);
}

// Accept details from user
void Customer::accept() {
    std::cout << "Enter customer name: ";
    char name[50];
    std::cin.getline(name, 50);
    setCustomername(name);
}

// Overloaded << operator
std::ostream& operator<<(std::ostream& os, const Customer& obj) {
    os << "Customer Name: " << obj.customername;
    return os;
}
