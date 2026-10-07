#include <iostream>

int main() { int K, day;
    std::cout << "Enter the day of the year K (1-365): ";
    std::cin >> K;
    
    day = (K + 0) % 7 + 1;
    std::cout << "Day of the week number: " <<day << std::endl;
    return 0;
}