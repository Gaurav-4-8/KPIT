
#ifndef INDIVIDUALTRIP_H
#define INDIVIDUALTRIP_H
#include"Trip.h"
class IndividualTrip: public Trip {

    int individualTripDuration;

    public:
        IndividualTrip();
        IndividualTrip(std::string,std::string,int,int,RIDE,int);
        float calculateFair();
        float calculateFair(float);
        bool isTripPerStandard();

        int getIndividualTripDuration() const { return individualTripDuration; }
        void setIndividualTripDuration(int individualTripDuration_) { individualTripDuration = individualTripDuration_; }
        
};

#endif // INDIVIDUALTRIP_H
