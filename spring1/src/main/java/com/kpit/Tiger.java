package com.kpit;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

@Component("MyTiger")
@Scope("prototype")
public class Tiger {

    String name;

    @Autowired
    public Tiger( @Value("Jacky") String name) {
        this.name = name;
        System.out.println("Tiger() created..."+name);
    }
    
}


