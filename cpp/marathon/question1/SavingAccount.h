#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include<iostream>

class SavingAccount {

    static double annualInterestRate;
    double savingBalance;

    public:
        SavingAccount();

        SavingAccount(const double);

        double monthlyInterest();

        void updateBalance(double);

        void showBalance();

        static void modifyInterestRate(double);
};

#endif // SAVINGACCOUNT_H
