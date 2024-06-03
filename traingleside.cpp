#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter a  first slide : ";
	cin>>a;
	cout<<"Enter a  second slide : ";
	cin>>b;
	cout<<"Enter a  third slide : ";
	cin>>c;
	if((a+b>c) && (b+c>a) && (a+c>b)){
		cout<<"Valid traingle";
	}
	else{
		cout<<"Invalid traingle";
	}
}
