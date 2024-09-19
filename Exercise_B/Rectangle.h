#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h" 

class Rectangle : public Square {
private:
    double side_b;

public:
    // Constructor
    Rectangle(const char* name, double x, double y, double side_a, double side_b);

    // Area calculation
    double area() const ;

    // Perimeter calculation
    double perimeter() const ;

    // Getters
    double getSideB() const;

    // Setters
    void setSideB(double newSideB);

    // Display function
    void display() const;
};

#endif // RECTANGLE_H