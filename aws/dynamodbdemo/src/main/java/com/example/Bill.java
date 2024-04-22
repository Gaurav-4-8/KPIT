package com.example;

public class Bill {
    public String month;
    public int unitsUsed;
    public int payableAmount;
    public Bill(String month, int unitsUsed, int payableAmount) {
        this.month = month;
        this.unitsUsed = unitsUsed;
        this.payableAmount = payableAmount;
    }
    public String getMonth() {
        return month;
    }
    public int getUnitsUsed() {
        return unitsUsed;
    }
    public int getPayableAmount() {
        return payableAmount;
    }

    
}
