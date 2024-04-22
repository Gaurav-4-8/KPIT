#include "SharedTrip.h"

SharedTrip::SharedTrip()
{
    sharedTripPassengers = 5;
}
SharedTrip::SharedTrip(std::string id, std::string name, int d, int r, RIDE type, int num)
{
    setTripid(id);
    setTripDriver(name);
    setTripDistance(d);
    setTripRating(r);
    setTripVehicleType(type);
    setSharedTripPassengers(num);
}

float SharedTrip::calculateFair()
{
    int factor;
    if(getTripVehicleType()==RIDE::PREMIUM) {
        factor = 50;
    } else {
        factor = 25;
    }
    float fair = getTripDistance()*factor*sharedTripPassengers;
    fair += 0.18*fair;

    return fair;
}

bool SharedTrip::isTripPerStandard()
{
    if((getTripRating()>=3) && getTripVehicleType()==RIDE::REGULAR) return true;
    
    if((getTripRating()>=4) && getTripVehicleType()==RIDE::PREMIUM) return true;

    return false;
}
