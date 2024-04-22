package com.students;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class StudentTest {

    public static void main(String[] args) {

        System.out.println("Creating context....");
        
        ApplicationContext context = new ClassPathXmlApplicationContext("MySpringStudent.xml");

        Profile profile = (Profile) context.getBean("profile");
        
        System.out.println("context created....");
        profile.printName();
        profile.printAge();
    }
    
}
