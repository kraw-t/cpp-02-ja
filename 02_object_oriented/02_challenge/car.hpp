#pragma once
#include <string>
#include "driver.hpp"

class Car {
public:
    Car(std::string make, std::string model, int year, double price);

    void setPrice(double price);
    void setDriver(Driver* driver);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;
    Driver* getDriver() const;

    void displayInfo() const;

private:
    void printPriceChange(double from, double to) const;

    std::string make;
    std::string model;
    int year;
    double price;
    Driver* driver;
};
