package com.kpit;

import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

@Component("MyBear")
public class Bear {
    
    public Bear() {
        System.out.println("Bear() is created...");
    }
}


