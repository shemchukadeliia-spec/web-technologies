#include <iostream>
using namespace std;

int main() {
    int num, day;
    cout << "Enter a three-digit number: ";
    cin >> num;
    cout << "Enter your day of birth: ";
    cin >> day;
    int d1 = num / 100;
    int d2 = (num / 10) % 10;
    cout << "Result: " << d2 << d1 << day << endl;
    return 0;
}