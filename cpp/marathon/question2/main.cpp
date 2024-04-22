#include "Inventory.h"
int main()
{
    //obj1
    Inventory iobj1(30);

    //Test Case 1
    try
    {
        iobj1.sale(5);
        iobj1.sale(4);
        iobj1.purchase(10);
        iobj1.sale(25);
    }
    catch (const std::runtime_error &e)
    {
        std::cerr <<"\nException: "<<e.what() << '\n';
    }

    //obj 2
    Inventory iobj2(50);

    //Test Case 2
    try
    {
        iobj2.purchase(10);
        iobj2.sale(45);
    }
    catch (const std::runtime_error &e)
    {
        std::cerr <<"\nException: "<< e.what() << '\n';
    }

    //array of objects
    Inventory iarr[3] = {
        {"Household",100,50111},
        {"Electronics",500,50112},
        {"sports",300,50113}
    };


    //Test Case 3
    try
    {   try
        {
                search(iarr,3,50112);

        }
        catch(const std::runtime_error& e) 
    {
        std::cerr <<"\nException: "<< e.what() << '\n';
    }
                search(iarr,3,50118);
    }
    catch(const std::runtime_error& e)
    {
        std::cerr <<"\nException: "<< e.what() << '\n';
    }
    
}