#include "bill.h"
#include "customer.h"

Bill::Bill():billNumber(1001),billAmount(10000)
{
    std::cout<<"\nBill() called...";
}

Bill::~Bill()
{
    std::cout<<"\n~Bill() called";
}

void Bill::accept()
{
    customerInfo.accept();
    std::cout<<"\nEnter Bill Number: ";
    std::cin>>billNumber;
    std::cout<<"\nEnter Bill Amount: ";
    std::cin>>billAmount;
    billDate.accept();

}

std::ostream &operator<<(std::ostream &os, Bill &bl)
{
    // TODO: insert return statement here
    os<<bl.customerInfo<<"\nBill Number: "<<bl.billNumber<<"\nBill Amount: "<<bl.billAmount<<bl.billDate;
}

int totalBill(Bill b[], int n) {
    int total = 0;
    for(int i=0;i<n;i++) {
        total += b[i].getBillAmount();
    }

    return total;
}

void customerDetails(Bill b[], char *name, int n)
{
    for(int i=0;i<3;i++) {
        if(b[i].getCustomerInfo().getCustomerName()==name) {
            std::cout<<b[i];
            break;
        }
    }

}
