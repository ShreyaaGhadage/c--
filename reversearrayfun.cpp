#include <iostream>
using namespace std;
 
 void reverse(int arr[],int n){
 	int start=0;
 	int end=n-1;
 	
 	while(start<=end){
 		swap(arr[start],arr[end]);
 		start++;
 		end--;
	 }
 }
 void printarray(int arr[],int n){
 	for(int i=0;i<n;i++){
 		cout<<arr[i]<< " ";
	 }
	 cout<<endl;
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
  reverse(arr,size);
  printarray(arr,size);
}
