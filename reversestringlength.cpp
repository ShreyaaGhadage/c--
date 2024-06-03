#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string s;
	cout<<"Enter a string : ";
	getline(cin,s);
	int n=s.length();
	 	reverse(s.begin()+2,s.begin()+5);
		cout<<s;
	}
