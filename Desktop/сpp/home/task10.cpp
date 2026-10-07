#include <iostream>

int main() {
    int number;
    std::cout << "Enter a three-digit number: ";
    std::cin >> number;

    int lastDigit =  number % 10;
    int firstTwoDigits = number / 10;

    int newNumber = lastDigit * 100 + firstTwoDigits;

    std::cout << "Resulting number: " << newNumber << std::endl;

    return 0;
}