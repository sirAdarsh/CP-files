#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t;
	cin>>t;
	while(t--){
		int x,k;
		cin>>x>>k;
		
		if(k==2){
			
			bool prodPossible=false;
			
			for(int i=2;i<=(int)sqrt(x);i++){
				if(x%i==0){
					if((x/i) >=2){
						prodPossible=true;
						break;
					}
				}
			}
			
			if(prodPossible){
				cout<<"1"<<endl;
			}
			else{
				cout<<"0"<<endl;
			}
			
		}
		else if(k==1){
			
			if(x>=2){
				cout<<"1"<<endl;
			}
			else{
				cout<<"0"<<endl;
			}
			
		}
		
		else{
			bool end=false;
			int count=0;
			for(int i=2;i<=(int)sqrt(x);i++){
				
				if(x%i==0){
					x/=i;
					count++;
					i=1;
				}
				
			}
			
			if(x!=1){
				count++;
			}
			
			if(count>=k){
				cout<<"1"<<endl;
			}
			else{
				cout<<"0"<<endl;
			}
			
			
		}
		
		
	}
}
