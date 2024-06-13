#include <iostream>
using namespace std;

bool search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int size;
    cout << "Enter a size: ";
    cin >> size;

    // Validate size input
    if (size <= 0 || size > 100) {
        cout << "Invalid size. Please enter a size between 1 and 100." << endl;
        return 1; // Exit the program if the size is invalid
    }

    int arr[100];

    for (int i = 0; i < size; i++) {
        cout << "Enter an element: ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value to search for: ";
    cin >> target;

    bool found = search(arr, size, target);

    if (found) {
        cout << "Key is present" << endl;
    } else {
        cout << "Key is not present" << endl;
    }

    return 0;
}

