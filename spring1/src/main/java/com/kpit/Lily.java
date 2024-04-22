package com.kpit;

public class Lily {
    String color;

    public Lily(String color) {
        this.color = color;
        System.out.println(color+" Lily is created");
    }

    void flowering() {
        System.out.println(color+" Lily is flowering");
    }
}
