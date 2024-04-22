#include "customer.h"
#include "date.h"
#ifndef BILL_H
#define BILL_H

class Bill {

    int billNumber;
    Customer customerInfo;
    Date billDate;
    int billAmount;

    public:
        Bill();
        friend std::ostream& operator<<(std::ostream &os, Bill &bl);
        ~Bill();
        void accept();

        int getBillAmount() const { return billAmount; }

        Customer getCustomerInfo() const { return customerInfo; }

        

};

int totalBill(Bill b[], int n);
void customerDetails(Bill b[], char *name, int n);

#endif // BILL_H
