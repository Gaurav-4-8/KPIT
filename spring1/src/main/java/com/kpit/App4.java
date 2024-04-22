package com.kpit;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class App4{
    public static void main(String[] args) {
        ApplicationContext context = new ClassPathXmlApplicationContext("myspring.xml");

        Car car1 = (Car) context.getBean("MyCar");
        car1.drive();
    }
}