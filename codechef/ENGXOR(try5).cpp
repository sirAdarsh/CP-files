#include<iostream>
#define l long
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		
		int n,q;
		cin>>n>>q;
		l arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		
		
		
		while(q--){
			int p;
			cin>>p;
			int b[32]={};
			for(int i=0;i<32;i++){
				b[i]=p%2;
				p/=2;
				if(p==0){
					break;
				}
			}
			
			//good to go!
			
			int evens=0;
			
			for(int i=0;i<n;i++){
				
				int ones=0;
				
				int a[32]={};
				int n=arr[i];
				for(int j=0;j<32;j++){
					a[j]=n%2;
					n/=2;
					if(n==0){
						break;
					}
				}
				
				//good to go.
				
				for(int j=0;j<32;j++){
					if(a[j]!=b[j]){
						ones++;
					}
				}
				
				if(ones%2==0){
					evens++;
				}
				
			}
			
			
			cout<<evens<<" "<<n-evens<<endl;
			
			
		}
		
	}
}
