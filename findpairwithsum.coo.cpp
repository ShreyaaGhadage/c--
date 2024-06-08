#include <iostream>
#include <vector>

using namespace std;

bool findPairWithSum(const vector<int>& arr, int x) {
    int n = arr.size();

    // Check each pair of elements
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == x) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                return true;
            }
        }
    }

    cout << "No pair found with sum " << x << endl;
    return false;
}

int main() {
    vector<int> arr = {10, 2, 3, 7, 5}; // Example array
    int x = 10; // Example sum value

    if (!findPairWithSum(arr, x)) {
        cout << "No pair found." << endl;
    }

    return 0;
}

