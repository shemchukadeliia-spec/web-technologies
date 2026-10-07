#include <iostream>
using namespace std;

int main() {
    double a, b, h;
    cout << "Enter the first base of the trapezoid: ";
    cin >> a;
    cout << "Enter the second base of the trapezoid: ";
    cin >> b;
    cout << "Enter the height of the trapezoid: ";
    cin >> h;
    double s = (a + b) / 2 * h;
    cout << "Area of the trapezoid: " << s << endl;
    return 0;
}