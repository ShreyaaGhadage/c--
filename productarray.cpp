#include<iostream>
using namespace std;
int main(){ 
	int arr[]={2,2,3,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int product=1;
	for(int i=0;i<n;i++){
		product *=arr[i];
	}
	cout<<product;
}

