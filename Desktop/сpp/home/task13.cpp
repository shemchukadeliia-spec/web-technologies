#include <iostream>

int main() {
    int k;
    std::cout << "Enter day number K (1-365): ";
    std::cin >> k;

    int dayOfWeek = (k + 0) % 7 + 1;

    std::cout << "Da of the week number: " << dayOfWeek << std::endl;

    return 0;
}