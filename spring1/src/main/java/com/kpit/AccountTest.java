package com.kpit;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class AccountTest {
    public static void main(String[] args) {
        
        ApplicationContext context = new ClassPathXmlApplicationContext("myspringSetter.xml");

        System.out.println("context created : "+context);
    }
}
