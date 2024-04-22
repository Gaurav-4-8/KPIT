#include "SavingAccount.h"

double SavingAccount::annualInterestRate = 0.03;

//default cosntructor
SavingAccount::SavingAccount()
{
}

// parameterized constructor
SavingAccount::SavingAccount(const double bal)
{
    savingBalance = bal;
}

// calculate monthly interest
double SavingAccount::monthlyInterest()
{
    return (savingBalance*annualInterestRate)/12;
}

// update balance
void SavingAccount::updateBalance(double interest)
{
    savingBalance += interest;
}

// display balance
void SavingAccount::showBalance()
{
    std::cout<<"\nNew Balance : "<<savingBalance;
}

// change annual interest rate
void SavingAccount::modifyInterestRate(double rate)
{
    annualInterestRate = rate;
}
