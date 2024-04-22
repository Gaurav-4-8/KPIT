#include"customer.h"
#include "date.h"
#include "bill.h"

int main() {

    Bill b1[3];
    for(int i=0;i<3;i++) {
        std::cout<<"\nEnter the Details of Bill "<<i+1<<" :";
        b1[i].accept();

    }

    for(int i=0;i<3;i++) {
        std::cout<<b1[i];
    }

    std::cout<<"\nTotal Bill Amount : "<<totalBill(b1,3);

    // std::cout<<"\nEnter Customer Name to get Bill Details: ";
    // char *name = new char[20];
    // std::cin>>name;
    // customerDetails(b1,name,3);
    std::string customerName;
    std::cout << "Enter customer name to search bills: ";
    std::cin >> customerName;
    std::cout<<"01\n";

    bool found = false;
    std::cout<<"02\n";
    for (int i = 0; i < 3; ++i) {
        std::cout<<"i\n";
        if (customerName == b1[i].getCustomerInfo().getCustomerName()) {
            found = true;
            std::cout<<"03\n";
            std::cout << "Bills for " << customerName << ":" << std::endl;
            std::cout<<"04\n";
            std::cout << b1[i] << std::endl;
            std::cout<<"05\n";
        }
    }

    if (!found) {
        std::cout << "No bills found for customer: " << customerName << std::endl;
    }

    // Free memory (not strictly necessary for primitive types in this example)
    for (int i = 0; i < 3; ++i) {
        // bills[i] goes out of scope and frees memory automatically
    }

    return 0;
}