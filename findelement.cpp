#include <iostream>
using namespace std;

int findelement(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    } 
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int key;
    cout << "Enter a key: ";
    cin >> key;
    
    int position = findelement(arr, n, key);
    
    if (position == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at position " << position  << endl;
    
    return 0;
}
