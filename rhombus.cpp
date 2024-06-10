#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a numbers : ";
	cin>>n;
	int m;
	cout<<"Enter a numbers : ";
	cin>>m;
	   for(int i=1;i<=n;i++){
		for(int j=1;j<=m-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=m;j++){
			cout<<"* ";
		}
			cout<<endl;
	}
}
