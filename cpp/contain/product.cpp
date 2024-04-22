#include "Product.h"

Product::Product()
{
    std::cout<<"\n Product() called..";
    productCode = 111;
    price = 1000;
    pname = "bag";
}

Product::Product(int pcode, int pr, std::string pnm,int pc, std::string cname)
:deliveryAddress(pc, cname) //member initializer list
{
    productCode = pcode;
    price = pr;
    pname = pnm;
}

void Product::display()
{
    std::cout<<"\nProduct code: "<<productCode<<"\nProduct Price: "<<price<<"\nProduct Name: "<<pname;
    deliveryAddress.display();
}
