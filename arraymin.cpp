#include<iostream>
using namespace std;
int main(){ 
	int arr[]={2,5,6,8,9,67,-9};
	int n=sizeof(arr)/4;
	int minn=arr[0];
	for(int i=0;i<=n;i++){
		if(arr[i]<minn) minn=arr[i];
	}
	cout<<minn;
}
