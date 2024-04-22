package com.kpit.entity;

import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.Id;

@Entity
public class SavingsAccount {
	@Id
	@GeneratedValue
	private int accountNumber;
	private String accountHolderName;
	private float accountBalance;
	
	public SavingsAccount(int accountNumber, String accountHolderName,float accountBalance) {
		super();
		this.accountNumber = accountNumber;
		this.accountHolderName = accountHolderName;
		this.accountBalance = accountBalance;
	}
	
	
	public SavingsAccount(String accountHolderName, float accountBalance ) {
		super();
		this.accountHolderName = accountHolderName;
		this.accountBalance =accountBalance ;
	}



	public SavingsAccount() {
		super();
	}

	public int getAccountNumber() {
		return accountNumber;
	}

	public void setAccountNumber(int accountNumber) {
		this.accountNumber = accountNumber;
	}

	public String getAccountHolderName() {
		return accountHolderName;
	}

	public void setAccountHolderName(String accountHolderName) {
		this.accountHolderName = accountHolderName;
	}

	public float getAccountBalance() {
		return accountBalance;
	}

	public void setAccountBalance(float accountBalance) {
		this.accountBalance = accountBalance;
	}

	@Override
	public String toString() {
		return "SavingAccount [accountNumber=" + accountNumber + ", accountHolderName=" + accountHolderName
				+ ", accountBalance=" + accountBalance + "]";
	}
	
	
	
	
	
	
	
}
