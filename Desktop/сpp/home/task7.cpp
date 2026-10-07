#include <iostream>
#include <cmath>

 main() {
    double x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    double y = std::pow(x, 3) - 4 * std::pow(x, 2) - 5 * x + 9 + std::cos(x);

    std::cout << "y = " << y << std::endl;

    return 0;
 }