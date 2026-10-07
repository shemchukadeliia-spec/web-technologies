#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter integers (enter 0 to complete):\n";
    do {
        cin >> num;
        if (num != 0 && num % 2 == 0) {
            count++;
        }
    } while (num != 0);
    cout << "Count of even numbers in the sequence: " << count << endl;
    return 0;
}