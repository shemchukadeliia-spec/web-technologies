#include <iostream>
#include <cmath>

double getDistance(double x1, double y1, double x2, double y2) {
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}
int main() {
    double x1, y1, x2, y2, x3, y3;

    std::cout << "Enter coordinates for Point 1 (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Enter coordinates for Point 2 (x2 y2): ";
    std::cin >> x2 >> y2;
    std::cout << "Enter coordinates for Point 3 (x3 y3): ";
    std::cin >> x3 >> y3;

    double sideA = getDistance(x1, 1, x2, y2);
    double sideB = getDistance(x2, y2, x3, y3);
    double sideC = getDistance(x3, y3, x1, y1);

    double perimeter = sideA + sideB + sideC;

    double semiPerimeter = perimeter / 2.0;
    double area = std::sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));

    std::cout << "Perimeter: " << perimeter << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}