#ifndef SHAREDTRIP_H
#define SHAREDTRIP_H

#include"Trip.h"

class SharedTrip: public Trip {

    int sharedTripPassengers;

    public:
        SharedTrip();
      SharedTrip(std::string,std::string,int,int,RIDE,int);

        float calculateFair();
        bool isTripPerStandard();

        int getSharedTripPassengers() const { return sharedTripPassengers; }
        void setSharedTripPassengers(int sharedTripPassengers_) { sharedTripPassengers = sharedTripPassengers_; }

};

#endif // SHAREDTRIP_H
