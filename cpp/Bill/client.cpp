#include "Bill.h"
#include <iostream>

int main() {
    // Create array of 3 Bill objects
    Bill bills[3];

    // Accept details from user
    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter details for Bill " << i + 1 << ":" << std::endl;
        bills[i].accept();
    }

    // Display details using << operator
    std::cout << "Bill Details:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << bills[i] << std::endl;
    }

    // Calculate total bill amount
    int totalAmount = 0;
    for (int i = 0; i < 3; ++i) {
        totalAmount += bills[i].getBillamount();
    }
    std::cout << "Total Bill Amount: " << totalAmount << std::endl;

    // Display bill details for a specific customer
    std::string customerName;
    std::cout << "Enter customer name to search bills: ";
    std::cin >> customerName;

    bool found = false;
    for (int i = 0; i < 3; ++i) {
        if (customerName == bills[i].getCustomerinfo().getCustomername()) {
            found = true;
            std::cout << "Bills for " << customerName << ":" << std::endl;
            std::cout << bills[i] << std::endl;
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
