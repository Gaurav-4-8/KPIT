#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include<cstring>

class Customer {
private:
    char* customername;

public:
    // Constructors
    Customer();
    Customer(const char* name);
    Customer(const Customer& other);

    // Destructor
    ~Customer();

    // Getter and setter
    const char* getCustomername() const;
    void setCustomername(const char* name);

    // Member functions
    void accept();
    friend std::ostream& operator<<(std::ostream& os, const Customer& obj);
};

#endif
