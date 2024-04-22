#include "Inventory.h"

// check stock > 20
bool validateStock(int stock) {
    if(stock>20) return true;

    return false;
}

//default constructor
Inventory::Inventory(): 
description_of_product("Household"),balance_stock(25),productcode(1001) { }

Inventory::~Inventory()
{
}

//construct which stock
Inventory::Inventory(int stock):
description_of_product("Mobiel"),balance_stock(stock),productcode(2001) { }

// parametrized constructor
Inventory::Inventory(const std::string desc, int stock, int code):description_of_product(desc)
{
    if(validateStock(stock)) {
        balance_stock = stock;
    } else {
        throw std::runtime_error("Low Stock level");
    }

    productcode = code;
    
}

//purchase function
void Inventory::purchase(int stock)
{
    balance_stock += stock;

    std::cout<<"\nAfter Purchase Stock : "<<balance_stock;
}

//sale function
void Inventory::sale(int stock)
{
    if(validateStock(balance_stock-stock)) {
        balance_stock -= stock;
    } else {
        throw std::runtime_error("Low Stock level");
    }

    std::cout<<"\nAfter Sale Stock : "<<balance_stock;
}

//getter
int Inventory::getProductcode() const
{
    return productcode;
}

// search for product in inventory
void search(Inventory inventory[], int size, int code) {
    int flag = 0;
    for(int i=0;i<size;i++) {
        if(inventory[i].getProductcode()==code) {
            flag = 1;
            std::cout<<"\nProdct Found";
            break;
        } 
    }
   if(flag == 0) throw std::runtime_error("Product Not Found");
}
