#include<iostream>
using namespace std;
int main(){
	int sp;
	cout<<"Enter a selling price: ";
	cin>>sp;
	int cp;
	cout<<"Enter a cost price: ";
	cin>>cp;
 if(sp>cp){
 	cout<<"Profit is : ";
 	cout<<sp-cp;
 	
 }
 else{
 	cout<<"Loss is : ";
 	cout<<cp-sp;
 }
}
