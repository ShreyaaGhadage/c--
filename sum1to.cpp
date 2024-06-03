#include<iostream>
using namespace std;
int sum1ton(int n){
	if(n==1) return 1;
	 return n + sum1ton(n-1);
}
int main(){
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<sum1ton(n);
}
