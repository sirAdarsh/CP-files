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
			
			int p;
			cin>>p;
			l compN,compP;
			int even=0;
			
			for(int j=0;j<n;j++){
				
				int ones=0;
				int lastN,lastP;
					
				for(int k=0;k<32;k++){	
					compN = arr[j]>>k;
					lastN = compN & 1;
					
					compP = p>>k;
					lastP =compP & 1;
					
					if(lastN != lastP){
					ones++;
					}
									
				}
				if(ones%2==0){
					even++;
					}
				
			}
			cout<<even<<" "<<n-even<<endl;
		}
		
	}
	
}
