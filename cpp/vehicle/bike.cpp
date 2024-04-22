#include"bike.h"

BikeType Bike::getType() const { return type; }
void Bike::setType(BikeType type) { this->type = type; }

Bike::Bike(const std::string& chassisNumber, const std::string& brand, int price, BikeType type)
  : Vehicle(chassisNumber, brand, price), type(type) {}

std::ostream& operator<<(std::ostream& os, const Bike& bike) {
  os << static_cast<const Vehicle&>(bike); // Print common vehicle info
  os << "Bike Type: " << bike.getTypeAsString() << std::endl;
  // Add additional bike details output here (e.g., engine capacity)
  return os;
}

std::string Bike::getTypeAsString() const {
  switch (type) {
    case BikeType::Commute: return "Commute";
    case BikeType::Sports: return "Sports";
    case BikeType::OffRoad: return "OffRoad";
    default: return "Unknown";
  }
}
