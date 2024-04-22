#include<iostream>
#include<cstring>
using namespace std;

class Customer {

    char *cName;

    public:
        Customer() {
            cName = new char[10];
            strcpy(cName, "Aman");
        }
        void display() {
            cout<<"Customer Name : "<<cName;
        }
};

int main() {

    Customer c1;
    c1.display();

    return 0;

}