#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;
    int id;
    static int nextId;
    static int count;

public:
    // Constructor
    Point(double x, double y);

    // Destructor
    ~Point();

    // Getters
    double getX() const { return x; }
    double getY() const { return y; }
    int getId() const { return id; }

    // Setters
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }

    // Member functions
    void display() const;
    static int counter() { return count; }

    // Distance functions
    double distance(const Point& other) const;
    static double distance(const Point& p1, const Point& p2);
};

#endif // POINT_H