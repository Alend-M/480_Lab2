#include "graphicsWorld.h"
#include <iostream>


void GraphicsWorld::run() {
    // Display author information
    std::cout << "Program created by Alend Maci & Agustin FILL THIS IN LATER\n\n";

    // Test Point class
    #if 1 // Change 0 to 1 to test Point
    Point m(6, 8);
    Point n(6, 8);
    n.setx(9);
    std::cout << "\nExpected to display the distance between m and n is: 3";
    std::cout << "\nThe distance between m and n is: " << m.distance(n);
    std::cout << "\nExpected second version of the distance function also print: 3";
    std::cout << "\nThe distance between m and n is again: " << Point::distance(m, n);
    #endif // end of block to test Point

    // Test Square class
    #if 1 // Change 0 to 1 to test Square
    std::cout << "\n\nTesting Functions in class Square:" << std::endl;
    Square s(5, 7, 12, "SQUARE - S");
    s.display();
    #endif // end of block to test Square

    // Test Rectangle class
    #if 0 // Change 0 to 1 to test Rectangle
    std::cout << "\nTesting Functions in class Rectangle:";
    Rectangle a(5, 7, 12, 15, "RECTANGLE A");
    a.display();
    Rectangle b(16, 7, 8, 9, "RECTANGLE B");
    b.display();
    double d = a.distance(b);
    std::cout << "\nDistance between square a, and b is: " << d << std::endl;
    Rectangle rec1 = a;
    rec1.display();
    std::cout << "\nTesting assignment operator in class Rectangle:" << std::endl;
    Rectangle rec2(3, 4, 11, 7, "RECTANGLE rec2");
    rec2.display();
    rec2 = a;
    a.set_side_b(200);
    a.set_side_a(100);
    std::cout << "\nExpected to display the following values for object rec2: " << std::endl;
    std::cout << "Rectangle Name: RECTANGLE A\n"
              << "X-coordinate: 5\n"
              << "Y-coordinate: 7\n"
              << "Side a: 12\n"
              << "Side b: 15\n"
              << "Area: 180\n"
              << "Perimeter: 54\n";
    std::cout << "\nIf it doesn't there is a problem with your assignment operator.\n" << std::endl;
    rec2.display();
    std::cout << "\nTesting copy constructor in class Rectangle:" << std::endl;
    Rectangle rec3(a);
    rec3.display();
    a.set_side_b(300);
    a.set_side_a(400);
    std::cout << "\nExpected to display the following values for object rec3: " << std::endl;
    std::cout << "Rectangle Name: RECTANGLE A\n"
              << "X-coordinate: 5\n"
              << "Y-coordinate: 7\n"
              << "Side a: 100\n"
              << "Side b: 200\n"
              << "Area: 20000\n"
              << "Perimeter: 600\n";
    std::cout << "\nIf it doesn't there is a problem with your copy constructor.\n" << std::endl;
    rec3.display();
    #endif // end of block to test Rectangle

    // Test array of pointers and polymorphism
    #if 0 // Change 0 to 1 to test using array of pointer and polymorphism
    std::cout << "\nTesting array of pointers and polymorphism:" << std::endl;
    Shape* sh[4];
    sh[0] = &s;
    sh[1] = &b;
    sh[2] = &rec1;
    sh[3] = &rec3;
    sh[0]->display();
    sh[1]->display();
    sh[2]->display();
    sh[3]->display();
    #endif // end of block to test array of pointer and polymorphism
}