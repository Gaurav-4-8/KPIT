#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<cstring>

class Customer {
    
    char *customerName;

    public:
        Customer();
        Customer(char const *);
        Customer(const Customer &);

        char *getCustomerName() const;
        void setCustomerName(char *);
        void accept();
        friend std::ostream& operator<<(std::ostream &os, const Customer &c);
        ~Customer();

        


};

#endif // CUSTOMER_H
