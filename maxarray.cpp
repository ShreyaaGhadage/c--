#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter a size: ";
    cin >> size;

    // Validate size input
    if(size <= 0 || size > 100) {
        cout << "Invalid size. Please enter a size between 1 and 100." << endl;
        return 1;
    }

    int arr[100];

    for(int i = 0; i < size; i++) {
        cout << "Enter an element: ";
        cin >> arr[i];
    }

    int mx = arr[0];

    for(int i = 1; i < size; i++) {
        if(mx < arr[i]) {
            mx = arr[i];
        }
    }

    cout << "The maximum element is: " << mx << endl;

    return 0;
}

