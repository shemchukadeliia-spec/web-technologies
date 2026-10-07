#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter number of elements n: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_elem = a[0];
    long long product = 1;
    bool has_positive = false;

    for (int i = 0; i < n; i++) {
        // Find minimum element
        if (a[i] < min_elem) {
            min_elem = a[i];
        }
        // Calculate product of positive elements
        if (a[i] > 0) {
            product *= a[i];
            has_positive = true;
        }
    }

    cout << "Minimum element: " << min_elem << endl;
    if (has_positive) {
        cout << "Product of positive elements: " << product << endl;
    } else {
        cout << "No positive elements found." << endl;
    }

    return 0;
}