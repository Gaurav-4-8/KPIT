#include "vehicle.h"

std::string Vehicle::getChassisNumber() const { return chassisNumber; }
void Vehicle::setChassisNumber(const std::string& chassisNumber) { this->chassisNumber = chassisNumber; }
std::string Vehicle::getBrand() const { return brand; }
void Vehicle::setBrand(const std::string& brand) { this->brand = brand; }
int Vehicle::getExShowroomPrice() const { return exShowroomPrice; }
void Vehicle::setExShowroomPrice(int price) { this->exShowroomPrice = price; }

void Vehicle::displayDetails() const {
  std::cout << "Chassis Number: " << chassisNumber << std::endl;
  std::cout << "Brand: " << brand << std::endl;
  std::cout << "Ex-Showroom Price: " << exShowroomPrice << std::endl;
}