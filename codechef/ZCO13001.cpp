#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
	ll N;
	cin>>N;
	ll arr[N];
	for(ll i=0;i<N;i++){
		cin>>arr[i];
	}
	
	ll rev=0;
	
	for(ll i=0;i<N-1;i++){
		for(ll j=i+1;j<N;j++){
			if(arr[j]!=arr[i])
			rev=rev+(abs(arr[j]-arr[i]));
		}
	}
	cout<<rev<<endl;
}
