#include<iostream>
#define l long
using namespace std;
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
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
			int a[32]={};
			int b[32]={};
			
			int p;
			cin>>p;
			int evens=0;
			
			int z=0;
			while(p){
				b[z]=p%2;
				z++;
				p/=2;
			}
			
			for(int i=0;i<n;i++){
				int ones=0;
				
				if(arr[i]==2){
					a[1]=1;
				}
				else{
					int tc=0;
				while(arr[i]){
					a[tc]=arr[i]%2;
					tc++;
					arr[i]/=2;
				}
				}
				
				
				for(int j=0;j<32;j++){
					if(a[j] != b[j]){
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
