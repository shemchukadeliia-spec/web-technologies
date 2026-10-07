#include <iostream>
#include <cmath> 

int main() {
    double a, b;
    std::cout << "Enter leg a: ";
    std::cin >> a;
    std::cout << "Enter leg b: ";
    std::cin >> b;

    double c = std::sqrt(a * a + b * b);
    double perimeter = a + b + c;

    std::cout << "Hypertenuse c: " << c << std::endl;
    std::cout << "Perimeter: " << perimeter  << std::endl;

    return 0;
}