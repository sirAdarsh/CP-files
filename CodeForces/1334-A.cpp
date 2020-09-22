#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while( t-- ){
		
		int n;
		cin >> n;
		bool end=false;
		int p=0,c=0;
		int iP,iC;
		string str;
		for( int i=0;i<n;i++ ){
			cin >> iP >> iC;
			
			if((iC-c)<0 || (iP-p)<0){
				end=true;
				str="NO";
			}
			
			if( (iP-p) < (iC-c) ){
				end=true;
				str="NO";
			}
			p=iP;
			c=iC;
		}
		if(end){
			cout<<str<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
		
	}
	
}
