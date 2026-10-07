#include <iostream>

int main() {
    double a, b, c, V, S;
    std::cout << "Enter a, b, c: ";
    std::cin >> a >> b >> c;
    
    V = a * b * c;
    S = 2 * (a * b + b * c + a * c);
    
    std::cout << "V = " << V << ", S = " << S << std::endl;
    return 0;
}