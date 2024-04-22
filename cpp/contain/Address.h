#include<iostream>

class Address {

    int pinCode;
    std::string city;

    public:
        Address();
        ~Address();
        Address(int, std::string);
        void display();

        int getPinCode() const { return pinCode; }
        void setPinCode(int pinCode_) { pinCode = pinCode_; }

        std::string getCity() const { return city; }
        void setCity(const std::string &city_) { city = city_; }
};