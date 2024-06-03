#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];

    for (int i = 1; i <= n; i++) {
        arr[i - 1] = i * i;
    }

    cout << "Squares of natural numbers till " << n << " are: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

