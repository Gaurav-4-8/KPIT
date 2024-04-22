package com.kpit;

public class App2 {

    public static void main(String[] args) {
        
    }
    
}

class Piston {

    String type;
   

    void firePiston() {
        System.out.println(type+" piston i fired");
    }


    public String getType() {
        return type;
    }


    public void setType(String type) {
        System.out.println("Set Piston Type");
        this.type = type;
    }

}

class Engine {

    String engineModel;
    Piston piston;

    

    public String getEngineModel() {
        return engineModel;
    }



    public void setEngineModel(String engineModel) {
        System.out.println("Set Engine Model : ");
        this.engineModel = engineModel;
    }



    public Piston getPiston() {
        return piston;
    }



    public void setPiston(Piston piston) {
        System.out.println("Set Piston : ");
        this.piston = piston;
    }



    void ignit() {
        piston.firePiston();
        System.out.println(engineModel+" is ignited");
    }

}

class Car {
    String modelName;
    String company;
    Engine engine;

   

     public String getModelName() {
        return modelName;
    }



    public void setModelName(String modelName) {
        System.out.println("Set Car Model : ");
        this.modelName = modelName;
    }



    public String getCompany() {
        return company;
    }



    public void setCompany(String company) {
        System.out.println("Set Car Company : ");
        this.company = company;
    }



    public Engine getEngine() {
        return engine;
    }



    public void setEngine(Engine engine) {

        System.out.println("Set Car Engine : ");
        this.engine = engine;
    }



    void drive() {
        engine.ignit();
        System.out.println(modelName+" is being driven");
    }
}
