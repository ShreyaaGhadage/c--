#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a rows : ";
	cin>>n;
	int m;
	cout<<"Enter a cols : ";
	cin>>m;
	
	   for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==1 || i==n){
			cout<<"#"<<" ";
		}
				else if(j==1 || j==m){
			cout<<"#"<<" ";
		}
			else{
			cout<<" "<<" ";
		}
		}
		cout<<endl;
}
		
	}
