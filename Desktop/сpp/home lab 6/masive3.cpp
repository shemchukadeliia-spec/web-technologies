#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> a(n);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 21; // Range [0, 20]
        cout << a[i] << " ";
    }
    cout << endl;

    // Transformation
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i] = 0; // Even number
        } else {
            a[i] = 1; // Odd number
        }
    }

    cout << "Transformed array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}