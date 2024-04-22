#include "Date.h"

// Day validation
bool isValidDay(int day, int month) {
    if (day >= 1 && day <= 31) {
        return true;
    } else if (month == 2 && day <= 28) { // Adjust for February
        return true;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) { // 30-day months
        return day <= 30;
    } else { // 31-day months
        return day <= 31;
    }
    return false;
}

// Default constructor
Date::Date() {
    day = 1;
    month = 1;
    year = 2024;
}

// Parameterized constructor
Date::Date(int d, int m, int y) {
    if (isValidDay(d, m) && m >= 1 && m <= 12 && y > 0) {
        day = d;
        month = m;
        year = y;
    } else { // Handle invalid date
        day = 1;
        month = 1;
        year = 2024;
        std::cout << "Invalid date entered. Default date has been set." << std::endl;
    }
}

// Getters
int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

// Setters
void Date::setDay(int d) {
    if (isValidDay(d, month)) {
        day = d;
    } else {
        std::cout << "Invalid day entered. Day remains unchanged." << std::endl;
    }
}

void Date::setMonth(int m) {
    if (m >= 1 && m <= 12) {
        month = m;
    } else {
        std::cout << "Invalid month entered. Month remains unchanged." << std::endl;
    }
}

void Date::setYear(int y) {
    if (y > 0) {
        year = y;
    } else {
        std::cout << "Invalid year entered. Year remains unchanged." << std::endl;
    }
}

// Accept details from user
void Date::accept() {
    int d, m, y;
    bool valid = false;

    while (!valid) {
        std::cout << "Enter day: ";
        std::cin >> d;
        std::cout << "Enter month: ";
        std::cin >> m;
        std::cout << "Enter year: ";
        std::cin >> y;

        valid = isValidDay(d, m) && m >= 1 && m <= 12 && y > 0;
        if (!valid) {
            std::cout << "Invalid date entered. Please try again." << std::endl;
        }
    }

    setDay(d);
    setMonth(m);
    setYear(y);
}

// Overloaded << operator
std::ostream& operator<<(std::ostream& os, const Date& obj) {
    os << obj.getDay() << "/" << obj.getMonth() << "/" << obj.getYear();
    return os;
}
