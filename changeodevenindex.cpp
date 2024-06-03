#include <iostream>
using namespace std;

int main() {
    const int n = 10; // Size of the array
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Sample array

    // Modify the array according to the conditions
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // Even index
            arr[i] += 10; // Increment by 10
        } else { // Odd index
            arr[i] *= 2; // Multiply by 2
        }
    }

    // Print the modified array
    cout << "Modified Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

