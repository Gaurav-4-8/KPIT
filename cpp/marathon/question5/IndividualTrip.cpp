#include "IndividualTrip.h"
#include"Trip.h"
IndividualTrip::IndividualTrip()
{
    individualTripDuration = 5;
}

IndividualTrip::IndividualTrip(std::string id, std::string name, int d, int r, RIDE type, int dur)
{
    setTripid(id);
    setTripDriver(name);
    setTripDistance(d);
    setTripRating(r);
    setTripVehicleType(type);
    setIndividualTripDuration(dur);
}

float IndividualTrip::calculateFair()
{
    int factor;
    if(getTripVehicleType()==RIDE::PREMIUM) {
        factor = 50;
    } else {
        factor = 25;
    }
    float fair = getTripDistance()*factor;
    fair += 0.18*fair;

    return fair;
}

float IndividualTrip::calculateFair(float f)
{
    int factor;
    if(getTripVehicleType()==RIDE::PREMIUM) {
        factor = 50;
    } else {
        factor = 25;
    }
     float fair = (getTripDistance()*factor) + (f*getIndividualTripDuration());

    return fair;
}

bool IndividualTrip::isTripPerStandard()
{
    if((getTripRating()>=3) && getTripVehicleType()==RIDE::REGULAR) return true;
 
    
    if((getTripRating()>=4) && getTripVehicleType()==RIDE::PREMIUM) return true;

    return false;
}
