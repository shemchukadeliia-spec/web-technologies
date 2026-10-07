#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<double> a(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // a) Calculate average of even elements
    double sum_even = 0;
    int count_even = 0;

    for (size_t i = 0; i < a.size(); i++) {
        int int_part = static_cast<int>(a[i]);
        if (int_part % 2 == 0) {
            sum_even += a[i];
            count_even++;
        }
    }

    if (count_even > 0) {
        cout << "Average of even elements: " << (sum_even / count_even) << endl;
    } else {
        cout << "No even elements found." << endl;
    }

    // b) Insert 0 before every element greater than 10
    vector<double> result;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] > 10.0) {
            result.push_back(0.0); // Insert 0 before the element
        }
        result.push_back(a[i]);
    }

    cout << "Array after inserting zeroes: ";
    for (double val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}