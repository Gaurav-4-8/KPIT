public class Main {

    public static void main(String[] args) {

        Bus busObj = new Bus("VolvoBus", 100, "Diesel");
        Journey journeyObj1 = new Journey(200, 50, 150);

        ProfitCalculator profit = new ProfitCalculator();
        double totalProfit = profit.calculateProfit(journeyObj1);
        System.out.println("Vehicle Name : "+busObj.getVehicleName()+"\nSeat Capacity : "+busObj.getSeatCapacity()+"\nFuel Type : "+busObj.getFuelType());
        System.out.println("Distance Covered : "+journeyObj1.getDistanceCovered()+"\nNumber of Passanger : "+journeyObj1.getNumberOfPassenger()+"\nTicket Price : "+journeyObj1.getTicketPrice());
        System.out.println("---------------------\nTOTAL PROFIT : "+totalProfit);
    }
}

class Vehicle {
    private String vehicleName;
    private Integer seatCapacity;
    private String fuelType;

    public Vehicle(String vehicleName, Integer seatCapacity, String fuelType) {
        this.vehicleName = vehicleName;
        this.seatCapacity = seatCapacity;
        this.fuelType = fuelType;
    }

    public String getVehicleName() {
        return vehicleName;
    }

    public void setVehicleName(String vehicleName) {
        this.vehicleName = vehicleName;
    }

    public Integer getSeatCapacity() {
        return seatCapacity;
    }

    public void setSeatCapacity(Integer seatCapacity) {
        this.seatCapacity = seatCapacity;
    }

    public String getFuelType() {
        return fuelType;
    }

    public void setFuelType(String fuelType) {
        this.fuelType = fuelType;
    }
}

class Bus extends Vehicle {
    public Bus(String vehicleName, Integer seatCapacity, String fuelType) {
        super(vehicleName, seatCapacity, fuelType);
    }

    private static Integer mileage = 30;
    private static Integer fulPricePerLiter = 100;

    public static Integer getMileage() {
        return mileage;
    }

    public static Integer getFulPricePerLiter() {
        return fulPricePerLiter;
    }

}
class Journey {
    private Integer distanceCovered;
    private Integer numberOfPassenger;
    private Integer ticketPrice;
    
    public Journey(Integer distanceCovered, Integer numberOfPassenger, Integer ticketPrice) {
        this.distanceCovered = distanceCovered;
        this.numberOfPassenger = numberOfPassenger;
        this.ticketPrice = ticketPrice;
    }

    public Integer getDistanceCovered() {
        return distanceCovered;
    }

    public void setDistanceCovered(Integer distanceCovered) {
        this.distanceCovered = distanceCovered;
    }

    public Integer getNumberOfPassenger() {
        return numberOfPassenger;
    }

    public void setNumberOfPassenger(Integer numberOfPassenger) {
        this.numberOfPassenger = numberOfPassenger;
    }

    public Integer getTicketPrice() {
        return ticketPrice;
    }

    public void setTicketPrice(Integer ticketPrice) {
        this.ticketPrice = ticketPrice;
    }
    
}

class ProfitCalculator {
    private double profit;

    public double calculateProfit(Journey journeyobj) {
        double fuelPrice = (journeyobj.getDistanceCovered()/Bus.getMileage())*Bus.getFulPricePerLiter();

        Integer ticketRevenue = journeyobj.getNumberOfPassenger()*journeyobj.getTicketPrice();

        profit = ticketRevenue - fuelPrice;

        return profit;
    }
}
