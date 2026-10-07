#include <iostream>
#include <cmath>

int main() {
    double a,  V, S;
    std::cout << "Enter a: ";
    std::cin >>a;
    
    V = std::pow(a, 3);
    S = 6 * std::pow(a,2);
    std::cout << "V = " << V << ", S = "  << S  << std::endl;
    return 0;
}