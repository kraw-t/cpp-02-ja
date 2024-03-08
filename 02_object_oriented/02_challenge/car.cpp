#include "car.hpp"

#include <iostream>
#include "driver.hpp"

Car::Car(std::string make, std::string model, int year, double price)
    : make(make), model(model), year(year), price(price), driver() {
    if (price < 0) {
        std::cerr << "Negative Car Price!" << "\n";
    }
}

void Car::setPrice(double price) {
    printPriceChange(this->price, price);
    this->price = price;
}

void Car::setDriver(Driver* driver) {
    this->driver = driver;
    return;
}

std::string Car::getMake() const { return make; }
std::string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getPrice() const { return price; }
Driver* Car::getDriver() const { return this->driver; }

void Car::displayInfo() const {
    std::cout << year << " " << make << " " << model << " - $" << price << "\n";
    if (this->driver == nullptr) {
        std::cout << "No Driver Registered." << std::endl;
    } else {
        std::cout << "Driver: " << this->driver->getName() << std::endl;
    }
}

void Car::printPriceChange(double from, double to) const {
    std::cout << "Changing price from " << from << " to " << to << "\n";
}
