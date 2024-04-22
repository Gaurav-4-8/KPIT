#include <iostream>
#include <string>
#include "vehicle.h"
#include "car.h"
#include "bike.h"
#include "inventory.h"

int main() {
  Inventory inventory; // Create inventory object

  int choice;
  do {
    inventory.displayMenu();
    std::cin >> choice;

    switch (choice) {
      case 1: // Add new vehicle
        // Prompt for vehicle type, brand, price, details, create object, add to inventory
        std::string type;
        std::cout << "Enter vehicle type (Car/Bike): ";
        std::cin >> type;

        if (type == "Car") {
          // Car specific details
          std::string chassisNumber, brand;
          int price;
          Car::CarType carType;

          std::cout << "Enter chassis number: ";
          std::cin >> chassisNumber;
          std::cout << "Enter brand: ";
          std::cin >> brand;
          std::cout << "Enter price: ";
          std::cin >> price;
          std::cout << "Select car type (1 - SUV, 2 - HatchBack, 3 - Sedan): ";
          std::cin >> carType;

          // Create and add Car object
          Car* car = new Car(chassisNumber, brand, price, static_cast<Car::CarType>(carType - 1));
          inventory.addVehicle(car);
        } else if (type == "Bike") {
          // Bike specific details
          std::string chassisNumber, brand;
          int price;
          Bike::BikeType bikeType;

          std::cout << "Enter chassis number: ";
          std::cin >> chassisNumber;
          std::cout << "Enter brand: ";
          std::cin >> brand;
          std::cout << "Enter price: ";
          std::cin >> price;
          std::cout << "Select bike type (1 - Commute, 2 - Sports, 3 - OffRoad): ";
          std::cin >> bikeType;

          // Create and add Bike object
          Bike* bike = new Bike(chassisNumber, brand, price, static_cast<Bike::BikeType>(bikeType - 1));
          inventory.addVehicle(bike);
        } else {
          std::cout << "Invalid vehicle type!" << std::endl;
        }
        break;
      case 2: // Get vehicle details by chassis number
        std::string chassisNumber;
        std::cout << "Enter chassis number: ";
        std::cin >> chassisNumber;

        Vehicle* vehicle = inventory.getVehicleByChassisNumber(chassisNumber);
        if (vehicle) {
          std::cout << "Vehicle Details:" << std::endl;
          std::cout << *vehicle << std::endl;
        } else {
          std::cout << "Vehicle with chassis number '" << chassisNumber << "' not found." << std::endl;
        }
        break;
      case 3: // Count vehicles by category
        int carCountByType;
        std::cout << "Choose car type (1 - SUV, 2 - HatchBack, 3 - Sedan): ";
        std::cin >> carCountByType;
        std::cout << "Number of " << Car::getTypeAsString(static_cast<Car::CarType>(carCountByType - 1)) << " cars: " << inventory.countVehiclesByCategory(static_cast<Car::CarType>(carCountByType - 1)) << std::endl;

        int bikeCountByType;
        std::cout << "Choose bike type (1 - Commute, 2 - Sports, 3 - OffRoad): ";
        std::cin >> bikeCountByType;
        std::cout << "Number of " << Bike::getTypeAsString(static_cast<Bike::BikeType>(bikeCountByType - 1)) << " bikes: " << inventory.countVehiclesByCategory(static_cast<Bike::BikeType>(bikeCountByType - 1)) << std::endl;
        break;
      case 4: // Calculate average price by category
        int carAvgPriceType;
        std::cout << "Choose car type (1 - SUV, 2 - HatchBack, 3 - Sedan): ";
        std::cin >> carAvgPriceType;
        std::cout << "Average price of " << Car::getTypeAsString(static_cast<Car::CarType>(carAvgPriceType - 1)) << " cars: ";
        break;
    }

    return 0;
  }
