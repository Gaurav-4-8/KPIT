#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle {
public:
  // Specific details for Bike
  enum class BikeType {
    Commute, Sports, OffRoad
  };

  BikeType getType() const;
  void setType(BikeType type);

protected:
  BikeType type;

  // Constructor
  Bike(const std::string& chassisNumber, const std::string& brand, int price, BikeType type);

friend std::ostream& operator<<(std::ostream& os, const Bike& bike);
};

#endif // BIKE_H
