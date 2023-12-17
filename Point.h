#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>

class Point {
private:
    double x, y, z;

public:
    Point();

    Point(double x_val, double y_val, double z_val);

    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }

   
    void input();
    void display() const;

    
    static void saveToFile(const Point& point, const std::string& filename);
    static Point loadFromFile(const std::string& filename);
};

#endif 

