#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"Enter a string : ";
	getline(cin,s);
	int n=s.length();
		for(int i=0;i<n;i++){
		if (i%2==0){
		 s[i]='a';	
		}
	}
		cout<<"Modified string  "<<s;
	
	
}
