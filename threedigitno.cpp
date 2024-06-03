#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter a number : ";
	cin>>x;
	if(x>99 && x<1000){
		cout<<"The number is three digit";
	}
	else{
		cout<<"Number is not three digit";
	}
}
