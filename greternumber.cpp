#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter a  first number : ";
	cin>>a;
	cout<<"Enter a  second number : ";
	cin>>b;
	cout<<"Enter a  third number : ";
	cin>>c;
	
	if(a>=b && a>=c){
		cout<<a <<"is greter number";
	}
	else if(b>=a && b>=c){
		cout<<b <<"is greter number";
	}
	else{
		cout<<c <<"is gretaer number";
	}
}
