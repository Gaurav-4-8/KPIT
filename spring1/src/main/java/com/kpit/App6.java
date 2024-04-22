package com.kpit;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class App6 {

    public static void main(String[] args) {
        
        System.out.println("Creating context");
        ApplicationContext context = new ClassPathXmlApplicationContext("myspringAnno.xml");
        System.out.println("Context created : "+context);

        Tiger tiger = (Tiger) context.getBean("MyTiger");

        BengalTiger bengalTiger = (BengalTiger) context.getBean("MyBengalTiger");

        Bear bear = (Bear) context.getBean(Bear.class);
    }
    
}
