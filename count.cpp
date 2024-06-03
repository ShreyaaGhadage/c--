#include<iostream>
using namespace std;
int main(){ 
	int arr[]={1,3,0,10,2,5,6};
	int x=4;
	int n=sizeof(arr)/sizeof(arr[0]);
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]>x) count++;
	}
	cout<<count;
}

