#include "Address.h"



Address::Address()
{
    pinCode = 1001;
    city = "Pune";
    std::cout<<"\n Address() called..";
}
Address::~Address()
{
    std::cout<<"\nAddress Destructor..";
}
Address::Address(int p, std::string c)
{
    pinCode = p;
    city = c;
    std::cout<<"\n para Address() called..";
}

void Address::display()
{
    std::cout<<"\nPin Code : "<<pinCode;
   std::cout<<"\nCity : "<<city;
}
