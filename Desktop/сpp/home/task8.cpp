#include <iostream>
#include <cmath>

int main() {
    double edge;
    std::cout << "Enter the edge leght of the cube: ";
    std::cin >> edge;

    double volume = std::pow(edge, 3);
    double surfaceArea = 6 * std::pow(edge, 2);

    std::cout << "Volume: " << volume << std::endl;
    std::cout << "Surface Area: " << surfaceArea << std::endl;

    return 0;
}