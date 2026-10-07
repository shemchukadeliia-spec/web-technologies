#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Initialize random number generator

    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> a(n), b(n), c(n);

    cout << "Array A: ";
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 21 - 10; // Generate numbers in range [-10, 10]
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < n; i++) {
        b[i] = rand() % 21 - 10;
        cout << b[i] << " ";
    }
    cout << endl;

    cout << "Array C (a[i] - b[i]): ";
    for (int i = 0; i < n; i++) {
        c[i] = a[i] - b[i]; // Store difference in array C
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}