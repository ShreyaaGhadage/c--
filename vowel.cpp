#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"Enter a string : ";
	getline(cin,s);
	int count=0;
	int n=s.length();
		for(int i=0;i<n;i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		count++;
	}
	cout<<count;
}
