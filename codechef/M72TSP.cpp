#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n,k;
		cin >> n >> k;
		int arr[n];
		int ans=0;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		
		int count=0;
		
		for(int i=0;i<n;i++){
			
			unordered_map<int,int> map;
			count=0;
			for( int j =i;j<n;j++){
				
				if ( map.find(arr[j]) == map.end() ){
					map[arr[j]]++;
				}
				
				if( map.size() == (k+1) ){
					
					count += (n-i) -( j - i );
					ans+=count;
					break;
				}
				
			}
			
			
			
		}
		cout<<ans<<endl;
		
	}
}
