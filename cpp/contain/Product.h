#include<iostream>
#include"Address.h"

class Product { //container class

    int productCode;
    int price;
    std::string pname;
    Address deliveryAddress; //contained Object

    public:
        Product();
        Product(int,int,std::string,int,std::string);
        void display();

        int getProductCode() const { return productCode; }
        void setProductCode(int productCode_) { productCode = productCode_; }

        int getPrice() const { return price; }
        void setPrice(int price_) { price = price_; }

        std::string getPname() const { return pname; }
        void setPname(const std::string &pname_) { pname = pname_; }

        Address getDeliveryAddress() const { return deliveryAddress; }
        void setDeliveryAddress(const Address &deliveryAddress_) { deliveryAddress = deliveryAddress_; }
};