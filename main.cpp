#include "Point.h"

int main() {
    Point point1;
    point1.input();
    point1.display();

    
    Point::saveToFile(point1, "point_data.txt");

    Point point2 = Point::loadFromFile("point_data.txt");
    point2.display();

    return 0;
}
