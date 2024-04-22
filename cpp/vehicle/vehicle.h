#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle {
public:
  // Getter and setter functions
  virtual std::string getChassisNumber() const = 0;
  virtual void setChassisNumber(const std::string& chassisNumber) = 0;
  virtual std::string getBrand() const = 0;
  virtual void setBrand(const std::string& brand) = 0;
  virtual int getExShowroomPrice() const = 0;
  virtual void setExShowroomPrice(int price) = 0;

  // Common functionalities
  virtual void displayDetails() const = 0;

protected:
  std::string chassisNumber;
  std::string brand;
  int exShowroomPrice;
};

#endif
