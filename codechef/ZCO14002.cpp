#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll minIndex(ll arr[],ll i,ll j,ll k){
	ll min=arr[i];
	if(arr[j]<=min){
		min=arr[j];
	}
	if(arr[k]<=min){
		min=arr[k];
	}
	if(min==arr[i]){
		return i;
	}
	if(min==arr[j]){
		return j;
	}
	if(min==arr[k]){
		return k;
	}
}
int main(){
	
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	ll k=0;
	ll sum=0;
	
	while(k<=n-3){
		
		sum=sum+arr[minIndex(arr,k,k+1,k+2)];
		
		k=minIndex(arr,k,k+1,k+2)+1;
		
	}
	cout<<sum<<endl;	
	
}
