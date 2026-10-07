#include <iostream>

int main() {
    int num, last_digit, remaining, new_num;
    std::cout << "Enter 3-digit number: ";
    std::cin >> num;
    
    last_digit = num % 10;
    remaining = num / 10;
    new_num = last_digit * 100 + remaining;
    
    std::cout << "New number: " << new_num << std::endl;
    return 0;
}