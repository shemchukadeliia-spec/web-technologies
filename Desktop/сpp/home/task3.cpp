#include <iostream>
#include <cmath>

int main() {
    double a, b, c, P;
    std::cout << "Enter a and b: ";
    std::cin >> a >> b;
    
    c = std::sqrt(a * a + b * b);
    P = a + b + c;

    std::cout << "c = " << c << ", P = " << P << std::endl;
    return 0;
}