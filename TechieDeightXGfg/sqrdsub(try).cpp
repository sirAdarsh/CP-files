// finding the numberof subarrays with sum = 1;
#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll findSubarraySum(ll arr[], ll n, ll sum) 
{ 
    unordered_map<ll, ll> prevSum; 
  
    ll res = 0; 
  
    ll currsum = 0; 
  
    for (ll i = 0; i < n; i++) { 
        currsum += arr[i]; 
  
        if (currsum == sum)  
            res++;         
  
        if (prevSum.find(currsum - sum) !=  
                                  prevSum.end())  
            res += (prevSum[currsum - sum]); 
          
        prevSum[currsum]++; 
    } 
  
    return res; 
} 


int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i = 0; i<n; i++){
			cin >> arr[i];
			
			if( arr[i] %2 ){
				arr[i] = 0;
			}else{
				if( arr[i] %4==0 ){
					arr[i] = 2;
				}else{
					arr[i] = 1;
				}
			}
			
		}
		
		cout<<(n*(n+1)/2) - findSubarraySum(arr,n,1)<<endl;;
	}
	
	
}
