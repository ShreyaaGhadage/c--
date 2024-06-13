#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter a size: ";
    cin >> size;

    // Validate size input
    if(size <= 0 || size > 100) {
        cout << "Invalid size. Please enter a size between 1 and 100." << endl;
    }

    int arr[100];

    for(int i = 0; i < size; i++) {
        cout << "Enter an element: ";
        cin >> arr[i];
    }
   int sum = 0;
   for(int i=0;i<size;i++){
   	sum=sum+arr[i];
   }
   cout<<sum;
}
