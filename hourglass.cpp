#include<iostream>
using namespace std;
	void pattern(int rows_no){
		int i,j,k;
	   for(i=1;i<=rows_no;i++){
	   	for(k=1;k<i;k++)
	   	cout<<" ";
		for(j=i;j<=rows_no;j++)
		cout<<"*"<<" ";
		cout<<endl;
	}
	for(i=rows_no-1;i>=1;i--){
		for(k=1;k<i;k++)
		cout<<" ";
		for(j=i;j<=rows_no;j++)
		cout<<"*"<<" ";
		
		cout<<endl;
	}
}
int main(){
	int rows_no=7;
	pattern(rows_no);
	return 0;
}
