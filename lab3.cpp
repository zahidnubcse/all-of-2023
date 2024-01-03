#include <iostream>

class Rectangle {
public:
    double height;
    double width;
    double length;

    double CalculateArea() const {
        return width * length;
    }

    double CalculateVolume() const {
        return height * width * length;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.height = 2.5;
    rectangle.width = 4.0;
    rectangle.length = 6.0;

    double area = rectangle.CalculateArea();
    double volume = rectangle.CalculateVolume();

    std::cout << "Area: " << area << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}
