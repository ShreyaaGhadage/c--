#include<iostream>
using namespace std;
int main(){
	int arr[]={5,-2,0,3,4,-4,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int mn=INT_MAX;
	int minidex=-1;
	for(int i=0;i<n;i++){
	  if(mn>arr[i]){
	  	mn=arr[i];
	  	minidex=i;
	  }
}
cout<<mn<<" "<<minidex;
}
