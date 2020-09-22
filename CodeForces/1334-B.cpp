#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		
	ll n,x;
	cin >> n >> x;
	
	ll arr[n]={};
	ll p;
	ll diff=0;
	ll ans=0;
	
	for(ll i=0;i<n;i++){
		
		cin >> p;
		if(p >= x ){
			ans++;
			diff += p-x;
		}else{
			arr[i] = p;
		}
	}	
	
	sort( arr,arr+n, greater<>() );
	
	for(ll i =0;i<n;i++){
		
		if(arr[i]==0){
			break;
		}
		
		if( x-arr[i] > diff || diff==0 ){
			break;
		}
		
		if( x - arr[i] <= diff  ){
			ans++;
			diff -= (x-arr[i]);
		}
		
	}
	
	cout<<ans<<endl;
	
}
}

