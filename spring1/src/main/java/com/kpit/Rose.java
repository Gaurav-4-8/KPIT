package com.kpit;

public class Rose {

    String color;

    public Rose(String clr) {
        this.color = clr;
        System.out.println(color+" color Rose is created");
    }

    public Rose() {
        System.out.println("Rose is created "+this);
    }

    void flowering() {
        System.out.println(color+" Rose is flowering "+this);
    }
    
}
