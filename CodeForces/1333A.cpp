#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while ( t-- ){
		int r,c;
		cin >> r >> c;
		
		for(int i=0 ; i< r ; i ++ ){
			
			if( i ==0){
				
				for( int j =0;j<c-1;j++){
					cout<<"B";
				}
				cout<<"W"<<endl;
				continue;
			}
			for(int j=0;j<c;j++){
				cout<<"B";
			}
			cout<<endl;
			
		}
		
	}
}
