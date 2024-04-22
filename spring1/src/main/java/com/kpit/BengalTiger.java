package com.kpit;

import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

@Component("MyBengalTiger")
@Scope("prototype")
public class BengalTiger extends Tiger {

    public BengalTiger(@Value("johnny") String name) {
        super(name);
       System.out.println("BengalTiger() created...."+name);
    }

}
