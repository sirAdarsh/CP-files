#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		unordered_map<ll,int> map;
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			map[arr[i]]++;
		}
		cout<<map.size()<<endl;
	}
}
