#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, res;
    cout << "Enter number a: ";
    cin >> x;
    if (x < -5) {
        res = cos(pow(x, 4)) - pow(x, 3);
    } else if (x <= 10) {
        res = sqrt(cos(x) + sin(x));
    } else {
        res = pow(x, 4) + pow(x, 3) - 12 * pow(x, 2) + 3 * x - 6;
    }
    cout << "Result f(a) = " << res << endl;
    return 0;
}