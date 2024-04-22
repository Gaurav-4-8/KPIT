#include<iostream>
#include<cstring>
using namespace std;

class Account {

    static int x;
    int accountNo;
    char *accName;
    double accountBal;

    public:
        Account() {
            accountNo = x;
            x++;
            accName = new char[10];
            strcpy(accName, "Aman");
            accountBal = 5000;
        }
        Account(const char * name, double bal) {
            accountNo = x;
            x++;
            accName = new char[10];
            strcpy(accName,name);
            accountBal = bal;
        }

        Account(const Account &acc) {
            accountNo = acc.accountNo;
            accName = new char[strlen(acc.accName)+1];
            strcpy(accName, acc.accName);
            accountBal = acc.accountBal;
        }
        void display() {
            cout<<"\nAccount No: "<<accountNo<<"\nAccount Holder Name: "<<accName<<"\nAccount Balance: "<<accountBal<<endl;

        }
        void deposit(double amount) {
            accountBal += amount;
        }
        void withdraw(double amount) {
            accountBal -= amount;
        }

        double getAccountBal() const { return accountBal; }

};
int Account::x = 50001;
int main() {

    Account A1;
    A1.display();

    Account A2("Rahul", 20000);
    A2.display();

    Account A3(A2);
    A3.display();

    A3.deposit(100);
    
    cout<<"\nUpdated Balance: "<<A3.getAccountBal();


    return 0;
}