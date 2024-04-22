#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructors
    Date();
    Date(int d, int m, int y);

    // Getter and setter
    int getDay() const;
    void setDay(int d);
    int getMonth() const;
    void setMonth(int m);
    int getYear() const;
    void setYear(int y);

    // Member functions
    void accept();
    friend std::ostream& operator<<(std::ostream& os, const Date& obj);
};

#endif
