package com.sample;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import org.springframework.stereotype.Component;
import org.springframework.stereotype.Controller;
import org.springframework.stereotype.Repository;
import org.springframework.stereotype.Service;

public class Test {
    public static void main(String[] args) {

        ApplicationContext context = new ClassPathXmlApplicationContext("MySpringSample.xml");
        System.out.println("Context is ready...."+context);

        BurgerController burgerController = context.getBean(BurgerController.class);
        burgerController.takeOrder();
    }
}

@Component
class Burger {

    Burger() {

    }
    void burgerType(String name) {

        System.out.println("Burger is created "+name);

    }
}

@Repository
class BurgerRepsitory {

    @Autowired
    Burger burger;
    BurgerRepsitory() {
        System.out.println("BurgerRepository() ");
    }

    void makeTheBurger() {
        System.out.println("Burger Repository is making the Burger ");
        burger.burgerType("Cheese Burger");
    }
}

@Service
class BurgerService {

    @Autowired
    BurgerRepsitory burgerRepsitory;

    BurgerService() {
            System.out.println("BurgerService() ");
    }

    void serveBurger() {
        System.out.println("BurgerService is serving the Burger ");
        burgerRepsitory.makeTheBurger();
    }
}

@Controller
class BurgerController {

    @Autowired
    BurgerService burgerService;

    BurgerController() {
            System.out.println("BurgerController() ");
    }

    void takeOrder() {
        System.out.println("BurgerController is taking order ");
        burgerService.serveBurger();
    }

}
