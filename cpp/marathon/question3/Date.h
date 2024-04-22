#ifndef DATE_H
#define DATE_H

#include<iostream>

class Date {

    unsigned int day;
    unsigned int month;
    unsigned int year;

    static unsigned int monthPerYear;

    public:
        Date();
        ~Date();
        Date(int, int, int);
        int checkDay(int);
        void print();

};

#endif // DATE_H
