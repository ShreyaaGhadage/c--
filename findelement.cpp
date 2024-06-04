#include<iostream>
using namespace std;
int findelement(int arr[],int n,int key){
	int i;
	for(int i=0;i<n;i++)
	if(arr[i]==key)
	return i;
	else
	return -1;
}
 int main(){
 	int n;
 	cout<<"Enter a number : ";
 	cin>>n;
 	int key;
 	cout<<"Enter a key : ";
 	cin>>key;
 	int position = findElement(arr,n,key);
 	  if(position==-1)
 	  cout<<"Element no foun : ";
 	  else
 	  cout<<"Element find at position "<<position+1;
 	
 }
