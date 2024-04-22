#include "inventory.h"

void Inventory::addVehicle(Vehicle* vehicle) {
  if (size < 100) { // Increase capacity if needed
    inventory[size++] = vehicle;
  } else {
    std::cout << "Inventory full! Cannot add new vehicle." << std::endl;
  }
}

Vehicle* Inventory::getVehicleByChassisNumber(const std::string& chassisNumber) const {
  for (int i = 0; i < size; ++i) {
    if (inventory[i]->getChassisNumber() == chassisNumber) {
      return inventory[i];
    }
  }
  return nullptr;
}

int Inventory::countVehiclesByCategory(Vehicle::CarType carType) const {
  int count = 0;
  for (int i = 0; i < size; ++i) {
    if (dynamic_cast<Car*>(inventory[i]) && inventory[i]->getCarType() == carType) {
      ++count;
    }
  }
  return count;
}

int Inventory::countVehiclesByCategory(Bike::BikeType bikeType) const {
  int count = 0;
  for (int i = 0; i < size; ++i) {
    if (dynamic_cast<Bike*>(inventory[i]) && inventory[i]->getBikeType() == bikeType) {
      ++count;
    }
  }
  return count;
}

double Inventory::averagePriceByCategory(Vehicle::CarType carType) const {
  double total = 0;
  int count = 0;
  for (int i = 0; i < size; ++i) {
    if (dynamic_cast<Car*>(inventory[i]) && inventory[i]->getCarType() == carType) {
      total += inventory[i]->getExShowroomPrice();
      ++count;
    }
  }
  return count > 0 ? total / count : 0.0;
}

double Inventory::averagePriceByCategory(Bike::BikeType bikeType) const {
  double total = 0;
  int count = 0;
  for (int i = 0; i < size; ++i) {
    if (dynamic_cast<Bike*>(inventory[i]) && inventory[i]->getBikeType() == bikeType) {
      total += inventory[i]->getExShowroomPrice();
      ++count;
    }
  }
  return count > 0 ? total / count : 0.0;
}

void Inventory::displayMenu() const {
  std::cout << "*** Vehicle Inventory Management System ***" << std::endl;
  std::cout << "1. Add New Vehicle" << std::endl;
  std::cout << "2. Get Vehicle Details by Chassis Number" << std::endl;
  std::cout << "3. Count Vehicles by Category" << std::endl;
  std::cout << "4. Calculate Average Price by Category" << std::endl;
  std::cout << "5. Display All Vehicles" << std::endl;
  std::cout << "6. Exit" << std::endl;
  std::cout << "Enter your choice: ";
}

std::ostream& operator<<(std::ostream& os, const Inventory& inventory) {
  os << "Inventory Size: " << inventory.size << std::endl;
  for (int i = 0; i < inventory.size; ++i) {
    os << "[" << i << "] " << *inventory.inventory[i] << std::endl;
  }
  return os;
}

