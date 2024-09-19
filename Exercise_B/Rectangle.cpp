#include "rectangle.h"
#include <iostream>
#include <iomanip>

// Constructor
Rectangle::Rectangle(const char* name, double x, double y, double side_a, double side_b)
: Square(name, x, y, side_a){
    side_b = side_b;
}

// Area calculation
double Rectangle::area() const {
    return (getSideA() * side_b);
}

// Perimeter calculation
double Rectangle::perimeter() const {
    return (2 * (getSideA() + side_b));
}

// Getter for side_b
double Rectangle::getSideB() const {
    return side_b;
}

// Setter for side_b
void Rectangle::setSideB(double newSideB) {
    side_b = newSideB;
}

// Display function
void Rectangle::display() const {
    std::cout << "Rectangle Name:"<< getName() << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "X-coordinate: " << getOrigin().getx() << "\n";
    std::cout << "Y-coordinate: " << getOrigin().gety() << "\n";
    std::cout << "Side a: " << getSideA() << "\n";
    std::cout << "Side b: " << side_b << "\n";
    std::cout << "Area: " << area() << "\n";
    std::cout << "Perimeter: " << perimeter() << "\n";
}