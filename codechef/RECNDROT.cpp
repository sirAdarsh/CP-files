#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	
	while(t--){
		
		ll n;
		cin >> n;
		
		unordered_map<ll,ll> m;
		
		ll p;
		vector<ll> arr;
		
		for(int i=0;i<n;i++){
			cin >> p;
			if(m.find(p)!=m.end()){
				continue;
			}
				m[p]++;
				arr.push_back(p);
			
		}
		
		ll size = arr.size();
//		cout<<size<<endl;
		ll ti=0;
		
		for(ll i= size-1 ; i>0 ;i--){
//			cout<<arr[i]<<" ";
			if( arr[i-1] > arr[i] ){
				ti++;
			}
		}
		
		ll ans = 1 + ti;
		cout<<ans<<endl;
		
		
	}
}
