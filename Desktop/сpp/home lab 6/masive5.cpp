#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    srand(time(0));

    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<double> a(n);
    cout << "Original array:\n";
    for (int i = 0; i < n; i++) {
        // Generate real numbers in range [-4.00, 10.00]
        a[i] = -4.0 + (rand() % 1401) / 100.0;
        cout << fixed << setprecision(2) << a[i] << " ";
    }
    cout << endl;

    // 1. Find indices and sum of elements in [-1, 5]
    double sum = 0;
    cout << "\nIndices of elements in range [-1, 5] (1-based): ";
    for (int i = 0; i < n; i++) {
        if (a[i] >= -1.0 && a[i] <= 5.0) {
            cout << (i + 1) << " "; // Output 1-based index
            sum += a[i];
        }
    }
    cout << "\nSum of these elements: " << sum << endl;

    // 2. Sort only even elements
    vector<double> evens;
    vector<int> even_indices;

    for (int i = 0; i < n; i++) {
        int int_part = static_cast<int>(a[i]);
        if (int_part % 2 == 0) {
            evens.push_back(a[i]);
            even_indices.push_back(i);
        }
    }

    // Sort extracted even elements
    sort(evens.begin(), evens.end());

    // Place sorted elements back to their original positions
    for (size_t k = 0; k < even_indices.size(); k++) {
        a[even_indices[k]] = evens[k];
    }

    cout << "\nArray after sorting even elements:\n";
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(2) << a[i] << " ";
    }
    cout << endl;

    return 0;
}