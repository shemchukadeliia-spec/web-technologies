#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result;

    for (size_t i = 0; i < a.size(); i++) {
        bool remove = false;

        // Check if previous element is 0
        if (i > 0 && a[i - 1] == 0) {
            remove = true;
        }
        // Check if next element is 0
        if (i + 1 < a.size() && a[i + 1] == 0) {
            remove = true;
        }

        // Keep element if it shouldn't be removed
        if (!remove) {
            result.push_back(a[i]);
        }
    }

    cout << "Array after removal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}