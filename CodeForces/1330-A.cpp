#include<bits/stdc++.h>
using namespace std;
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		
		int arr[n+1];
		int i;
		for(i=1;i<=n;i++){
			cin>>arr[i];
		}
//		sort(arr+1,arr+n+1);
		cout<<"a";
		for(i=1;i<=n;i++){
			cout<<arr[i]<<" ";
		}
		
		int ans=0;
		
		int p=0;
		
		for(i =1;i<=n;i++){
			
			if( arr[i] - p !=1){
				
				x -= ( arr[i] - p - 1 );
				if( x>= 0 ){
					continue;
				}
				else{
					break;
				}
			}
		}
//		cout<<arr[i]<<endl;
		
	}
}
