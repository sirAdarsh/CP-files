#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		int arr[n];
		
			
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		
		map<int,int> m;
		
		for(int i=0;i<n;i++){
			
			if(i==n-1){
				
					m[arr[i]]++;
				
			}
			
			else if(arr[i] != arr[i+1] ){
				
				m[arr[i]]++;
				
			}
			
			else if(arr[i]==arr[i+1]){
				m[arr[i]]++;
				i++;
			}
			
		}
		
		int ans;
		int max = -1;
		for(auto i : m){
			if( i.second > max ){
				max = i.second;
				ans = i.first;
			}
//			cout<<i.first<<" "<<i.second<<endl;
		}
		cout<<ans<<endl;
	}
	
	
}
