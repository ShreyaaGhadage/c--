#include<iostream>
using namespace std;
int main(){ 
	int arr[]={2,5,6,8,9,67};
	int n=sizeof(arr)/4;
	int mx=arr[0];
	for(int i=0;i<=n;i++){
		if(arr[i]>mx) mx=arr[i];
		//mx=max(mx,arr[i]); second method
	}
	cout<<mx;
}
