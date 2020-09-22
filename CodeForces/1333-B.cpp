#include<iostream>
using namespace std;
int main(){
	
	int t;
	cin >>t;
	while(t--){
		
		int n;
		cin>>n;
		int arrA[n];
		int arrB[n];
		for(int i=0;i<n;i++){
			cin >> arrA[i];
		}
		for(int i=0;i<n;i++){
			cin >> arrB[i];
		}
		
		int firstEl = arrB[0];
		
		if( arrA[0] != firstEl ){
			cout<<"NO"<<endl;
		}else{
			
			int d;
			bool end=false;
			
			bool one=false;
			bool zero=false;
			bool negOne=false;
			
			for( int i =0; i<n-1;i++ ){
				
				if(arrA[i]==0){
					zero=true;
				}
				else if(arrA[i]==1){
					one=true;
				}
				else if(arrA[i]==-1){
					negOne=true;
				}
				
				d = arrB[i+1] - arrA[i+1];
				if( d==0 ){
					continue;
				}else if(d>0){
					if(one!=true){
						cout<<"NO"<<endl;
						end=true;
						break;
					}
				}else if(d<0){
					if(negOne!=true){
						cout<<"NO"<<endl;
						end=true;
						break;
					}
				}
				
				
			}
			if(!end){
				cout<<"YES"<<endl;
			}
			
		}
		
		
		
		
	}
	
}
