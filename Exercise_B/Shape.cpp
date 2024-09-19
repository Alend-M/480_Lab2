#include "shape.h"
#include <iostream>
#include <cstring>
#include <iomanip>

// Constructor
Shape::Shape(const char* name, double x, double y) : origin(x, y) {
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

// Destructor
Shape::~Shape() {
    delete[] shapeName;
}


// Get origin
const Point& Shape::getOrigin() const {
    return origin;
}

// Get name
const char* Shape::getName() const {
    return shapeName;
}

// Display function
void Shape::display() const {
    std::cout << "Shape Name: " << shapeName << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "X-coordinate: " << std::setw(8) << origin.getX() << std::endl;
    std::cout << "Y-coordinate: " << std::setw(8) << origin.getY() << std::endl;
}

// Move function
void Shape::move(double dx, double dy) {
    origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
}

// Distance function 
double Shape::distance(Shape& other) {
    return Point::distance(this->origin, other.origin);
}

// Distance function 
double Shape::distance(Shape& the_shape, Shape& other) {
    return Point::distance(the_shape.origin, other.origin);
}