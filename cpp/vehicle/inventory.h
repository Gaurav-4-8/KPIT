#ifndef INVENTORY_H
#define INVENTORY_H

#include"vehicle.h"
#include"bike.h"
#include"car.h"
class Inventory {
public:
  // Add a new vehicle
  void addVehicle(Vehicle* vehicle);

  // Get details of a vehicle by chassis number
  Vehicle* getVehicleByChassisNumber(const std::string& chassisNumber) const;

  // Count vehicles of a certain category
  int countVehiclesByCategory(Car::CarType carType) const;
  int countVehiclesByCategory(Bike::BikeType bikeType) const;

  // Calculate average price of a certain category
  double averagePriceByCategory(Car::CarType carType) const;
  double averagePriceByCategory(Bike::BikeType bikeType) const;

  // Display menu options
  void displayMenu() const;
  private:
  // Array of vehicle pointers
  Vehicle* inventory[100]; // Change based on your maximum inventory size
  int size;

friend std::ostream& operator<<(std::ostream& os, const Inventory& inventory);
};

#endif // INVENTORY_H
