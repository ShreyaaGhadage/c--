#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number :";
	cin>>n;
	int m;
	cout<<"Enter a number :";
	cin>>m;
	int temp=n;
	n=m;
	m=temp;
	cout<<n<<" "<<m<<endl;
}
