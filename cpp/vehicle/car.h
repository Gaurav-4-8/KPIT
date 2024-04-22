#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle {
public:
  // Specific details for Car
  enum class CarType {
    SUV, HatchBack, Sedan
  };

  CarType getType() const;
  void setType(CarType type);

protected:
  CarType type;

  // Constructor
  Car(const std::string& chassisNumber, const std::string& brand, int price, CarType type);

friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

#endif // CAR_H
