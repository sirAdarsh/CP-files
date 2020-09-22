#include<iostream>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int a[32];
		int b[32];
		
		int n,q;
		cin>>n>>q;
		int arrN[n];
		for(int i=0;i<n;i++){
			cin>>arrN[i];
		}
		
		while(q--){
			
			int p;
			cin>>p;
			for(int x=0;x<32;x++){
				a[x]=0;
				b[x]=0;
			}
			int c;
			for(int b=0;b<n;b++){
				
			
				c=0;
				while(arrN[b]){
					a[c]=arrN[b]%2;
					c++;
					arrN[b]=arrN[b]/2;
					
				}
				
				for(int d=0;d<32;d++){
					cout<<a[d]<<" ";
				}
				cout<<endl;
				
			}
			
			
		}
		
		
		
		
		
	}
}
