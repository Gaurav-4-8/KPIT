#ifndef INVENTORY_H
#define INVENTORY_H

#include<iostream>
#include<cstring>

class Inventory {

    std::string description_of_product;
    int balance_stock;
    int productcode;

    public:
        Inventory();
        ~Inventory();
        Inventory(const std::string, int, int);
        Inventory(int);
        void purchase(int);
        void sale(int);

        int getProductcode() const;
};

void search(Inventory [], int, int);

#endif // INVENTORY_H
