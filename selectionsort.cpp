#include<iostream>
using namespace std;
int main(){
	int arr[]={5,10,-9,4,2,3,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	//selection sort
	for(int i=0;i<n-1;i++){
		int mn=INT_MAX;
			int minidex=-1;
		for(int j=i;j<n;j++){
			if(mn>arr[j]){
	  	mn=arr[j];
	  	minidex=j;
	  }
		}
		swap(arr[i],arr[minidex]);
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
