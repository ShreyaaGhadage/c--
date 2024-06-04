#include<iostream>
using namespace std;

void printthreeno(int arr[],int arr_size)
{
	int first, second, third; 
    if (arr_size < 3) 
    { 
        cout << " Invalid Input "; 
        return; 
    } 

    third = first = second = INT_MIN; 
    for(int i = 0; i < arr_size; i++) 
    { 
        if (arr[i] > first)
        { 
            third = second; 
            second = first; 
            first = arr[i]; 
        }
        else if (arr[i] > second && arr[i] != first)
        { 
            third = second; 
            second = arr[i]; 
        } 

        else if (arr[i] > third && arr[i] != second && arr[i] != first) 
            third = arr[i]; 
    } 
    cout << "Three largest elements are "
        << first << " " << second << " "
        << third << endl; 
} 

int main(){
	int arr[]={5,89,20,69,35};
	int n=sizeof(arr)/sizeof(arr[0]);
	printthreeno(arr,n);
}
