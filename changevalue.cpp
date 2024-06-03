#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int arr[n];
	for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // Even index
            arr[i] += 10; // Increment by 10
        } else { // Odd index
      arr[i] *= 2; // Multiply by 2
        }
    }

    cout << "Modified arrays " << n << " are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

