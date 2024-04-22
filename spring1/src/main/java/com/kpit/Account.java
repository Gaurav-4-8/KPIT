package com.kpit;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;

@Qualifier("MySavingAcc")
public class Account {

    private int accountNumber;
    private String accountHolder;
    private double accountBalance;

    public Account() {
    }


    public int getAccountNumber() {
        return accountNumber;
    }


    public void setAccountNumber(int accountNumber) {
        this.accountNumber = accountNumber;
         System.out.println("Set Account Number: "+getAccountNumber());

    }


    public String getAccountHolder() {
        return accountHolder;
    }


    public void setAccountHolder(String accountHolder) {
        this.accountHolder = accountHolder;
        System.out.println("Set Account Holder Name : "+getAccountHolder());

    }


    public double getAccountBalance() {
        return accountBalance;
    }


    public void setAccountBalance(double accountBalance) {
        this.accountBalance = accountBalance;
        System.out.println("Set Account Balance : "+getAccountBalance());

    }

    
    
    
}
