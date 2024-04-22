#include "car.h"

CarType Car::getType() const { return type; }
void Car::setType(CarType type) { this->type = type; }

Car::Car(const std::string& chassisNumber, const std::string& brand, int price, CarType type)
  : Vehicle(chassisNumber, brand, price), type(type) {}

std::ostream& operator<<(std::ostream& os, const Car& car) {
  os << static_cast<const Vehicle&>(car); // Print common vehicle info
  os << "Car Type: " << car.getTypeAsString() << std::endl;
  // Add additional car details output here (e.g., number of seats)
  return os;
}

std::string Car::getTypeAsString() const {
  switch (type) {
    case CarType::SUV: return "SUV";
    case CarType::HatchBack: return "HatchBack";
    case CarType::Sedan: return "Sedan";
    default: return "Unknown";
  }
}
