package AssociationProject;

public class ProducesTest {
    public static void main(String[] args) {

        Cow cow = new Cow();
       Milk milk = cow.milkCow();
      Curd curd = milk.coagulate();
      Butter butter = curd.churn();
       ClarifiedButter clarifiedButter = butter.boil();
       System.out.println(milk);
       System.out.println(curd);
       System.out.println(butter);
       System.out.println(clarifiedButter);

    }
}

class Cow {

    Milk milkCow() {

        Milk milk = new Milk("GiriCow", "White", 18);

        return milk;

    }
}

class Milk {
        String type;
        String color;
        int quantity;
        public Milk(String type, String color, int quantity) {
            this.type = type;
            this.color = color;
            this.quantity = quantity;
        }
        public String getType() {
            return type;
        }
        public void setType(String type) {
            this.type = type;
        }
        public String getColor() {
            return color;
        }
        public void setColor(String color) {
            this.color = color;
        }
        public int getQuantity() {
            return quantity;
        }
        public void setQuantity(int quantity) {
            this.quantity = quantity;
        }
        @Override
        public String toString() {
            return "Milk [type=" + type + ", color=" + color + ", quantity=" + quantity + "]";
        }
   Curd coagulate() {
        Curd curd = new Curd(type, "white", "thick", quantity/3.0);
        return curd;
    }    
}

class Curd {
    String type;
    String color;
    String density;
    double quantity;
    public Curd(String type, String color, String density, double d) {
        this.type = type;
        this.color = color;
        this.density = density;
        this.quantity = d;
    }
    public String getType() {
        return type;
    }
    public void setType(String type) {
        this.type = type;
    }
    public String getColor() {
        return color;
    }
    public void setColor(String color) {
        this.color = color;
    }
    public String getDensity() {
        return density;
    }
    public void setDensity(String density) {
        this.density = density;
    }
    public double getQuantity() {
        return quantity;
    }
    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }
    @Override
    public String toString() {
        return "Curd [type=" + type + ", color=" + color + ", density=" + density + ", quantity=" + quantity + "]";
    }

   Butter churn() {
        Butter butter = new Butter(type, color, density, quantity*0.05f);
        return butter;
    }
    // Lassi makeLassi() {
        
    // }
    
}

class Butter {
    String type;
    String color;
    String density;
    double quantity;
    public Butter(String type, String color, String density, double quantity) {
        this.type = type;
        this.color = color;
        this.density = density;
        this.quantity = quantity;
    }
    public String getType() {
        return type;
    }
    public void setType(String type) {
        this.type = type;
    }
    public String getColor() {
        return color;
    }
    public void setColor(String color) {
        this.color = color;
    }
    public String getDensity() {
        return density;
    }
    public void setDensity(String density) {
        this.density = density;
    }
    public double getQuantity() {
        return quantity;
    }
    public void setQuantity(double quantity) {
        this.quantity = quantity;
    }
    @Override
    public String toString() {
        return "Butter [type=" + type + ", color=" + color + ", density=" + density + ", quantity=" + quantity + "]";
    }

   ClarifiedButter boil() {

        ClarifiedButter clarifiedButter = new ClarifiedButter(type, color, density, quantity*0.75f);

        return clarifiedButter;
    }
    
}

class ClarifiedButter {
        String type;
        String color;
        String density;
        double quantity;
        public ClarifiedButter(String type, String color, String density, double quantity) {
            this.type = type;
            this.color = color;
            this.density = density;
            this.quantity = quantity;
        }
        public String getType() {
            return type;
        }
        public void setType(String type) {
            this.type = type;
        }
        public String getColor() {
            return color;
        }
        public void setColor(String color) {
            this.color = color;
        }
        public String getDensity() {
            return density;
        }
        public void setDensity(String density) {
            this.density = density;
        }
        public double getQuantity() {
            return quantity;
        }
        public void setQuantity(double quantity) {
            this.quantity = quantity;
        }
        @Override
        public String toString() {
            return "ClarifiedButter [type=" + type + ", color=" + color + ", density=" + density + ", quantity="
                    + quantity + "]";
        }
        
        
}

class Lassi {

}
