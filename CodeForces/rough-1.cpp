#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
//		for(int i=0;i<n;i++){
//			cout<<arr[i]<<" ";
//		}


		int ans=0;
		
		int p=0;
		int j;
		for(j =0;j<n;j++){
			
			if( arr[j] - p > 1){
				
				x -= ( arr[j] - p - 1 );
				if( x>= 0 ){
					p = arr[j];
					continue;
				}
				else{
					break;
				}
			}
			else{
				p=arr[j];
			}
		}
		
		if( x > 0 ){
			p += x;
		}
		
		cout<<p<<endl;
		
		
	}
	
}
