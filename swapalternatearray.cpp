#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n) {
    // Traverse the array
    for (int i = 0; i < n - 1; i += 2) {
        // Swap arr[i] and arr[i+1]
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
  swapAlternate(arr,size);
  printArray(arr,size);
}
