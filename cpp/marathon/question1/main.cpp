#include"SavingAccount.h"

int main() {

    //objects
    SavingAccount saver1(2000.00), saver2(3000.00);

    //saver1
    std::cout<<"\nSaver1";
    double interest1 = saver1.monthlyInterest();
    saver1.updateBalance(interest1);
    saver1.showBalance();

    //saver2
    std::cout<<"\nSaver2";
    double interest2 = saver2.monthlyInterest();
    saver2.updateBalance(interest2);
    saver2.showBalance();

    //change interest rate
    std::cout<<"\nChanging Annual interest rate: ";
    SavingAccount::modifyInterestRate(0.04);

    //saver1
    std::cout<<"\nSaver1";
    interest1 = saver1.monthlyInterest();
    saver1.updateBalance(interest1);
    saver1.showBalance();

    //saver2
    std::cout<<"\nSaver2";
    interest2 = saver2.monthlyInterest();
    saver2.updateBalance(interest2);
    saver2.showBalance();

    return 0;
}