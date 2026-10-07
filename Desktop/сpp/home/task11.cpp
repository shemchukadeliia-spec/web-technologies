#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Enter edge a: ";
    std::cin >> a;
    std::cout << "Enter edge b: ";
    std::cin >> b;
    std::cout << "Enter edge c: ";
    std::cin >> c;

    double volume = a * b * c;
    double surfaceArea = 2 * (a * b + b * c + a * c);

    std::cout << "Vo;ume: " << volume << std::endl;
    std::cout << "Surface Area: " << surfaceArea << std::endl;

    return 0;
}