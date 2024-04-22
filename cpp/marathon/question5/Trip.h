#ifndef TRIP_H
#define TRIP_H

#include<iostream>

enum RIDE { REGULAR,PREMIUM};
class Trip {

    std::string tripid;
    std::string tripDriver;
    int tripDistance;
    int tripRating;
    RIDE tripVehicleType;

    public:
        Trip();
        virtual float calculateFair() = 0;


        std::string getTripid() const { return tripid; }
        void setTripid(const std::string &tripid_) { tripid = tripid_; }

        std::string getTripDriver() const { return tripDriver; }
        void setTripDriver(const std::string &tripDriver_) { tripDriver = tripDriver_; }

        int getTripRating() const { return tripRating; }
        void setTripRating(int tripRating_) { tripRating = tripRating_; }

        RIDE getTripVehicleType() const { return tripVehicleType; }
        void setTripVehicleType(const RIDE &tripVehicleType_) { tripVehicleType = tripVehicleType_; }

        int getTripDistance() const { return tripDistance; }
        void setTripDistance(int tripDistance_) { tripDistance = tripDistance_; }
};

#endif // TRIP_H
