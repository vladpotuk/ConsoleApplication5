#include "Point.h"

Point::Point() : x(0.0), y(0.0), z(0.0) {}

Point::Point(double x_val, double y_val, double z_val) : x(x_val), y(y_val), z(z_val) {}

void Point::input() {
    std::cout << "Enter x, y, z coordinates: ";
    std::cin >> x >> y >> z;
}

void Point::display() const {
    std::cout << "Point coordinates: (" << x << ", " << y << ", " << z << ")\n";
}

void Point::saveToFile(const Point& point, const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << point.x << " " << point.y << " " << point.z;
        file.close();
        std::cout << "Data saved to file successfully.\n";
    }
    else {
        std::cerr << "Unable to open file for saving.\n";
    }
}

Point Point::loadFromFile(const std::string& filename) {
    Point loadedPoint;
    std::ifstream file(filename);
    if (file.is_open()) {
        file >> loadedPoint.x >> loadedPoint.y >> loadedPoint.z;
        file.close();
        std::cout << "Data loaded from file successfully.\n";
    }
    else {
        std::cerr << "Unable to open file for loading.\n";
    }
    return loadedPoint;
}
